enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(sso_test sso_test.cpp)
target_link_libraries(sso_test fastcomments GTest::gtest_main ssl crypto)

add_executable(sso_integration_test sso_integration_test.cpp)
target_link_libraries(sso_integration_test
    fastcomments
    FastCommentsClient
    GTest::gtest_main
    ssl
    crypto
)
target_include_directories(sso_integration_test PRIVATE ${CMAKE_SOURCE_DIR}/client/include)

include(GoogleTest)
gtest_discover_tests(sso_test)
gtest_discover_tests(sso_integration_test)
