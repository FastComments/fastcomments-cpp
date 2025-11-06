#include "fastcomments/sso/fastcomments_sso.hpp"
#include "fastcomments/sso/helpers.hpp"
#include <stdexcept>
#include <chrono>

namespace fastcomments {
namespace sso {

FastCommentsSSO FastCommentsSSO::newSecure(const std::string& apiKey,
                                          const SecureSSOUserData& secureUserData) {
    FastCommentsSSO instance;

    auto now = std::chrono::system_clock::now();
    int64_t timestamp = std::chrono::duration_cast<std::chrono::seconds>(
        now.time_since_epoch()
    ).count();

    std::string userDataStr = secureUserData.asJsonBase64();
    std::string hash = createVerificationHash(apiKey, timestamp, userDataStr);

    SecureSSOPayload payload(userDataStr, hash, timestamp);
    instance.secureSSOPayload = payload;

    return instance;
}

FastCommentsSSO FastCommentsSSO::newSimple(const SimpleSSOUserData& simpleUserData) {
    FastCommentsSSO instance;
    instance.simpleSSOUserData = simpleUserData;
    return instance;
}

FastCommentsSSO FastCommentsSSO::newSecureWithUrls(const SecureSSOPayload& securePayload,
                                                  const std::string& loginUrl,
                                                  const std::string& logoutUrl) {
    FastCommentsSSO instance;
    instance.secureSSOPayload = securePayload;
    instance.loginUrl = loginUrl;
    instance.logoutUrl = logoutUrl;
    return instance;
}

std::string FastCommentsSSO::createToken() const {
    if (secureSSOPayload.has_value()) {
        return secureSSOPayload->toJSON();
    } else if (simpleSSOUserData.has_value()) {
        return simpleSSOUserData->toJSON();
    } else {
        throw std::runtime_error("No user data provided");
    }
}

void FastCommentsSSO::resetToken() {
    cachedToken.reset();
}

std::string FastCommentsSSO::prepareToSend() {
    if (cachedToken.has_value()) {
        return *cachedToken;
    }

    std::string token = createToken();
    cachedToken = token;
    return token;
}

void FastCommentsSSO::setSecureSSOPayload(const SecureSSOPayload& payload) {
    secureSSOPayload = payload;
    simpleSSOUserData.reset();
    resetToken();
}

void FastCommentsSSO::setSimpleSSOUserData(const SimpleSSOUserData& userData) {
    simpleSSOUserData = userData;
    secureSSOPayload.reset();
    resetToken();
}

} // namespace sso
} // namespace fastcomments
