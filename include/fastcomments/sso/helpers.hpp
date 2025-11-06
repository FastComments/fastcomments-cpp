#ifndef FASTCOMMENTS_SSO_HELPERS_HPP
#define FASTCOMMENTS_SSO_HELPERS_HPP

#include <string>
#include <stdexcept>

namespace fastcomments {
namespace sso {

class CreateHashError : public std::runtime_error {
public:
    explicit CreateHashError(const std::string& message)
        : std::runtime_error(message) {}
};

std::string createVerificationHash(const std::string& apiKey,
                                   int64_t timestamp,
                                   const std::string& userDataJsonBase64);

std::string getBytesAsHex(const unsigned char* bytesData, size_t length);

} // namespace sso
} // namespace fastcomments

#endif // FASTCOMMENTS_SSO_HELPERS_HPP
