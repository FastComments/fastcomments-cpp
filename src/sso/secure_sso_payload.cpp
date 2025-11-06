#include "fastcomments/sso/secure_sso_payload.hpp"
#include <sstream>

namespace fastcomments {
namespace sso {

SecureSSOPayload::SecureSSOPayload(const std::string& userDataJsonBase64,
                                 const std::string& verificationHash,
                                 int64_t timestamp)
    : userDataJsonBase64(userDataJsonBase64),
      verificationHash(verificationHash),
      timestamp(timestamp) {}

std::string SecureSSOPayload::toJSON() const {
    std::ostringstream oss;
    oss << "{\n"
        << "    \"timestamp\": " << timestamp << ",\n"
        << "    \"user_data_json_base64\": \"" << userDataJsonBase64 << "\",\n"
        << "    \"verification_hash\": \"" << verificationHash << "\"\n"
        << "}";
    return oss.str();
}

} // namespace sso
} // namespace fastcomments
