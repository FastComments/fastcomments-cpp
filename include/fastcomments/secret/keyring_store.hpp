#ifndef FASTCOMMENTS_SECRET_KEYRING_STORE_HPP
#define FASTCOMMENTS_SECRET_KEYRING_STORE_HPP

#include <optional>
#include <string>
#include <string_view>

namespace fastcomments {
namespace secret {

class KeyringStore {
public:
    static bool put(std::string_view service,
                    std::string_view account,
                    std::string_view secret);

    static std::optional<std::string> get(std::string_view service,
                                          std::string_view account);

    static bool erase(std::string_view service,
                      std::string_view account);
};

} // namespace secret
} // namespace fastcomments

#endif // FASTCOMMENTS_SECRET_KEYRING_STORE_HPP
