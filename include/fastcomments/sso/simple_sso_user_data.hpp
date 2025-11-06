#ifndef FASTCOMMENTS_SSO_SIMPLE_SSO_USER_DATA_HPP
#define FASTCOMMENTS_SSO_SIMPLE_SSO_USER_DATA_HPP

#include <string>

namespace fastcomments {
namespace sso {

class SimpleSSOUserData {
public:
    std::string userId;
    std::string email;
    std::string avatar;

    SimpleSSOUserData(const std::string& userId,
                     const std::string& email,
                     const std::string& avatar);

    std::string toJSON() const;
};

} // namespace sso
} // namespace fastcomments

#endif // FASTCOMMENTS_SSO_SIMPLE_SSO_USER_DATA_HPP
