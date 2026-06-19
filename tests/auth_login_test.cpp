#include <gtest/gtest.h>

#include "fastcomments/auth/fc_account_auth.hpp"

#include <cstdlib>
#include <string>

using fastcomments::auth::FCAccountAuth;
using fastcomments::auth::InvalidCredentialsError;
using fastcomments::auth::LoginResult;

namespace {

const char* envOrNull(const char* name) {
    return std::getenv(name);
}

bool haveLiveEnv() {
    return envOrNull("FC_TEST_BASE_URL")
        && envOrNull("FC_TEST_EMAIL")
        && envOrNull("FC_TEST_PASSWORD");
}

} // anonymous namespace

TEST(FCAccountAuthTest, rejects_invalid_credentials) {
    if (!envOrNull("FC_TEST_BASE_URL")) {
        GTEST_SKIP() << "FC_TEST_BASE_URL not set; skipping live login test.";
    }
    FCAccountAuth auth(envOrNull("FC_TEST_BASE_URL"));
    EXPECT_THROW(
        auth.login("nobody@example.com", "definitely-wrong-password").get(),
        InvalidCredentialsError);
}

TEST(FCAccountAuthTest, login_returns_session_cookie_on_valid_credentials) {
    if (!haveLiveEnv()) {
        GTEST_SKIP() << "Live login env (FC_TEST_BASE_URL/FC_TEST_EMAIL/FC_TEST_PASSWORD) not set.";
    }
    FCAccountAuth auth(envOrNull("FC_TEST_BASE_URL"));
    LoginResult result = auth.login(envOrNull("FC_TEST_EMAIL"),
                                    envOrNull("FC_TEST_PASSWORD")).get();
    EXPECT_FALSE(result.sessionCookie.empty());
    EXPECT_FALSE(result.sessionCookieName.empty());
}

TEST(FCAccountAuthTest, validate_returns_true_for_fresh_session) {
    if (!haveLiveEnv()) {
        GTEST_SKIP() << "Live login env not set.";
    }
    FCAccountAuth auth(envOrNull("FC_TEST_BASE_URL"));
    LoginResult result = auth.login(envOrNull("FC_TEST_EMAIL"),
                                    envOrNull("FC_TEST_PASSWORD")).get();

    std::string cookieHeader = result.sessionCookieName + "=" + result.sessionCookie;
    EXPECT_TRUE(auth.validate(cookieHeader).get());

    auth.logout(cookieHeader).wait();
}

TEST(FCAccountAuthTest, validate_returns_false_for_garbage_cookie) {
    if (!envOrNull("FC_TEST_BASE_URL")) {
        GTEST_SKIP() << "FC_TEST_BASE_URL not set.";
    }
    FCAccountAuth auth(envOrNull("FC_TEST_BASE_URL"));
    EXPECT_FALSE(auth.validate("connect.sid=this-is-not-a-real-cookie").get());
}
