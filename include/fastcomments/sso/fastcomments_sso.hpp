#ifndef FASTCOMMENTS_SSO_FASTCOMMENTS_SSO_HPP
#define FASTCOMMENTS_SSO_FASTCOMMENTS_SSO_HPP

#include <string>
#include <memory>
#include <optional>
#include "secure_sso_payload.hpp"
#include "secure_sso_user_data.hpp"
#include "simple_sso_user_data.hpp"

namespace fastcomments {
namespace sso {

class FastCommentsSSO {
private:
    std::optional<SecureSSOPayload> secureSSOPayload;
    std::optional<SimpleSSOUserData> simpleSSOUserData;
    std::optional<std::string> loginUrl;
    std::optional<std::string> logoutUrl;
    std::optional<std::string> cachedToken;

public:
    static FastCommentsSSO newSecure(const std::string& apiKey,
                                    const SecureSSOUserData& secureUserData);

    static FastCommentsSSO newSimple(const SimpleSSOUserData& simpleUserData);

    static FastCommentsSSO newSecureWithUrls(const SecureSSOPayload& securePayload,
                                            const std::string& loginUrl,
                                            const std::string& logoutUrl);

    std::string createToken() const;
    void resetToken();
    std::string prepareToSend();
    void setSecureSSOPayload(const SecureSSOPayload& payload);
    void setSimpleSSOUserData(const SimpleSSOUserData& userData);

    const std::optional<std::string>& getLoginUrl() const { return loginUrl; }
    const std::optional<std::string>& getLogoutUrl() const { return logoutUrl; }
};

} // namespace sso
} // namespace fastcomments

#endif // FASTCOMMENTS_SSO_FASTCOMMENTS_SSO_HPP
