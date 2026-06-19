#include "fastcomments/secret/keyring_store.hpp"

#if defined(_WIN32)

#include <windows.h>
#include <wincred.h>

#include <vector>

namespace fastcomments {
namespace secret {

namespace {

// Composite target name: "<service>/<account>" so multiple accounts coexist.
std::wstring makeTargetName(std::string_view service, std::string_view account) {
    std::string composite;
    composite.reserve(service.size() + 1 + account.size());
    composite.append(service.data(), service.size());
    composite.push_back('/');
    composite.append(account.data(), account.size());

    int wlen = MultiByteToWideChar(CP_UTF8, 0,
                                   composite.data(),
                                   static_cast<int>(composite.size()),
                                   nullptr, 0);
    std::wstring out(static_cast<size_t>(wlen), L'\0');
    MultiByteToWideChar(CP_UTF8, 0,
                        composite.data(),
                        static_cast<int>(composite.size()),
                        out.data(), wlen);
    return out;
}

std::wstring toWide(std::string_view sv) {
    int wlen = MultiByteToWideChar(CP_UTF8, 0,
                                   sv.data(), static_cast<int>(sv.size()),
                                   nullptr, 0);
    std::wstring out(static_cast<size_t>(wlen), L'\0');
    MultiByteToWideChar(CP_UTF8, 0,
                        sv.data(), static_cast<int>(sv.size()),
                        out.data(), wlen);
    return out;
}

} // anonymous namespace

bool KeyringStore::put(std::string_view service,
                       std::string_view account,
                       std::string_view secret) {
    auto target = makeTargetName(service, account);
    auto user = toWide(account);

    CREDENTIALW cred = {};
    cred.Type = CRED_TYPE_GENERIC;
    cred.TargetName = const_cast<LPWSTR>(target.c_str());
    cred.UserName = const_cast<LPWSTR>(user.c_str());
    cred.CredentialBlobSize = static_cast<DWORD>(secret.size());
    cred.CredentialBlob = reinterpret_cast<LPBYTE>(
        const_cast<char*>(secret.data()));
    cred.Persist = CRED_PERSIST_LOCAL_MACHINE;

    return CredWriteW(&cred, 0) ? true : false;
}

std::optional<std::string> KeyringStore::get(std::string_view service,
                                             std::string_view account) {
    auto target = makeTargetName(service, account);
    PCREDENTIALW cred = nullptr;

    if (!CredReadW(target.c_str(), CRED_TYPE_GENERIC, 0, &cred) || !cred) {
        if (cred) CredFree(cred);
        return std::nullopt;
    }

    std::string out(reinterpret_cast<const char*>(cred->CredentialBlob),
                    static_cast<size_t>(cred->CredentialBlobSize));
    CredFree(cred);
    return out;
}

bool KeyringStore::erase(std::string_view service,
                         std::string_view account) {
    auto target = makeTargetName(service, account);
    if (CredDeleteW(target.c_str(), CRED_TYPE_GENERIC, 0)) {
        return true;
    }
    return GetLastError() == ERROR_NOT_FOUND;
}

} // namespace secret
} // namespace fastcomments

#endif // _WIN32
