# Documentation for fastcomments

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://fastcomments.com*

| Class | Method | HTTP request | Description |
|------------ | ------------- | ------------- | -------------|
| *DefaultApi* | [**addDomainConfig**](Apis/DefaultApi.md#adddomainconfig) | **POST** /api/v1/domain-configs |  |
*DefaultApi* | [**addHashTag**](Apis/DefaultApi.md#addhashtag) | **POST** /api/v1/hash-tags |  |
*DefaultApi* | [**addHashTagsBulk**](Apis/DefaultApi.md#addhashtagsbulk) | **POST** /api/v1/hash-tags/bulk |  |
*DefaultApi* | [**addPage**](Apis/DefaultApi.md#addpage) | **POST** /api/v1/pages |  |
*DefaultApi* | [**addSSOUser**](Apis/DefaultApi.md#addssouser) | **POST** /api/v1/sso-users |  |
*DefaultApi* | [**aggregate**](Apis/DefaultApi.md#aggregate) | **POST** /api/v1/aggregate | Aggregates documents by grouping them (if groupBy is provided) and applying multiple operations. Different operations (e.g. sum, countDistinct, avg, etc.) are supported. |
*DefaultApi* | [**aggregateQuestionResults**](Apis/DefaultApi.md#aggregatequestionresults) | **GET** /api/v1/question-results-aggregation |  |
*DefaultApi* | [**blockUserFromComment**](Apis/DefaultApi.md#blockuserfromcomment) | **POST** /api/v1/comments/{id}/block |  |
*DefaultApi* | [**bulkAggregateQuestionResults**](Apis/DefaultApi.md#bulkaggregatequestionresults) | **POST** /api/v1/question-results-aggregation/bulk |  |
*DefaultApi* | [**changeTicketState**](Apis/DefaultApi.md#changeticketstate) | **PATCH** /api/v1/tickets/{id}/state |  |
*DefaultApi* | [**combineCommentsWithQuestionResults**](Apis/DefaultApi.md#combinecommentswithquestionresults) | **GET** /api/v1/question-results-aggregation/combine/comments |  |
*DefaultApi* | [**createEmailTemplate**](Apis/DefaultApi.md#createemailtemplate) | **POST** /api/v1/email-templates |  |
*DefaultApi* | [**createFeedPost**](Apis/DefaultApi.md#createfeedpost) | **POST** /api/v1/feed-posts |  |
*DefaultApi* | [**createModerator**](Apis/DefaultApi.md#createmoderator) | **POST** /api/v1/moderators |  |
*DefaultApi* | [**createQuestionConfig**](Apis/DefaultApi.md#createquestionconfig) | **POST** /api/v1/question-configs |  |
*DefaultApi* | [**createQuestionResult**](Apis/DefaultApi.md#createquestionresult) | **POST** /api/v1/question-results |  |
*DefaultApi* | [**createSubscription**](Apis/DefaultApi.md#createsubscription) | **POST** /api/v1/subscriptions |  |
*DefaultApi* | [**createTenant**](Apis/DefaultApi.md#createtenant) | **POST** /api/v1/tenants |  |
*DefaultApi* | [**createTenantPackage**](Apis/DefaultApi.md#createtenantpackage) | **POST** /api/v1/tenant-packages |  |
*DefaultApi* | [**createTenantUser**](Apis/DefaultApi.md#createtenantuser) | **POST** /api/v1/tenant-users |  |
*DefaultApi* | [**createTicket**](Apis/DefaultApi.md#createticket) | **POST** /api/v1/tickets |  |
*DefaultApi* | [**createUserBadge**](Apis/DefaultApi.md#createuserbadge) | **POST** /api/v1/user-badges |  |
*DefaultApi* | [**createVote**](Apis/DefaultApi.md#createvote) | **POST** /api/v1/votes |  |
*DefaultApi* | [**deleteComment**](Apis/DefaultApi.md#deletecomment) | **DELETE** /api/v1/comments/{id} |  |
*DefaultApi* | [**deleteDomainConfig**](Apis/DefaultApi.md#deletedomainconfig) | **DELETE** /api/v1/domain-configs/{domain} |  |
*DefaultApi* | [**deleteEmailTemplate**](Apis/DefaultApi.md#deleteemailtemplate) | **DELETE** /api/v1/email-templates/{id} |  |
*DefaultApi* | [**deleteEmailTemplateRenderError**](Apis/DefaultApi.md#deleteemailtemplaterendererror) | **DELETE** /api/v1/email-templates/{id}/render-errors/{errorId} |  |
*DefaultApi* | [**deleteHashTag**](Apis/DefaultApi.md#deletehashtag) | **DELETE** /api/v1/hash-tags/{tag} |  |
*DefaultApi* | [**deleteModerator**](Apis/DefaultApi.md#deletemoderator) | **DELETE** /api/v1/moderators/{id} |  |
*DefaultApi* | [**deleteNotificationCount**](Apis/DefaultApi.md#deletenotificationcount) | **DELETE** /api/v1/notification-count/{id} |  |
*DefaultApi* | [**deletePage**](Apis/DefaultApi.md#deletepage) | **DELETE** /api/v1/pages/{id} |  |
*DefaultApi* | [**deletePendingWebhookEvent**](Apis/DefaultApi.md#deletependingwebhookevent) | **DELETE** /api/v1/pending-webhook-events/{id} |  |
*DefaultApi* | [**deleteQuestionConfig**](Apis/DefaultApi.md#deletequestionconfig) | **DELETE** /api/v1/question-configs/{id} |  |
*DefaultApi* | [**deleteQuestionResult**](Apis/DefaultApi.md#deletequestionresult) | **DELETE** /api/v1/question-results/{id} |  |
*DefaultApi* | [**deleteSSOUser**](Apis/DefaultApi.md#deletessouser) | **DELETE** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**deleteSubscription**](Apis/DefaultApi.md#deletesubscription) | **DELETE** /api/v1/subscriptions/{id} |  |
*DefaultApi* | [**deleteTenant**](Apis/DefaultApi.md#deletetenant) | **DELETE** /api/v1/tenants/{id} |  |
*DefaultApi* | [**deleteTenantPackage**](Apis/DefaultApi.md#deletetenantpackage) | **DELETE** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**deleteTenantUser**](Apis/DefaultApi.md#deletetenantuser) | **DELETE** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**deleteUserBadge**](Apis/DefaultApi.md#deleteuserbadge) | **DELETE** /api/v1/user-badges/{id} |  |
*DefaultApi* | [**deleteVote**](Apis/DefaultApi.md#deletevote) | **DELETE** /api/v1/votes/{id} |  |
*DefaultApi* | [**flagComment**](Apis/DefaultApi.md#flagcomment) | **POST** /api/v1/comments/{id}/flag |  |
*DefaultApi* | [**getAuditLogs**](Apis/DefaultApi.md#getauditlogs) | **GET** /api/v1/audit-logs |  |
*DefaultApi* | [**getCachedNotificationCount**](Apis/DefaultApi.md#getcachednotificationcount) | **GET** /api/v1/notification-count/{id} |  |
*DefaultApi* | [**getComment**](Apis/DefaultApi.md#getcomment) | **GET** /api/v1/comments/{id} |  |
*DefaultApi* | [**getComments**](Apis/DefaultApi.md#getcomments) | **GET** /api/v1/comments |  |
*DefaultApi* | [**getDomainConfig**](Apis/DefaultApi.md#getdomainconfig) | **GET** /api/v1/domain-configs/{domain} |  |
*DefaultApi* | [**getDomainConfigs**](Apis/DefaultApi.md#getdomainconfigs) | **GET** /api/v1/domain-configs |  |
*DefaultApi* | [**getEmailTemplate**](Apis/DefaultApi.md#getemailtemplate) | **GET** /api/v1/email-templates/{id} |  |
*DefaultApi* | [**getEmailTemplateDefinitions**](Apis/DefaultApi.md#getemailtemplatedefinitions) | **GET** /api/v1/email-templates/definitions |  |
*DefaultApi* | [**getEmailTemplateRenderErrors**](Apis/DefaultApi.md#getemailtemplaterendererrors) | **GET** /api/v1/email-templates/{id}/render-errors |  |
*DefaultApi* | [**getEmailTemplates**](Apis/DefaultApi.md#getemailtemplates) | **GET** /api/v1/email-templates |  |
*DefaultApi* | [**getFeedPosts**](Apis/DefaultApi.md#getfeedposts) | **GET** /api/v1/feed-posts |  req tenantId afterId |
*DefaultApi* | [**getHashTags**](Apis/DefaultApi.md#gethashtags) | **GET** /api/v1/hash-tags |  |
*DefaultApi* | [**getModerator**](Apis/DefaultApi.md#getmoderator) | **GET** /api/v1/moderators/{id} |  |
*DefaultApi* | [**getModerators**](Apis/DefaultApi.md#getmoderators) | **GET** /api/v1/moderators |  |
*DefaultApi* | [**getNotificationCount**](Apis/DefaultApi.md#getnotificationcount) | **GET** /api/v1/notifications/count |  |
*DefaultApi* | [**getNotifications**](Apis/DefaultApi.md#getnotifications) | **GET** /api/v1/notifications |  |
*DefaultApi* | [**getPageByURLId**](Apis/DefaultApi.md#getpagebyurlid) | **GET** /api/v1/pages/by-url-id |  |
*DefaultApi* | [**getPages**](Apis/DefaultApi.md#getpages) | **GET** /api/v1/pages |  |
*DefaultApi* | [**getPendingWebhookEventCount**](Apis/DefaultApi.md#getpendingwebhookeventcount) | **GET** /api/v1/pending-webhook-events/count |  |
*DefaultApi* | [**getPendingWebhookEvents**](Apis/DefaultApi.md#getpendingwebhookevents) | **GET** /api/v1/pending-webhook-events |  |
*DefaultApi* | [**getQuestionConfig**](Apis/DefaultApi.md#getquestionconfig) | **GET** /api/v1/question-configs/{id} |  |
*DefaultApi* | [**getQuestionConfigs**](Apis/DefaultApi.md#getquestionconfigs) | **GET** /api/v1/question-configs |  |
*DefaultApi* | [**getQuestionResult**](Apis/DefaultApi.md#getquestionresult) | **GET** /api/v1/question-results/{id} |  |
*DefaultApi* | [**getQuestionResults**](Apis/DefaultApi.md#getquestionresults) | **GET** /api/v1/question-results |  |
*DefaultApi* | [**getSSOUserByEmail**](Apis/DefaultApi.md#getssouserbyemail) | **GET** /api/v1/sso-users/by-email/{email} |  |
*DefaultApi* | [**getSSOUserById**](Apis/DefaultApi.md#getssouserbyid) | **GET** /api/v1/sso-users/by-id/{id} |  |
*DefaultApi* | [**getSSOUsers**](Apis/DefaultApi.md#getssousers) | **GET** /api/v1/sso-users |  |
*DefaultApi* | [**getSubscriptions**](Apis/DefaultApi.md#getsubscriptions) | **GET** /api/v1/subscriptions |  |
*DefaultApi* | [**getTenant**](Apis/DefaultApi.md#gettenant) | **GET** /api/v1/tenants/{id} |  |
*DefaultApi* | [**getTenantDailyUsages**](Apis/DefaultApi.md#gettenantdailyusages) | **GET** /api/v1/tenant-daily-usage |  |
*DefaultApi* | [**getTenantPackage**](Apis/DefaultApi.md#gettenantpackage) | **GET** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**getTenantPackages**](Apis/DefaultApi.md#gettenantpackages) | **GET** /api/v1/tenant-packages |  |
*DefaultApi* | [**getTenantUser**](Apis/DefaultApi.md#gettenantuser) | **GET** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**getTenantUsers**](Apis/DefaultApi.md#gettenantusers) | **GET** /api/v1/tenant-users |  |
*DefaultApi* | [**getTenants**](Apis/DefaultApi.md#gettenants) | **GET** /api/v1/tenants |  |
*DefaultApi* | [**getTicket**](Apis/DefaultApi.md#getticket) | **GET** /api/v1/tickets/{id} |  |
*DefaultApi* | [**getTickets**](Apis/DefaultApi.md#gettickets) | **GET** /api/v1/tickets |  |
*DefaultApi* | [**getUser**](Apis/DefaultApi.md#getuser) | **GET** /api/v1/users/{id} |  |
*DefaultApi* | [**getUserBadge**](Apis/DefaultApi.md#getuserbadge) | **GET** /api/v1/user-badges/{id} |  |
*DefaultApi* | [**getUserBadgeProgressById**](Apis/DefaultApi.md#getuserbadgeprogressbyid) | **GET** /api/v1/user-badge-progress/{id} |  |
*DefaultApi* | [**getUserBadgeProgressByUserId**](Apis/DefaultApi.md#getuserbadgeprogressbyuserid) | **GET** /api/v1/user-badge-progress/user/{userId} |  |
*DefaultApi* | [**getUserBadgeProgressList**](Apis/DefaultApi.md#getuserbadgeprogresslist) | **GET** /api/v1/user-badge-progress |  |
*DefaultApi* | [**getUserBadges**](Apis/DefaultApi.md#getuserbadges) | **GET** /api/v1/user-badges |  |
*DefaultApi* | [**getVotes**](Apis/DefaultApi.md#getvotes) | **GET** /api/v1/votes |  |
*DefaultApi* | [**getVotesForUser**](Apis/DefaultApi.md#getvotesforuser) | **GET** /api/v1/votes/for-user |  |
*DefaultApi* | [**patchDomainConfig**](Apis/DefaultApi.md#patchdomainconfig) | **PATCH** /api/v1/domain-configs/{domainToUpdate} |  |
*DefaultApi* | [**patchHashTag**](Apis/DefaultApi.md#patchhashtag) | **PATCH** /api/v1/hash-tags/{tag} |  |
*DefaultApi* | [**patchPage**](Apis/DefaultApi.md#patchpage) | **PATCH** /api/v1/pages/{id} |  |
*DefaultApi* | [**patchSSOUser**](Apis/DefaultApi.md#patchssouser) | **PATCH** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**putDomainConfig**](Apis/DefaultApi.md#putdomainconfig) | **PUT** /api/v1/domain-configs/{domainToUpdate} |  |
*DefaultApi* | [**putSSOUser**](Apis/DefaultApi.md#putssouser) | **PUT** /api/v1/sso-users/{id} |  |
*DefaultApi* | [**renderEmailTemplate**](Apis/DefaultApi.md#renderemailtemplate) | **POST** /api/v1/email-templates/render |  |
*DefaultApi* | [**replaceTenantPackage**](Apis/DefaultApi.md#replacetenantpackage) | **PUT** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**replaceTenantUser**](Apis/DefaultApi.md#replacetenantuser) | **PUT** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**saveComment**](Apis/DefaultApi.md#savecomment) | **POST** /api/v1/comments |  |
*DefaultApi* | [**saveCommentsBulk**](Apis/DefaultApi.md#savecommentsbulk) | **POST** /api/v1/comments/bulk |  |
*DefaultApi* | [**sendInvite**](Apis/DefaultApi.md#sendinvite) | **POST** /api/v1/moderators/{id}/send-invite |  |
*DefaultApi* | [**sendLoginLink**](Apis/DefaultApi.md#sendloginlink) | **POST** /api/v1/tenant-users/{id}/send-login-link |  |
*DefaultApi* | [**unBlockUserFromComment**](Apis/DefaultApi.md#unblockuserfromcomment) | **POST** /api/v1/comments/{id}/un-block |  |
*DefaultApi* | [**unFlagComment**](Apis/DefaultApi.md#unflagcomment) | **POST** /api/v1/comments/{id}/un-flag |  |
*DefaultApi* | [**updateComment**](Apis/DefaultApi.md#updatecomment) | **PATCH** /api/v1/comments/{id} |  |
*DefaultApi* | [**updateEmailTemplate**](Apis/DefaultApi.md#updateemailtemplate) | **PATCH** /api/v1/email-templates/{id} |  |
*DefaultApi* | [**updateFeedPost**](Apis/DefaultApi.md#updatefeedpost) | **PATCH** /api/v1/feed-posts/{id} |  |
*DefaultApi* | [**updateModerator**](Apis/DefaultApi.md#updatemoderator) | **PATCH** /api/v1/moderators/{id} |  |
*DefaultApi* | [**updateNotification**](Apis/DefaultApi.md#updatenotification) | **PATCH** /api/v1/notifications/{id} |  |
*DefaultApi* | [**updateQuestionConfig**](Apis/DefaultApi.md#updatequestionconfig) | **PATCH** /api/v1/question-configs/{id} |  |
*DefaultApi* | [**updateQuestionResult**](Apis/DefaultApi.md#updatequestionresult) | **PATCH** /api/v1/question-results/{id} |  |
*DefaultApi* | [**updateSubscription**](Apis/DefaultApi.md#updatesubscription) | **PATCH** /api/v1/subscriptions/{id} |  |
*DefaultApi* | [**updateTenant**](Apis/DefaultApi.md#updatetenant) | **PATCH** /api/v1/tenants/{id} |  |
*DefaultApi* | [**updateTenantPackage**](Apis/DefaultApi.md#updatetenantpackage) | **PATCH** /api/v1/tenant-packages/{id} |  |
*DefaultApi* | [**updateTenantUser**](Apis/DefaultApi.md#updatetenantuser) | **PATCH** /api/v1/tenant-users/{id} |  |
*DefaultApi* | [**updateUserBadge**](Apis/DefaultApi.md#updateuserbadge) | **PUT** /api/v1/user-badges/{id} |  |
| *ModerationApi* | [**deleteModerationVote**](Apis/ModerationApi.md#deletemoderationvote) | **DELETE** /auth/my-account/moderate-comments/vote/{commentId}/{voteId} |  |
*ModerationApi* | [**getApiComments**](Apis/ModerationApi.md#getapicomments) | **GET** /auth/my-account/moderate-comments/api/comments |  |
*ModerationApi* | [**getApiExportStatus**](Apis/ModerationApi.md#getapiexportstatus) | **GET** /auth/my-account/moderate-comments/api/export/status |  |
*ModerationApi* | [**getApiIds**](Apis/ModerationApi.md#getapiids) | **GET** /auth/my-account/moderate-comments/api/ids |  |
*ModerationApi* | [**getBanUsersFromComment**](Apis/ModerationApi.md#getbanusersfromcomment) | **GET** /auth/my-account/moderate-comments/ban-users/from-comment/{commentId} |  |
*ModerationApi* | [**getCommentBanStatus**](Apis/ModerationApi.md#getcommentbanstatus) | **GET** /auth/my-account/moderate-comments/get-comment-ban-status/{commentId} |  |
*ModerationApi* | [**getCommentChildren**](Apis/ModerationApi.md#getcommentchildren) | **GET** /auth/my-account/moderate-comments/comment-children/{commentId} |  |
*ModerationApi* | [**getCount**](Apis/ModerationApi.md#getcount) | **GET** /auth/my-account/moderate-comments/count |  |
*ModerationApi* | [**getCounts**](Apis/ModerationApi.md#getcounts) | **GET** /auth/my-account/moderate-comments/banned-users/counts |  |
*ModerationApi* | [**getLogs**](Apis/ModerationApi.md#getlogs) | **GET** /auth/my-account/moderate-comments/logs/{commentId} |  |
*ModerationApi* | [**getManualBadges**](Apis/ModerationApi.md#getmanualbadges) | **GET** /auth/my-account/moderate-comments/get-manual-badges |  |
*ModerationApi* | [**getManualBadgesForUser**](Apis/ModerationApi.md#getmanualbadgesforuser) | **GET** /auth/my-account/moderate-comments/get-manual-badges-for-user |  |
*ModerationApi* | [**getModerationComment**](Apis/ModerationApi.md#getmoderationcomment) | **GET** /auth/my-account/moderate-comments/comment/{commentId} |  |
*ModerationApi* | [**getModerationCommentText**](Apis/ModerationApi.md#getmoderationcommenttext) | **GET** /auth/my-account/moderate-comments/get-comment-text/{commentId} |  |
*ModerationApi* | [**getPreBanSummary**](Apis/ModerationApi.md#getprebansummary) | **GET** /auth/my-account/moderate-comments/pre-ban-summary/{commentId} |  |
*ModerationApi* | [**getSearchCommentsSummary**](Apis/ModerationApi.md#getsearchcommentssummary) | **GET** /auth/my-account/moderate-comments/search/comments/summary |  |
*ModerationApi* | [**getSearchPages**](Apis/ModerationApi.md#getsearchpages) | **GET** /auth/my-account/moderate-comments/search/pages |  |
*ModerationApi* | [**getSearchSites**](Apis/ModerationApi.md#getsearchsites) | **GET** /auth/my-account/moderate-comments/search/sites |  |
*ModerationApi* | [**getSearchSuggest**](Apis/ModerationApi.md#getsearchsuggest) | **GET** /auth/my-account/moderate-comments/search/suggest |  |
*ModerationApi* | [**getSearchUsers**](Apis/ModerationApi.md#getsearchusers) | **GET** /auth/my-account/moderate-comments/search/users |  |
*ModerationApi* | [**getTrustFactor**](Apis/ModerationApi.md#gettrustfactor) | **GET** /auth/my-account/moderate-comments/get-trust-factor |  |
*ModerationApi* | [**getUserBanPreference**](Apis/ModerationApi.md#getuserbanpreference) | **GET** /auth/my-account/moderate-comments/user-ban-preference |  |
*ModerationApi* | [**getUserInternalProfile**](Apis/ModerationApi.md#getuserinternalprofile) | **GET** /auth/my-account/moderate-comments/get-user-internal-profile |  |
*ModerationApi* | [**postAdjustCommentVotes**](Apis/ModerationApi.md#postadjustcommentvotes) | **POST** /auth/my-account/moderate-comments/adjust-comment-votes/{commentId} |  |
*ModerationApi* | [**postApiExport**](Apis/ModerationApi.md#postapiexport) | **POST** /auth/my-account/moderate-comments/api/export |  |
*ModerationApi* | [**postBanUserFromComment**](Apis/ModerationApi.md#postbanuserfromcomment) | **POST** /auth/my-account/moderate-comments/ban-user/from-comment/{commentId} |  |
*ModerationApi* | [**postBanUserUndo**](Apis/ModerationApi.md#postbanuserundo) | **POST** /auth/my-account/moderate-comments/ban-user/undo |  |
*ModerationApi* | [**postBulkPreBanSummary**](Apis/ModerationApi.md#postbulkprebansummary) | **POST** /auth/my-account/moderate-comments/bulk-pre-ban-summary |  |
*ModerationApi* | [**postCommentsByIds**](Apis/ModerationApi.md#postcommentsbyids) | **POST** /auth/my-account/moderate-comments/comments-by-ids |  |
*ModerationApi* | [**postFlagComment**](Apis/ModerationApi.md#postflagcomment) | **POST** /auth/my-account/moderate-comments/flag-comment/{commentId} |  |
*ModerationApi* | [**postRemoveComment**](Apis/ModerationApi.md#postremovecomment) | **POST** /auth/my-account/moderate-comments/remove-comment/{commentId} |  |
*ModerationApi* | [**postRestoreDeletedComment**](Apis/ModerationApi.md#postrestoredeletedcomment) | **POST** /auth/my-account/moderate-comments/restore-deleted-comment/{commentId} |  |
*ModerationApi* | [**postSetCommentApprovalStatus**](Apis/ModerationApi.md#postsetcommentapprovalstatus) | **POST** /auth/my-account/moderate-comments/set-comment-approval-status/{commentId} |  |
*ModerationApi* | [**postSetCommentReviewStatus**](Apis/ModerationApi.md#postsetcommentreviewstatus) | **POST** /auth/my-account/moderate-comments/set-comment-review-status/{commentId} |  |
*ModerationApi* | [**postSetCommentSpamStatus**](Apis/ModerationApi.md#postsetcommentspamstatus) | **POST** /auth/my-account/moderate-comments/set-comment-spam-status/{commentId} |  |
*ModerationApi* | [**postSetCommentText**](Apis/ModerationApi.md#postsetcommenttext) | **POST** /auth/my-account/moderate-comments/set-comment-text/{commentId} |  |
*ModerationApi* | [**postUnFlagComment**](Apis/ModerationApi.md#postunflagcomment) | **POST** /auth/my-account/moderate-comments/un-flag-comment/{commentId} |  |
*ModerationApi* | [**postVote**](Apis/ModerationApi.md#postvote) | **POST** /auth/my-account/moderate-comments/vote/{commentId} |  |
*ModerationApi* | [**putAwardBadge**](Apis/ModerationApi.md#putawardbadge) | **PUT** /auth/my-account/moderate-comments/award-badge |  |
*ModerationApi* | [**putCloseThread**](Apis/ModerationApi.md#putclosethread) | **PUT** /auth/my-account/moderate-comments/close-thread |  |
*ModerationApi* | [**putRemoveBadge**](Apis/ModerationApi.md#putremovebadge) | **PUT** /auth/my-account/moderate-comments/remove-badge |  |
*ModerationApi* | [**putReopenThread**](Apis/ModerationApi.md#putreopenthread) | **PUT** /auth/my-account/moderate-comments/reopen-thread |  |
*ModerationApi* | [**setTrustFactor**](Apis/ModerationApi.md#settrustfactor) | **PUT** /auth/my-account/moderate-comments/set-trust-factor |  |
| *PublicApi* | [**blockFromCommentPublic**](Apis/PublicApi.md#blockfromcommentpublic) | **POST** /block-from-comment/{commentId} |  |
*PublicApi* | [**checkedCommentsForBlocked**](Apis/PublicApi.md#checkedcommentsforblocked) | **GET** /check-blocked-comments |  |
*PublicApi* | [**createCommentPublic**](Apis/PublicApi.md#createcommentpublic) | **POST** /comments/{tenantId} |  |
*PublicApi* | [**createFeedPostPublic**](Apis/PublicApi.md#createfeedpostpublic) | **POST** /feed-posts/{tenantId} |  |
*PublicApi* | [**createV1PageReact**](Apis/PublicApi.md#createv1pagereact) | **POST** /page-reacts/v1/likes/{tenantId} |  |
*PublicApi* | [**createV2PageReact**](Apis/PublicApi.md#createv2pagereact) | **POST** /page-reacts/v2/{tenantId} |  |
*PublicApi* | [**deleteCommentPublic**](Apis/PublicApi.md#deletecommentpublic) | **DELETE** /comments/{tenantId}/{commentId} |  |
*PublicApi* | [**deleteCommentVote**](Apis/PublicApi.md#deletecommentvote) | **DELETE** /comments/{tenantId}/{commentId}/vote/{voteId} |  |
*PublicApi* | [**deleteFeedPostPublic**](Apis/PublicApi.md#deletefeedpostpublic) | **DELETE** /feed-posts/{tenantId}/{postId} |  |
*PublicApi* | [**deleteV1PageReact**](Apis/PublicApi.md#deletev1pagereact) | **DELETE** /page-reacts/v1/likes/{tenantId} |  |
*PublicApi* | [**deleteV2PageReact**](Apis/PublicApi.md#deletev2pagereact) | **DELETE** /page-reacts/v2/{tenantId} |  |
*PublicApi* | [**flagCommentPublic**](Apis/PublicApi.md#flagcommentpublic) | **POST** /flag-comment/{commentId} |  |
*PublicApi* | [**getCommentText**](Apis/PublicApi.md#getcommenttext) | **GET** /comments/{tenantId}/{commentId}/text |  |
*PublicApi* | [**getCommentVoteUserNames**](Apis/PublicApi.md#getcommentvoteusernames) | **GET** /comments/{tenantId}/{commentId}/votes |  |
*PublicApi* | [**getCommentsForUser**](Apis/PublicApi.md#getcommentsforuser) | **GET** /comments-for-user |  |
*PublicApi* | [**getCommentsPublic**](Apis/PublicApi.md#getcommentspublic) | **GET** /comments/{tenantId} |  req tenantId urlId |
*PublicApi* | [**getEventLog**](Apis/PublicApi.md#geteventlog) | **GET** /event-log/{tenantId} |  req tenantId urlId userIdWS |
*PublicApi* | [**getFeedPostsPublic**](Apis/PublicApi.md#getfeedpostspublic) | **GET** /feed-posts/{tenantId} |  req tenantId afterId |
*PublicApi* | [**getFeedPostsStats**](Apis/PublicApi.md#getfeedpostsstats) | **GET** /feed-posts/{tenantId}/stats |  |
*PublicApi* | [**getGifLarge**](Apis/PublicApi.md#getgiflarge) | **GET** /gifs/get-large/{tenantId} |  |
*PublicApi* | [**getGifsSearch**](Apis/PublicApi.md#getgifssearch) | **GET** /gifs/search/{tenantId} |  |
*PublicApi* | [**getGifsTrending**](Apis/PublicApi.md#getgifstrending) | **GET** /gifs/trending/{tenantId} |  |
*PublicApi* | [**getGlobalEventLog**](Apis/PublicApi.md#getglobaleventlog) | **GET** /event-log/global/{tenantId} |  req tenantId urlId userIdWS |
*PublicApi* | [**getOfflineUsers**](Apis/PublicApi.md#getofflineusers) | **GET** /pages/{tenantId}/users/offline | Past commenters on the page who are NOT currently online. Sorted by displayName. Use this after exhausting /users/online to render a \"Members\" section. Cursor pagination on commenterName: server walks the partial {tenantId, urlId, commenterName} index from afterName forward via $gt, no $skip cost. |
*PublicApi* | [**getOnlineUsers**](Apis/PublicApi.md#getonlineusers) | **GET** /pages/{tenantId}/users/online | Currently-online viewers of a page: people whose websocket session is subscribed to the page right now. Returns anonCount + totalCount (room-wide subscribers, including anon viewers we don't enumerate). |
*PublicApi* | [**getPagesPublic**](Apis/PublicApi.md#getpagespublic) | **GET** /pages/{tenantId} | List pages for a tenant. Used by the FChat desktop client to populate its room list. Requires `enableFChat` to be true on the resolved custom config for each page. Pages that require SSO are filtered against the requesting user's group access. |
*PublicApi* | [**getTranslations**](Apis/PublicApi.md#gettranslations) | **GET** /translations/{namespace}/{component} |  |
*PublicApi* | [**getUserNotificationCount**](Apis/PublicApi.md#getusernotificationcount) | **GET** /user-notifications/get-count |  |
*PublicApi* | [**getUserNotifications**](Apis/PublicApi.md#getusernotifications) | **GET** /user-notifications |  |
*PublicApi* | [**getUserPresenceStatuses**](Apis/PublicApi.md#getuserpresencestatuses) | **GET** /user-presence-status |  |
*PublicApi* | [**getUserReactsPublic**](Apis/PublicApi.md#getuserreactspublic) | **GET** /feed-posts/{tenantId}/user-reacts |  |
*PublicApi* | [**getUsersInfo**](Apis/PublicApi.md#getusersinfo) | **GET** /pages/{tenantId}/users/info | Bulk user info for a tenant. Given userIds, return display info from User / SSOUser. Used by the comment widget to enrich users that just appeared via a presence event. No page context: privacy is enforced uniformly (private profiles are masked). |
*PublicApi* | [**getV1PageLikes**](Apis/PublicApi.md#getv1pagelikes) | **GET** /page-reacts/v1/likes/{tenantId} |  |
*PublicApi* | [**getV2PageReactUsers**](Apis/PublicApi.md#getv2pagereactusers) | **GET** /page-reacts/v2/{tenantId}/list |  |
*PublicApi* | [**getV2PageReacts**](Apis/PublicApi.md#getv2pagereacts) | **GET** /page-reacts/v2/{tenantId} |  |
*PublicApi* | [**lockComment**](Apis/PublicApi.md#lockcomment) | **POST** /comments/{tenantId}/{commentId}/lock |  |
*PublicApi* | [**logoutPublic**](Apis/PublicApi.md#logoutpublic) | **PUT** /auth/logout |  |
*PublicApi* | [**pinComment**](Apis/PublicApi.md#pincomment) | **POST** /comments/{tenantId}/{commentId}/pin |  |
*PublicApi* | [**reactFeedPostPublic**](Apis/PublicApi.md#reactfeedpostpublic) | **POST** /feed-posts/{tenantId}/react/{postId} |  |
*PublicApi* | [**resetUserNotificationCount**](Apis/PublicApi.md#resetusernotificationcount) | **POST** /user-notifications/reset-count |  |
*PublicApi* | [**resetUserNotifications**](Apis/PublicApi.md#resetusernotifications) | **POST** /user-notifications/reset |  |
*PublicApi* | [**searchUsers**](Apis/PublicApi.md#searchusers) | **GET** /user-search/{tenantId} |  |
*PublicApi* | [**setCommentText**](Apis/PublicApi.md#setcommenttext) | **POST** /comments/{tenantId}/{commentId}/update-text |  |
*PublicApi* | [**unBlockCommentPublic**](Apis/PublicApi.md#unblockcommentpublic) | **DELETE** /block-from-comment/{commentId} |  |
*PublicApi* | [**unLockComment**](Apis/PublicApi.md#unlockcomment) | **POST** /comments/{tenantId}/{commentId}/unlock |  |
*PublicApi* | [**unPinComment**](Apis/PublicApi.md#unpincomment) | **POST** /comments/{tenantId}/{commentId}/unpin |  |
*PublicApi* | [**updateFeedPostPublic**](Apis/PublicApi.md#updatefeedpostpublic) | **PUT** /feed-posts/{tenantId}/{postId} |  |
*PublicApi* | [**updateUserNotificationCommentSubscriptionStatus**](Apis/PublicApi.md#updateusernotificationcommentsubscriptionstatus) | **POST** /user-notifications/{notificationId}/mark-opted/{optedInOrOut} | Enable or disable notifications for a specific comment. |
*PublicApi* | [**updateUserNotificationPageSubscriptionStatus**](Apis/PublicApi.md#updateusernotificationpagesubscriptionstatus) | **POST** /user-notifications/set-subscription-state/{subscribedOrUnsubscribed} | Enable or disable notifications for a page. When users are subscribed to a page, notifications are created for new root comments, and also |
*PublicApi* | [**updateUserNotificationStatus**](Apis/PublicApi.md#updateusernotificationstatus) | **POST** /user-notifications/{notificationId}/mark/{newStatus} |  |
*PublicApi* | [**uploadImage**](Apis/PublicApi.md#uploadimage) | **POST** /upload-image/{tenantId} | Upload and resize an image |
*PublicApi* | [**voteComment**](Apis/PublicApi.md#votecomment) | **POST** /comments/{tenantId}/{commentId}/vote |  |


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
 - [AddPageAPIResponse](./Models/AddPageAPIResponse.md)
 - [AddSSOUserAPIResponse](./Models/AddSSOUserAPIResponse.md)
 - [AdjustCommentVotesParams](./Models/AdjustCommentVotesParams.md)
 - [AdjustVotesResponse](./Models/AdjustVotesResponse.md)
 - [AggregateQuestionResultsResponse](./Models/AggregateQuestionResultsResponse.md)
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
 - [BlockSuccess](./Models/BlockSuccess.md)
 - [BuildModerationFilterParams](./Models/BuildModerationFilterParams.md)
 - [BuildModerationFilterResponse](./Models/BuildModerationFilterResponse.md)
 - [BulkAggregateQuestionItem](./Models/BulkAggregateQuestionItem.md)
 - [BulkAggregateQuestionResultsRequest](./Models/BulkAggregateQuestionResultsRequest.md)
 - [BulkAggregateQuestionResultsResponse](./Models/BulkAggregateQuestionResultsResponse.md)
 - [BulkCreateHashTagsBody](./Models/BulkCreateHashTagsBody.md)
 - [BulkCreateHashTagsBody_tags_inner](./Models/BulkCreateHashTagsBody_tags_inner.md)
 - [BulkCreateHashTagsResponse](./Models/BulkCreateHashTagsResponse.md)
 - [BulkCreateHashTagsResponse_results_inner](./Models/BulkCreateHashTagsResponse_results_inner.md)
 - [BulkPreBanParams](./Models/BulkPreBanParams.md)
 - [BulkPreBanSummary](./Models/BulkPreBanSummary.md)
 - [ChangeCommentPinStatusResponse](./Models/ChangeCommentPinStatusResponse.md)
 - [ChangeTicketStateBody](./Models/ChangeTicketStateBody.md)
 - [ChangeTicketStateResponse](./Models/ChangeTicketStateResponse.md)
 - [CheckBlockedCommentsResponse](./Models/CheckBlockedCommentsResponse.md)
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
 - [CreateEmailTemplateBody](./Models/CreateEmailTemplateBody.md)
 - [CreateEmailTemplateResponse](./Models/CreateEmailTemplateResponse.md)
 - [CreateFeedPostParams](./Models/CreateFeedPostParams.md)
 - [CreateFeedPostResponse](./Models/CreateFeedPostResponse.md)
 - [CreateFeedPostsResponse](./Models/CreateFeedPostsResponse.md)
 - [CreateHashTagBody](./Models/CreateHashTagBody.md)
 - [CreateHashTagResponse](./Models/CreateHashTagResponse.md)
 - [CreateModeratorBody](./Models/CreateModeratorBody.md)
 - [CreateModeratorResponse](./Models/CreateModeratorResponse.md)
 - [CreateQuestionConfigBody](./Models/CreateQuestionConfigBody.md)
 - [CreateQuestionConfigResponse](./Models/CreateQuestionConfigResponse.md)
 - [CreateQuestionResultBody](./Models/CreateQuestionResultBody.md)
 - [CreateQuestionResultResponse](./Models/CreateQuestionResultResponse.md)
 - [CreateSubscriptionAPIResponse](./Models/CreateSubscriptionAPIResponse.md)
 - [CreateTenantBody](./Models/CreateTenantBody.md)
 - [CreateTenantPackageBody](./Models/CreateTenantPackageBody.md)
 - [CreateTenantPackageResponse](./Models/CreateTenantPackageResponse.md)
 - [CreateTenantResponse](./Models/CreateTenantResponse.md)
 - [CreateTenantUserBody](./Models/CreateTenantUserBody.md)
 - [CreateTenantUserResponse](./Models/CreateTenantUserResponse.md)
 - [CreateTicketBody](./Models/CreateTicketBody.md)
 - [CreateTicketResponse](./Models/CreateTicketResponse.md)
 - [CreateUserBadgeParams](./Models/CreateUserBadgeParams.md)
 - [CreateV1PageReact](./Models/CreateV1PageReact.md)
 - [CustomConfigParameters](./Models/CustomConfigParameters.md)
 - [CustomEmailTemplate](./Models/CustomEmailTemplate.md)
 - [DeleteCommentAction](./Models/DeleteCommentAction.md)
 - [DeleteCommentResult](./Models/DeleteCommentResult.md)
 - [DeleteDomainConfigResponse](./Models/DeleteDomainConfigResponse.md)
 - [DeleteFeedPostPublicResponse](./Models/DeleteFeedPostPublicResponse.md)
 - [DeleteHashTagRequestBody](./Models/DeleteHashTagRequestBody.md)
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
 - [FlagCommentResponse](./Models/FlagCommentResponse.md)
 - [GetAuditLogsResponse](./Models/GetAuditLogsResponse.md)
 - [GetBannedUsersCountResponse](./Models/GetBannedUsersCountResponse.md)
 - [GetBannedUsersFromCommentResponse](./Models/GetBannedUsersFromCommentResponse.md)
 - [GetCachedNotificationCountResponse](./Models/GetCachedNotificationCountResponse.md)
 - [GetCommentBanStatusResponse](./Models/GetCommentBanStatusResponse.md)
 - [GetCommentTextResponse](./Models/GetCommentTextResponse.md)
 - [GetCommentVoteUserNamesSuccessResponse](./Models/GetCommentVoteUserNamesSuccessResponse.md)
 - [GetCommentsForUserResponse](./Models/GetCommentsForUserResponse.md)
 - [GetCommentsResponseWithPresence_PublicComment_](./Models/GetCommentsResponseWithPresence_PublicComment_.md)
 - [GetCommentsResponse_PublicComment_](./Models/GetCommentsResponse_PublicComment_.md)
 - [GetDomainConfigResponse](./Models/GetDomainConfigResponse.md)
 - [GetDomainConfigsResponse](./Models/GetDomainConfigsResponse.md)
 - [GetDomainConfigsResponse_anyOf](./Models/GetDomainConfigsResponse_anyOf.md)
 - [GetDomainConfigsResponse_anyOf_1](./Models/GetDomainConfigsResponse_anyOf_1.md)
 - [GetEmailTemplateDefinitionsResponse](./Models/GetEmailTemplateDefinitionsResponse.md)
 - [GetEmailTemplateRenderErrorsResponse](./Models/GetEmailTemplateRenderErrorsResponse.md)
 - [GetEmailTemplateResponse](./Models/GetEmailTemplateResponse.md)
 - [GetEmailTemplatesResponse](./Models/GetEmailTemplatesResponse.md)
 - [GetEventLogResponse](./Models/GetEventLogResponse.md)
 - [GetFeedPostsResponse](./Models/GetFeedPostsResponse.md)
 - [GetGifsSearchResponse](./Models/GetGifsSearchResponse.md)
 - [GetGifsTrendingResponse](./Models/GetGifsTrendingResponse.md)
 - [GetHashTagsResponse](./Models/GetHashTagsResponse.md)
 - [GetModeratorResponse](./Models/GetModeratorResponse.md)
 - [GetModeratorsResponse](./Models/GetModeratorsResponse.md)
 - [GetMyNotificationsResponse](./Models/GetMyNotificationsResponse.md)
 - [GetNotificationCountResponse](./Models/GetNotificationCountResponse.md)
 - [GetNotificationsResponse](./Models/GetNotificationsResponse.md)
 - [GetPageByURLIdAPIResponse](./Models/GetPageByURLIdAPIResponse.md)
 - [GetPagesAPIResponse](./Models/GetPagesAPIResponse.md)
 - [GetPendingWebhookEventCountResponse](./Models/GetPendingWebhookEventCountResponse.md)
 - [GetPendingWebhookEventsResponse](./Models/GetPendingWebhookEventsResponse.md)
 - [GetPublicFeedPostsResponse](./Models/GetPublicFeedPostsResponse.md)
 - [GetPublicPagesResponse](./Models/GetPublicPagesResponse.md)
 - [GetQuestionConfigResponse](./Models/GetQuestionConfigResponse.md)
 - [GetQuestionConfigsResponse](./Models/GetQuestionConfigsResponse.md)
 - [GetQuestionResultResponse](./Models/GetQuestionResultResponse.md)
 - [GetQuestionResultsResponse](./Models/GetQuestionResultsResponse.md)
 - [GetSSOUserByEmailAPIResponse](./Models/GetSSOUserByEmailAPIResponse.md)
 - [GetSSOUserByIdAPIResponse](./Models/GetSSOUserByIdAPIResponse.md)
 - [GetSSOUsersResponse](./Models/GetSSOUsersResponse.md)
 - [GetSubscriptionsAPIResponse](./Models/GetSubscriptionsAPIResponse.md)
 - [GetTenantDailyUsagesResponse](./Models/GetTenantDailyUsagesResponse.md)
 - [GetTenantManualBadgesResponse](./Models/GetTenantManualBadgesResponse.md)
 - [GetTenantPackageResponse](./Models/GetTenantPackageResponse.md)
 - [GetTenantPackagesResponse](./Models/GetTenantPackagesResponse.md)
 - [GetTenantResponse](./Models/GetTenantResponse.md)
 - [GetTenantUserResponse](./Models/GetTenantUserResponse.md)
 - [GetTenantUsersResponse](./Models/GetTenantUsersResponse.md)
 - [GetTenantsResponse](./Models/GetTenantsResponse.md)
 - [GetTicketResponse](./Models/GetTicketResponse.md)
 - [GetTicketsResponse](./Models/GetTicketsResponse.md)
 - [GetTranslationsResponse](./Models/GetTranslationsResponse.md)
 - [GetUserInternalProfileResponse](./Models/GetUserInternalProfileResponse.md)
 - [GetUserInternalProfileResponse_profile](./Models/GetUserInternalProfileResponse_profile.md)
 - [GetUserManualBadgesResponse](./Models/GetUserManualBadgesResponse.md)
 - [GetUserNotificationCountResponse](./Models/GetUserNotificationCountResponse.md)
 - [GetUserPresenceStatusesResponse](./Models/GetUserPresenceStatusesResponse.md)
 - [GetUserResponse](./Models/GetUserResponse.md)
 - [GetUserTrustFactorResponse](./Models/GetUserTrustFactorResponse.md)
 - [GetV1PageLikes](./Models/GetV1PageLikes.md)
 - [GetV2PageReactUsersResponse](./Models/GetV2PageReactUsersResponse.md)
 - [GetV2PageReacts](./Models/GetV2PageReacts.md)
 - [GetVotesForUserResponse](./Models/GetVotesForUserResponse.md)
 - [GetVotesResponse](./Models/GetVotesResponse.md)
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
 - [PatchPageAPIResponse](./Models/PatchPageAPIResponse.md)
 - [PatchSSOUserAPIResponse](./Models/PatchSSOUserAPIResponse.md)
 - [PendingCommentToSyncOutbound](./Models/PendingCommentToSyncOutbound.md)
 - [PostRemoveCommentResponse](./Models/PostRemoveCommentResponse.md)
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
 - [PutDomainConfigResponse](./Models/PutDomainConfigResponse.md)
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
 - [ReactFeedPostResponse](./Models/ReactFeedPostResponse.md)
 - [Record_string__before_string_or_null__after_string_or_null___value](./Models/Record_string__before_string_or_null__after_string_or_null___value.md)
 - [RemoveCommentActionResponse](./Models/RemoveCommentActionResponse.md)
 - [RemoveUserBadgeResponse](./Models/RemoveUserBadgeResponse.md)
 - [RenderEmailTemplateBody](./Models/RenderEmailTemplateBody.md)
 - [RenderEmailTemplateResponse](./Models/RenderEmailTemplateResponse.md)
 - [RenderableUserNotification](./Models/RenderableUserNotification.md)
 - [RepeatCommentCheckIgnoredReason](./Models/RepeatCommentCheckIgnoredReason.md)
 - [RepeatCommentHandlingAction](./Models/RepeatCommentHandlingAction.md)
 - [ReplaceTenantPackageBody](./Models/ReplaceTenantPackageBody.md)
 - [ReplaceTenantUserBody](./Models/ReplaceTenantUserBody.md)
 - [ResetUserNotificationsResponse](./Models/ResetUserNotificationsResponse.md)
 - [SORT_DIR](./Models/SORT_DIR.md)
 - [SSOSecurityLevel](./Models/SSOSecurityLevel.md)
 - [SaveCommentResponseOptimized](./Models/SaveCommentResponseOptimized.md)
 - [SaveCommentsBulkResponse](./Models/SaveCommentsBulkResponse.md)
 - [SaveCommentsResponseWithPresence](./Models/SaveCommentsResponseWithPresence.md)
 - [SearchUsersResponse](./Models/SearchUsersResponse.md)
 - [SearchUsersResult](./Models/SearchUsersResult.md)
 - [SearchUsersSectionedResponse](./Models/SearchUsersSectionedResponse.md)
 - [SetCommentApprovedResponse](./Models/SetCommentApprovedResponse.md)
 - [SetCommentTextParams](./Models/SetCommentTextParams.md)
 - [SetCommentTextResponse](./Models/SetCommentTextResponse.md)
 - [SetCommentTextResult](./Models/SetCommentTextResult.md)
 - [SetUserTrustFactorResponse](./Models/SetUserTrustFactorResponse.md)
 - [SizePreset](./Models/SizePreset.md)
 - [SortDirections](./Models/SortDirections.md)
 - [SpamRule](./Models/SpamRule.md)
 - [TOSConfig](./Models/TOSConfig.md)
 - [TenantBadge](./Models/TenantBadge.md)
 - [TenantHashTag](./Models/TenantHashTag.md)
 - [TenantPackage](./Models/TenantPackage.md)
 - [UnBlockFromCommentParams](./Models/UnBlockFromCommentParams.md)
 - [UnblockSuccess](./Models/UnblockSuccess.md)
 - [UpdatableCommentParams](./Models/UpdatableCommentParams.md)
 - [UpdateAPIPageData](./Models/UpdateAPIPageData.md)
 - [UpdateAPISSOUserData](./Models/UpdateAPISSOUserData.md)
 - [UpdateAPIUserSubscriptionData](./Models/UpdateAPIUserSubscriptionData.md)
 - [UpdateDomainConfigParams](./Models/UpdateDomainConfigParams.md)
 - [UpdateEmailTemplateBody](./Models/UpdateEmailTemplateBody.md)
 - [UpdateFeedPostParams](./Models/UpdateFeedPostParams.md)
 - [UpdateHashTagBody](./Models/UpdateHashTagBody.md)
 - [UpdateHashTagResponse](./Models/UpdateHashTagResponse.md)
 - [UpdateModeratorBody](./Models/UpdateModeratorBody.md)
 - [UpdateNotificationBody](./Models/UpdateNotificationBody.md)
 - [UpdateQuestionConfigBody](./Models/UpdateQuestionConfigBody.md)
 - [UpdateQuestionResultBody](./Models/UpdateQuestionResultBody.md)
 - [UpdateSubscriptionAPIResponse](./Models/UpdateSubscriptionAPIResponse.md)
 - [UpdateTenantBody](./Models/UpdateTenantBody.md)
 - [UpdateTenantPackageBody](./Models/UpdateTenantPackageBody.md)
 - [UpdateTenantUserBody](./Models/UpdateTenantUserBody.md)
 - [UpdateUserBadgeParams](./Models/UpdateUserBadgeParams.md)
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
 - [VoteDeleteResponse](./Models/VoteDeleteResponse.md)
 - [VoteResponse](./Models/VoteResponse.md)
 - [VoteResponseUser](./Models/VoteResponseUser.md)
 - [VoteResponse_status](./Models/VoteResponse_status.md)
 - [VoteStyle](./Models/VoteStyle.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

<a name="api_key"></a>
### api_key

- **Type**: API key
- **API key parameter name**: x-api-key
- **Location**: HTTP header

