#include "fastcomments/live/live_stream.hpp"

#include <cpprest/json.h>
#include <cpprest/uri_builder.h>

#include <thread>
#include <utility>

namespace fastcomments {
namespace live {

namespace {

std::string urlEncode(const std::string& v) {
    return utility::conversions::to_utf8string(
        web::uri::encode_data_string(utility::conversions::to_string_t(v)));
}

} // anonymous namespace

EventType eventTypeFromString(const std::string& s) {
    if (s == "update-badges") return EventType::UpdateBadges;
    if (s == "notification") return EventType::Notification;
    if (s == "notification-update") return EventType::NotificationUpdate;
    if (s == "p-u") return EventType::PresenceUpdate;
    if (s == "new-vote") return EventType::NewVote;
    if (s == "deleted-vote") return EventType::DeletedVote;
    if (s == "new-comment") return EventType::NewComment;
    if (s == "updated-comment") return EventType::UpdatedComment;
    if (s == "deleted-comment") return EventType::DeletedComment;
    if (s == "cvc") return EventType::CommentViewedCount;
    if (s == "new-config") return EventType::NewConfig;
    if (s == "thread-state-change") return EventType::ThreadStateChange;
    if (s == "fr") return EventType::NewFeedPostReact;
    if (s == "dfr") return EventType::DeletedFeedPostReact;
    if (s == "new-feed-post") return EventType::NewFeedPost;
    if (s == "updated-feed-post") return EventType::UpdatedFeedPost;
    if (s == "deleted-feed-post") return EventType::DeletedFeedPost;
    if (s == "new-ticket") return EventType::NewTicket;
    if (s == "updated-ticket-state") return EventType::UpdatedTicketState;
    if (s == "updated-ticket-assignment") return EventType::UpdatedTicketAssignment;
    if (s == "deleted-ticket") return EventType::DeletedTicket;
    return EventType::Unknown;
}

std::string eventTypeToString(EventType t) {
    switch (t) {
        case EventType::UpdateBadges: return "update-badges";
        case EventType::Notification: return "notification";
        case EventType::NotificationUpdate: return "notification-update";
        case EventType::PresenceUpdate: return "p-u";
        case EventType::NewVote: return "new-vote";
        case EventType::DeletedVote: return "deleted-vote";
        case EventType::NewComment: return "new-comment";
        case EventType::UpdatedComment: return "updated-comment";
        case EventType::DeletedComment: return "deleted-comment";
        case EventType::CommentViewedCount: return "cvc";
        case EventType::NewConfig: return "new-config";
        case EventType::ThreadStateChange: return "thread-state-change";
        case EventType::NewFeedPostReact: return "fr";
        case EventType::DeletedFeedPostReact: return "dfr";
        case EventType::NewFeedPost: return "new-feed-post";
        case EventType::UpdatedFeedPost: return "updated-feed-post";
        case EventType::DeletedFeedPost: return "deleted-feed-post";
        case EventType::NewTicket: return "new-ticket";
        case EventType::UpdatedTicketState: return "updated-ticket-state";
        case EventType::UpdatedTicketAssignment: return "updated-ticket-assignment";
        case EventType::DeletedTicket: return "deleted-ticket";
        case EventType::Unknown: return "";
    }
    return "";
}

LiveStream::LiveStream(LiveStreamConfig config)
    : config_(std::move(config)) {}

LiveStream::~LiveStream() {
    closing_.store(true);
    if (client_) {
        try {
            client_->close().wait();
        } catch (...) {
            // Best-effort cleanup; ignore close errors during destruction.
        }
    }
}

void LiveStream::onEvent(EventCallback cb) {
    std::lock_guard<std::mutex> lock(callbackMutex_);
    eventCb_ = std::move(cb);
}

void LiveStream::onReconnect(ReconnectCallback cb) {
    std::lock_guard<std::mutex> lock(callbackMutex_);
    reconnectCb_ = std::move(cb);
}

void LiveStream::onError(ErrorCallback cb) {
    std::lock_guard<std::mutex> lock(callbackMutex_);
    errorCb_ = std::move(cb);
}

pplx::task<void> LiveStream::subscribe(std::string tenantId,
                                       std::string urlId,
                                       std::string userIdWS) {
    tenantId_ = std::move(tenantId);
    urlId_ = std::move(urlId);
    userIdWS_ = std::move(userIdWS);
    return connectInternal();
}

pplx::task<void> LiveStream::connectInternal() {
    closing_.store(false);

    web::websockets::client::websocket_client_config wsConfig;
    if (!config_.sessionCookie.empty()) {
        wsConfig.headers().add(utility::conversions::to_string_t("Cookie"),
            utility::conversions::to_string_t(config_.sessionCookie));
    }

    client_ = std::make_unique<web::websockets::client::websocket_callback_client>(wsConfig);

    client_->set_message_handler(
        [this](const web::websockets::client::websocket_incoming_message& msg) {
            try {
                std::string body = msg.extract_string().get();
                handleMessage(body);
            } catch (const std::exception& e) {
                std::lock_guard<std::mutex> lock(callbackMutex_);
                if (errorCb_) errorCb_(std::string("message-parse: ") + e.what());
            }
        });

    client_->set_close_handler(
        [this](web::websockets::client::websocket_close_status,
               const utility::string_t&, const std::error_code&) {
            open_.store(false);
            heartbeatActive_.store(false);
            if (!closing_.load()) {
                scheduleReconnect();
            }
        });

    std::string url = config_.wsBaseUrl + "/sub"
        + "?urlId=" + urlEncode(urlId_)
        + "&userIdWS=" + urlEncode(userIdWS_)
        + "&tenantIdWS=" + urlEncode(tenantId_);

    return client_->connect(web::uri(utility::conversions::to_string_t(url)))
        .then([this]() {
            open_.store(true);
            scheduleHeartbeat();
        });
}

void LiveStream::scheduleHeartbeat() {
    if (heartbeatActive_.exchange(true)) {
        return;
    }
    auto interval = config_.heartbeatInterval;
    std::thread([this, interval]() {
        while (heartbeatActive_.load() && open_.load() && !closing_.load()) {
            std::this_thread::sleep_for(interval);
            if (!open_.load() || closing_.load()) break;
            try {
                web::websockets::client::websocket_outgoing_message msg;
                msg.set_utf8_message("ping");
                client_->send(msg).wait();
            } catch (...) {
                break;
            }
        }
        heartbeatActive_.store(false);
    }).detach();
}

void LiveStream::scheduleReconnect() {
    if (closing_.load()) return;
    auto delay = config_.reconnectDelay;
    std::thread([this, delay]() {
        std::this_thread::sleep_for(delay);
        if (closing_.load()) return;
        try {
            connectInternal().wait();
            std::lock_guard<std::mutex> lock(callbackMutex_);
            if (reconnectCb_) reconnectCb_();
        } catch (const std::exception& e) {
            std::lock_guard<std::mutex> lock(callbackMutex_);
            if (errorCb_) errorCb_(std::string("reconnect: ") + e.what());
            // Try again later.
            scheduleReconnect();
        }
    }).detach();
}

void LiveStream::handleMessage(const std::string& body) {
    if (body == "pong") {
        return;
    }
    web::json::value parsed;
    try {
        parsed = web::json::value::parse(utility::conversions::to_string_t(body));
    } catch (...) {
        return;
    }
    if (!parsed.is_object()) return;

    LiveEvent ev;
    if (parsed.has_field(utility::conversions::to_string_t("type"))) {
        ev.rawType = utility::conversions::to_utf8string(
            parsed.at(utility::conversions::to_string_t("type")).as_string());
        ev.type = eventTypeFromString(ev.rawType);
    }
    if (parsed.has_field(utility::conversions::to_string_t("timestamp"))) {
        ev.timestamp = parsed.at(utility::conversions::to_string_t("timestamp")).as_number().to_int64();
    }
    ev.payload = parsed;

    EventCallback cb;
    {
        std::lock_guard<std::mutex> lock(callbackMutex_);
        cb = eventCb_;
    }
    if (cb) cb(ev);
}

pplx::task<void> LiveStream::close() {
    closing_.store(true);
    heartbeatActive_.store(false);
    if (!client_) {
        return pplx::task_from_result();
    }
    return client_->close();
}

} // namespace live
} // namespace fastcomments
