#include "fastcomments/secret/keyring_store.hpp"

#if defined(__linux__) && !defined(__APPLE__)

#include <libsecret/secret.h>

#include <cstring>
#include <string>

namespace fastcomments {
namespace secret {

namespace {

const SecretSchema* fchatSchema() {
    static SecretSchema schema = {
        "com.fastcomments.fchat",
        SECRET_SCHEMA_NONE,
        {
            {"service", SECRET_SCHEMA_ATTRIBUTE_STRING},
            {"account", SECRET_SCHEMA_ATTRIBUTE_STRING},
            {nullptr, SECRET_SCHEMA_ATTRIBUTE_STRING}
        },
        // Reserved fields the macro normally fills.
        0, 0, 0, 0, 0, 0, 0, 0
    };
    return &schema;
}

} // anonymous namespace

bool KeyringStore::put(std::string_view service,
                       std::string_view account,
                       std::string_view secret) {
    std::string svc(service);
    std::string acc(account);
    std::string sec(secret);
    std::string label = "FastComments FChat - " + acc;

    GError* err = nullptr;
    gboolean ok = secret_password_store_sync(
        fchatSchema(),
        SECRET_COLLECTION_DEFAULT,
        label.c_str(),
        sec.c_str(),
        nullptr,
        &err,
        "service", svc.c_str(),
        "account", acc.c_str(),
        nullptr);

    if (err) {
        g_error_free(err);
    }
    return ok == TRUE;
}

std::optional<std::string> KeyringStore::get(std::string_view service,
                                             std::string_view account) {
    std::string svc(service);
    std::string acc(account);

    GError* err = nullptr;
    gchar* raw = secret_password_lookup_sync(
        fchatSchema(),
        nullptr,
        &err,
        "service", svc.c_str(),
        "account", acc.c_str(),
        nullptr);

    if (err) {
        g_error_free(err);
        return std::nullopt;
    }
    if (!raw) {
        return std::nullopt;
    }
    std::string out(raw);
    secret_password_free(raw);
    return out;
}

bool KeyringStore::erase(std::string_view service,
                         std::string_view account) {
    std::string svc(service);
    std::string acc(account);

    GError* err = nullptr;
    secret_password_clear_sync(
        fchatSchema(),
        nullptr,
        &err,
        "service", svc.c_str(),
        "account", acc.c_str(),
        nullptr);

    if (err) {
        g_error_free(err);
        return false;
    }
    // libsecret returns FALSE when nothing matched; treat that as a successful
    // no-op for "erase".
    return true;
}

} // namespace secret
} // namespace fastcomments

#endif // __linux__ && !__APPLE__
