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
    config->setApiKey(utility::conversions::to_string_t("api_key"), utility::conversions::to_string_t("YOUR_API_KEY_HERE"));

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
2. **401 "missing-api-key" error**: Make sure you call `config->setApiKey(utility::conversions::to_string_t("api_key"), utility::conversions::to_string_t("YOUR_KEY"))` before creating the DefaultAPI instance.
3. **Wrong API class**: Use `DefaultAPI` for server-side authenticated requests, `PublicAPI` for client-side/public requests.

## Making API Calls: Synchronous vs Asynchronous

All API methods in this SDK return `pplx::task<std::shared_ptr<ResponseType>>` from the C++ REST SDK. This gives you flexibility in how you handle API responses.

### Synchronous Calls with `.get()`

Use `.get()` to block the calling thread until the request completes and retrieve the result synchronously:

```cpp
auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
config->setApiKey(utility::conversions::to_string_t("api_key"),
                  utility::conversions::to_string_t("YOUR_API_KEY"));

auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
org::openapitools::client::api::DefaultApi api(apiClient);

// Call .get() to block and get the result synchronously
auto response = api.getComments(
    utility::conversions::to_string_t("your-tenant-id"),
    boost::none,  // page
    boost::none,  // limit
    boost::none,  // skip
    boost::none,  // asTree
    boost::none,  // skipChildren
    boost::none,  // limitChildren
    boost::none,  // maxTreeDepth
    utility::conversions::to_string_t("your-url-id"),  // urlId
    boost::none,  // userId
    boost::none,  // anonUserId
    boost::none,  // contextUserId
    boost::none,  // hashTag
    boost::none,  // parentId
    boost::none   // direction
).get();  // Blocks until the HTTP request completes

if (response && response->comments) {
    std::cout << "Found " << response->comments->size() << " comments" << std::endl;
}
```

### Asynchronous Calls with `.then()`

Use `.then()` for non-blocking asynchronous execution with callbacks:

```cpp
auto config = std::make_shared<org::openapitools::client::api::ApiConfiguration>();
config->setBaseUrl(utility::conversions::to_string_t("https://fastcomments.com"));
config->setApiKey(utility::conversions::to_string_t("api_key"),
                  utility::conversions::to_string_t("YOUR_API_KEY"));

auto apiClient = std::make_shared<org::openapitools::client::api::ApiClient>(config);
org::openapitools::client::api::DefaultApi api(apiClient);

// Use .then() for asynchronous callback-based execution
api.getComments(
    utility::conversions::to_string_t("your-tenant-id"),
    boost::none, boost::none, boost::none, boost::none, boost::none,
    boost::none, boost::none,
    utility::conversions::to_string_t("your-url-id"),
    boost::none, boost::none, boost::none, boost::none, boost::none, boost::none
).then([](std::shared_ptr<GetComments_200_response> response) {
    // This runs asynchronously when the request completes
    if (response && response->comments) {
        std::cout << "Found " << response->comments->size() << " comments" << std::endl;
    }
});

// Execution continues immediately without blocking
std::cout << "Request sent, continuing..." << std::endl;
```

### Choosing Between Synchronous and Asynchronous

The choice depends on your runtime environment and application architecture:

**`.get()` (Synchronous blocking)**
- Blocks the calling thread until the HTTP request completes
- Simpler code flow, easier to reason about
- Suitable for dedicated worker threads, batch processing, or command-line tools
- **Not suitable** for event loops, GUI threads, or single-threaded servers

**`.then()` (Asynchronous non-blocking)**
- Returns immediately, callback executes when request completes
- Does not block the calling thread
- Required for event-driven architectures, GUI applications, or single-threaded event loops
- Allows chaining multiple operations
- More complex control flow

The SDK's test suite uses `.get()` exclusively, but this is appropriate for the test environment where blocking is acceptable.

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
