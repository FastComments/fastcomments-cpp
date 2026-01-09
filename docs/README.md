# Documentation for fastcomments

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://fastcomments.com*

| Class | Method | HTTP request | Description |
|------------ | ------------- | ------------- | -------------|
| *DefaultApi* | [**addDomainConfig**](Apis/DefaultApi.md#addDomainConfig) | **POST** /api/v1/domain-configs |  |
*DefaultApi* | [**addHashTag**](Apis/DefaultApi.md#addHashTag) | **POST** /api/v1/hash-tags |  |
*DefaultApi* | [**addHashTagsBulk**](Apis/DefaultApi.md#addHashTagsBulk) | **POST** /api/v1/hash-tags/bulk |  |
*DefaultApi* | [**addPage**](Apis/DefaultApi.md#addPage) | **POST** /api/v1/pages |  |
*DefaultApi* | [**addSSOUser**](Apis/DefaultApi.md#addSSOUser) | **POST** /api/v1/sso-users |  |
*DefaultApi* | [**aggregate**](Apis/DefaultApi.md#aggregate) | **POST** /api/v1/aggregate | Aggregates documents by grouping them (if groupBy is provided) and applying multiple operations. Different operations (e.g. sum, countDistinct, avg, etc.) are supported. |
*DefaultApi* | [**aggregateQuestionResults**](Apis/DefaultApi.md#aggregateQuestionResults) | **GET** /api/v1/question-results-aggregation |  |
*DefaultApi* | [**blockUserFromComment**](Apis/DefaultApi.md#blockUserFromComment) | **POST** /api/v1/comments/{id}/block |  |
*DefaultApi* | [**bulkAggregateQuestionResults**](Apis/DefaultApi.md#bulkAggregateQuestionResults) | **POST** /api/v1/question-results-aggregation/bulk |  |
*DefaultApi* | [**combineCommentsWithQuestionResults**](Apis/DefaultApi.md#combineCommentsWithQuestionResults) | **GET** /api/v1/question-results-aggregation/combine/comments |  |
*DefaultApi* | [**createEmailTemplate**](Apis/DefaultApi.md#createEmailTemplate) | **POST** /api/v1/email-templates |  |
*DefaultApi* | [**createFeedPost**](Apis/DefaultApi.md#createFeedPost) | **POST** /api/v1/feed-posts |  |
*DefaultApi* | [**createModerator**](Apis/DefaultApi.md#createModerator) | **POST** /api/v1/moderators |  |
*DefaultApi* | [**createQuestionConfig**](Apis/DefaultApi.md#createQuestionConfig) | **POST** /api/v1/question-configs |  |
*DefaultApi* | [**createQuestionResult**](Apis/DefaultApi.md#createQuestionResult) | **POST** /api/v1/question-results |  |
*DefaultApi* | [**createSubscription**](Apis/DefaultApi.md#createSubscription) | **POST** /api/v1/subscriptions |  |
*DefaultApi* | [**createTenant**](Apis/DefaultApi.md#createTenant) | **POST** /api/v1/tenants |  |
*DefaultApi* | [**createTenantPackage**](Apis/DefaultApi.md#createTenantPackage) | **POST** /api/v1/tenant-packages |  |
*DefaultApi* | [**createTenantUser**](Apis/DefaultApi.md#createTenantUser) | **POST** /api/v1/tenant-users |  |
*DefaultApi* | [**createUserBadge**](Apis/DefaultApi.md#createUserBadge) | **POST** /api/v1/user-badges |  |
*DefaultApi* | [**createVote**](Apis/DefaultApi.md#createVote) | **POST** /api/v1/votes |  |
*DefaultApi* | [**deleteComment**](Apis/DefaultApi.md#deleteComment) | **DELETE** /api/v1/comments/{id} |  |
*DefaultApi* | [**deleteDomainConfig**](Apis/DefaultApi.md#deleteDomainConfig) | **DELETE** /api/v1/domain-configs/{domain} |  |
*DefaultApi* | [**deleteEmailTemplate**](Apis/DefaultApi.md#deleteEmailTemplate) | **DELETE** /api/v1/email-templates/{id} |  |
*DefaultApi* | [**deleteEmailTemplateRenderError**](Apis/DefaultApi.md#deleteEmailTemplateRenderError) | **DELETE** /api/v1/email-templates/{id}/render-errors/{errorId} |  |
*DefaultApi* | [**deleteHashTag**](Apis/DefaultApi.md#deleteHashTag) | **DELETE** /api/v1/hash-tags/{tag} |  |
*DefaultApi* | [**deleteModerator**](Apis/DefaultApi.md#deleteModerator) | **DELETE** /api/v1/moderators/{id} |  |
*DefaultApi* | [**deleteNotificationCount**](Apis/DefaultApi.md#deleteNotificationCount) | **DELETE** /api/v1/notification-count/{id} |  |
*DefaultApi* | [**deletePage**](Apis/DefaultApi.md#deletePage) | **DELETE** /api/v1/pages/{id} |  |
*DefaultApi* | [**deletePendingWebhookEvent**](Apis/DefaultApi.md#deletePendingWebhookEvent) | **DELETE** /api/v1/pending-webhook-events/{id} |  |
*DefaultApi* | [**deleteQuestionConfig**](Apis/DefaultApi.md#deleteQuestionConfig) | **DELETE** /api/v1/question-configs/{id} |  |
*DefaultApi* | [**deleteQuestionResult**](Apis/DefaultApi.md#deleteQuestionResult) | **DELETE** /api/v1/question-results/{id} |  |
*DefaultApi* | [**deleteSSOUser**](Apis/DefaultApi.md#deleteSSOUser) | **DELETE** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**deleteSubscription**](Apis/DefaultApi.md#deleteSubscription) | **DELETE** /api/v1/subscriptions/{id} |  |
*DefaultApi* | [**deleteTenant**](Apis/DefaultApi.md#deleteTenant) | **DELETE** /api/v1/tenants/{id} |  |
*DefaultApi* | [**deleteTenantPackage**](Apis/DefaultApi.md#deleteTenantPackage) | **DELETE** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**deleteTenantUser**](Apis/DefaultApi.md#deleteTenantUser) | **DELETE** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**deleteUserBadge**](Apis/DefaultApi.md#deleteUserBadge) | **DELETE** /api/v1/user-badges/{id} |  |
*DefaultApi* | [**deleteVote**](Apis/DefaultApi.md#deleteVote) | **DELETE** /api/v1/votes/{id} |  |
*DefaultApi* | [**flagComment**](Apis/DefaultApi.md#flagComment) | **POST** /api/v1/comments/{id}/flag |  |
*DefaultApi* | [**getAuditLogs**](Apis/DefaultApi.md#getAuditLogs) | **GET** /api/v1/audit-logs |  |
*DefaultApi* | [**getCachedNotificationCount**](Apis/DefaultApi.md#getCachedNotificationCount) | **GET** /api/v1/notification-count/{id} |  |
*DefaultApi* | [**getComment**](Apis/DefaultApi.md#getComment) | **GET** /api/v1/comments/{id} |  |
*DefaultApi* | [**getComments**](Apis/DefaultApi.md#getComments) | **GET** /api/v1/comments |  |
*DefaultApi* | [**getDomainConfig**](Apis/DefaultApi.md#getDomainConfig) | **GET** /api/v1/domain-configs/{domain} |  |
*DefaultApi* | [**getDomainConfigs**](Apis/DefaultApi.md#getDomainConfigs) | **GET** /api/v1/domain-configs |  |
*DefaultApi* | [**getEmailTemplate**](Apis/DefaultApi.md#getEmailTemplate) | **GET** /api/v1/email-templates/{id} |  |
*DefaultApi* | [**getEmailTemplateDefinitions**](Apis/DefaultApi.md#getEmailTemplateDefinitions) | **GET** /api/v1/email-templates/definitions |  |
*DefaultApi* | [**getEmailTemplateRenderErrors**](Apis/DefaultApi.md#getEmailTemplateRenderErrors) | **GET** /api/v1/email-templates/{id}/render-errors |  |
*DefaultApi* | [**getEmailTemplates**](Apis/DefaultApi.md#getEmailTemplates) | **GET** /api/v1/email-templates |  |
*DefaultApi* | [**getFeedPosts**](Apis/DefaultApi.md#getFeedPosts) | **GET** /api/v1/feed-posts |  req tenantId afterId |
*DefaultApi* | [**getHashTags**](Apis/DefaultApi.md#getHashTags) | **GET** /api/v1/hash-tags |  |
*DefaultApi* | [**getModerator**](Apis/DefaultApi.md#getModerator) | **GET** /api/v1/moderators/{id} |  |
*DefaultApi* | [**getModerators**](Apis/DefaultApi.md#getModerators) | **GET** /api/v1/moderators |  |
*DefaultApi* | [**getNotificationCount**](Apis/DefaultApi.md#getNotificationCount) | **GET** /api/v1/notifications/count |  |
*DefaultApi* | [**getNotifications**](Apis/DefaultApi.md#getNotifications) | **GET** /api/v1/notifications |  |
*DefaultApi* | [**getPageByURLId**](Apis/DefaultApi.md#getPageByURLId) | **GET** /api/v1/pages/by-url-id |  |
*DefaultApi* | [**getPages**](Apis/DefaultApi.md#getPages) | **GET** /api/v1/pages |  |
*DefaultApi* | [**getPendingWebhookEventCount**](Apis/DefaultApi.md#getPendingWebhookEventCount) | **GET** /api/v1/pending-webhook-events/count |  |
*DefaultApi* | [**getPendingWebhookEvents**](Apis/DefaultApi.md#getPendingWebhookEvents) | **GET** /api/v1/pending-webhook-events |  |
*DefaultApi* | [**getQuestionConfig**](Apis/DefaultApi.md#getQuestionConfig) | **GET** /api/v1/question-configs/{id} |  |
*DefaultApi* | [**getQuestionConfigs**](Apis/DefaultApi.md#getQuestionConfigs) | **GET** /api/v1/question-configs |  |
*DefaultApi* | [**getQuestionResult**](Apis/DefaultApi.md#getQuestionResult) | **GET** /api/v1/question-results/{id} |  |
*DefaultApi* | [**getQuestionResults**](Apis/DefaultApi.md#getQuestionResults) | **GET** /api/v1/question-results |  |
*DefaultApi* | [**getSSOUserByEmail**](Apis/DefaultApi.md#getSSOUserByEmail) | **GET** /api/v1/sso-users/by-email/{email} |  |
*DefaultApi* | [**getSSOUserById**](Apis/DefaultApi.md#getSSOUserById) | **GET** /api/v1/sso-users/by-id/{id} |  |
*DefaultApi* | [**getSSOUsers**](Apis/DefaultApi.md#getSSOUsers) | **GET** /api/v1/sso-users |  |
*DefaultApi* | [**getSubscriptions**](Apis/DefaultApi.md#getSubscriptions) | **GET** /api/v1/subscriptions |  |
*DefaultApi* | [**getTenant**](Apis/DefaultApi.md#getTenant) | **GET** /api/v1/tenants/{id} |  |
*DefaultApi* | [**getTenantDailyUsages**](Apis/DefaultApi.md#getTenantDailyUsages) | **GET** /api/v1/tenant-daily-usage |  |
*DefaultApi* | [**getTenantPackage**](Apis/DefaultApi.md#getTenantPackage) | **GET** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**getTenantPackages**](Apis/DefaultApi.md#getTenantPackages) | **GET** /api/v1/tenant-packages |  |
*DefaultApi* | [**getTenantUser**](Apis/DefaultApi.md#getTenantUser) | **GET** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**getTenantUsers**](Apis/DefaultApi.md#getTenantUsers) | **GET** /api/v1/tenant-users |  |
*DefaultApi* | [**getTenants**](Apis/DefaultApi.md#getTenants) | **GET** /api/v1/tenants |  |
*DefaultApi* | [**getUser**](Apis/DefaultApi.md#getUser) | **GET** /api/v1/users/{id} |  |
*DefaultApi* | [**getUserBadge**](Apis/DefaultApi.md#getUserBadge) | **GET** /api/v1/user-badges/{id} |  |
*DefaultApi* | [**getUserBadgeProgressById**](Apis/DefaultApi.md#getUserBadgeProgressById) | **GET** /api/v1/user-badge-progress/{id} |  |
*DefaultApi* | [**getUserBadgeProgressByUserId**](Apis/DefaultApi.md#getUserBadgeProgressByUserId) | **GET** /api/v1/user-badge-progress/user/{userId} |  |
*DefaultApi* | [**getUserBadgeProgressList**](Apis/DefaultApi.md#getUserBadgeProgressList) | **GET** /api/v1/user-badge-progress |  |
*DefaultApi* | [**getUserBadges**](Apis/DefaultApi.md#getUserBadges) | **GET** /api/v1/user-badges |  |
*DefaultApi* | [**getVotes**](Apis/DefaultApi.md#getVotes) | **GET** /api/v1/votes |  |
*DefaultApi* | [**getVotesForUser**](Apis/DefaultApi.md#getVotesForUser) | **GET** /api/v1/votes/for-user |  |
*DefaultApi* | [**patchDomainConfig**](Apis/DefaultApi.md#patchDomainConfig) | **PATCH** /api/v1/domain-configs/{domainToUpdate} |  |
*DefaultApi* | [**patchHashTag**](Apis/DefaultApi.md#patchHashTag) | **PATCH** /api/v1/hash-tags/{tag} |  |
*DefaultApi* | [**patchPage**](Apis/DefaultApi.md#patchPage) | **PATCH** /api/v1/pages/{id} |  |
*DefaultApi* | [**patchSSOUser**](Apis/DefaultApi.md#patchSSOUser) | **PATCH** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**putDomainConfig**](Apis/DefaultApi.md#putDomainConfig) | **PUT** /api/v1/domain-configs/{domainToUpdate} |  |
*DefaultApi* | [**putSSOUser**](Apis/DefaultApi.md#putSSOUser) | **PUT** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**renderEmailTemplate**](Apis/DefaultApi.md#renderEmailTemplate) | **POST** /api/v1/email-templates/render |  |
*DefaultApi* | [**replaceTenantPackage**](Apis/DefaultApi.md#replaceTenantPackage) | **PUT** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**replaceTenantUser**](Apis/DefaultApi.md#replaceTenantUser) | **PUT** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**saveComment**](Apis/DefaultApi.md#saveComment) | **POST** /api/v1/comments |  |
*DefaultApi* | [**saveCommentsBulk**](Apis/DefaultApi.md#saveCommentsBulk) | **POST** /api/v1/comments/bulk |  |
*DefaultApi* | [**sendInvite**](Apis/DefaultApi.md#sendInvite) | **POST** /api/v1/moderators/{id}/send-invite |  |
*DefaultApi* | [**sendLoginLink**](Apis/DefaultApi.md#sendLoginLink) | **POST** /api/v1/tenant-users/{id}/send-login-link |  |
*DefaultApi* | [**unBlockUserFromComment**](Apis/DefaultApi.md#unBlockUserFromComment) | **POST** /api/v1/comments/{id}/un-block |  |
*DefaultApi* | [**unFlagComment**](Apis/DefaultApi.md#unFlagComment) | **POST** /api/v1/comments/{id}/un-flag |  |
*DefaultApi* | [**updateComment**](Apis/DefaultApi.md#updateComment) | **PATCH** /api/v1/comments/{id} |  |
*DefaultApi* | [**updateEmailTemplate**](Apis/DefaultApi.md#updateEmailTemplate) | **PATCH** /api/v1/email-templates/{id} |  |
*DefaultApi* | [**updateFeedPost**](Apis/DefaultApi.md#updateFeedPost) | **PATCH** /api/v1/feed-posts/{id} |  |
*DefaultApi* | [**updateModerator**](Apis/DefaultApi.md#updateModerator) | **PATCH** /api/v1/moderators/{id} |  |
*DefaultApi* | [**updateNotification**](Apis/DefaultApi.md#updateNotification) | **PATCH** /api/v1/notifications/{id} |  |
*DefaultApi* | [**updateQuestionConfig**](Apis/DefaultApi.md#updateQuestionConfig) | **PATCH** /api/v1/question-configs/{id} |  |
*DefaultApi* | [**updateQuestionResult**](Apis/DefaultApi.md#updateQuestionResult) | **PATCH** /api/v1/question-results/{id} |  |
*DefaultApi* | [**updateTenant**](Apis/DefaultApi.md#updateTenant) | **PATCH** /api/v1/tenants/{id} |  |
*DefaultApi* | [**updateTenantPackage**](Apis/DefaultApi.md#updateTenantPackage) | **PATCH** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**updateTenantUser**](Apis/DefaultApi.md#updateTenantUser) | **PATCH** /api/v1/tenant-users/{id} |  |
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
 - [APIDomainConfiguration](./Models/APIDomainConfiguration.md)
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
 - [APITenant](./Models/APITenant.md)
 - [APITenantDailyUsage](./Models/APITenantDailyUsage.md)
 - [APIUserSubscription](./Models/APIUserSubscription.md)
 - [AddDomainConfigParams](./Models/AddDomainConfigParams.md)
 - [AddDomainConfig_200_response](./Models/AddDomainConfig_200_response.md)
 - [AddDomainConfig_200_response_anyOf](./Models/AddDomainConfig_200_response_anyOf.md)
 - [AddHashTag_200_response](./Models/AddHashTag_200_response.md)
 - [AddHashTagsBulk_200_response](./Models/AddHashTagsBulk_200_response.md)
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
 - [BillingInfo](./Models/BillingInfo.md)
 - [BlockFromCommentParams](./Models/BlockFromCommentParams.md)
 - [BlockFromCommentPublic_200_response](./Models/BlockFromCommentPublic_200_response.md)
 - [BlockSuccess](./Models/BlockSuccess.md)
 - [BulkAggregateQuestionItem](./Models/BulkAggregateQuestionItem.md)
 - [BulkAggregateQuestionResultsRequest](./Models/BulkAggregateQuestionResultsRequest.md)
 - [BulkAggregateQuestionResultsResponse](./Models/BulkAggregateQuestionResultsResponse.md)
 - [BulkAggregateQuestionResults_200_response](./Models/BulkAggregateQuestionResults_200_response.md)
 - [BulkCreateHashTagsBody](./Models/BulkCreateHashTagsBody.md)
 - [BulkCreateHashTagsBody_tags_inner](./Models/BulkCreateHashTagsBody_tags_inner.md)
 - [BulkCreateHashTagsResponse](./Models/BulkCreateHashTagsResponse.md)
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
 - [CreateEmailTemplateBody](./Models/CreateEmailTemplateBody.md)
 - [CreateEmailTemplateResponse](./Models/CreateEmailTemplateResponse.md)
 - [CreateEmailTemplate_200_response](./Models/CreateEmailTemplate_200_response.md)
 - [CreateFeedPostParams](./Models/CreateFeedPostParams.md)
 - [CreateFeedPostPublic_200_response](./Models/CreateFeedPostPublic_200_response.md)
 - [CreateFeedPostResponse](./Models/CreateFeedPostResponse.md)
 - [CreateFeedPost_200_response](./Models/CreateFeedPost_200_response.md)
 - [CreateFeedPostsResponse](./Models/CreateFeedPostsResponse.md)
 - [CreateHashTagBody](./Models/CreateHashTagBody.md)
 - [CreateHashTagResponse](./Models/CreateHashTagResponse.md)
 - [CreateModeratorBody](./Models/CreateModeratorBody.md)
 - [CreateModeratorResponse](./Models/CreateModeratorResponse.md)
 - [CreateModerator_200_response](./Models/CreateModerator_200_response.md)
 - [CreateQuestionConfigBody](./Models/CreateQuestionConfigBody.md)
 - [CreateQuestionConfigResponse](./Models/CreateQuestionConfigResponse.md)
 - [CreateQuestionConfig_200_response](./Models/CreateQuestionConfig_200_response.md)
 - [CreateQuestionResultBody](./Models/CreateQuestionResultBody.md)
 - [CreateQuestionResultResponse](./Models/CreateQuestionResultResponse.md)
 - [CreateQuestionResult_200_response](./Models/CreateQuestionResult_200_response.md)
 - [CreateSubscriptionAPIResponse](./Models/CreateSubscriptionAPIResponse.md)
 - [CreateTenantBody](./Models/CreateTenantBody.md)
 - [CreateTenantPackageBody](./Models/CreateTenantPackageBody.md)
 - [CreateTenantPackageResponse](./Models/CreateTenantPackageResponse.md)
 - [CreateTenantPackage_200_response](./Models/CreateTenantPackage_200_response.md)
 - [CreateTenantResponse](./Models/CreateTenantResponse.md)
 - [CreateTenantUserBody](./Models/CreateTenantUserBody.md)
 - [CreateTenantUserResponse](./Models/CreateTenantUserResponse.md)
 - [CreateTenantUser_200_response](./Models/CreateTenantUser_200_response.md)
 - [CreateTenant_200_response](./Models/CreateTenant_200_response.md)
 - [CreateUserBadgeParams](./Models/CreateUserBadgeParams.md)
 - [CreateUserBadge_200_response](./Models/CreateUserBadge_200_response.md)
 - [CustomConfigParameters](./Models/CustomConfigParameters.md)
 - [CustomEmailTemplate](./Models/CustomEmailTemplate.md)
 - [DeleteCommentAction](./Models/DeleteCommentAction.md)
 - [DeleteCommentPublic_200_response](./Models/DeleteCommentPublic_200_response.md)
 - [DeleteCommentResult](./Models/DeleteCommentResult.md)
 - [DeleteCommentVote_200_response](./Models/DeleteCommentVote_200_response.md)
 - [DeleteComment_200_response](./Models/DeleteComment_200_response.md)
 - [DeleteDomainConfig_200_response](./Models/DeleteDomainConfig_200_response.md)
 - [DeleteFeedPostPublic_200_response](./Models/DeleteFeedPostPublic_200_response.md)
 - [DeleteFeedPostPublic_200_response_anyOf](./Models/DeleteFeedPostPublic_200_response_anyOf.md)
 - [DeleteHashTag_request](./Models/DeleteHashTag_request.md)
 - [DeletePageAPIResponse](./Models/DeletePageAPIResponse.md)
 - [DeleteSSOUserAPIResponse](./Models/DeleteSSOUserAPIResponse.md)
 - [DeleteSubscriptionAPIResponse](./Models/DeleteSubscriptionAPIResponse.md)
 - [DeletedCommentResultComment](./Models/DeletedCommentResultComment.md)
 - [DigestEmailFrequency](./Models/DigestEmailFrequency.md)
 - [EmailTemplateDefinition](./Models/EmailTemplateDefinition.md)
 - [EmailTemplateRenderErrorResponse](./Models/EmailTemplateRenderErrorResponse.md)
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
 - [GetCachedNotificationCountResponse](./Models/GetCachedNotificationCountResponse.md)
 - [GetCachedNotificationCount_200_response](./Models/GetCachedNotificationCount_200_response.md)
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
 - [GetEmailTemplateDefinitionsResponse](./Models/GetEmailTemplateDefinitionsResponse.md)
 - [GetEmailTemplateDefinitions_200_response](./Models/GetEmailTemplateDefinitions_200_response.md)
 - [GetEmailTemplateRenderErrorsResponse](./Models/GetEmailTemplateRenderErrorsResponse.md)
 - [GetEmailTemplateRenderErrors_200_response](./Models/GetEmailTemplateRenderErrors_200_response.md)
 - [GetEmailTemplateResponse](./Models/GetEmailTemplateResponse.md)
 - [GetEmailTemplate_200_response](./Models/GetEmailTemplate_200_response.md)
 - [GetEmailTemplatesResponse](./Models/GetEmailTemplatesResponse.md)
 - [GetEmailTemplates_200_response](./Models/GetEmailTemplates_200_response.md)
 - [GetEventLogResponse](./Models/GetEventLogResponse.md)
 - [GetEventLog_200_response](./Models/GetEventLog_200_response.md)
 - [GetFeedPostsPublic_200_response](./Models/GetFeedPostsPublic_200_response.md)
 - [GetFeedPostsResponse](./Models/GetFeedPostsResponse.md)
 - [GetFeedPostsStats_200_response](./Models/GetFeedPostsStats_200_response.md)
 - [GetFeedPosts_200_response](./Models/GetFeedPosts_200_response.md)
 - [GetHashTagsResponse](./Models/GetHashTagsResponse.md)
 - [GetHashTags_200_response](./Models/GetHashTags_200_response.md)
 - [GetModeratorResponse](./Models/GetModeratorResponse.md)
 - [GetModerator_200_response](./Models/GetModerator_200_response.md)
 - [GetModeratorsResponse](./Models/GetModeratorsResponse.md)
 - [GetModerators_200_response](./Models/GetModerators_200_response.md)
 - [GetMyNotificationsResponse](./Models/GetMyNotificationsResponse.md)
 - [GetNotificationCountResponse](./Models/GetNotificationCountResponse.md)
 - [GetNotificationCount_200_response](./Models/GetNotificationCount_200_response.md)
 - [GetNotificationsResponse](./Models/GetNotificationsResponse.md)
 - [GetNotifications_200_response](./Models/GetNotifications_200_response.md)
 - [GetPageByURLIdAPIResponse](./Models/GetPageByURLIdAPIResponse.md)
 - [GetPagesAPIResponse](./Models/GetPagesAPIResponse.md)
 - [GetPendingWebhookEventCountResponse](./Models/GetPendingWebhookEventCountResponse.md)
 - [GetPendingWebhookEventCount_200_response](./Models/GetPendingWebhookEventCount_200_response.md)
 - [GetPendingWebhookEventsResponse](./Models/GetPendingWebhookEventsResponse.md)
 - [GetPendingWebhookEvents_200_response](./Models/GetPendingWebhookEvents_200_response.md)
 - [GetPublicFeedPostsResponse](./Models/GetPublicFeedPostsResponse.md)
 - [GetQuestionConfigResponse](./Models/GetQuestionConfigResponse.md)
 - [GetQuestionConfig_200_response](./Models/GetQuestionConfig_200_response.md)
 - [GetQuestionConfigsResponse](./Models/GetQuestionConfigsResponse.md)
 - [GetQuestionConfigs_200_response](./Models/GetQuestionConfigs_200_response.md)
 - [GetQuestionResultResponse](./Models/GetQuestionResultResponse.md)
 - [GetQuestionResult_200_response](./Models/GetQuestionResult_200_response.md)
 - [GetQuestionResultsResponse](./Models/GetQuestionResultsResponse.md)
 - [GetQuestionResults_200_response](./Models/GetQuestionResults_200_response.md)
 - [GetSSOUserByEmailAPIResponse](./Models/GetSSOUserByEmailAPIResponse.md)
 - [GetSSOUserByIdAPIResponse](./Models/GetSSOUserByIdAPIResponse.md)
 - [GetSSOUsers_200_response](./Models/GetSSOUsers_200_response.md)
 - [GetSubscriptionsAPIResponse](./Models/GetSubscriptionsAPIResponse.md)
 - [GetTenantDailyUsagesResponse](./Models/GetTenantDailyUsagesResponse.md)
 - [GetTenantDailyUsages_200_response](./Models/GetTenantDailyUsages_200_response.md)
 - [GetTenantPackageResponse](./Models/GetTenantPackageResponse.md)
 - [GetTenantPackage_200_response](./Models/GetTenantPackage_200_response.md)
 - [GetTenantPackagesResponse](./Models/GetTenantPackagesResponse.md)
 - [GetTenantPackages_200_response](./Models/GetTenantPackages_200_response.md)
 - [GetTenantResponse](./Models/GetTenantResponse.md)
 - [GetTenantUserResponse](./Models/GetTenantUserResponse.md)
 - [GetTenantUser_200_response](./Models/GetTenantUser_200_response.md)
 - [GetTenantUsersResponse](./Models/GetTenantUsersResponse.md)
 - [GetTenantUsers_200_response](./Models/GetTenantUsers_200_response.md)
 - [GetTenant_200_response](./Models/GetTenant_200_response.md)
 - [GetTenantsResponse](./Models/GetTenantsResponse.md)
 - [GetTenants_200_response](./Models/GetTenants_200_response.md)
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
 - [GetUserResponse](./Models/GetUserResponse.md)
 - [GetUser_200_response](./Models/GetUser_200_response.md)
 - [GetVotesForUserResponse](./Models/GetVotesForUserResponse.md)
 - [GetVotesForUser_200_response](./Models/GetVotesForUser_200_response.md)
 - [GetVotesResponse](./Models/GetVotesResponse.md)
 - [GetVotes_200_response](./Models/GetVotes_200_response.md)
 - [GifRating](./Models/GifRating.md)
 - [HeaderState](./Models/HeaderState.md)
 - [IgnoredResponse](./Models/IgnoredResponse.md)
 - [ImageContentProfanityLevel](./Models/ImageContentProfanityLevel.md)
 - [ImportedSiteType](./Models/ImportedSiteType.md)
 - [LiveEvent](./Models/LiveEvent.md)
 - [LiveEventType](./Models/LiveEventType.md)
 - [LiveEvent_extraInfo](./Models/LiveEvent_extraInfo.md)
 - [LockComment_200_response](./Models/LockComment_200_response.md)
 - [MediaAsset](./Models/MediaAsset.md)
 - [MetaItem](./Models/MetaItem.md)
 - [Moderator](./Models/Moderator.md)
 - [NotificationAndCount](./Models/NotificationAndCount.md)
 - [NotificationObjectType](./Models/NotificationObjectType.md)
 - [NotificationType](./Models/NotificationType.md)
 - [PatchDomainConfigParams](./Models/PatchDomainConfigParams.md)
 - [PatchHashTag_200_response](./Models/PatchHashTag_200_response.md)
 - [PatchPageAPIResponse](./Models/PatchPageAPIResponse.md)
 - [PatchSSOUserAPIResponse](./Models/PatchSSOUserAPIResponse.md)
 - [PendingCommentToSyncOutbound](./Models/PendingCommentToSyncOutbound.md)
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
 - [PublicVote](./Models/PublicVote.md)
 - [PutSSOUserAPIResponse](./Models/PutSSOUserAPIResponse.md)
 - [QueryPredicate](./Models/QueryPredicate.md)
 - [QueryPredicate_value](./Models/QueryPredicate_value.md)
 - [QuestionConfig](./Models/QuestionConfig.md)
 - [QuestionConfig_customOptions_inner](./Models/QuestionConfig_customOptions_inner.md)
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
 - [RenderEmailTemplateBody](./Models/RenderEmailTemplateBody.md)
 - [RenderEmailTemplateResponse](./Models/RenderEmailTemplateResponse.md)
 - [RenderEmailTemplate_200_response](./Models/RenderEmailTemplate_200_response.md)
 - [RenderableUserNotification](./Models/RenderableUserNotification.md)
 - [RepeatCommentCheckIgnoredReason](./Models/RepeatCommentCheckIgnoredReason.md)
 - [RepeatCommentHandlingAction](./Models/RepeatCommentHandlingAction.md)
 - [ReplaceTenantPackageBody](./Models/ReplaceTenantPackageBody.md)
 - [ReplaceTenantUserBody](./Models/ReplaceTenantUserBody.md)
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
 - [TenantHashTag](./Models/TenantHashTag.md)
 - [TenantPackage](./Models/TenantPackage.md)
 - [UnBlockCommentPublic_200_response](./Models/UnBlockCommentPublic_200_response.md)
 - [UnBlockFromCommentParams](./Models/UnBlockFromCommentParams.md)
 - [UnblockSuccess](./Models/UnblockSuccess.md)
 - [UpdatableCommentParams](./Models/UpdatableCommentParams.md)
 - [UpdateAPIPageData](./Models/UpdateAPIPageData.md)
 - [UpdateAPISSOUserData](./Models/UpdateAPISSOUserData.md)
 - [UpdateDomainConfigParams](./Models/UpdateDomainConfigParams.md)
 - [UpdateEmailTemplateBody](./Models/UpdateEmailTemplateBody.md)
 - [UpdateFeedPostParams](./Models/UpdateFeedPostParams.md)
 - [UpdateHashTagBody](./Models/UpdateHashTagBody.md)
 - [UpdateHashTagResponse](./Models/UpdateHashTagResponse.md)
 - [UpdateModeratorBody](./Models/UpdateModeratorBody.md)
 - [UpdateNotificationBody](./Models/UpdateNotificationBody.md)
 - [UpdateQuestionConfigBody](./Models/UpdateQuestionConfigBody.md)
 - [UpdateQuestionResultBody](./Models/UpdateQuestionResultBody.md)
 - [UpdateTenantBody](./Models/UpdateTenantBody.md)
 - [UpdateTenantPackageBody](./Models/UpdateTenantPackageBody.md)
 - [UpdateTenantUserBody](./Models/UpdateTenantUserBody.md)
 - [UpdateUserBadgeParams](./Models/UpdateUserBadgeParams.md)
 - [UpdateUserBadge_200_response](./Models/UpdateUserBadge_200_response.md)
 - [UpdateUserNotificationStatus_200_response](./Models/UpdateUserNotificationStatus_200_response.md)
 - [UploadImageResponse](./Models/UploadImageResponse.md)
 - [User](./Models/User.md)
 - [UserBadge](./Models/UserBadge.md)
 - [UserBadgeProgress](./Models/UserBadgeProgress.md)
 - [UserNotification](./Models/UserNotification.md)
 - [UserNotificationCount](./Models/UserNotificationCount.md)
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

