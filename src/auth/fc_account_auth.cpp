#include "fastcomments/auth/fc_account_auth.hpp"

#include <cpprest/http_client.h>
#include <cpprest/uri_builder.h>

#include <algorithm>
#include <cctype>
#include <utility>

namespace fastcomments {
namespace auth {

namespace {

std::string urlEncode(const std::string& v) {
    return utility::conversions::to_utf8string(
        web::uri::encode_data_string(utility::conversions::to_string_t(v)));
}

std::string trim(const std::string& s) {
    auto isSpace = [](unsigned char c) { return std::isspace(c) != 0; };
    auto begin = std::find_if_not(s.begin(), s.end(), isSpace);
    auto end = std::find_if_not(s.rbegin(), s.rend(), isSpace).base();
    if (begin >= end) {
        return {};
    }
    return std::string(begin, end);
}

// Parses a Set-Cookie header into a (name, value) pair. We only care about the
// session cookie; the server may set several cookies on /auth/login (CSRF, etc.).
struct CookieKV {
    std::string name;
    std::string value;
};

CookieKV parseSetCookieHeader(const std::string& header) {
    auto semi = header.find(';');
    std::string nameValue = (semi == std::string::npos) ? header : header.substr(0, semi);
    auto eq = nameValue.find('=');
    if (eq == std::string::npos) {
        return {trim(nameValue), {}};
    }
    return {trim(nameValue.substr(0, eq)), trim(nameValue.substr(eq + 1))};
}

// FastComments uses a single session cookie. Express defaults to "connect.sid"
// but the project may override; treat anything that smells like a session cookie
// as the candidate. Heuristic: name contains "sid" or starts with "connect" /
// "fc.sid". Falls back to the first cookie that isn't a known CSRF cookie.
bool looksLikeSessionCookie(const std::string& name) {
    std::string lower(name.size(), '\0');
    std::transform(name.begin(), name.end(), lower.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (lower.find("csrf") != std::string::npos) return false;
    if (lower.find("xsrf") != std::string::npos) return false;
    if (lower == "connect.sid") return true;
    if (lower == "fc.sid") return true;
    if (lower.find("sid") != std::string::npos) return true;
    return false;
}

bool responseLooksLikeTwoFactor(const web::http::http_response& resp,
                                const std::string& body) {
    // FastComments renders login-request-2fa.ejs with a form input named "twoFactorCode".
    if (body.find("twoFactorCode") != std::string::npos) return true;
    // Login flows that need 2FA may also redirect to a path containing "two-factor".
    auto location = resp.headers().find(utility::conversions::to_string_t("Location"));
    if (location != resp.headers().end()) {
        auto loc = utility::conversions::to_utf8string(location->second);
        if (loc.find("two-factor") != std::string::npos) return true;
    }
    return false;
}

bool responseLooksLikeFailure(const web::http::http_response& resp,
                              const std::string& body) {
    if (resp.status_code() >= 400) return true;
    // login-request-failure.ejs renders an error block.
    if (body.find("login-request-failure") != std::string::npos) return true;
    if (body.find("Invalid username or password") != std::string::npos) return true;
    return false;
}

} // anonymous namespace

FCAccountAuth::FCAccountAuth(std::string baseUrl)
    : baseUrl_(std::move(baseUrl)) {}

pplx::task<LoginResult> FCAccountAuth::login(
    std::string usernameOrEmail,
    std::string password,
    std::optional<std::string> twoFactorCode) {

    auto baseUrl = baseUrl_;
    return pplx::create_task([baseUrl, usernameOrEmail = std::move(usernameOrEmail),
                              password = std::move(password),
                              twoFactorCode = std::move(twoFactorCode)]() {
        web::http::client::http_client client(
            utility::conversions::to_string_t(baseUrl));

        web::http::http_request req(web::http::methods::POST);
        req.set_request_uri(utility::conversions::to_string_t("/auth/login"));
        req.headers().set_content_type(utility::conversions::to_string_t("application/x-www-form-urlencoded"));
        // Don't follow redirects automatically; we need to inspect Set-Cookie on
        // the initial 302 response.
        req.headers().add(utility::conversions::to_string_t("Accept"), utility::conversions::to_string_t("text/html"));

        std::string body = "username=" + urlEncode(usernameOrEmail)
            + "&password=" + urlEncode(password)
            + "&mechanism=password";
        if (twoFactorCode) {
            body += "&twoFactorCode=" + urlEncode(*twoFactorCode);
        }
        req.set_body(body, "application/x-www-form-urlencoded");

        auto resp = client.request(req).get();
        auto bodyStr = resp.extract_utf8string(true).get();

        if (responseLooksLikeTwoFactor(resp, bodyStr) && !twoFactorCode) {
            throw TwoFactorRequiredError("Two-factor code required.");
        }
        if (responseLooksLikeFailure(resp, bodyStr)) {
            throw InvalidCredentialsError("Login failed.");
        }

        LoginResult result;
        // Walk all Set-Cookie headers (they appear as a single multi-line value
        // when concatenated by cpprestsdk; iterate the headers map).
        for (const auto& kv : resp.headers()) {
            if (utility::conversions::to_utf8string(kv.first) == "Set-Cookie") {
                std::string headerValue = utility::conversions::to_utf8string(kv.second);
                // Multiple Set-Cookie values can be folded into one with newlines
                // by some clients; split.
                size_t pos = 0;
                while (pos < headerValue.size()) {
                    auto nl = headerValue.find('\n', pos);
                    std::string single = headerValue.substr(
                        pos, nl == std::string::npos ? std::string::npos : nl - pos);
                    auto cookie = parseSetCookieHeader(single);
                    if (!cookie.name.empty() && looksLikeSessionCookie(cookie.name)) {
                        result.sessionCookieName = cookie.name;
                        result.sessionCookie = cookie.value;
                    }
                    if (nl == std::string::npos) break;
                    pos = nl + 1;
                }
            }
        }

        if (result.sessionCookie.empty()) {
            throw InvalidCredentialsError(
                "Login appeared successful but no session cookie was returned.");
        }

        // Express session default is 30 days (worker.ts:579).
        result.expiresAt = std::chrono::system_clock::now() + std::chrono::hours(24 * 30);
        return result;
    });
}

pplx::task<void> FCAccountAuth::logout(const std::string& sessionCookie) {
    auto baseUrl = baseUrl_;
    return pplx::create_task([baseUrl, sessionCookie]() {
        web::http::client::http_client client(
            utility::conversions::to_string_t(baseUrl));

        web::http::http_request req(web::http::methods::GET);
        req.set_request_uri(utility::conversions::to_string_t("/auth/logout"));
        req.headers().add(utility::conversions::to_string_t("Cookie"),
                          utility::conversions::to_string_t(sessionCookie));
        client.request(req).wait();
    });
}

pplx::task<bool> FCAccountAuth::validate(const std::string& sessionCookie) {
    auto baseUrl = baseUrl_;
    return pplx::create_task([baseUrl, sessionCookie]() {
        web::http::client::http_client client(
            utility::conversions::to_string_t(baseUrl));

        web::http::http_request req(web::http::methods::GET);
        // /auth/my-account redirects to /auth/login if the session is invalid.
        req.set_request_uri(utility::conversions::to_string_t("/auth/my-account"));
        req.headers().add(utility::conversions::to_string_t("Cookie"),
                          utility::conversions::to_string_t(sessionCookie));

        auto resp = client.request(req).get();
        if (resp.status_code() == 200) {
            auto body = resp.extract_utf8string(true).get();
            // /auth/my-account renders the dashboard for logged-in users; if it
            // contains the login form we got redirected/rendered as anonymous.
            return body.find("name=\"password\"") == std::string::npos;
        }
        return resp.status_code() < 400;
    });
}

} // namespace auth
} // namespace fastcomments
