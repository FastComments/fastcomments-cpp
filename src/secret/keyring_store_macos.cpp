#include "fastcomments/secret/keyring_store.hpp"

#if defined(__APPLE__)

#include <CoreFoundation/CoreFoundation.h>
#include <Security/Security.h>

#include <string>

namespace fastcomments {
namespace secret {

namespace {

CFStringRef toCFString(std::string_view sv) {
    return CFStringCreateWithBytes(
        kCFAllocatorDefault,
        reinterpret_cast<const UInt8*>(sv.data()),
        static_cast<CFIndex>(sv.size()),
        kCFStringEncodingUTF8,
        false);
}

} // anonymous namespace

bool KeyringStore::put(std::string_view service,
                       std::string_view account,
                       std::string_view secret) {
    CFStringRef svc = toCFString(service);
    CFStringRef acct = toCFString(account);
    CFDataRef data = CFDataCreate(
        kCFAllocatorDefault,
        reinterpret_cast<const UInt8*>(secret.data()),
        static_cast<CFIndex>(secret.size()));

    const void* keys[] = {kSecClass, kSecAttrService, kSecAttrAccount};
    const void* vals[] = {kSecClassGenericPassword, svc, acct};
    CFDictionaryRef query = CFDictionaryCreate(
        kCFAllocatorDefault, keys, vals, 3,
        &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);

    SecItemDelete(query);
    CFRelease(query);

    const void* addKeys[] = {kSecClass, kSecAttrService, kSecAttrAccount, kSecValueData};
    const void* addVals[] = {kSecClassGenericPassword, svc, acct, data};
    CFDictionaryRef addQuery = CFDictionaryCreate(
        kCFAllocatorDefault, addKeys, addVals, 4,
        &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);

    OSStatus status = SecItemAdd(addQuery, nullptr);

    CFRelease(addQuery);
    CFRelease(data);
    CFRelease(acct);
    CFRelease(svc);
    return status == errSecSuccess;
}

std::optional<std::string> KeyringStore::get(std::string_view service,
                                             std::string_view account) {
    CFStringRef svc = toCFString(service);
    CFStringRef acct = toCFString(account);

    const void* keys[] = {kSecClass, kSecAttrService, kSecAttrAccount,
                          kSecReturnData, kSecMatchLimit};
    const void* vals[] = {kSecClassGenericPassword, svc, acct,
                          kCFBooleanTrue, kSecMatchLimitOne};
    CFDictionaryRef query = CFDictionaryCreate(
        kCFAllocatorDefault, keys, vals, 5,
        &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);

    CFTypeRef out = nullptr;
    OSStatus status = SecItemCopyMatching(query, &out);

    CFRelease(query);
    CFRelease(acct);
    CFRelease(svc);

    if (status != errSecSuccess || !out) {
        if (out) CFRelease(out);
        return std::nullopt;
    }
    CFDataRef data = static_cast<CFDataRef>(out);
    const UInt8* bytes = CFDataGetBytePtr(data);
    CFIndex len = CFDataGetLength(data);
    std::string result(reinterpret_cast<const char*>(bytes), static_cast<size_t>(len));
    CFRelease(out);
    return result;
}

bool KeyringStore::erase(std::string_view service,
                         std::string_view account) {
    CFStringRef svc = toCFString(service);
    CFStringRef acct = toCFString(account);

    const void* keys[] = {kSecClass, kSecAttrService, kSecAttrAccount};
    const void* vals[] = {kSecClassGenericPassword, svc, acct};
    CFDictionaryRef query = CFDictionaryCreate(
        kCFAllocatorDefault, keys, vals, 3,
        &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);

    OSStatus status = SecItemDelete(query);

    CFRelease(query);
    CFRelease(acct);
    CFRelease(svc);
    return status == errSecSuccess || status == errSecItemNotFound;
}

} // namespace secret
} // namespace fastcomments

#endif // __APPLE__
