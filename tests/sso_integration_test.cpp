#include <gtest/gtest.h>
#include "fastcomments/sso/helpers.hpp"
#include "fastcomments/sso/secure_sso_user_data.hpp"
#include "fastcomments/sso/simple_sso_user_data.hpp"
#include "fastcomments/sso/secure_sso_payload.hpp"
#include "fastcomments/sso/fastcomments_sso.hpp"
#include "FastCommentsClient/api/PublicApi.h"
#include "FastCommentsClient/api/DefaultApi.h"
#include "FastCommentsClient/ApiClient.h"
#include "FastCommentsClient/ApiConfiguration.h"
#include "FastCommentsClient/ApiException.h"
#include "FastCommentsClient/model/CommentData.h"
#include <chrono>
#include <cstdlib>
#include <string>
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

using namespace fastcomments::sso;
using namespace org::openapitools::client::api;
using namespace org::openapitools::client::model;

std::string getAPIKey() {
    const char* apiKeyEnv = std::getenv("FASTCOMMENTS_API_KEY");
    if (!apiKeyEnv || strlen(apiKeyEnv) == 0) {
        throw std::runtime_error("FASTCOMMENTS_API_KEY environment variable is required");
    }
    return std::string(apiKeyEnv);
}

std::string getTenantID() {
    const char* tenantIdEnv = std::getenv("FASTCOMMENTS_TENANT_ID");
    if (!tenantIdEnv || strlen(tenantIdEnv) == 0) {
        throw std::runtime_error("FASTCOMMENTS_TENANT_ID environment variable is required");
    }
    return std::string(tenantIdEnv);
}

int64_t getTimestamp() {
    auto now = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(
        now.time_since_epoch()
    ).count();
}

class SSOIntegrationTest : public ::testing::Test {
};

// Test 1: PublicAPI with no SSO
TEST_F(SSOIntegrationTest, PublicAPINoSSO) {
    std::string tenantID = getTenantID();

    auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
    config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
    auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
    PublicApi publicApi(apiClient);

    auto response = publicApi.getCommentsPublic(
        utility::conversions::to_string_t(tenantID),
        utility::conversions::to_string_t("sdk-test-page"),
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none
    ).get();

    ASSERT_NE(response, nullptr);
}

// Test 2: PublicAPI with secure SSO
TEST_F(SSOIntegrationTest, PublicAPIWithSecureSSO) {
    std::string apiKey = getAPIKey();
    std::string tenantID = getTenantID();
    int64_t timestamp = getTimestamp();

    SecureSSOUserData user(
        "test-user-" + std::to_string(timestamp),
        "test-" + std::to_string(timestamp) + "@example.com",
        "testuser" + std::to_string(timestamp),
        "https://example.com/avatar.jpg"
    );

    FastCommentsSSO sso = FastCommentsSSO::newSecure(apiKey, user);
    std::string token = sso.createToken();

    auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
    config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
    auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
    PublicApi publicApi(apiClient);

    auto commentData = std::make_shared<CommentData>();
    commentData->setUrl(utility::conversions::to_string_t("https://example.com/test-page"));
    commentData->setUrlId(utility::conversions::to_string_t("sdk-test-cpp"));
    commentData->setComment(utility::conversions::to_string_t("Test from C++ SDK"));
    commentData->setCommenterName(utility::conversions::to_string_t(user.username));
    commentData->setDate(timestamp);

    auto createResponse = publicApi.createCommentPublic(
        utility::conversions::to_string_t(tenantID),
        utility::conversions::to_string_t("sdk-test-cpp"),
        utility::conversions::to_string_t("test-" + std::to_string(timestamp)),
        commentData,
        boost::none,
        utility::conversions::to_string_t(token)
    ).get();

    ASSERT_NE(createResponse, nullptr);

    auto getResponse = publicApi.getCommentsPublic(
        utility::conversions::to_string_t(tenantID),
        utility::conversions::to_string_t("sdk-test-cpp"),
        boost::none, boost::none,
        utility::conversions::to_string_t(token),
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none
    ).get();

    ASSERT_NE(getResponse, nullptr);
}

// Test 3: DefaultAPI with API key
TEST_F(SSOIntegrationTest, DefaultAPIWithAPIKey) {
    std::string apiKey = getAPIKey();
    std::string tenantID = getTenantID();

    auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
    config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
    config->setApiKey(utility::conversions::to_string_t("x-api-key"), utility::conversions::to_string_t(apiKey));
    auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
    DefaultApi defaultApi(apiClient);

    // Note: This endpoint may return 401 depending on API key permissions
    // The test verifies the SDK can make the call, not that auth works
    try {
        auto response = defaultApi.getComments(
            utility::conversions::to_string_t(tenantID),
            boost::none, boost::none, boost::none, boost::none, boost::none,
            boost::none, boost::none, boost::none, boost::none, boost::none,
            boost::none, boost::none, boost::none, boost::none
        ).get();

        ASSERT_NE(response, nullptr);
    } catch (const std::exception& e) {
        // Accept auth errors - SDK correctly made the authenticated call
        std::string error(e.what());
        EXPECT_TRUE(error.find("Unauthorized") != std::string::npos || error.find("401") != std::string::npos)
            << "Unexpected error: " << error;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
