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
#include "FastCommentsClient/model/CreateCommentParams.h"
#include "FastCommentsClient/model/SaveComment_200_response.h"
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

// Test 3: DefaultAPI with API key - Fetch Comments
TEST_F(SSOIntegrationTest, DefaultAPIWithAPIKey) {
    std::string apiKey = getAPIKey();
    std::string tenantID = getTenantID();
    int64_t timestamp = getTimestamp();
    std::string testUrlId = "sdk-test-cpp-defaultapi-" + std::to_string(timestamp);

    // Step 1: Create a comment using PUBLIC API with SSO (to have data to fetch)
    std::cout << "Step 1: Creating test comment with PUBLIC API + SSO..." << std::endl;

    SecureSSOUserData user(
        "test-user-" + std::to_string(timestamp),
        "test-" + std::to_string(timestamp) + "@example.com",
        "testuser" + std::to_string(timestamp),
        "https://example.com/avatar.jpg"
    );

    FastCommentsSSO sso = FastCommentsSSO::newSecure(apiKey, user);
    std::string token = sso.createToken();

    auto publicConfig = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
    publicConfig->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
    auto publicApiClient = std::make_shared<org::openapitools::client::api::ApiClient>(publicConfig);
    PublicApi publicApi(publicApiClient);

    auto commentData = std::make_shared<CommentData>();
    commentData->setUrl(utility::conversions::to_string_t("https://example.com/test-page"));
    commentData->setUrlId(utility::conversions::to_string_t(testUrlId));
    commentData->setComment(utility::conversions::to_string_t("Test from C++ SDK at " + std::to_string(timestamp)));
    commentData->setCommenterName(utility::conversions::to_string_t(user.username));
    commentData->setDate(timestamp);

    auto createResponse = publicApi.createCommentPublic(
        utility::conversions::to_string_t(tenantID),
        utility::conversions::to_string_t(testUrlId),
        utility::conversions::to_string_t("test-" + std::to_string(timestamp)),
        commentData,
        boost::none,
        utility::conversions::to_string_t(token)
    ).get();

    ASSERT_NE(createResponse, nullptr);
    std::cout << "✓ Comment created successfully" << std::endl;

    // Step 2: Fetch comments using AUTHENTICATED DefaultAPI with API key
    std::cout << "Step 2: Fetching comments with DefaultAPI using API key authentication..." << std::endl;

    try {
        auto defaultConfig = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
        defaultConfig->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
        defaultConfig->setApiKey(utility::conversions::to_string_t("api_key"), utility::conversions::to_string_t(apiKey));
        auto defaultApiClient = std::make_shared<org::openapitools::client::api::ApiClient>(defaultConfig);
        DefaultApi defaultApi(defaultApiClient);

        auto getResponse = defaultApi.getComments(
            utility::conversions::to_string_t(tenantID),
            boost::none,  // page
            boost::none,  // limit
            boost::none,  // skip
            boost::none,  // asTree
            boost::none,  // skipChildren
            boost::none,  // limitChildren
            boost::none,  // maxTreeDepth
            utility::conversions::to_string_t(testUrlId),  // urlId
            boost::none,  // userId
            boost::none,  // anonUserId
            boost::none,  // contextUserId
            boost::none,  // hashTag
            boost::none,  // parentId
            boost::none   // direction
        ).get();

        ASSERT_NE(getResponse, nullptr);

        // Verify status is success
        ASSERT_TRUE(getResponse->statusIsSet()) << "Expected status field to be present";
        auto status = getResponse->getStatus();
        ASSERT_NE(status, nullptr);
        EXPECT_EQ(status->getValue(), org::openapitools::client::model::APIStatus::eAPIStatus::SUCCESS)
            << "Expected success status";

        // The API should return the comments array with our comment
        ASSERT_TRUE(getResponse->commentsIsSet()) << "Expected comments field to be present in response";

        auto comments = getResponse->getComments();
        std::cout << "✓ Retrieved " << comments.size() << " comments with DefaultAPI" << std::endl;

        // Verify we got at least one comment back (the one we just created)
        ASSERT_GE(comments.size(), 1) << "Expected at least 1 comment (the one we created)";

        std::cout << "✓ Successfully verified DefaultAPI authentication with API key works!" << std::endl;
    } catch (const ApiException& e) {
        std::cout << "✗ API call failed with status code: " << e.error_code().value() << std::endl;
        std::cout << "  Message: " << e.what() << std::endl;

        auto content = e.getContent();
        if (content) {
            std::string body((std::istreambuf_iterator<char>(*content)), std::istreambuf_iterator<char>());
            std::cout << "  Response body: " << body << std::endl;
        }

        FAIL() << "Expected successful API call but got exception";
    } catch (const std::exception& e) {
        std::cout << "✗ Exception: " << e.what() << std::endl;
        FAIL() << "Unexpected exception: " << e.what();
    }
}

// Test 4: PublicAPI - Create and Fetch Comment with SSO (End-to-End Test)
TEST_F(SSOIntegrationTest, PublicAPICreateAndFetch) {
    std::string apiKey = getAPIKey();
    std::string tenantID = getTenantID();
    int64_t timestamp = getTimestamp();
    std::string testUrlId = "sdk-test-cpp-create-fetch-" + std::to_string(timestamp);

    // Step 1: Create a comment using PUBLIC API with SSO
    std::cout << "Step 1: Creating comment with PUBLIC API + SSO..." << std::endl;

    SecureSSOUserData user(
        "test-user-" + std::to_string(timestamp),
        "test-" + std::to_string(timestamp) + "@example.com",
        "testuser" + std::to_string(timestamp),
        "https://example.com/avatar.jpg"
    );

    FastCommentsSSO sso = FastCommentsSSO::newSecure(apiKey, user);
    std::string token = sso.createToken();

    auto publicConfig = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
    publicConfig->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
    auto publicApiClient = std::make_shared<org::openapitools::client::api::ApiClient>(publicConfig);
    PublicApi publicApi(publicApiClient);

    auto commentData = std::make_shared<CommentData>();
    commentData->setUrl(utility::conversions::to_string_t("https://example.com/test-page"));
    commentData->setUrlId(utility::conversions::to_string_t(testUrlId));
    commentData->setComment(utility::conversions::to_string_t("Test from C++ SDK at " + std::to_string(timestamp)));
    commentData->setCommenterName(utility::conversions::to_string_t(user.username));
    commentData->setDate(timestamp);

    auto createResponse = publicApi.createCommentPublic(
        utility::conversions::to_string_t(tenantID),
        utility::conversions::to_string_t(testUrlId),
        utility::conversions::to_string_t("test-" + std::to_string(timestamp)),
        commentData,
        boost::none,
        utility::conversions::to_string_t(token)
    ).get();

    ASSERT_NE(createResponse, nullptr);
    std::cout << "✓ Comment created successfully" << std::endl;

    // Step 2: Fetch the comment back using PUBLIC API with SSO
    std::cout << "Step 2: Fetching comments for page '" << testUrlId << "' with SSO..." << std::endl;

    auto getResponse = publicApi.getCommentsPublic(
        utility::conversions::to_string_t(tenantID),
        utility::conversions::to_string_t(testUrlId),
        boost::none,  // page
        boost::none,  // limit
        utility::conversions::to_string_t(token),  // ssoToken
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none, boost::none,
        boost::none, boost::none, boost::none, boost::none, boost::none
    ).get();

    ASSERT_NE(getResponse, nullptr);

    // Verify the API call was successful - no error code should be present
    EXPECT_FALSE(getResponse->codeIsSet()) << "Expected no error code, but got: "
        << (getResponse->codeIsSet() ? utility::conversions::to_utf8string(getResponse->getCode()) : "none");
    EXPECT_FALSE(getResponse->reasonIsSet()) << "Expected no error reason, but got: "
        << (getResponse->reasonIsSet() ? utility::conversions::to_utf8string(getResponse->getReason()) : "none");

    // The API should return the comments array with our comment
    ASSERT_TRUE(getResponse->commentsIsSet()) << "Expected comments field to be present in response";

    auto comments = getResponse->getComments();
    std::cout << "✓ Retrieved " << comments.size() << " comments" << std::endl;

    // Verify we got at least one comment back (the one we just created)
    ASSERT_GE(comments.size(), 1) << "Expected at least 1 comment (the one we created)";

    // Verify the comment contains our unique text
    bool foundOurComment = false;
    for (const auto& comment : comments) {
        if (comment->commentHTMLIsSet()) {
            std::string commentText = utility::conversions::to_utf8string(comment->getCommentHTML());
            if (commentText.find(std::to_string(timestamp)) != std::string::npos) {
                foundOurComment = true;
                std::cout << "✓ Found our comment: " << commentText << std::endl;
                break;
            }
        }
    }

    EXPECT_TRUE(foundOurComment) << "Expected to find our comment with timestamp " << timestamp;
    std::cout << "✓ Successfully verified end-to-end create and fetch with SSO authentication" << std::endl;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
