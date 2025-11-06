#include "fastcomments/sso/secure_sso_user_data.hpp"
#include <sstream>
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>

namespace fastcomments {
namespace sso {

SecureSSOUserData::SecureSSOUserData(const std::string& userId,
                                   const std::string& email,
                                   const std::string& username,
                                   const std::string& avatar)
    : userId(userId), email(email), username(username), avatar(avatar) {}

std::string SecureSSOUserData::toJSON() const {
    std::ostringstream oss;
    oss << "{\n"
        << "    \"avatar\": \"" << avatar << "\",\n"
        << "    \"email\": \"" << email << "\",\n"
        << "    \"user_id\": \"" << userId << "\",\n"
        << "    \"username\": \"" << username << "\"\n"
        << "}";
    return oss.str();
}

std::string SecureSSOUserData::asJsonBase64() const {
    std::string jsonStr = toJSON();

    BIO* b64 = BIO_new(BIO_f_base64());
    BIO* bmem = BIO_new(BIO_s_mem());
    b64 = BIO_push(b64, bmem);
    BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);
    BIO_write(b64, jsonStr.c_str(), jsonStr.length());
    BIO_flush(b64);

    BUF_MEM* bptr;
    BIO_get_mem_ptr(b64, &bptr);

    std::string result(bptr->data, bptr->length);
    BIO_free_all(b64);

    return result;
}

} // namespace sso
} // namespace fastcomments
