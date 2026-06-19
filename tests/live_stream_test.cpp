#include <gtest/gtest.h>

#include "fastcomments/live/live_stream.hpp"

#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdlib>
#include <mutex>
#include <string>
#include <vector>

using fastcomments::live::EventType;
using fastcomments::live::LiveEvent;
using fastcomments::live::LiveStream;
using fastcomments::live::LiveStreamConfig;

TEST(LiveStreamTest, eventTypeFromString_maps_known_strings) {
    EXPECT_EQ(fastcomments::live::eventTypeFromString("new-comment"), EventType::NewComment);
    EXPECT_EQ(fastcomments::live::eventTypeFromString("updated-comment"), EventType::UpdatedComment);
    EXPECT_EQ(fastcomments::live::eventTypeFromString("deleted-comment"), EventType::DeletedComment);
    EXPECT_EQ(fastcomments::live::eventTypeFromString("p-u"), EventType::PresenceUpdate);
    EXPECT_EQ(fastcomments::live::eventTypeFromString("new-config"), EventType::NewConfig);
}

TEST(LiveStreamTest, eventTypeFromString_returns_unknown_for_garbage) {
    EXPECT_EQ(fastcomments::live::eventTypeFromString("not-a-real-event"), EventType::Unknown);
    EXPECT_EQ(fastcomments::live::eventTypeFromString(""), EventType::Unknown);
}

TEST(LiveStreamTest, eventTypeToString_round_trips) {
    for (auto t : {EventType::NewComment, EventType::UpdatedComment,
                   EventType::DeletedComment, EventType::PresenceUpdate,
                   EventType::NewConfig, EventType::ThreadStateChange}) {
        EXPECT_EQ(fastcomments::live::eventTypeFromString(
                      fastcomments::live::eventTypeToString(t)), t);
    }
}

TEST(LiveStreamTest, subscribe_against_live_server_receives_new_comment) {
    const char* wsBase = std::getenv("FC_TEST_WS_URL");
    const char* tenantId = std::getenv("FC_TEST_TENANT_ID");
    const char* urlId = std::getenv("FC_TEST_URL_ID");
    const char* userIdWS = std::getenv("FC_TEST_USER_ID_WS");
    if (!wsBase || !tenantId || !urlId || !userIdWS) {
        GTEST_SKIP() << "FC_TEST_WS_URL/TENANT_ID/URL_ID/USER_ID_WS not set; skipping live test.";
    }

    LiveStreamConfig cfg;
    cfg.wsBaseUrl = wsBase;
    if (const char* cookie = std::getenv("FC_TEST_COOKIE")) {
        cfg.sessionCookie = cookie;
    }

    LiveStream stream(cfg);
    std::atomic<int> connected{0};
    std::vector<LiveEvent> received;
    std::mutex mu;
    std::condition_variable cv;

    stream.onEvent([&](const LiveEvent& ev) {
        std::lock_guard<std::mutex> lock(mu);
        received.push_back(ev);
        cv.notify_all();
    });
    stream.onError([](const std::string& msg) {
        ADD_FAILURE() << "live stream error: " << msg;
    });

    ASSERT_NO_THROW(stream.subscribe(tenantId, urlId, userIdWS).wait());
    connected = 1;

    // Test author is responsible for poking the server (e.g. via fastcomments-cpp
    // PublicApi::createCommentPublic) before this test deadline.
    std::unique_lock<std::mutex> lock(mu);
    cv.wait_for(lock, std::chrono::seconds(5), [&]() { return !received.empty(); });

    EXPECT_FALSE(received.empty()) << "expected at least one event within 5s";
    stream.close().wait();
}
