# Documentation for fastcomments

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://fastcomments.com*

| Class | Method | HTTP request | Description |
|------------ | ------------- | ------------- | -------------|
| *DefaultApi* | [**addDomainConfig**](Apis/DefaultApi.md#addDomainConfig) | **POST** /api/v1/domain-configs |  |
*DefaultApi* | [**addPage**](Apis/DefaultApi.md#addPage) | **POST** /api/v1/pages |  |
*DefaultApi* | [**addSSOUser**](Apis/DefaultApi.md#addSSOUser) | **POST** /api/v1/sso-users |  |
*DefaultApi* | [**aggregate**](Apis/DefaultApi.md#aggregate) | **POST** /api/v1/aggregate | Aggregates documents by grouping them (if groupBy is provided) and applying multiple operations. Different operations (e.g. sum, countDistinct, avg, etc.) are supported. |
*DefaultApi* | [**aggregateQuestionResults**](Apis/DefaultApi.md#aggregateQuestionResults) | **GET** /api/v1/question-results-aggregation |  |
*DefaultApi* | [**blockUserFromComment**](Apis/DefaultApi.md#blockUserFromComment) | **POST** /api/v1/comments/{id}/block |  |
*DefaultApi* | [**bulkAggregateQuestionResults**](Apis/DefaultApi.md#bulkAggregateQuestionResults) | **POST** /api/v1/question-results-aggregation/bulk |  |
*DefaultApi* | [**combineCommentsWithQuestionResults**](Apis/DefaultApi.md#combineCommentsWithQuestionResults) | **GET** /api/v1/question-results-aggregation/combine/comments |  |
*DefaultApi* | [**createFeedPost**](Apis/DefaultApi.md#createFeedPost) | **POST** /api/v1/feed-posts |  |
*DefaultApi* | [**createSubscription**](Apis/DefaultApi.md#createSubscription) | **POST** /api/v1/subscriptions |  |
*DefaultApi* | [**createUserBadge**](Apis/DefaultApi.md#createUserBadge) | **POST** /api/v1/user-badges |  |
*DefaultApi* | [**deleteComment**](Apis/DefaultApi.md#deleteComment) | **DELETE** /api/v1/comments/{id} |  |
*DefaultApi* | [**deleteDomainConfig**](Apis/DefaultApi.md#deleteDomainConfig) | **DELETE** /api/v1/domain-configs/{domain} |  |
*DefaultApi* | [**deletePage**](Apis/DefaultApi.md#deletePage) | **DELETE** /api/v1/pages/{id} |  |
*DefaultApi* | [**deleteSSOUser**](Apis/DefaultApi.md#deleteSSOUser) | **DELETE** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**deleteSubscription**](Apis/DefaultApi.md#deleteSubscription) | **DELETE** /api/v1/subscriptions/{id} |  |
*DefaultApi* | [**deleteUserBadge**](Apis/DefaultApi.md#deleteUserBadge) | **DELETE** /api/v1/user-badges/{id} |  |
*DefaultApi* | [**flagComment**](Apis/DefaultApi.md#flagComment) | **POST** /api/v1/comments/{id}/flag |  |
*DefaultApi* | [**getAuditLogs**](Apis/DefaultApi.md#getAuditLogs) | **GET** /api/v1/audit-logs |  |
*DefaultApi* | [**getComment**](Apis/DefaultApi.md#getComment) | **GET** /api/v1/comments/{id} |  |
*DefaultApi* | [**getComments**](Apis/DefaultApi.md#getComments) | **GET** /api/v1/comments |  |
*DefaultApi* | [**getDomainConfig**](Apis/DefaultApi.md#getDomainConfig) | **GET** /api/v1/domain-configs/{domain} |  |
*DefaultApi* | [**getDomainConfigs**](Apis/DefaultApi.md#getDomainConfigs) | **GET** /api/v1/domain-configs |  |
*DefaultApi* | [**getFeedPosts**](Apis/DefaultApi.md#getFeedPosts) | **GET** /api/v1/feed-posts |  req tenantId afterId |
*DefaultApi* | [**getPageByURLId**](Apis/DefaultApi.md#getPageByURLId) | **GET** /api/v1/pages/by-url-id |  |
*DefaultApi* | [**getPages**](Apis/DefaultApi.md#getPages) | **GET** /api/v1/pages |  |
*DefaultApi* | [**getSSOUserByEmail**](Apis/DefaultApi.md#getSSOUserByEmail) | **GET** /api/v1/sso-users/by-email/{email} |  |
*DefaultApi* | [**getSSOUserById**](Apis/DefaultApi.md#getSSOUserById) | **GET** /api/v1/sso-users/by-id/{id} |  |
*DefaultApi* | [**getSSOUsers**](Apis/DefaultApi.md#getSSOUsers) | **GET** /api/v1/sso-users |  |
*DefaultApi* | [**getSubscriptions**](Apis/DefaultApi.md#getSubscriptions) | **GET** /api/v1/subscriptions |  |
*DefaultApi* | [**getUserBadge**](Apis/DefaultApi.md#getUserBadge) | **GET** /api/v1/user-badges/{id} |  |
*DefaultApi* | [**getUserBadgeProgressById**](Apis/DefaultApi.md#getUserBadgeProgressById) | **GET** /api/v1/user-badge-progress/{id} |  |
*DefaultApi* | [**getUserBadgeProgressByUserId**](Apis/DefaultApi.md#getUserBadgeProgressByUserId) | **GET** /api/v1/user-badge-progress/user/{userId} |  |
*DefaultApi* | [**getUserBadgeProgressList**](Apis/DefaultApi.md#getUserBadgeProgressList) | **GET** /api/v1/user-badge-progress |  |
*DefaultApi* | [**getUserBadges**](Apis/DefaultApi.md#getUserBadges) | **GET** /api/v1/user-badges |  |
*DefaultApi* | [**patchDomainConfig**](Apis/DefaultApi.md#patchDomainConfig) | **PATCH** /api/v1/domain-configs/{domainToUpdate} |  |
*DefaultApi* | [**patchPage**](Apis/DefaultApi.md#patchPage) | **PATCH** /api/v1/pages/{id} |  |
*DefaultApi* | [**patchSSOUser**](Apis/DefaultApi.md#patchSSOUser) | **PATCH** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**putDomainConfig**](Apis/DefaultApi.md#putDomainConfig) | **PUT** /api/v1/domain-configs/{domainToUpdate} |  |
*DefaultApi* | [**putSSOUser**](Apis/DefaultApi.md#putSSOUser) | **PUT** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**saveComment**](Apis/DefaultApi.md#saveComment) | **POST** /api/v1/comments |  |
*DefaultApi* | [**saveCommentsBulk**](Apis/DefaultApi.md#saveCommentsBulk) | **POST** /api/v1/comments/bulk |  |
*DefaultApi* | [**unBlockUserFromComment**](Apis/DefaultApi.md#unBlockUserFromComment) | **POST** /api/v1/comments/{id}/un-block |  |
*DefaultApi* | [**unFlagComment**](Apis/DefaultApi.md#unFlagComment) | **POST** /api/v1/comments/{id}/un-flag |  |
*DefaultApi* | [**updateComment**](Apis/DefaultApi.md#updateComment) | **PATCH** /api/v1/comments/{id} |  |
*DefaultApi* | [**updateFeedPost**](Apis/DefaultApi.md#updateFeedPost) | **PATCH** /api/v1/feed-posts/{id} |  |
*DefaultApi* | [**updateUserBadge**](Apis/DefaultApi.md#updateUserBadge) | **PUT** /api/v1/user-badges/{id} |  |
| *PublicApi* | [**blockFromCommentPublic**](Apis/PublicApi.md#blockFromCommentPublic) | **POST** /block-from-comment/{commentId} |  |
*PublicApi* | [**checkedCommentsForBlocked**](Apis/PublicApi.md#checkedCommentsForBlocked) | **GET** /check-blocked-comments |  |
*PublicApi* | [**createCommentPublic**](Apis/PublicApi.md#createCommentPublic) | **POST** /comments/{tenantId} |  |
*PublicApi* | [**createFeedPostPublic**](Apis/PublicApi.md#createFeedPostPublic) | **POST** /feed-posts/{tenantId} |  |
*PublicApi* | [**deleteCommentPublic**](Apis/PublicApi.md#deleteCommentPublic) | **DELETE** /comments/{tenantId}/{commentId} |  |
*PublicApi* | [**deleteCommentVote**](Apis/PublicApi.md#deleteCommentVote) | **DELETE** /comments/{tenantId}/{commentId}/vote/{voteId} |  |
*PublicApi* | [**deleteFeedPostPublic**](Apis/PublicApi.md#deleteFeedPostPublic) | **DELETE** /feed-posts/{tenantId}/{postId} |  |
*PublicApi* | [**flagCommentPublic**](Apis/PublicApi.md#flagCommentPublic) | **POST** /flag-comment/{commentId} |  |
*PublicApi* | [**getCommentText**](Apis/PublicApi.md#getCommentText) | **GET** /comments/{tenantId}/{commentId}/text |  |
*PublicApi* | [**getCommentVoteUserNames**](Apis/PublicApi.md#getCommentVoteUserNames) | **GET** /comments/{tenantId}/{commentId}/votes |  |
*PublicApi* | [**getCommentsPublic**](Apis/PublicApi.md#getCommentsPublic) | **GET** /comments/{tenantId} |  req tenantId urlId |
*PublicApi* | [**getEventLog**](Apis/PublicApi.md#getEventLog) | **GET** /event-log/{tenantId} |  req tenantId urlId userIdWS |
*PublicApi* | [**getFeedPostsPublic**](Apis/PublicApi.md#getFeedPostsPublic) | **GET** /feed-posts/{tenantId} |  req tenantId afterId |
*PublicApi* | [**getFeedPostsStats**](Apis/PublicApi.md#getFeedPostsStats) | **GET** /feed-posts/{tenantId}/stats |  |
*PublicApi* | [**getGlobalEventLog**](Apis/PublicApi.md#getGlobalEventLog) | **GET** /event-log/global/{tenantId} |  req tenantId urlId userIdWS |
*PublicApi* | [**getUserNotificationCount**](Apis/PublicApi.md#getUserNotificationCount) | **GET** /user-notifications/get-count |  |
*PublicApi* | [**getUserNotifications**](Apis/PublicApi.md#getUserNotifications) | **GET** /user-notifications |  |
*PublicApi* | [**getUserPresenceStatuses**](Apis/PublicApi.md#getUserPresenceStatuses) | **GET** /user-presence-status |  |
*PublicApi* | [**getUserReactsPublic**](Apis/PublicApi.md#getUserReactsPublic) | **GET** /feed-posts/{tenantId}/user-reacts |  |
*PublicApi* | [**lockComment**](Apis/PublicApi.md#lockComment) | **POST** /comments/{tenantId}/{commentId}/lock |  |
*PublicApi* | [**pinComment**](Apis/PublicApi.md#pinComment) | **POST** /comments/{tenantId}/{commentId}/pin |  |
*PublicApi* | [**reactFeedPostPublic**](Apis/PublicApi.md#reactFeedPostPublic) | **POST** /feed-posts/{tenantId}/react/{postId} |  |
*PublicApi* | [**resetUserNotificationCount**](Apis/PublicApi.md#resetUserNotificationCount) | **POST** /user-notifications/reset-count |  |
*PublicApi* | [**resetUserNotifications**](Apis/PublicApi.md#resetUserNotifications) | **POST** /user-notifications/reset |  |
*PublicApi* | [**searchUsers**](Apis/PublicApi.md#searchUsers) | **GET** /user-search/{tenantId} |  |
*PublicApi* | [**setCommentText**](Apis/PublicApi.md#setCommentText) | **POST** /comments/{tenantId}/{commentId}/update-text |  |
*PublicApi* | [**unBlockCommentPublic**](Apis/PublicApi.md#unBlockCommentPublic) | **DELETE** /block-from-comment/{commentId} |  |
*PublicApi* | [**unLockComment**](Apis/PublicApi.md#unLockComment) | **POST** /comments/{tenantId}/{commentId}/unlock |  |
*PublicApi* | [**unPinComment**](Apis/PublicApi.md#unPinComment) | **POST** /comments/{tenantId}/{commentId}/unpin |  |
*PublicApi* | [**updateFeedPostPublic**](Apis/PublicApi.md#updateFeedPostPublic) | **PUT** /feed-posts/{tenantId}/{postId} |  |
*PublicApi* | [**updateUserNotificationCommentSubscriptionStatus**](Apis/PublicApi.md#updateUserNotificationCommentSubscriptionStatus) | **POST** /user-notifications/{notificationId}/mark-opted/{optedInOrOut} | Enable or disable notifications for a specific comment. |
*PublicApi* | [**updateUserNotificationPageSubscriptionStatus**](Apis/PublicApi.md#updateUserNotificationPageSubscriptionStatus) | **POST** /user-notifications/set-subscription-state/{subscribedOrUnsubscribed} | Enable or disable notifications for a page. When users are subscribed to a page, notifications are created for new root comments, and also |
*PublicApi* | [**updateUserNotificationStatus**](Apis/PublicApi.md#updateUserNotificationStatus) | **POST** /user-notifications/{notificationId}/mark/{newStatus} |  |
*PublicApi* | [**uploadImage**](Apis/PublicApi.md#uploadImage) | **POST** /upload-image/{tenantId} | Upload and resize an image |
*PublicApi* | [**voteComment**](Apis/PublicApi.md#voteComment) | **POST** /comments/{tenantId}/{commentId}/vote |  |


<a name="documentation-for-models"></a>
## Documentation for Models

 - [APIAuditLog](./Models/APIAuditLog.md)
 - [APIComment](./Models/APIComment.md)
 - [APICommentBase](./Models/APICommentBase.md)
 - [APICreateUserBadgeResponse](./Models/APICreateUserBadgeResponse.md)
 - [APIEmptyResponse](./Models/APIEmptyResponse.md)
 - [APIEmptySuccessResponse](./Models/APIEmptySuccessResponse.md)
 - [APIError](./Models/APIError.md)
 - [APIGetCommentResponse](./Models/APIGetCommentResponse.md)
 - [APIGetCommentsResponse](./Models/APIGetCommentsResponse.md)
 - [APIGetUserBadgeProgressListResponse](./Models/APIGetUserBadgeProgressListResponse.md)
 - [APIGetUserBadgeProgressResponse](./Models/APIGetUserBadgeProgressResponse.md)
 - [APIGetUserBadgeResponse](./Models/APIGetUserBadgeResponse.md)
 - [APIGetUserBadgesResponse](./Models/APIGetUserBadgesResponse.md)
 - [APIPage](./Models/APIPage.md)
 - [APISSOUser](./Models/APISSOUser.md)
 - [APIStatus](./Models/APIStatus.md)
 - [APIUserSubscription](./Models/APIUserSubscription.md)
 - [AddDomainConfigParams](./Models/AddDomainConfigParams.md)
 - [AddDomainConfig_200_response](./Models/AddDomainConfig_200_response.md)
 - [AddDomainConfig_200_response_anyOf](./Models/AddDomainConfig_200_response_anyOf.md)
 - [AddPageAPIResponse](./Models/AddPageAPIResponse.md)
 - [AddSSOUserAPIResponse](./Models/AddSSOUserAPIResponse.md)
 - [AggregateQuestionResultsResponse](./Models/AggregateQuestionResultsResponse.md)
 - [AggregateQuestionResults_200_response](./Models/AggregateQuestionResults_200_response.md)
 - [AggregateTimeBucket](./Models/AggregateTimeBucket.md)
 - [AggregationItem](./Models/AggregationItem.md)
 - [AggregationOpType](./Models/AggregationOpType.md)
 - [AggregationOperation](./Models/AggregationOperation.md)
 - [AggregationRequest](./Models/AggregationRequest.md)
 - [AggregationRequest_sort](./Models/AggregationRequest_sort.md)
 - [AggregationResponse](./Models/AggregationResponse.md)
 - [AggregationResponse_stats](./Models/AggregationResponse_stats.md)
 - [AggregationValue](./Models/AggregationValue.md)
 - [BlockFromCommentParams](./Models/BlockFromCommentParams.md)
 - [BlockFromCommentPublic_200_response](./Models/BlockFromCommentPublic_200_response.md)
 - [BlockSuccess](./Models/BlockSuccess.md)
 - [BulkAggregateQuestionItem](./Models/BulkAggregateQuestionItem.md)
 - [BulkAggregateQuestionResultsRequest](./Models/BulkAggregateQuestionResultsRequest.md)
 - [BulkAggregateQuestionResultsResponse](./Models/BulkAggregateQuestionResultsResponse.md)
 - [BulkAggregateQuestionResults_200_response](./Models/BulkAggregateQuestionResults_200_response.md)
 - [ChangeCommentPinStatusResponse](./Models/ChangeCommentPinStatusResponse.md)
 - [CheckBlockedCommentsResponse](./Models/CheckBlockedCommentsResponse.md)
 - [CheckedCommentsForBlocked_200_response](./Models/CheckedCommentsForBlocked_200_response.md)
 - [CombineCommentsWithQuestionResults_200_response](./Models/CombineCommentsWithQuestionResults_200_response.md)
 - [CombineQuestionResultsWithCommentsResponse](./Models/CombineQuestionResultsWithCommentsResponse.md)
 - [CommentData](./Models/CommentData.md)
 - [CommentHTMLRenderingMode](./Models/CommentHTMLRenderingMode.md)
 - [CommentLogData](./Models/CommentLogData.md)
 - [CommentLogEntry](./Models/CommentLogEntry.md)
 - [CommentLogType](./Models/CommentLogType.md)
 - [CommentQuestionResultsRenderingType](./Models/CommentQuestionResultsRenderingType.md)
 - [CommentQuestionsRequired](./Models/CommentQuestionsRequired.md)
 - [CommentTextUpdateRequest](./Models/CommentTextUpdateRequest.md)
 - [CommentThreadDeletionMode](./Models/CommentThreadDeletionMode.md)
 - [CommentUserBadgeInfo](./Models/CommentUserBadgeInfo.md)
 - [CommentUserHashTagInfo](./Models/CommentUserHashTagInfo.md)
 - [CommentUserMentionInfo](./Models/CommentUserMentionInfo.md)
 - [CommenterNameFormats](./Models/CommenterNameFormats.md)
 - [CreateAPIPageData](./Models/CreateAPIPageData.md)
 - [CreateAPISSOUserData](./Models/CreateAPISSOUserData.md)
 - [CreateAPIUserSubscriptionData](./Models/CreateAPIUserSubscriptionData.md)
 - [CreateCommentParams](./Models/CreateCommentParams.md)
 - [CreateCommentPublic_200_response](./Models/CreateCommentPublic_200_response.md)
 - [CreateFeedPostParams](./Models/CreateFeedPostParams.md)
 - [CreateFeedPostPublic_200_response](./Models/CreateFeedPostPublic_200_response.md)
 - [CreateFeedPostResponse](./Models/CreateFeedPostResponse.md)
 - [CreateFeedPost_200_response](./Models/CreateFeedPost_200_response.md)
 - [CreateFeedPostsResponse](./Models/CreateFeedPostsResponse.md)
 - [CreateSubscriptionAPIResponse](./Models/CreateSubscriptionAPIResponse.md)
 - [CreateUserBadgeParams](./Models/CreateUserBadgeParams.md)
 - [CreateUserBadge_200_response](./Models/CreateUserBadge_200_response.md)
 - [CustomConfigParameters](./Models/CustomConfigParameters.md)
 - [DeleteCommentAction](./Models/DeleteCommentAction.md)
 - [DeleteCommentPublic_200_response](./Models/DeleteCommentPublic_200_response.md)
 - [DeleteCommentResult](./Models/DeleteCommentResult.md)
 - [DeleteCommentVote_200_response](./Models/DeleteCommentVote_200_response.md)
 - [DeleteComment_200_response](./Models/DeleteComment_200_response.md)
 - [DeleteDomainConfig_200_response](./Models/DeleteDomainConfig_200_response.md)
 - [DeleteFeedPostPublic_200_response](./Models/DeleteFeedPostPublic_200_response.md)
 - [DeleteFeedPostPublic_200_response_anyOf](./Models/DeleteFeedPostPublic_200_response_anyOf.md)
 - [DeletePageAPIResponse](./Models/DeletePageAPIResponse.md)
 - [DeleteSSOUserAPIResponse](./Models/DeleteSSOUserAPIResponse.md)
 - [DeleteSubscriptionAPIResponse](./Models/DeleteSubscriptionAPIResponse.md)
 - [DeletedCommentResultComment](./Models/DeletedCommentResultComment.md)
 - [EventLogEntry](./Models/EventLogEntry.md)
 - [FComment](./Models/FComment.md)
 - [FComment_meta](./Models/FComment_meta.md)
 - [FeedPost](./Models/FeedPost.md)
 - [FeedPostLink](./Models/FeedPostLink.md)
 - [FeedPostMediaItem](./Models/FeedPostMediaItem.md)
 - [FeedPostMediaItemAsset](./Models/FeedPostMediaItemAsset.md)
 - [FeedPostStats](./Models/FeedPostStats.md)
 - [FeedPostsStatsResponse](./Models/FeedPostsStatsResponse.md)
 - [FindCommentsByRangeItem](./Models/FindCommentsByRangeItem.md)
 - [FindCommentsByRangeResponse](./Models/FindCommentsByRangeResponse.md)
 - [FlagCommentPublic_200_response](./Models/FlagCommentPublic_200_response.md)
 - [FlagCommentResponse](./Models/FlagCommentResponse.md)
 - [FlagComment_200_response](./Models/FlagComment_200_response.md)
 - [GetAuditLogsResponse](./Models/GetAuditLogsResponse.md)
 - [GetAuditLogs_200_response](./Models/GetAuditLogs_200_response.md)
 - [GetCommentText_200_response](./Models/GetCommentText_200_response.md)
 - [GetCommentVoteUserNamesSuccessResponse](./Models/GetCommentVoteUserNamesSuccessResponse.md)
 - [GetCommentVoteUserNames_200_response](./Models/GetCommentVoteUserNames_200_response.md)
 - [GetComment_200_response](./Models/GetComment_200_response.md)
 - [GetCommentsPublic_200_response](./Models/GetCommentsPublic_200_response.md)
 - [GetCommentsResponseWithPresence_PublicComment_](./Models/GetCommentsResponseWithPresence_PublicComment_.md)
 - [GetCommentsResponse_PublicComment_](./Models/GetCommentsResponse_PublicComment_.md)
 - [GetComments_200_response](./Models/GetComments_200_response.md)
 - [GetDomainConfig_200_response](./Models/GetDomainConfig_200_response.md)
 - [GetDomainConfigs_200_response](./Models/GetDomainConfigs_200_response.md)
 - [GetDomainConfigs_200_response_anyOf](./Models/GetDomainConfigs_200_response_anyOf.md)
 - [GetDomainConfigs_200_response_anyOf_1](./Models/GetDomainConfigs_200_response_anyOf_1.md)
 - [GetEventLogResponse](./Models/GetEventLogResponse.md)
 - [GetEventLog_200_response](./Models/GetEventLog_200_response.md)
 - [GetFeedPostsPublic_200_response](./Models/GetFeedPostsPublic_200_response.md)
 - [GetFeedPostsResponse](./Models/GetFeedPostsResponse.md)
 - [GetFeedPostsStats_200_response](./Models/GetFeedPostsStats_200_response.md)
 - [GetFeedPosts_200_response](./Models/GetFeedPosts_200_response.md)
 - [GetMyNotificationsResponse](./Models/GetMyNotificationsResponse.md)
 - [GetPageByURLIdAPIResponse](./Models/GetPageByURLIdAPIResponse.md)
 - [GetPagesAPIResponse](./Models/GetPagesAPIResponse.md)
 - [GetPublicFeedPostsResponse](./Models/GetPublicFeedPostsResponse.md)
 - [GetSSOUserByEmailAPIResponse](./Models/GetSSOUserByEmailAPIResponse.md)
 - [GetSSOUserByIdAPIResponse](./Models/GetSSOUserByIdAPIResponse.md)
 - [GetSSOUsers_200_response](./Models/GetSSOUsers_200_response.md)
 - [GetSubscriptionsAPIResponse](./Models/GetSubscriptionsAPIResponse.md)
 - [GetUserBadgeProgressById_200_response](./Models/GetUserBadgeProgressById_200_response.md)
 - [GetUserBadgeProgressList_200_response](./Models/GetUserBadgeProgressList_200_response.md)
 - [GetUserBadge_200_response](./Models/GetUserBadge_200_response.md)
 - [GetUserBadges_200_response](./Models/GetUserBadges_200_response.md)
 - [GetUserNotificationCountResponse](./Models/GetUserNotificationCountResponse.md)
 - [GetUserNotificationCount_200_response](./Models/GetUserNotificationCount_200_response.md)
 - [GetUserNotifications_200_response](./Models/GetUserNotifications_200_response.md)
 - [GetUserPresenceStatusesResponse](./Models/GetUserPresenceStatusesResponse.md)
 - [GetUserPresenceStatuses_200_response](./Models/GetUserPresenceStatuses_200_response.md)
 - [GetUserReactsPublic_200_response](./Models/GetUserReactsPublic_200_response.md)
 - [GifRating](./Models/GifRating.md)
 - [HeaderState](./Models/HeaderState.md)
 - [IgnoredResponse](./Models/IgnoredResponse.md)
 - [ImageContentProfanityLevel](./Models/ImageContentProfanityLevel.md)
 - [LiveEvent](./Models/LiveEvent.md)
 - [LiveEventType](./Models/LiveEventType.md)
 - [LiveEvent_extraInfo](./Models/LiveEvent_extraInfo.md)
 - [LockComment_200_response](./Models/LockComment_200_response.md)
 - [MediaAsset](./Models/MediaAsset.md)
 - [MetaItem](./Models/MetaItem.md)
 - [NotificationAndCount](./Models/NotificationAndCount.md)
 - [NotificationObjectType](./Models/NotificationObjectType.md)
 - [NotificationType](./Models/NotificationType.md)
 - [PatchDomainConfigParams](./Models/PatchDomainConfigParams.md)
 - [PatchPageAPIResponse](./Models/PatchPageAPIResponse.md)
 - [PatchSSOUserAPIResponse](./Models/PatchSSOUserAPIResponse.md)
 - [PinComment_200_response](./Models/PinComment_200_response.md)
 - [PubSubComment](./Models/PubSubComment.md)
 - [PubSubCommentBase](./Models/PubSubCommentBase.md)
 - [PubSubVote](./Models/PubSubVote.md)
 - [PublicAPIDeleteCommentResponse](./Models/PublicAPIDeleteCommentResponse.md)
 - [PublicAPIGetCommentTextResponse](./Models/PublicAPIGetCommentTextResponse.md)
 - [PublicAPISetCommentTextResponse](./Models/PublicAPISetCommentTextResponse.md)
 - [PublicBlockFromCommentParams](./Models/PublicBlockFromCommentParams.md)
 - [PublicComment](./Models/PublicComment.md)
 - [PublicCommentBase](./Models/PublicCommentBase.md)
 - [PublicFeedPostsResponse](./Models/PublicFeedPostsResponse.md)
 - [PutSSOUserAPIResponse](./Models/PutSSOUserAPIResponse.md)
 - [QueryPredicate](./Models/QueryPredicate.md)
 - [QueryPredicate_value](./Models/QueryPredicate_value.md)
 - [QuestionDatum](./Models/QuestionDatum.md)
 - [QuestionRenderingType](./Models/QuestionRenderingType.md)
 - [QuestionResult](./Models/QuestionResult.md)
 - [QuestionResultAggregationOverall](./Models/QuestionResultAggregationOverall.md)
 - [QuestionSubQuestionVisibility](./Models/QuestionSubQuestionVisibility.md)
 - [QuestionWhenSave](./Models/QuestionWhenSave.md)
 - [ReactBodyParams](./Models/ReactBodyParams.md)
 - [ReactFeedPostPublic_200_response](./Models/ReactFeedPostPublic_200_response.md)
 - [ReactFeedPostResponse](./Models/ReactFeedPostResponse.md)
 - [Record_string__before_string_or_null__after_string_or_null___value](./Models/Record_string__before_string_or_null__after_string_or_null___value.md)
 - [Record_string_string_or_number__value](./Models/Record_string_string_or_number__value.md)
 - [RenderableUserNotification](./Models/RenderableUserNotification.md)
 - [RepeatCommentCheckIgnoredReason](./Models/RepeatCommentCheckIgnoredReason.md)
 - [RepeatCommentHandlingAction](./Models/RepeatCommentHandlingAction.md)
 - [ResetUserNotificationsResponse](./Models/ResetUserNotificationsResponse.md)
 - [ResetUserNotifications_200_response](./Models/ResetUserNotifications_200_response.md)
 - [SORT_DIR](./Models/SORT_DIR.md)
 - [SSOSecurityLevel](./Models/SSOSecurityLevel.md)
 - [SaveCommentResponse](./Models/SaveCommentResponse.md)
 - [SaveCommentResponseOptimized](./Models/SaveCommentResponseOptimized.md)
 - [SaveComment_200_response](./Models/SaveComment_200_response.md)
 - [SaveCommentsResponseWithPresence](./Models/SaveCommentsResponseWithPresence.md)
 - [SearchUsersResponse](./Models/SearchUsersResponse.md)
 - [SearchUsers_200_response](./Models/SearchUsers_200_response.md)
 - [SetCommentTextResult](./Models/SetCommentTextResult.md)
 - [SetCommentText_200_response](./Models/SetCommentText_200_response.md)
 - [SizePreset](./Models/SizePreset.md)
 - [SortDirections](./Models/SortDirections.md)
 - [SpamRule](./Models/SpamRule.md)
 - [UnBlockCommentPublic_200_response](./Models/UnBlockCommentPublic_200_response.md)
 - [UnBlockFromCommentParams](./Models/UnBlockFromCommentParams.md)
 - [UnblockSuccess](./Models/UnblockSuccess.md)
 - [UpdatableCommentParams](./Models/UpdatableCommentParams.md)
 - [UpdateAPIPageData](./Models/UpdateAPIPageData.md)
 - [UpdateAPISSOUserData](./Models/UpdateAPISSOUserData.md)
 - [UpdateDomainConfigParams](./Models/UpdateDomainConfigParams.md)
 - [UpdateFeedPostParams](./Models/UpdateFeedPostParams.md)
 - [UpdateUserBadgeParams](./Models/UpdateUserBadgeParams.md)
 - [UpdateUserBadge_200_response](./Models/UpdateUserBadge_200_response.md)
 - [UpdateUserNotificationStatus_200_response](./Models/UpdateUserNotificationStatus_200_response.md)
 - [UploadImageResponse](./Models/UploadImageResponse.md)
 - [UserBadge](./Models/UserBadge.md)
 - [UserBadgeProgress](./Models/UserBadgeProgress.md)
 - [UserNotification](./Models/UserNotification.md)
 - [UserNotificationWriteResponse](./Models/UserNotificationWriteResponse.md)
 - [UserPresenceData](./Models/UserPresenceData.md)
 - [UserReactsResponse](./Models/UserReactsResponse.md)
 - [UserSearchResult](./Models/UserSearchResult.md)
 - [UserSessionInfo](./Models/UserSessionInfo.md)
 - [VoteBodyParams](./Models/VoteBodyParams.md)
 - [VoteComment_200_response](./Models/VoteComment_200_response.md)
 - [VoteDeleteResponse](./Models/VoteDeleteResponse.md)
 - [VoteResponse](./Models/VoteResponse.md)
 - [VoteResponseUser](./Models/VoteResponseUser.md)
 - [VoteStyle](./Models/VoteStyle.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

<a name="api_key"></a>
### api_key

- **Type**: API key
- **API key parameter name**: x-api-key
- **Location**: HTTP header

