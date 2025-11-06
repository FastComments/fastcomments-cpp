#ifndef FASTCOMMENTS_SSO_SECURE_SSO_USER_DATA_HPP
#define FASTCOMMENTS_SSO_SECURE_SSO_USER_DATA_HPP

#include <string>

namespace fastcomments {
namespace sso {

class SecureSSOUserData {
public:
    std::string userId;
    std::string email;
    std::string username;
    std::string avatar;

    SecureSSOUserData(const std::string& userId,
                     const std::string& email,
                     const std::string& username,
                     const std::string& avatar);

    std::string toJSON() const;
    std::string asJsonBase64() const;
};

} // namespace sso
} // namespace fastcomments

#endif // FASTCOMMENTS_SSO_SECURE_SSO_USER_DATA_HPP
