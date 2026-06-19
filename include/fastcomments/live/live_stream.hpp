#ifndef FASTCOMMENTS_LIVE_LIVE_STREAM_HPP
#define FASTCOMMENTS_LIVE_LIVE_STREAM_HPP

#include <atomic>
#include <chrono>
#include <functional>
#include <memory>
#include <mutex>
#include <string>

#include <cpprest/json.h>
#include <cpprest/ws_client.h>
#include <pplx/pplxtasks.h>

namespace fastcomments {
namespace live {

enum class EventType {
    Unknown,
    UpdateBadges,
    Notification,
    NotificationUpdate,
    PresenceUpdate,
    NewVote,
    DeletedVote,
    NewComment,
    UpdatedComment,
    DeletedComment,
    CommentViewedCount,
    NewConfig,
    ThreadStateChange,
    NewFeedPostReact,
    DeletedFeedPostReact,
    NewFeedPost,
    UpdatedFeedPost,
    DeletedFeedPost,
    NewTicket,
    UpdatedTicketState,
    UpdatedTicketAssignment,
    DeletedTicket
};

EventType eventTypeFromString(const std::string& s);
std::string eventTypeToString(EventType t);

struct LiveEvent {
    EventType type = EventType::Unknown;
    std::string rawType;
    int64_t timestamp = 0;
    web::json::value payload;
};

struct LiveStreamConfig {
    std::string wsBaseUrl;       // e.g. "wss://fastcomments.com" - no trailing slash
    std::string sessionCookie;   // raw "name=value" string
    std::chrono::seconds heartbeatInterval{25};
    std::chrono::seconds reconnectDelay{4};
};

class LiveStream {
public:
    using EventCallback = std::function<void(const LiveEvent&)>;
    using ReconnectCallback = std::function<void()>;
    using ErrorCallback = std::function<void(const std::string&)>;

    explicit LiveStream(LiveStreamConfig config);
    ~LiveStream();

    LiveStream(const LiveStream&) = delete;
    LiveStream& operator=(const LiveStream&) = delete;

    pplx::task<void> subscribe(std::string tenantId,
                               std::string urlId,
                               std::string userIdWS);

    pplx::task<void> close();

    void onEvent(EventCallback cb);
    void onReconnect(ReconnectCallback cb);
    void onError(ErrorCallback cb);

private:
    void scheduleHeartbeat();
    void handleMessage(const std::string& payload);
    void scheduleReconnect();
    pplx::task<void> connectInternal();

    LiveStreamConfig config_;
    std::string tenantId_;
    std::string urlId_;
    std::string userIdWS_;

    std::unique_ptr<web::websockets::client::websocket_callback_client> client_;
    std::mutex callbackMutex_;
    EventCallback eventCb_;
    ReconnectCallback reconnectCb_;
    ErrorCallback errorCb_;

    std::atomic<bool> open_{false};
    std::atomic<bool> closing_{false};
    std::atomic<bool> heartbeatActive_{false};
};

} // namespace live
} // namespace fastcomments

#endif // FASTCOMMENTS_LIVE_LIVE_STREAM_HPP
