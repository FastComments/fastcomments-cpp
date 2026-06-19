#include <gtest/gtest.h>

#include "fastcomments/secret/keyring_store.hpp"

#include <chrono>
#include <string>

using fastcomments::secret::KeyringStore;

namespace {

std::string uniqueAccount() {
    auto epoch = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    return "fchat-test-" + std::to_string(epoch);
}

constexpr const char* kService = "com.fastcomments.fchat.test";

} // anonymous namespace

TEST(KeyringStoreTest, get_returns_nullopt_when_missing) {
    auto missing = KeyringStore::get(kService, uniqueAccount());
    EXPECT_FALSE(missing.has_value());
}

TEST(KeyringStoreTest, put_get_roundtrip) {
    auto account = uniqueAccount();
    const std::string secret = "session-cookie-value-12345";
    ASSERT_TRUE(KeyringStore::put(kService, account, secret));

    auto loaded = KeyringStore::get(kService, account);
    ASSERT_TRUE(loaded.has_value());
    EXPECT_EQ(*loaded, secret);

    EXPECT_TRUE(KeyringStore::erase(kService, account));
    EXPECT_FALSE(KeyringStore::get(kService, account).has_value());
}

TEST(KeyringStoreTest, put_overwrites_existing_value) {
    auto account = uniqueAccount();
    ASSERT_TRUE(KeyringStore::put(kService, account, "original"));
    ASSERT_TRUE(KeyringStore::put(kService, account, "updated"));

    auto loaded = KeyringStore::get(kService, account);
    ASSERT_TRUE(loaded.has_value());
    EXPECT_EQ(*loaded, "updated");

    KeyringStore::erase(kService, account);
}

TEST(KeyringStoreTest, erase_returns_true_when_already_gone) {
    auto account = uniqueAccount();
    EXPECT_TRUE(KeyringStore::erase(kService, account));
}
