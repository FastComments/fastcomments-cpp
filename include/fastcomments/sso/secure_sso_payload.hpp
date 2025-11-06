#ifndef FASTCOMMENTS_SSO_SECURE_SSO_PAYLOAD_HPP
#define FASTCOMMENTS_SSO_SECURE_SSO_PAYLOAD_HPP

#include <string>
#include <cstdint>

namespace fastcomments {
namespace sso {

class SecureSSOPayload {
public:
    std::string userDataJsonBase64;
    std::string verificationHash;
    int64_t timestamp;

    SecureSSOPayload(const std::string& userDataJsonBase64,
                    const std::string& verificationHash,
                    int64_t timestamp);

    std::string toJSON() const;
};

} // namespace sso
} // namespace fastcomments

#endif // FASTCOMMENTS_SSO_SECURE_SSO_PAYLOAD_HPP
