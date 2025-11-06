#include "fastcomments/sso/helpers.hpp"
#include <openssl/hmac.h>
#include <openssl/sha.h>
#include <sstream>
#include <iomanip>

namespace fastcomments {
namespace sso {

std::string createVerificationHash(const std::string& apiKey,
                                   int64_t timestamp,
                                   const std::string& userDataJsonBase64) {
    try {
        std::string messageStr = std::to_string(timestamp) + userDataJsonBase64;

        unsigned char hash[SHA256_DIGEST_LENGTH];
        unsigned int hashLen;

        HMAC(EVP_sha256(),
             apiKey.c_str(), apiKey.length(),
             reinterpret_cast<const unsigned char*>(messageStr.c_str()), messageStr.length(),
             hash, &hashLen);

        return getBytesAsHex(hash, hashLen);

    } catch (const std::exception& e) {
        throw CreateHashError(std::string("Failed to create verification hash: ") + e.what());
    }
}

std::string getBytesAsHex(const unsigned char* bytesData, size_t length) {
    std::ostringstream oss;
    oss << std::hex << std::setfill('0');
    for (size_t i = 0; i < length; ++i) {
        oss << std::setw(2) << static_cast<int>(bytesData[i]);
    }
    return oss.str();
}

} // namespace sso
} // namespace fastcomments
