cmake_minimum_required(VERSION 3.14)
project(fastcomments-cpp VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/sso/helpers.cpp
    src/sso/secure_sso_user_data.cpp
    src/sso/simple_sso_user_data.cpp
    src/sso/secure_sso_payload.cpp
    src/sso/fastcomments_sso.cpp
)

add_library(fastcomments STATIC ${SOURCES})
target_link_libraries(fastcomments PUBLIC ssl crypto)

add_subdirectory(client)

enable_testing()
add_subdirectory(tests)

install(TARGETS fastcomments DESTINATION lib)
install(DIRECTORY include/fastcomments DESTINATION include)
