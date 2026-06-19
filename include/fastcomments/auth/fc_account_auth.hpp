#ifndef FASTCOMMENTS_AUTH_FC_ACCOUNT_AUTH_HPP
#define FASTCOMMENTS_AUTH_FC_ACCOUNT_AUTH_HPP

#include <chrono>
#include <optional>
#include <stdexcept>
#include <string>

#include <pplx/pplxtasks.h>

namespace fastcomments {
namespace auth {

struct LoginResult {
    std::string sessionCookie;
    std::string sessionCookieName;
    std::string userId;
    std::string userName;
    std::chrono::system_clock::time_point expiresAt;
};

class InvalidCredentialsError : public std::runtime_error {
public:
    explicit InvalidCredentialsError(const std::string& msg)
        : std::runtime_error(msg) {}
};

class TwoFactorRequiredError : public std::runtime_error {
public:
    explicit TwoFactorRequiredError(const std::string& msg)
        : std::runtime_error(msg) {}
};

class FCAccountAuth {
public:
    explicit FCAccountAuth(std::string baseUrl);

    pplx::task<LoginResult> login(
        std::string usernameOrEmail,
        std::string password,
        std::optional<std::string> twoFactorCode = std::nullopt
    );

    pplx::task<void> logout(const std::string& sessionCookie);

    pplx::task<bool> validate(const std::string& sessionCookie);

    const std::string& baseUrl() const { return baseUrl_; }

private:
    std::string baseUrl_;
};

} // namespace auth
} // namespace fastcomments

#endif // FASTCOMMENTS_AUTH_FC_ACCOUNT_AUTH_HPP
