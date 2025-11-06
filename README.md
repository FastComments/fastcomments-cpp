# fastcomments-cpp
The FastComments C++ SDK. You can use this to build secure and scalable backend applications that interact with FastComments, or build reactive client applications.

## Requirements

- C++17 or later
- CMake 3.14 or later
- OpenSSL
- C++ REST SDK (cpprestsdk)
- Boost
- Google Test (automatically downloaded for testing)

## Installation

### Install Dependencies

```bash
sudo apt install libcpprest-dev libboost-all-dev
```

### Building from Source

```bash
mkdir build
cd build
cmake ..
make
```

### Installing

```bash
sudo make install
```

### Library Contents

This library contains the generated API client and the SSO utilities to make working with the API easier.

- [API Client Library Docs](./client/README.md)

### Public vs Secured APIs

For the API client, there are two classes, `DefaultAPI` and `PublicAPI`. The `DefaultAPI` contains methods that require your API key, and `PublicAPI` contains api calls
that can be made directly from a browser/mobile device/etc without authentication.

## Quick Start

### Using Authenticated APIs (DefaultAPI)

**Important:**
1. You must set the base URL (cpp-restsdk generator doesn't read it from the OpenAPI spec)
2. You must set your API key on the ApiClient before making authenticated requests. If you don't, requests will fail with a 401 error.

```cpp
#include <iostream>
#include "FastCommentsClient/api/DefaultApi.h"
#include "FastCommentsClient/ApiClient.h"
#include "FastCommentsClient/ApiConfiguration.h"

int main() {
    auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();

    // REQUIRED: Set the base URL (choose your region)
    config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));  // US
    // OR: config->setBaseUrl(utility::conversions::to_string_t("https://eu.fastcomments.com"));  // EU

    // REQUIRED: Set your API key
    config->setApiKey(utility::conversions::to_string_t("x-api-key"), utility::conversions::to_string_t("YOUR_API_KEY_HERE"));

    auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
    org::openapitools::client::api::DefaultApi api(apiClient);

    // Now make authenticated API calls
    return 0;
}
```

### Using Public APIs (PublicAPI)

Public endpoints don't require authentication:

```cpp
#include <iostream>
#include "FastCommentsClient/api/PublicApi.h"
#include "FastCommentsClient/ApiClient.h"
#include "FastCommentsClient/ApiConfiguration.h"

int main() {
    auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();

    // REQUIRED: Set the base URL
    config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));

    auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
    org::openapitools::client::api::PublicApi publicApi(apiClient);

    // Make public API calls
    return 0;
}
```

### Common Issues

1. **"URI must contain a hostname" error**: Make sure you call `config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"))` before creating the ApiClient. The cpp-restsdk generator doesn't automatically read the server URL from the OpenAPI spec.
2. **401 "missing-api-key" error**: Make sure you call `config->setApiKey(utility::conversions::to_string_t("x-api-key"), utility::conversions::to_string_t("YOUR_KEY"))` before creating the DefaultAPI instance.
3. **Wrong API class**: Use `DefaultAPI` for server-side authenticated requests, `PublicAPI` for client-side/public requests.

## Notes

### Broadcast Ids

You'll see you're supposed to pass a `broadcastId` in some API calls. When you receive events, you'll get this ID back, so you know to ignore the event if you plan to optimistically apply changes on the client
(which you'll probably want to do since it offers the best experience). Pass a UUID here. The ID should be unique enough to not occur twice in a browser session.

### SSO (Single Sign-On)

For SSO examples, see below.

## SSO Usage

### Simple SSO

```cpp
#include <fastcomments/sso/fastcomments_sso.hpp>
#include <iostream>

using namespace fastcomments::sso;

int main() {
    SimpleSSOUserData user("user-123", "user@example.com", "https://example.com/avatar.jpg");
    FastCommentsSSO sso = FastCommentsSSO::newSimple(user);
    std::string token = sso.createToken();

    std::cout << "SSO Token: " << token << std::endl;
    return 0;
}
```

### Secure SSO

```cpp
#include <fastcomments/sso/fastcomments_sso.hpp>
#include <iostream>

using namespace fastcomments::sso;

int main() {
    SecureSSOUserData user("user-123", "user@example.com", "johndoe", "https://example.com/avatar.jpg");

    std::string apiKey = "your-api-key";
    FastCommentsSSO sso = FastCommentsSSO::newSecure(apiKey, user);
    std::string token = sso.createToken();

    std::cout << "Secure SSO Token: " << token << std::endl;
    return 0;
}
```

## Testing

Set the required environment variables:

```bash
export FASTCOMMENTS_API_KEY="your-api-key"
export FASTCOMMENTS_TENANT_ID="your-tenant-id"
```

Run the tests:

```bash
cd build
ctest
```

## Development

To update the generated client from the OpenAPI spec:

```bash
./update.sh
```

## License

MIT License - see LICENSE file for details

## Support

For support, please visit https://fastcomments.com/auth/my-account/help or email support@fastcomments.com
