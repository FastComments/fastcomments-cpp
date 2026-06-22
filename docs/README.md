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
*DefaultApi* | [**changeTicketState**](Apis/DefaultApi.md#changeTicketState) | **PATCH** /api/v1/tickets/{id}/state |  |
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
*DefaultApi* | [**createTicket**](Apis/DefaultApi.md#createTicket) | **POST** /api/v1/tickets |  |
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
*DefaultApi* | [**getTicket**](Apis/DefaultApi.md#getTicket) | **GET** /api/v1/tickets/{id} |  |
*DefaultApi* | [**getTickets**](Apis/DefaultApi.md#getTickets) | **GET** /api/v1/tickets |  |
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
*DefaultApi* | [**updateSubscription**](Apis/DefaultApi.md#updateSubscription) | **PATCH** /api/v1/subscriptions/{id} |  |
*DefaultApi* | [**updateTenant**](Apis/DefaultApi.md#updateTenant) | **PATCH** /api/v1/tenants/{id} |  |
*DefaultApi* | [**updateTenantPackage**](Apis/DefaultApi.md#updateTenantPackage) | **PATCH** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**updateTenantUser**](Apis/DefaultApi.md#updateTenantUser) | **PATCH** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**updateUserBadge**](Apis/DefaultApi.md#updateUserBadge) | **PUT** /api/v1/user-badges/{id} |  |
| *ModerationApi* | [**deleteModerationVote**](Apis/ModerationApi.md#deleteModerationVote) | **DELETE** /auth/my-account/moderate-comments/vote/{commentId}/{voteId} |  |
*ModerationApi* | [**getApiComments**](Apis/ModerationApi.md#getApiComments) | **GET** /auth/my-account/moderate-comments/api/comments |  |
*ModerationApi* | [**getApiExportStatus**](Apis/ModerationApi.md#getApiExportStatus) | **GET** /auth/my-account/moderate-comments/api/export/status |  |
*ModerationApi* | [**getApiIds**](Apis/ModerationApi.md#getApiIds) | **GET** /auth/my-account/moderate-comments/api/ids |  |
*ModerationApi* | [**getBanUsersFromComment**](Apis/ModerationApi.md#getBanUsersFromComment) | **GET** /auth/my-account/moderate-comments/ban-users/from-comment/{commentId} |  |
*ModerationApi* | [**getCommentBanStatus**](Apis/ModerationApi.md#getCommentBanStatus) | **GET** /auth/my-account/moderate-comments/get-comment-ban-status/{commentId} |  |
*ModerationApi* | [**getCommentChildren**](Apis/ModerationApi.md#getCommentChildren) | **GET** /auth/my-account/moderate-comments/comment-children/{commentId} |  |
*ModerationApi* | [**getCount**](Apis/ModerationApi.md#getCount) | **GET** /auth/my-account/moderate-comments/count |  |
*ModerationApi* | [**getCounts**](Apis/ModerationApi.md#getCounts) | **GET** /auth/my-account/moderate-comments/banned-users/counts |  |
*ModerationApi* | [**getLogs**](Apis/ModerationApi.md#getLogs) | **GET** /auth/my-account/moderate-comments/logs/{commentId} |  |
*ModerationApi* | [**getManualBadges**](Apis/ModerationApi.md#getManualBadges) | **GET** /auth/my-account/moderate-comments/get-manual-badges |  |
*ModerationApi* | [**getManualBadgesForUser**](Apis/ModerationApi.md#getManualBadgesForUser) | **GET** /auth/my-account/moderate-comments/get-manual-badges-for-user |  |
*ModerationApi* | [**getModerationComment**](Apis/ModerationApi.md#getModerationComment) | **GET** /auth/my-account/moderate-comments/comment/{commentId} |  |
*ModerationApi* | [**getModerationCommentText**](Apis/ModerationApi.md#getModerationCommentText) | **GET** /auth/my-account/moderate-comments/get-comment-text/{commentId} |  |
*ModerationApi* | [**getPreBanSummary**](Apis/ModerationApi.md#getPreBanSummary) | **GET** /auth/my-account/moderate-comments/pre-ban-summary/{commentId} |  |
*ModerationApi* | [**getSearchCommentsSummary**](Apis/ModerationApi.md#getSearchCommentsSummary) | **GET** /auth/my-account/moderate-comments/search/comments/summary |  |
*ModerationApi* | [**getSearchPages**](Apis/ModerationApi.md#getSearchPages) | **GET** /auth/my-account/moderate-comments/search/pages |  |
*ModerationApi* | [**getSearchSites**](Apis/ModerationApi.md#getSearchSites) | **GET** /auth/my-account/moderate-comments/search/sites |  |
*ModerationApi* | [**getSearchSuggest**](Apis/ModerationApi.md#getSearchSuggest) | **GET** /auth/my-account/moderate-comments/search/suggest |  |
*ModerationApi* | [**getSearchUsers**](Apis/ModerationApi.md#getSearchUsers) | **GET** /auth/my-account/moderate-comments/search/users |  |
*ModerationApi* | [**getTrustFactor**](Apis/ModerationApi.md#getTrustFactor) | **GET** /auth/my-account/moderate-comments/get-trust-factor |  |
*ModerationApi* | [**getUserBanPreference**](Apis/ModerationApi.md#getUserBanPreference) | **GET** /auth/my-account/moderate-comments/user-ban-preference |  |
*ModerationApi* | [**getUserInternalProfile**](Apis/ModerationApi.md#getUserInternalProfile) | **GET** /auth/my-account/moderate-comments/get-user-internal-profile |  |
*ModerationApi* | [**postAdjustCommentVotes**](Apis/ModerationApi.md#postAdjustCommentVotes) | **POST** /auth/my-account/moderate-comments/adjust-comment-votes/{commentId} |  |
*ModerationApi* | [**postApiExport**](Apis/ModerationApi.md#postApiExport) | **POST** /auth/my-account/moderate-comments/api/export |  |
*ModerationApi* | [**postBanUserFromComment**](Apis/ModerationApi.md#postBanUserFromComment) | **POST** /auth/my-account/moderate-comments/ban-user/from-comment/{commentId} |  |
*ModerationApi* | [**postBanUserUndo**](Apis/ModerationApi.md#postBanUserUndo) | **POST** /auth/my-account/moderate-comments/ban-user/undo |  |
*ModerationApi* | [**postBulkPreBanSummary**](Apis/ModerationApi.md#postBulkPreBanSummary) | **POST** /auth/my-account/moderate-comments/bulk-pre-ban-summary |  |
*ModerationApi* | [**postCommentsByIds**](Apis/ModerationApi.md#postCommentsByIds) | **POST** /auth/my-account/moderate-comments/comments-by-ids |  |
*ModerationApi* | [**postFlagComment**](Apis/ModerationApi.md#postFlagComment) | **POST** /auth/my-account/moderate-comments/flag-comment/{commentId} |  |
*ModerationApi* | [**postRemoveComment**](Apis/ModerationApi.md#postRemoveComment) | **POST** /auth/my-account/moderate-comments/remove-comment/{commentId} |  |
*ModerationApi* | [**postRestoreDeletedComment**](Apis/ModerationApi.md#postRestoreDeletedComment) | **POST** /auth/my-account/moderate-comments/restore-deleted-comment/{commentId} |  |
*ModerationApi* | [**postSetCommentApprovalStatus**](Apis/ModerationApi.md#postSetCommentApprovalStatus) | **POST** /auth/my-account/moderate-comments/set-comment-approval-status/{commentId} |  |
*ModerationApi* | [**postSetCommentReviewStatus**](Apis/ModerationApi.md#postSetCommentReviewStatus) | **POST** /auth/my-account/moderate-comments/set-comment-review-status/{commentId} |  |
*ModerationApi* | [**postSetCommentSpamStatus**](Apis/ModerationApi.md#postSetCommentSpamStatus) | **POST** /auth/my-account/moderate-comments/set-comment-spam-status/{commentId} |  |
*ModerationApi* | [**postSetCommentText**](Apis/ModerationApi.md#postSetCommentText) | **POST** /auth/my-account/moderate-comments/set-comment-text/{commentId} |  |
*ModerationApi* | [**postUnFlagComment**](Apis/ModerationApi.md#postUnFlagComment) | **POST** /auth/my-account/moderate-comments/un-flag-comment/{commentId} |  |
*ModerationApi* | [**postVote**](Apis/ModerationApi.md#postVote) | **POST** /auth/my-account/moderate-comments/vote/{commentId} |  |
*ModerationApi* | [**putAwardBadge**](Apis/ModerationApi.md#putAwardBadge) | **PUT** /auth/my-account/moderate-comments/award-badge |  |
*ModerationApi* | [**putCloseThread**](Apis/ModerationApi.md#putCloseThread) | **PUT** /auth/my-account/moderate-comments/close-thread |  |
*ModerationApi* | [**putRemoveBadge**](Apis/ModerationApi.md#putRemoveBadge) | **PUT** /auth/my-account/moderate-comments/remove-badge |  |
*ModerationApi* | [**putReopenThread**](Apis/ModerationApi.md#putReopenThread) | **PUT** /auth/my-account/moderate-comments/reopen-thread |  |
*ModerationApi* | [**setTrustFactor**](Apis/ModerationApi.md#setTrustFactor) | **PUT** /auth/my-account/moderate-comments/set-trust-factor |  |
| *PublicApi* | [**blockFromCommentPublic**](Apis/PublicApi.md#blockFromCommentPublic) | **POST** /block-from-comment/{commentId} |  |
*PublicApi* | [**checkedCommentsForBlocked**](Apis/PublicApi.md#checkedCommentsForBlocked) | **GET** /check-blocked-comments |  |
*PublicApi* | [**createCommentPublic**](Apis/PublicApi.md#createCommentPublic) | **POST** /comments/{tenantId} |  |
*PublicApi* | [**createFeedPostPublic**](Apis/PublicApi.md#createFeedPostPublic) | **POST** /feed-posts/{tenantId} |  |
*PublicApi* | [**createV1PageReact**](Apis/PublicApi.md#createV1PageReact) | **POST** /page-reacts/v1/likes/{tenantId} |  |
*PublicApi* | [**createV2PageReact**](Apis/PublicApi.md#createV2PageReact) | **POST** /page-reacts/v2/{tenantId} |  |
*PublicApi* | [**deleteCommentPublic**](Apis/PublicApi.md#deleteCommentPublic) | **DELETE** /comments/{tenantId}/{commentId} |  |
*PublicApi* | [**deleteCommentVote**](Apis/PublicApi.md#deleteCommentVote) | **DELETE** /comments/{tenantId}/{commentId}/vote/{voteId} |  |
*PublicApi* | [**deleteFeedPostPublic**](Apis/PublicApi.md#deleteFeedPostPublic) | **DELETE** /feed-posts/{tenantId}/{postId} |  |
*PublicApi* | [**deleteV1PageReact**](Apis/PublicApi.md#deleteV1PageReact) | **DELETE** /page-reacts/v1/likes/{tenantId} |  |
*PublicApi* | [**deleteV2PageReact**](Apis/PublicApi.md#deleteV2PageReact) | **DELETE** /page-reacts/v2/{tenantId} |  |
*PublicApi* | [**flagCommentPublic**](Apis/PublicApi.md#flagCommentPublic) | **POST** /flag-comment/{commentId} |  |
*PublicApi* | [**getCommentText**](Apis/PublicApi.md#getCommentText) | **GET** /comments/{tenantId}/{commentId}/text |  |
*PublicApi* | [**getCommentVoteUserNames**](Apis/PublicApi.md#getCommentVoteUserNames) | **GET** /comments/{tenantId}/{commentId}/votes |  |
*PublicApi* | [**getCommentsForUser**](Apis/PublicApi.md#getCommentsForUser) | **GET** /comments-for-user |  |
*PublicApi* | [**getCommentsPublic**](Apis/PublicApi.md#getCommentsPublic) | **GET** /comments/{tenantId} |  req tenantId urlId |
*PublicApi* | [**getEventLog**](Apis/PublicApi.md#getEventLog) | **GET** /event-log/{tenantId} |  req tenantId urlId userIdWS |
*PublicApi* | [**getFeedPostsPublic**](Apis/PublicApi.md#getFeedPostsPublic) | **GET** /feed-posts/{tenantId} |  req tenantId afterId |
*PublicApi* | [**getFeedPostsStats**](Apis/PublicApi.md#getFeedPostsStats) | **GET** /feed-posts/{tenantId}/stats |  |
*PublicApi* | [**getGifLarge**](Apis/PublicApi.md#getGifLarge) | **GET** /gifs/get-large/{tenantId} |  |
*PublicApi* | [**getGifsSearch**](Apis/PublicApi.md#getGifsSearch) | **GET** /gifs/search/{tenantId} |  |
*PublicApi* | [**getGifsTrending**](Apis/PublicApi.md#getGifsTrending) | **GET** /gifs/trending/{tenantId} |  |
*PublicApi* | [**getGlobalEventLog**](Apis/PublicApi.md#getGlobalEventLog) | **GET** /event-log/global/{tenantId} |  req tenantId urlId userIdWS |
*PublicApi* | [**getOfflineUsers**](Apis/PublicApi.md#getOfflineUsers) | **GET** /pages/{tenantId}/users/offline | Past commenters on the page who are NOT currently online. Sorted by displayName. Use this after exhausting /users/online to render a \"Members\" section. Cursor pagination on commenterName: server walks the partial {tenantId, urlId, commenterName} index from afterName forward via $gt, no $skip cost. |
*PublicApi* | [**getOnlineUsers**](Apis/PublicApi.md#getOnlineUsers) | **GET** /pages/{tenantId}/users/online | Currently-online viewers of a page: people whose websocket session is subscribed to the page right now. Returns anonCount + totalCount (room-wide subscribers, including anon viewers we don't enumerate). |
*PublicApi* | [**getPagesPublic**](Apis/PublicApi.md#getPagesPublic) | **GET** /pages/{tenantId} | List pages for a tenant. Used by the FChat desktop client to populate its room list. Requires `enableFChat` to be true on the resolved custom config for each page. Pages that require SSO are filtered against the requesting user's group access. |
*PublicApi* | [**getTranslations**](Apis/PublicApi.md#getTranslations) | **GET** /translations/{namespace}/{component} |  |
*PublicApi* | [**getUserNotificationCount**](Apis/PublicApi.md#getUserNotificationCount) | **GET** /user-notifications/get-count |  |
*PublicApi* | [**getUserNotifications**](Apis/PublicApi.md#getUserNotifications) | **GET** /user-notifications |  |
*PublicApi* | [**getUserPresenceStatuses**](Apis/PublicApi.md#getUserPresenceStatuses) | **GET** /user-presence-status |  |
*PublicApi* | [**getUserReactsPublic**](Apis/PublicApi.md#getUserReactsPublic) | **GET** /feed-posts/{tenantId}/user-reacts |  |
*PublicApi* | [**getUsersInfo**](Apis/PublicApi.md#getUsersInfo) | **GET** /pages/{tenantId}/users/info | Bulk user info for a tenant. Given userIds, return display info from User / SSOUser. Used by the comment widget to enrich users that just appeared via a presence event. No page context: privacy is enforced uniformly (private profiles are masked). |
*PublicApi* | [**getV1PageLikes**](Apis/PublicApi.md#getV1PageLikes) | **GET** /page-reacts/v1/likes/{tenantId} |  |
*PublicApi* | [**getV2PageReactUsers**](Apis/PublicApi.md#getV2PageReactUsers) | **GET** /page-reacts/v2/{tenantId}/list |  |
*PublicApi* | [**getV2PageReacts**](Apis/PublicApi.md#getV2PageReacts) | **GET** /page-reacts/v2/{tenantId} |  |
*PublicApi* | [**lockComment**](Apis/PublicApi.md#lockComment) | **POST** /comments/{tenantId}/{commentId}/lock |  |
*PublicApi* | [**logoutPublic**](Apis/PublicApi.md#logoutPublic) | **PUT** /auth/logout |  |
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
 - [APIBanUserChangeLog](./Models/APIBanUserChangeLog.md)
 - [APIBanUserChangedValues](./Models/APIBanUserChangedValues.md)
 - [APIBannedUser](./Models/APIBannedUser.md)
 - [APIBannedUserWithMultiMatchInfo](./Models/APIBannedUserWithMultiMatchInfo.md)
 - [APIComment](./Models/APIComment.md)
 - [APICommentBase](./Models/APICommentBase.md)
 - [APICommentBase_meta](./Models/APICommentBase_meta.md)
 - [APICommentCommonBannedUser](./Models/APICommentCommonBannedUser.md)
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
 - [APIModerateGetUserBanPreferencesResponse](./Models/APIModerateGetUserBanPreferencesResponse.md)
 - [APIModerateUserBanPreferences](./Models/APIModerateUserBanPreferences.md)
 - [APIPage](./Models/APIPage.md)
 - [APISSOUser](./Models/APISSOUser.md)
 - [APISaveCommentResponse](./Models/APISaveCommentResponse.md)
 - [APIStatus](./Models/APIStatus.md)
 - [APITenant](./Models/APITenant.md)
 - [APITenantDailyUsage](./Models/APITenantDailyUsage.md)
 - [APITicket](./Models/APITicket.md)
 - [APITicketDetail](./Models/APITicketDetail.md)
 - [APITicketFile](./Models/APITicketFile.md)
 - [APIUserSubscription](./Models/APIUserSubscription.md)
 - [AddDomainConfigParams](./Models/AddDomainConfigParams.md)
 - [AddDomainConfigResponse](./Models/AddDomainConfigResponse.md)
 - [AddDomainConfigResponse_anyOf](./Models/AddDomainConfigResponse_anyOf.md)
 - [AddHashTagResponse](./Models/AddHashTagResponse.md)
 - [AddHashTagsBulkResponse](./Models/AddHashTagsBulkResponse.md)
 - [AddPageAPIResponse](./Models/AddPageAPIResponse.md)
 - [AddSSOUserAPIResponse](./Models/AddSSOUserAPIResponse.md)
 - [AdjustCommentVotesParams](./Models/AdjustCommentVotesParams.md)
 - [AdjustVotesResponse](./Models/AdjustVotesResponse.md)
 - [AggregateQuestionResultsResponse](./Models/AggregateQuestionResultsResponse.md)
 - [AggregateQuestionResultsResponse_1](./Models/AggregateQuestionResultsResponse_1.md)
 - [AggregateResponse](./Models/AggregateResponse.md)
 - [AggregateTimeBucket](./Models/AggregateTimeBucket.md)
 - [AggregationAPIError](./Models/AggregationAPIError.md)
 - [AggregationItem](./Models/AggregationItem.md)
 - [AggregationOpType](./Models/AggregationOpType.md)
 - [AggregationOperation](./Models/AggregationOperation.md)
 - [AggregationRequest](./Models/AggregationRequest.md)
 - [AggregationRequest_sort](./Models/AggregationRequest_sort.md)
 - [AggregationResponse](./Models/AggregationResponse.md)
 - [AggregationResponse_stats](./Models/AggregationResponse_stats.md)
 - [AggregationValue](./Models/AggregationValue.md)
 - [AwardUserBadgeResponse](./Models/AwardUserBadgeResponse.md)
 - [BanUserFromCommentResult](./Models/BanUserFromCommentResult.md)
 - [BanUserUndoParams](./Models/BanUserUndoParams.md)
 - [BannedUserMatch](./Models/BannedUserMatch.md)
 - [BannedUserMatchType](./Models/BannedUserMatchType.md)
 - [BannedUserMatch_matchedOnValue](./Models/BannedUserMatch_matchedOnValue.md)
 - [BillingInfo](./Models/BillingInfo.md)
 - [BlockFromCommentParams](./Models/BlockFromCommentParams.md)
 - [BlockFromCommentPublicResponse](./Models/BlockFromCommentPublicResponse.md)
 - [BlockSuccess](./Models/BlockSuccess.md)
 - [BlockUserFromCommentResponse](./Models/BlockUserFromCommentResponse.md)
 - [BuildModerationFilterParams](./Models/BuildModerationFilterParams.md)
 - [BuildModerationFilterResponse](./Models/BuildModerationFilterResponse.md)
 - [BulkAggregateQuestionItem](./Models/BulkAggregateQuestionItem.md)
 - [BulkAggregateQuestionResultsRequest](./Models/BulkAggregateQuestionResultsRequest.md)
 - [BulkAggregateQuestionResultsResponse](./Models/BulkAggregateQuestionResultsResponse.md)
 - [BulkAggregateQuestionResultsResponse_1](./Models/BulkAggregateQuestionResultsResponse_1.md)
 - [BulkCreateHashTagsBody](./Models/BulkCreateHashTagsBody.md)
 - [BulkCreateHashTagsBody_tags_inner](./Models/BulkCreateHashTagsBody_tags_inner.md)
 - [BulkCreateHashTagsResponse](./Models/BulkCreateHashTagsResponse.md)
 - [BulkCreateHashTagsResponse_results_inner](./Models/BulkCreateHashTagsResponse_results_inner.md)
 - [BulkPreBanParams](./Models/BulkPreBanParams.md)
 - [BulkPreBanSummary](./Models/BulkPreBanSummary.md)
 - [ChangeCommentPinStatusResponse](./Models/ChangeCommentPinStatusResponse.md)
 - [ChangeTicketStateBody](./Models/ChangeTicketStateBody.md)
 - [ChangeTicketStateResponse](./Models/ChangeTicketStateResponse.md)
 - [ChangeTicketStateResponse_1](./Models/ChangeTicketStateResponse_1.md)
 - [CheckBlockedCommentsResponse](./Models/CheckBlockedCommentsResponse.md)
 - [CheckedCommentsForBlockedResponse](./Models/CheckedCommentsForBlockedResponse.md)
 - [CombineCommentsWithQuestionResultsResponse](./Models/CombineCommentsWithQuestionResultsResponse.md)
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
 - [CommentsByIdsParams](./Models/CommentsByIdsParams.md)
 - [CreateAPIPageData](./Models/CreateAPIPageData.md)
 - [CreateAPISSOUserData](./Models/CreateAPISSOUserData.md)
 - [CreateAPIUserSubscriptionData](./Models/CreateAPIUserSubscriptionData.md)
 - [CreateCommentParams](./Models/CreateCommentParams.md)
 - [CreateCommentPublicResponse](./Models/CreateCommentPublicResponse.md)
 - [CreateEmailTemplateBody](./Models/CreateEmailTemplateBody.md)
 - [CreateEmailTemplateResponse](./Models/CreateEmailTemplateResponse.md)
 - [CreateEmailTemplateResponse_1](./Models/CreateEmailTemplateResponse_1.md)
 - [CreateFeedPostParams](./Models/CreateFeedPostParams.md)
 - [CreateFeedPostPublicResponse](./Models/CreateFeedPostPublicResponse.md)
 - [CreateFeedPostResponse](./Models/CreateFeedPostResponse.md)
 - [CreateFeedPostResponse_1](./Models/CreateFeedPostResponse_1.md)
 - [CreateFeedPostsResponse](./Models/CreateFeedPostsResponse.md)
 - [CreateHashTagBody](./Models/CreateHashTagBody.md)
 - [CreateHashTagResponse](./Models/CreateHashTagResponse.md)
 - [CreateModeratorBody](./Models/CreateModeratorBody.md)
 - [CreateModeratorResponse](./Models/CreateModeratorResponse.md)
 - [CreateModeratorResponse_1](./Models/CreateModeratorResponse_1.md)
 - [CreateQuestionConfigBody](./Models/CreateQuestionConfigBody.md)
 - [CreateQuestionConfigResponse](./Models/CreateQuestionConfigResponse.md)
 - [CreateQuestionConfigResponse_1](./Models/CreateQuestionConfigResponse_1.md)
 - [CreateQuestionResultBody](./Models/CreateQuestionResultBody.md)
 - [CreateQuestionResultResponse](./Models/CreateQuestionResultResponse.md)
 - [CreateQuestionResultResponse_1](./Models/CreateQuestionResultResponse_1.md)
 - [CreateSubscriptionAPIResponse](./Models/CreateSubscriptionAPIResponse.md)
 - [CreateTenantBody](./Models/CreateTenantBody.md)
 - [CreateTenantPackageBody](./Models/CreateTenantPackageBody.md)
 - [CreateTenantPackageResponse](./Models/CreateTenantPackageResponse.md)
 - [CreateTenantPackageResponse_1](./Models/CreateTenantPackageResponse_1.md)
 - [CreateTenantResponse](./Models/CreateTenantResponse.md)
 - [CreateTenantResponse_1](./Models/CreateTenantResponse_1.md)
 - [CreateTenantUserBody](./Models/CreateTenantUserBody.md)
 - [CreateTenantUserResponse](./Models/CreateTenantUserResponse.md)
 - [CreateTenantUserResponse_1](./Models/CreateTenantUserResponse_1.md)
 - [CreateTicketBody](./Models/CreateTicketBody.md)
 - [CreateTicketResponse](./Models/CreateTicketResponse.md)
 - [CreateTicketResponse_1](./Models/CreateTicketResponse_1.md)
 - [CreateUserBadgeParams](./Models/CreateUserBadgeParams.md)
 - [CreateUserBadgeResponse](./Models/CreateUserBadgeResponse.md)
 - [CreateV1PageReact](./Models/CreateV1PageReact.md)
 - [CreateV1PageReactResponse](./Models/CreateV1PageReactResponse.md)
 - [CreateV2PageReactResponse](./Models/CreateV2PageReactResponse.md)
 - [CreateVoteResponse](./Models/CreateVoteResponse.md)
 - [CustomConfigParameters](./Models/CustomConfigParameters.md)
 - [CustomEmailTemplate](./Models/CustomEmailTemplate.md)
 - [DeleteCommentAction](./Models/DeleteCommentAction.md)
 - [DeleteCommentPublicResponse](./Models/DeleteCommentPublicResponse.md)
 - [DeleteCommentResponse](./Models/DeleteCommentResponse.md)
 - [DeleteCommentResult](./Models/DeleteCommentResult.md)
 - [DeleteCommentVoteResponse](./Models/DeleteCommentVoteResponse.md)
 - [DeleteDomainConfigResponse](./Models/DeleteDomainConfigResponse.md)
 - [DeleteEmailTemplateRenderErrorResponse](./Models/DeleteEmailTemplateRenderErrorResponse.md)
 - [DeleteEmailTemplateResponse](./Models/DeleteEmailTemplateResponse.md)
 - [DeleteFeedPostPublicResponse](./Models/DeleteFeedPostPublicResponse.md)
 - [DeleteFeedPostPublicResponse_anyOf](./Models/DeleteFeedPostPublicResponse_anyOf.md)
 - [DeleteHashTagRequestBody](./Models/DeleteHashTagRequestBody.md)
 - [DeleteHashTagResponse](./Models/DeleteHashTagResponse.md)
 - [DeleteModerationVoteResponse](./Models/DeleteModerationVoteResponse.md)
 - [DeleteModeratorResponse](./Models/DeleteModeratorResponse.md)
 - [DeleteNotificationCountResponse](./Models/DeleteNotificationCountResponse.md)
 - [DeletePageAPIResponse](./Models/DeletePageAPIResponse.md)
 - [DeletePendingWebhookEventResponse](./Models/DeletePendingWebhookEventResponse.md)
 - [DeleteQuestionConfigResponse](./Models/DeleteQuestionConfigResponse.md)
 - [DeleteQuestionResultResponse](./Models/DeleteQuestionResultResponse.md)
 - [DeleteSSOUserAPIResponse](./Models/DeleteSSOUserAPIResponse.md)
 - [DeleteSubscriptionAPIResponse](./Models/DeleteSubscriptionAPIResponse.md)
 - [DeleteTenantPackageResponse](./Models/DeleteTenantPackageResponse.md)
 - [DeleteTenantResponse](./Models/DeleteTenantResponse.md)
 - [DeleteTenantUserResponse](./Models/DeleteTenantUserResponse.md)
 - [DeleteUserBadgeResponse](./Models/DeleteUserBadgeResponse.md)
 - [DeleteV1PageReactResponse](./Models/DeleteV1PageReactResponse.md)
 - [DeleteV2PageReactResponse](./Models/DeleteV2PageReactResponse.md)
 - [DeleteVoteResponse](./Models/DeleteVoteResponse.md)
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
 - [FlagCommentPublicResponse](./Models/FlagCommentPublicResponse.md)
 - [FlagCommentResponse](./Models/FlagCommentResponse.md)
 - [FlagCommentResponse_1](./Models/FlagCommentResponse_1.md)
 - [GetApiCommentsResponse](./Models/GetApiCommentsResponse.md)
 - [GetApiExportStatusResponse](./Models/GetApiExportStatusResponse.md)
 - [GetApiIdsResponse](./Models/GetApiIdsResponse.md)
 - [GetAuditLogsResponse](./Models/GetAuditLogsResponse.md)
 - [GetAuditLogsResponse_1](./Models/GetAuditLogsResponse_1.md)
 - [GetBanUsersFromCommentResponse](./Models/GetBanUsersFromCommentResponse.md)
 - [GetBannedUsersCountResponse](./Models/GetBannedUsersCountResponse.md)
 - [GetBannedUsersFromCommentResponse](./Models/GetBannedUsersFromCommentResponse.md)
 - [GetCachedNotificationCountResponse](./Models/GetCachedNotificationCountResponse.md)
 - [GetCachedNotificationCountResponse_1](./Models/GetCachedNotificationCountResponse_1.md)
 - [GetCommentBanStatusResponse](./Models/GetCommentBanStatusResponse.md)
 - [GetCommentBanStatusResponse_1](./Models/GetCommentBanStatusResponse_1.md)
 - [GetCommentChildrenResponse](./Models/GetCommentChildrenResponse.md)
 - [GetCommentResponse](./Models/GetCommentResponse.md)
 - [GetCommentTextResponse](./Models/GetCommentTextResponse.md)
 - [GetCommentTextResponse_1](./Models/GetCommentTextResponse_1.md)
 - [GetCommentVoteUserNamesResponse](./Models/GetCommentVoteUserNamesResponse.md)
 - [GetCommentVoteUserNamesSuccessResponse](./Models/GetCommentVoteUserNamesSuccessResponse.md)
 - [GetCommentsForUserResponse](./Models/GetCommentsForUserResponse.md)
 - [GetCommentsForUserResponse_1](./Models/GetCommentsForUserResponse_1.md)
 - [GetCommentsPublicResponse](./Models/GetCommentsPublicResponse.md)
 - [GetCommentsResponse](./Models/GetCommentsResponse.md)
 - [GetCommentsResponseWithPresence_PublicComment_](./Models/GetCommentsResponseWithPresence_PublicComment_.md)
 - [GetCommentsResponse_PublicComment_](./Models/GetCommentsResponse_PublicComment_.md)
 - [GetCountResponse](./Models/GetCountResponse.md)
 - [GetCountsResponse](./Models/GetCountsResponse.md)
 - [GetDomainConfigResponse](./Models/GetDomainConfigResponse.md)
 - [GetDomainConfigsResponse](./Models/GetDomainConfigsResponse.md)
 - [GetDomainConfigsResponse_anyOf](./Models/GetDomainConfigsResponse_anyOf.md)
 - [GetDomainConfigsResponse_anyOf_1](./Models/GetDomainConfigsResponse_anyOf_1.md)
 - [GetEmailTemplateDefinitionsResponse](./Models/GetEmailTemplateDefinitionsResponse.md)
 - [GetEmailTemplateDefinitionsResponse_1](./Models/GetEmailTemplateDefinitionsResponse_1.md)
 - [GetEmailTemplateRenderErrorsResponse](./Models/GetEmailTemplateRenderErrorsResponse.md)
 - [GetEmailTemplateRenderErrorsResponse_1](./Models/GetEmailTemplateRenderErrorsResponse_1.md)
 - [GetEmailTemplateResponse](./Models/GetEmailTemplateResponse.md)
 - [GetEmailTemplateResponse_1](./Models/GetEmailTemplateResponse_1.md)
 - [GetEmailTemplatesResponse](./Models/GetEmailTemplatesResponse.md)
 - [GetEmailTemplatesResponse_1](./Models/GetEmailTemplatesResponse_1.md)
 - [GetEventLogResponse](./Models/GetEventLogResponse.md)
 - [GetEventLogResponse_1](./Models/GetEventLogResponse_1.md)
 - [GetFeedPostsPublicResponse](./Models/GetFeedPostsPublicResponse.md)
 - [GetFeedPostsResponse](./Models/GetFeedPostsResponse.md)
 - [GetFeedPostsResponse_1](./Models/GetFeedPostsResponse_1.md)
 - [GetFeedPostsStatsResponse](./Models/GetFeedPostsStatsResponse.md)
 - [GetGifLargeResponse](./Models/GetGifLargeResponse.md)
 - [GetGifsSearchResponse](./Models/GetGifsSearchResponse.md)
 - [GetGifsTrendingResponse](./Models/GetGifsTrendingResponse.md)
 - [GetGlobalEventLogResponse](./Models/GetGlobalEventLogResponse.md)
 - [GetHashTagsResponse](./Models/GetHashTagsResponse.md)
 - [GetHashTagsResponse_1](./Models/GetHashTagsResponse_1.md)
 - [GetLogsResponse](./Models/GetLogsResponse.md)
 - [GetManualBadgesForUserResponse](./Models/GetManualBadgesForUserResponse.md)
 - [GetManualBadgesResponse](./Models/GetManualBadgesResponse.md)
 - [GetModerationCommentResponse](./Models/GetModerationCommentResponse.md)
 - [GetModerationCommentTextResponse](./Models/GetModerationCommentTextResponse.md)
 - [GetModeratorResponse](./Models/GetModeratorResponse.md)
 - [GetModeratorResponse_1](./Models/GetModeratorResponse_1.md)
 - [GetModeratorsResponse](./Models/GetModeratorsResponse.md)
 - [GetModeratorsResponse_1](./Models/GetModeratorsResponse_1.md)
 - [GetMyNotificationsResponse](./Models/GetMyNotificationsResponse.md)
 - [GetNotificationCountResponse](./Models/GetNotificationCountResponse.md)
 - [GetNotificationCountResponse_1](./Models/GetNotificationCountResponse_1.md)
 - [GetNotificationsResponse](./Models/GetNotificationsResponse.md)
 - [GetNotificationsResponse_1](./Models/GetNotificationsResponse_1.md)
 - [GetOfflineUsersResponse](./Models/GetOfflineUsersResponse.md)
 - [GetOnlineUsersResponse](./Models/GetOnlineUsersResponse.md)
 - [GetPageByURLIdAPIResponse](./Models/GetPageByURLIdAPIResponse.md)
 - [GetPagesAPIResponse](./Models/GetPagesAPIResponse.md)
 - [GetPagesPublicResponse](./Models/GetPagesPublicResponse.md)
 - [GetPendingWebhookEventCountResponse](./Models/GetPendingWebhookEventCountResponse.md)
 - [GetPendingWebhookEventCountResponse_1](./Models/GetPendingWebhookEventCountResponse_1.md)
 - [GetPendingWebhookEventsResponse](./Models/GetPendingWebhookEventsResponse.md)
 - [GetPendingWebhookEventsResponse_1](./Models/GetPendingWebhookEventsResponse_1.md)
 - [GetPreBanSummaryResponse](./Models/GetPreBanSummaryResponse.md)
 - [GetPublicFeedPostsResponse](./Models/GetPublicFeedPostsResponse.md)
 - [GetPublicPagesResponse](./Models/GetPublicPagesResponse.md)
 - [GetQuestionConfigResponse](./Models/GetQuestionConfigResponse.md)
 - [GetQuestionConfigResponse_1](./Models/GetQuestionConfigResponse_1.md)
 - [GetQuestionConfigsResponse](./Models/GetQuestionConfigsResponse.md)
 - [GetQuestionConfigsResponse_1](./Models/GetQuestionConfigsResponse_1.md)
 - [GetQuestionResultResponse](./Models/GetQuestionResultResponse.md)
 - [GetQuestionResultResponse_1](./Models/GetQuestionResultResponse_1.md)
 - [GetQuestionResultsResponse](./Models/GetQuestionResultsResponse.md)
 - [GetQuestionResultsResponse_1](./Models/GetQuestionResultsResponse_1.md)
 - [GetSSOUserByEmailAPIResponse](./Models/GetSSOUserByEmailAPIResponse.md)
 - [GetSSOUserByIdAPIResponse](./Models/GetSSOUserByIdAPIResponse.md)
 - [GetSSOUsersResponse](./Models/GetSSOUsersResponse.md)
 - [GetSearchCommentsSummaryResponse](./Models/GetSearchCommentsSummaryResponse.md)
 - [GetSearchPagesResponse](./Models/GetSearchPagesResponse.md)
 - [GetSearchSitesResponse](./Models/GetSearchSitesResponse.md)
 - [GetSearchSuggestResponse](./Models/GetSearchSuggestResponse.md)
 - [GetSearchUsersResponse](./Models/GetSearchUsersResponse.md)
 - [GetSubscriptionsAPIResponse](./Models/GetSubscriptionsAPIResponse.md)
 - [GetTenantDailyUsagesResponse](./Models/GetTenantDailyUsagesResponse.md)
 - [GetTenantDailyUsagesResponse_1](./Models/GetTenantDailyUsagesResponse_1.md)
 - [GetTenantManualBadgesResponse](./Models/GetTenantManualBadgesResponse.md)
 - [GetTenantPackageResponse](./Models/GetTenantPackageResponse.md)
 - [GetTenantPackageResponse_1](./Models/GetTenantPackageResponse_1.md)
 - [GetTenantPackagesResponse](./Models/GetTenantPackagesResponse.md)
 - [GetTenantPackagesResponse_1](./Models/GetTenantPackagesResponse_1.md)
 - [GetTenantResponse](./Models/GetTenantResponse.md)
 - [GetTenantResponse_1](./Models/GetTenantResponse_1.md)
 - [GetTenantUserResponse](./Models/GetTenantUserResponse.md)
 - [GetTenantUserResponse_1](./Models/GetTenantUserResponse_1.md)
 - [GetTenantUsersResponse](./Models/GetTenantUsersResponse.md)
 - [GetTenantUsersResponse_1](./Models/GetTenantUsersResponse_1.md)
 - [GetTenantsResponse](./Models/GetTenantsResponse.md)
 - [GetTenantsResponse_1](./Models/GetTenantsResponse_1.md)
 - [GetTicketResponse](./Models/GetTicketResponse.md)
 - [GetTicketResponse_1](./Models/GetTicketResponse_1.md)
 - [GetTicketsResponse](./Models/GetTicketsResponse.md)
 - [GetTicketsResponse_1](./Models/GetTicketsResponse_1.md)
 - [GetTranslationsResponse](./Models/GetTranslationsResponse.md)
 - [GetTranslationsResponse_1](./Models/GetTranslationsResponse_1.md)
 - [GetTrustFactorResponse](./Models/GetTrustFactorResponse.md)
 - [GetUserBadgeProgressByIdResponse](./Models/GetUserBadgeProgressByIdResponse.md)
 - [GetUserBadgeProgressByUserIdResponse](./Models/GetUserBadgeProgressByUserIdResponse.md)
 - [GetUserBadgeProgressListResponse](./Models/GetUserBadgeProgressListResponse.md)
 - [GetUserBadgeResponse](./Models/GetUserBadgeResponse.md)
 - [GetUserBadgesResponse](./Models/GetUserBadgesResponse.md)
 - [GetUserBanPreferenceResponse](./Models/GetUserBanPreferenceResponse.md)
 - [GetUserInternalProfileResponse](./Models/GetUserInternalProfileResponse.md)
 - [GetUserInternalProfileResponse_1](./Models/GetUserInternalProfileResponse_1.md)
 - [GetUserInternalProfileResponse_profile](./Models/GetUserInternalProfileResponse_profile.md)
 - [GetUserManualBadgesResponse](./Models/GetUserManualBadgesResponse.md)
 - [GetUserNotificationCountResponse](./Models/GetUserNotificationCountResponse.md)
 - [GetUserNotificationCountResponse_1](./Models/GetUserNotificationCountResponse_1.md)
 - [GetUserNotificationsResponse](./Models/GetUserNotificationsResponse.md)
 - [GetUserPresenceStatusesResponse](./Models/GetUserPresenceStatusesResponse.md)
 - [GetUserPresenceStatusesResponse_1](./Models/GetUserPresenceStatusesResponse_1.md)
 - [GetUserReactsPublicResponse](./Models/GetUserReactsPublicResponse.md)
 - [GetUserResponse](./Models/GetUserResponse.md)
 - [GetUserResponse_1](./Models/GetUserResponse_1.md)
 - [GetUserTrustFactorResponse](./Models/GetUserTrustFactorResponse.md)
 - [GetUsersInfoResponse](./Models/GetUsersInfoResponse.md)
 - [GetV1PageLikes](./Models/GetV1PageLikes.md)
 - [GetV1PageLikesResponse](./Models/GetV1PageLikesResponse.md)
 - [GetV2PageReactUsersResponse](./Models/GetV2PageReactUsersResponse.md)
 - [GetV2PageReactUsersResponse_1](./Models/GetV2PageReactUsersResponse_1.md)
 - [GetV2PageReacts](./Models/GetV2PageReacts.md)
 - [GetV2PageReactsResponse](./Models/GetV2PageReactsResponse.md)
 - [GetVotesForUserResponse](./Models/GetVotesForUserResponse.md)
 - [GetVotesForUserResponse_1](./Models/GetVotesForUserResponse_1.md)
 - [GetVotesResponse](./Models/GetVotesResponse.md)
 - [GetVotesResponse_1](./Models/GetVotesResponse_1.md)
 - [GifGetLargeResponse](./Models/GifGetLargeResponse.md)
 - [GifRating](./Models/GifRating.md)
 - [GifSearchInternalError](./Models/GifSearchInternalError.md)
 - [GifSearchResponse](./Models/GifSearchResponse.md)
 - [GifSearchResponse_images_inner_inner](./Models/GifSearchResponse_images_inner_inner.md)
 - [HeaderAccountNotification](./Models/HeaderAccountNotification.md)
 - [HeaderState](./Models/HeaderState.md)
 - [IgnoredResponse](./Models/IgnoredResponse.md)
 - [ImageContentProfanityLevel](./Models/ImageContentProfanityLevel.md)
 - [ImportedAgentApprovalNotificationFrequency](./Models/ImportedAgentApprovalNotificationFrequency.md)
 - [ImportedSiteType](./Models/ImportedSiteType.md)
 - [LiveEvent](./Models/LiveEvent.md)
 - [LiveEventType](./Models/LiveEventType.md)
 - [LiveEvent_extraInfo](./Models/LiveEvent_extraInfo.md)
 - [LockCommentResponse](./Models/LockCommentResponse.md)
 - [MediaAsset](./Models/MediaAsset.md)
 - [MentionAutoCompleteMode](./Models/MentionAutoCompleteMode.md)
 - [MetaItem](./Models/MetaItem.md)
 - [ModerationAPIChildCommentsResponse](./Models/ModerationAPIChildCommentsResponse.md)
 - [ModerationAPIComment](./Models/ModerationAPIComment.md)
 - [ModerationAPICommentLog](./Models/ModerationAPICommentLog.md)
 - [ModerationAPICommentResponse](./Models/ModerationAPICommentResponse.md)
 - [ModerationAPICountCommentsResponse](./Models/ModerationAPICountCommentsResponse.md)
 - [ModerationAPIGetCommentIdsResponse](./Models/ModerationAPIGetCommentIdsResponse.md)
 - [ModerationAPIGetCommentsResponse](./Models/ModerationAPIGetCommentsResponse.md)
 - [ModerationAPIGetLogsResponse](./Models/ModerationAPIGetLogsResponse.md)
 - [ModerationCommentSearchResponse](./Models/ModerationCommentSearchResponse.md)
 - [ModerationExportResponse](./Models/ModerationExportResponse.md)
 - [ModerationExportStatusResponse](./Models/ModerationExportStatusResponse.md)
 - [ModerationFilter](./Models/ModerationFilter.md)
 - [ModerationPageSearchProjected](./Models/ModerationPageSearchProjected.md)
 - [ModerationPageSearchResponse](./Models/ModerationPageSearchResponse.md)
 - [ModerationSiteSearchProjected](./Models/ModerationSiteSearchProjected.md)
 - [ModerationSiteSearchResponse](./Models/ModerationSiteSearchResponse.md)
 - [ModerationSuggestResponse](./Models/ModerationSuggestResponse.md)
 - [ModerationUserSearchProjected](./Models/ModerationUserSearchProjected.md)
 - [ModerationUserSearchResponse](./Models/ModerationUserSearchResponse.md)
 - [Moderator](./Models/Moderator.md)
 - [NotificationAndCount](./Models/NotificationAndCount.md)
 - [NotificationObjectType](./Models/NotificationObjectType.md)
 - [NotificationType](./Models/NotificationType.md)
 - [PageUserEntry](./Models/PageUserEntry.md)
 - [PageUsersInfoResponse](./Models/PageUsersInfoResponse.md)
 - [PageUsersOfflineResponse](./Models/PageUsersOfflineResponse.md)
 - [PageUsersOnlineResponse](./Models/PageUsersOnlineResponse.md)
 - [PagesSortBy](./Models/PagesSortBy.md)
 - [PatchDomainConfigParams](./Models/PatchDomainConfigParams.md)
 - [PatchDomainConfigResponse](./Models/PatchDomainConfigResponse.md)
 - [PatchHashTagResponse](./Models/PatchHashTagResponse.md)
 - [PatchPageAPIResponse](./Models/PatchPageAPIResponse.md)
 - [PatchSSOUserAPIResponse](./Models/PatchSSOUserAPIResponse.md)
 - [PendingCommentToSyncOutbound](./Models/PendingCommentToSyncOutbound.md)
 - [PinCommentResponse](./Models/PinCommentResponse.md)
 - [PostAdjustCommentVotesResponse](./Models/PostAdjustCommentVotesResponse.md)
 - [PostApiExportResponse](./Models/PostApiExportResponse.md)
 - [PostBanUserFromCommentResponse](./Models/PostBanUserFromCommentResponse.md)
 - [PostBanUserUndoResponse](./Models/PostBanUserUndoResponse.md)
 - [PostBulkPreBanSummaryResponse](./Models/PostBulkPreBanSummaryResponse.md)
 - [PostCommentsByIdsResponse](./Models/PostCommentsByIdsResponse.md)
 - [PostFlagCommentResponse](./Models/PostFlagCommentResponse.md)
 - [PostRemoveCommentResponse](./Models/PostRemoveCommentResponse.md)
 - [PostRestoreDeletedCommentResponse](./Models/PostRestoreDeletedCommentResponse.md)
 - [PostSetCommentApprovalStatusResponse](./Models/PostSetCommentApprovalStatusResponse.md)
 - [PostSetCommentReviewStatusResponse](./Models/PostSetCommentReviewStatusResponse.md)
 - [PostSetCommentSpamStatusResponse](./Models/PostSetCommentSpamStatusResponse.md)
 - [PostSetCommentTextResponse](./Models/PostSetCommentTextResponse.md)
 - [PostUnFlagCommentResponse](./Models/PostUnFlagCommentResponse.md)
 - [PostVoteResponse](./Models/PostVoteResponse.md)
 - [PreBanSummary](./Models/PreBanSummary.md)
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
 - [PublicPage](./Models/PublicPage.md)
 - [PublicVote](./Models/PublicVote.md)
 - [PutAwardBadgeResponse](./Models/PutAwardBadgeResponse.md)
 - [PutCloseThreadResponse](./Models/PutCloseThreadResponse.md)
 - [PutDomainConfigResponse](./Models/PutDomainConfigResponse.md)
 - [PutRemoveBadgeResponse](./Models/PutRemoveBadgeResponse.md)
 - [PutReopenThreadResponse](./Models/PutReopenThreadResponse.md)
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
 - [ReactFeedPostPublicResponse](./Models/ReactFeedPostPublicResponse.md)
 - [ReactFeedPostResponse](./Models/ReactFeedPostResponse.md)
 - [Record_string__before_string_or_null__after_string_or_null___value](./Models/Record_string__before_string_or_null__after_string_or_null___value.md)
 - [RemoveCommentActionResponse](./Models/RemoveCommentActionResponse.md)
 - [RemoveUserBadgeResponse](./Models/RemoveUserBadgeResponse.md)
 - [RenderEmailTemplateBody](./Models/RenderEmailTemplateBody.md)
 - [RenderEmailTemplateResponse](./Models/RenderEmailTemplateResponse.md)
 - [RenderEmailTemplateResponse_1](./Models/RenderEmailTemplateResponse_1.md)
 - [RenderableUserNotification](./Models/RenderableUserNotification.md)
 - [RepeatCommentCheckIgnoredReason](./Models/RepeatCommentCheckIgnoredReason.md)
 - [RepeatCommentHandlingAction](./Models/RepeatCommentHandlingAction.md)
 - [ReplaceTenantPackageBody](./Models/ReplaceTenantPackageBody.md)
 - [ReplaceTenantPackageResponse](./Models/ReplaceTenantPackageResponse.md)
 - [ReplaceTenantUserBody](./Models/ReplaceTenantUserBody.md)
 - [ReplaceTenantUserResponse](./Models/ReplaceTenantUserResponse.md)
 - [ResetUserNotificationCountResponse](./Models/ResetUserNotificationCountResponse.md)
 - [ResetUserNotificationsResponse](./Models/ResetUserNotificationsResponse.md)
 - [ResetUserNotificationsResponse_1](./Models/ResetUserNotificationsResponse_1.md)
 - [SORT_DIR](./Models/SORT_DIR.md)
 - [SSOSecurityLevel](./Models/SSOSecurityLevel.md)
 - [SaveCommentResponse](./Models/SaveCommentResponse.md)
 - [SaveCommentResponseOptimized](./Models/SaveCommentResponseOptimized.md)
 - [SaveCommentsBulkResponse](./Models/SaveCommentsBulkResponse.md)
 - [SaveCommentsResponseWithPresence](./Models/SaveCommentsResponseWithPresence.md)
 - [SearchUsersResponse](./Models/SearchUsersResponse.md)
 - [SearchUsersResponse_1](./Models/SearchUsersResponse_1.md)
 - [SearchUsersResult](./Models/SearchUsersResult.md)
 - [SearchUsersSectionedResponse](./Models/SearchUsersSectionedResponse.md)
 - [SendInviteResponse](./Models/SendInviteResponse.md)
 - [SendLoginLinkResponse](./Models/SendLoginLinkResponse.md)
 - [SetCommentApprovedResponse](./Models/SetCommentApprovedResponse.md)
 - [SetCommentTextParams](./Models/SetCommentTextParams.md)
 - [SetCommentTextResponse](./Models/SetCommentTextResponse.md)
 - [SetCommentTextResponse_1](./Models/SetCommentTextResponse_1.md)
 - [SetCommentTextResult](./Models/SetCommentTextResult.md)
 - [SetTrustFactorResponse](./Models/SetTrustFactorResponse.md)
 - [SetUserTrustFactorResponse](./Models/SetUserTrustFactorResponse.md)
 - [SizePreset](./Models/SizePreset.md)
 - [SortDirections](./Models/SortDirections.md)
 - [SpamRule](./Models/SpamRule.md)
 - [TOSConfig](./Models/TOSConfig.md)
 - [TenantBadge](./Models/TenantBadge.md)
 - [TenantHashTag](./Models/TenantHashTag.md)
 - [TenantPackage](./Models/TenantPackage.md)
 - [UnBlockCommentPublicResponse](./Models/UnBlockCommentPublicResponse.md)
 - [UnBlockFromCommentParams](./Models/UnBlockFromCommentParams.md)
 - [UnBlockUserFromCommentResponse](./Models/UnBlockUserFromCommentResponse.md)
 - [UnFlagCommentResponse](./Models/UnFlagCommentResponse.md)
 - [UnLockCommentResponse](./Models/UnLockCommentResponse.md)
 - [UnPinCommentResponse](./Models/UnPinCommentResponse.md)
 - [UnblockSuccess](./Models/UnblockSuccess.md)
 - [UpdatableCommentParams](./Models/UpdatableCommentParams.md)
 - [UpdateAPIPageData](./Models/UpdateAPIPageData.md)
 - [UpdateAPISSOUserData](./Models/UpdateAPISSOUserData.md)
 - [UpdateAPIUserSubscriptionData](./Models/UpdateAPIUserSubscriptionData.md)
 - [UpdateCommentResponse](./Models/UpdateCommentResponse.md)
 - [UpdateDomainConfigParams](./Models/UpdateDomainConfigParams.md)
 - [UpdateEmailTemplateBody](./Models/UpdateEmailTemplateBody.md)
 - [UpdateEmailTemplateResponse](./Models/UpdateEmailTemplateResponse.md)
 - [UpdateFeedPostParams](./Models/UpdateFeedPostParams.md)
 - [UpdateFeedPostPublicResponse](./Models/UpdateFeedPostPublicResponse.md)
 - [UpdateFeedPostResponse](./Models/UpdateFeedPostResponse.md)
 - [UpdateHashTagBody](./Models/UpdateHashTagBody.md)
 - [UpdateHashTagResponse](./Models/UpdateHashTagResponse.md)
 - [UpdateModeratorBody](./Models/UpdateModeratorBody.md)
 - [UpdateModeratorResponse](./Models/UpdateModeratorResponse.md)
 - [UpdateNotificationBody](./Models/UpdateNotificationBody.md)
 - [UpdateNotificationResponse](./Models/UpdateNotificationResponse.md)
 - [UpdateQuestionConfigBody](./Models/UpdateQuestionConfigBody.md)
 - [UpdateQuestionConfigResponse](./Models/UpdateQuestionConfigResponse.md)
 - [UpdateQuestionResultBody](./Models/UpdateQuestionResultBody.md)
 - [UpdateQuestionResultResponse](./Models/UpdateQuestionResultResponse.md)
 - [UpdateSubscriptionAPIResponse](./Models/UpdateSubscriptionAPIResponse.md)
 - [UpdateTenantBody](./Models/UpdateTenantBody.md)
 - [UpdateTenantPackageBody](./Models/UpdateTenantPackageBody.md)
 - [UpdateTenantPackageResponse](./Models/UpdateTenantPackageResponse.md)
 - [UpdateTenantResponse](./Models/UpdateTenantResponse.md)
 - [UpdateTenantUserBody](./Models/UpdateTenantUserBody.md)
 - [UpdateTenantUserResponse](./Models/UpdateTenantUserResponse.md)
 - [UpdateUserBadgeParams](./Models/UpdateUserBadgeParams.md)
 - [UpdateUserBadgeResponse](./Models/UpdateUserBadgeResponse.md)
 - [UpdateUserNotificationCommentSubscriptionStatusResponse](./Models/UpdateUserNotificationCommentSubscriptionStatusResponse.md)
 - [UpdateUserNotificationPageSubscriptionStatusResponse](./Models/UpdateUserNotificationPageSubscriptionStatusResponse.md)
 - [UpdateUserNotificationStatusResponse](./Models/UpdateUserNotificationStatusResponse.md)
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
 - [UserSearchSection](./Models/UserSearchSection.md)
 - [UserSearchSectionResult](./Models/UserSearchSectionResult.md)
 - [UserSessionInfo](./Models/UserSessionInfo.md)
 - [UsersListLocation](./Models/UsersListLocation.md)
 - [VoteBodyParams](./Models/VoteBodyParams.md)
 - [VoteCommentResponse](./Models/VoteCommentResponse.md)
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

