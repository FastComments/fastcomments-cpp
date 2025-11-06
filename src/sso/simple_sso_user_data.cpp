#include "fastcomments/sso/simple_sso_user_data.hpp"
#include <sstream>

namespace fastcomments {
namespace sso {

SimpleSSOUserData::SimpleSSOUserData(const std::string& userId,
                                   const std::string& email,
                                   const std::string& avatar)
    : userId(userId), email(email), avatar(avatar) {}

std::string SimpleSSOUserData::toJSON() const {
    std::ostringstream oss;
    oss << "{\n"
        << "    \"avatar\": \"" << avatar << "\",\n"
        << "    \"email\": \"" << email << "\",\n"
        << "    \"user_id\": \"" << userId << "\"\n"
        << "}";
    return oss.str();
}

} // namespace sso
} // namespace fastcomments
