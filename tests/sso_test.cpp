#include <gtest/gtest.h>
#include "fastcomments/sso/helpers.hpp"
#include "fastcomments/sso/secure_sso_user_data.hpp"
#include "fastcomments/sso/simple_sso_user_data.hpp"
#include "fastcomments/sso/secure_sso_payload.hpp"
#include "fastcomments/sso/fastcomments_sso.hpp"
#include <chrono>
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>

using namespace fastcomments::sso;

const std::string API_KEY = "test-api-key-12345";
const std::string USER_ID = "test-user-123";
const std::string EMAIL = "test@example.com";
const std::string USERNAME = "testuser";
const std::string AVATAR = "https://example.com/avatar.jpg";

std::string base64Decode(const std::string& encoded) {
    BIO* b64 = BIO_new(BIO_f_base64());
    BIO* bmem = BIO_new_mem_buf(encoded.c_str(), encoded.length());
    bmem = BIO_push(b64, bmem);
    BIO_set_flags(bmem, BIO_FLAGS_BASE64_NO_NL);

    char buffer[1024];
    int length = BIO_read(bmem, buffer, 1024);
    BIO_free_all(bmem);

    return std::string(buffer, length);
}

TEST(HelpersTest, CreateVerificationHash) {
    auto now = std::chrono::system_clock::now();
    int64_t timestamp = std::chrono::duration_cast<std::chrono::seconds>(
        now.time_since_epoch()
    ).count();
    std::string userData = "test_data_base64";

    std::string result = createVerificationHash(API_KEY, timestamp, userData);

    EXPECT_FALSE(result.empty());
    EXPECT_EQ(result.length(), 64);
}

TEST(SecureSSOUserDataTest, CreateUserData) {
    SecureSSOUserData user(USER_ID, EMAIL, USERNAME, AVATAR);

    EXPECT_EQ(user.userId, USER_ID);
    EXPECT_EQ(user.email, EMAIL);
    EXPECT_EQ(user.username, USERNAME);
    EXPECT_EQ(user.avatar, AVATAR);
}

TEST(SimpleSSOUserDataTest, CreateUserData) {
    SimpleSSOUserData user(USER_ID, EMAIL, AVATAR);

    EXPECT_EQ(user.userId, USER_ID);
    EXPECT_EQ(user.email, EMAIL);
    EXPECT_EQ(user.avatar, AVATAR);
}

TEST(FastCommentsSSOTest, CreateSecureSSO) {
    SecureSSOUserData user(USER_ID, EMAIL, USERNAME, AVATAR);
    FastCommentsSSO sso = FastCommentsSSO::newSecure(API_KEY, user);

    std::string token = sso.createToken();
    EXPECT_FALSE(token.empty());
}

TEST(FastCommentsSSOTest, CreateSimpleSSO) {
    SimpleSSOUserData user(USER_ID, EMAIL, AVATAR);
    FastCommentsSSO sso = FastCommentsSSO::newSimple(user);

    std::string token = sso.createToken();
    EXPECT_FALSE(token.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
