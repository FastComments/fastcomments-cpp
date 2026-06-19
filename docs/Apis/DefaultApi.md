# DefaultApi

All URIs are relative to *https://fastcomments.com*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addDomainConfig**](DefaultApi.md#addDomainConfig) | **POST** /api/v1/domain-configs |  |
| [**addHashTag**](DefaultApi.md#addHashTag) | **POST** /api/v1/hash-tags |  |
| [**addHashTagsBulk**](DefaultApi.md#addHashTagsBulk) | **POST** /api/v1/hash-tags/bulk |  |
| [**addPage**](DefaultApi.md#addPage) | **POST** /api/v1/pages |  |
| [**addSSOUser**](DefaultApi.md#addSSOUser) | **POST** /api/v1/sso-users |  |
| [**aggregate**](DefaultApi.md#aggregate) | **POST** /api/v1/aggregate |  |
| [**aggregateQuestionResults**](DefaultApi.md#aggregateQuestionResults) | **GET** /api/v1/question-results-aggregation |  |
| [**blockUserFromComment**](DefaultApi.md#blockUserFromComment) | **POST** /api/v1/comments/{id}/block |  |
| [**bulkAggregateQuestionResults**](DefaultApi.md#bulkAggregateQuestionResults) | **POST** /api/v1/question-results-aggregation/bulk |  |
| [**changeTicketState**](DefaultApi.md#changeTicketState) | **PATCH** /api/v1/tickets/{id}/state |  |
| [**combineCommentsWithQuestionResults**](DefaultApi.md#combineCommentsWithQuestionResults) | **GET** /api/v1/question-results-aggregation/combine/comments |  |
| [**createEmailTemplate**](DefaultApi.md#createEmailTemplate) | **POST** /api/v1/email-templates |  |
| [**createFeedPost**](DefaultApi.md#createFeedPost) | **POST** /api/v1/feed-posts |  |
| [**createModerator**](DefaultApi.md#createModerator) | **POST** /api/v1/moderators |  |
| [**createQuestionConfig**](DefaultApi.md#createQuestionConfig) | **POST** /api/v1/question-configs |  |
| [**createQuestionResult**](DefaultApi.md#createQuestionResult) | **POST** /api/v1/question-results |  |
| [**createSubscription**](DefaultApi.md#createSubscription) | **POST** /api/v1/subscriptions |  |
| [**createTenant**](DefaultApi.md#createTenant) | **POST** /api/v1/tenants |  |
| [**createTenantPackage**](DefaultApi.md#createTenantPackage) | **POST** /api/v1/tenant-packages |  |
| [**createTenantUser**](DefaultApi.md#createTenantUser) | **POST** /api/v1/tenant-users |  |
| [**createTicket**](DefaultApi.md#createTicket) | **POST** /api/v1/tickets |  |
| [**createUserBadge**](DefaultApi.md#createUserBadge) | **POST** /api/v1/user-badges |  |
| [**createVote**](DefaultApi.md#createVote) | **POST** /api/v1/votes |  |
| [**deleteComment**](DefaultApi.md#deleteComment) | **DELETE** /api/v1/comments/{id} |  |
| [**deleteDomainConfig**](DefaultApi.md#deleteDomainConfig) | **DELETE** /api/v1/domain-configs/{domain} |  |
| [**deleteEmailTemplate**](DefaultApi.md#deleteEmailTemplate) | **DELETE** /api/v1/email-templates/{id} |  |
| [**deleteEmailTemplateRenderError**](DefaultApi.md#deleteEmailTemplateRenderError) | **DELETE** /api/v1/email-templates/{id}/render-errors/{errorId} |  |
| [**deleteHashTag**](DefaultApi.md#deleteHashTag) | **DELETE** /api/v1/hash-tags/{tag} |  |
| [**deleteModerator**](DefaultApi.md#deleteModerator) | **DELETE** /api/v1/moderators/{id} |  |
| [**deleteNotificationCount**](DefaultApi.md#deleteNotificationCount) | **DELETE** /api/v1/notification-count/{id} |  |
| [**deletePage**](DefaultApi.md#deletePage) | **DELETE** /api/v1/pages/{id} |  |
| [**deletePendingWebhookEvent**](DefaultApi.md#deletePendingWebhookEvent) | **DELETE** /api/v1/pending-webhook-events/{id} |  |
| [**deleteQuestionConfig**](DefaultApi.md#deleteQuestionConfig) | **DELETE** /api/v1/question-configs/{id} |  |
| [**deleteQuestionResult**](DefaultApi.md#deleteQuestionResult) | **DELETE** /api/v1/question-results/{id} |  |
| [**deleteSSOUser**](DefaultApi.md#deleteSSOUser) | **DELETE** /api/v1/sso-users/{id} |  |
| [**deleteSubscription**](DefaultApi.md#deleteSubscription) | **DELETE** /api/v1/subscriptions/{id} |  |
| [**deleteTenant**](DefaultApi.md#deleteTenant) | **DELETE** /api/v1/tenants/{id} |  |
| [**deleteTenantPackage**](DefaultApi.md#deleteTenantPackage) | **DELETE** /api/v1/tenant-packages/{id} |  |
| [**deleteTenantUser**](DefaultApi.md#deleteTenantUser) | **DELETE** /api/v1/tenant-users/{id} |  |
| [**deleteUserBadge**](DefaultApi.md#deleteUserBadge) | **DELETE** /api/v1/user-badges/{id} |  |
| [**deleteVote**](DefaultApi.md#deleteVote) | **DELETE** /api/v1/votes/{id} |  |
| [**flagComment**](DefaultApi.md#flagComment) | **POST** /api/v1/comments/{id}/flag |  |
| [**getAuditLogs**](DefaultApi.md#getAuditLogs) | **GET** /api/v1/audit-logs |  |
| [**getCachedNotificationCount**](DefaultApi.md#getCachedNotificationCount) | **GET** /api/v1/notification-count/{id} |  |
| [**getComment**](DefaultApi.md#getComment) | **GET** /api/v1/comments/{id} |  |
| [**getComments**](DefaultApi.md#getComments) | **GET** /api/v1/comments |  |
| [**getDomainConfig**](DefaultApi.md#getDomainConfig) | **GET** /api/v1/domain-configs/{domain} |  |
| [**getDomainConfigs**](DefaultApi.md#getDomainConfigs) | **GET** /api/v1/domain-configs |  |
| [**getEmailTemplate**](DefaultApi.md#getEmailTemplate) | **GET** /api/v1/email-templates/{id} |  |
| [**getEmailTemplateDefinitions**](DefaultApi.md#getEmailTemplateDefinitions) | **GET** /api/v1/email-templates/definitions |  |
| [**getEmailTemplateRenderErrors**](DefaultApi.md#getEmailTemplateRenderErrors) | **GET** /api/v1/email-templates/{id}/render-errors |  |
| [**getEmailTemplates**](DefaultApi.md#getEmailTemplates) | **GET** /api/v1/email-templates |  |
| [**getFeedPosts**](DefaultApi.md#getFeedPosts) | **GET** /api/v1/feed-posts |  |
| [**getHashTags**](DefaultApi.md#getHashTags) | **GET** /api/v1/hash-tags |  |
| [**getModerator**](DefaultApi.md#getModerator) | **GET** /api/v1/moderators/{id} |  |
| [**getModerators**](DefaultApi.md#getModerators) | **GET** /api/v1/moderators |  |
| [**getNotificationCount**](DefaultApi.md#getNotificationCount) | **GET** /api/v1/notifications/count |  |
| [**getNotifications**](DefaultApi.md#getNotifications) | **GET** /api/v1/notifications |  |
| [**getPageByURLId**](DefaultApi.md#getPageByURLId) | **GET** /api/v1/pages/by-url-id |  |
| [**getPages**](DefaultApi.md#getPages) | **GET** /api/v1/pages |  |
| [**getPendingWebhookEventCount**](DefaultApi.md#getPendingWebhookEventCount) | **GET** /api/v1/pending-webhook-events/count |  |
| [**getPendingWebhookEvents**](DefaultApi.md#getPendingWebhookEvents) | **GET** /api/v1/pending-webhook-events |  |
| [**getQuestionConfig**](DefaultApi.md#getQuestionConfig) | **GET** /api/v1/question-configs/{id} |  |
| [**getQuestionConfigs**](DefaultApi.md#getQuestionConfigs) | **GET** /api/v1/question-configs |  |
| [**getQuestionResult**](DefaultApi.md#getQuestionResult) | **GET** /api/v1/question-results/{id} |  |
| [**getQuestionResults**](DefaultApi.md#getQuestionResults) | **GET** /api/v1/question-results |  |
| [**getSSOUserByEmail**](DefaultApi.md#getSSOUserByEmail) | **GET** /api/v1/sso-users/by-email/{email} |  |
| [**getSSOUserById**](DefaultApi.md#getSSOUserById) | **GET** /api/v1/sso-users/by-id/{id} |  |
| [**getSSOUsers**](DefaultApi.md#getSSOUsers) | **GET** /api/v1/sso-users |  |
| [**getSubscriptions**](DefaultApi.md#getSubscriptions) | **GET** /api/v1/subscriptions |  |
| [**getTenant**](DefaultApi.md#getTenant) | **GET** /api/v1/tenants/{id} |  |
| [**getTenantDailyUsages**](DefaultApi.md#getTenantDailyUsages) | **GET** /api/v1/tenant-daily-usage |  |
| [**getTenantPackage**](DefaultApi.md#getTenantPackage) | **GET** /api/v1/tenant-packages/{id} |  |
| [**getTenantPackages**](DefaultApi.md#getTenantPackages) | **GET** /api/v1/tenant-packages |  |
| [**getTenantUser**](DefaultApi.md#getTenantUser) | **GET** /api/v1/tenant-users/{id} |  |
| [**getTenantUsers**](DefaultApi.md#getTenantUsers) | **GET** /api/v1/tenant-users |  |
| [**getTenants**](DefaultApi.md#getTenants) | **GET** /api/v1/tenants |  |
| [**getTicket**](DefaultApi.md#getTicket) | **GET** /api/v1/tickets/{id} |  |
| [**getTickets**](DefaultApi.md#getTickets) | **GET** /api/v1/tickets |  |
| [**getUser**](DefaultApi.md#getUser) | **GET** /api/v1/users/{id} |  |
| [**getUserBadge**](DefaultApi.md#getUserBadge) | **GET** /api/v1/user-badges/{id} |  |
| [**getUserBadgeProgressById**](DefaultApi.md#getUserBadgeProgressById) | **GET** /api/v1/user-badge-progress/{id} |  |
| [**getUserBadgeProgressByUserId**](DefaultApi.md#getUserBadgeProgressByUserId) | **GET** /api/v1/user-badge-progress/user/{userId} |  |
| [**getUserBadgeProgressList**](DefaultApi.md#getUserBadgeProgressList) | **GET** /api/v1/user-badge-progress |  |
| [**getUserBadges**](DefaultApi.md#getUserBadges) | **GET** /api/v1/user-badges |  |
| [**getVotes**](DefaultApi.md#getVotes) | **GET** /api/v1/votes |  |
| [**getVotesForUser**](DefaultApi.md#getVotesForUser) | **GET** /api/v1/votes/for-user |  |
| [**patchDomainConfig**](DefaultApi.md#patchDomainConfig) | **PATCH** /api/v1/domain-configs/{domainToUpdate} |  |
| [**patchHashTag**](DefaultApi.md#patchHashTag) | **PATCH** /api/v1/hash-tags/{tag} |  |
| [**patchPage**](DefaultApi.md#patchPage) | **PATCH** /api/v1/pages/{id} |  |
| [**patchSSOUser**](DefaultApi.md#patchSSOUser) | **PATCH** /api/v1/sso-users/{id} |  |
| [**putDomainConfig**](DefaultApi.md#putDomainConfig) | **PUT** /api/v1/domain-configs/{domainToUpdate} |  |
| [**putSSOUser**](DefaultApi.md#putSSOUser) | **PUT** /api/v1/sso-users/{id} |  |
| [**renderEmailTemplate**](DefaultApi.md#renderEmailTemplate) | **POST** /api/v1/email-templates/render |  |
| [**replaceTenantPackage**](DefaultApi.md#replaceTenantPackage) | **PUT** /api/v1/tenant-packages/{id} |  |
| [**replaceTenantUser**](DefaultApi.md#replaceTenantUser) | **PUT** /api/v1/tenant-users/{id} |  |
| [**saveComment**](DefaultApi.md#saveComment) | **POST** /api/v1/comments |  |
| [**saveCommentsBulk**](DefaultApi.md#saveCommentsBulk) | **POST** /api/v1/comments/bulk |  |
| [**sendInvite**](DefaultApi.md#sendInvite) | **POST** /api/v1/moderators/{id}/send-invite |  |
| [**sendLoginLink**](DefaultApi.md#sendLoginLink) | **POST** /api/v1/tenant-users/{id}/send-login-link |  |
| [**unBlockUserFromComment**](DefaultApi.md#unBlockUserFromComment) | **POST** /api/v1/comments/{id}/un-block |  |
| [**unFlagComment**](DefaultApi.md#unFlagComment) | **POST** /api/v1/comments/{id}/un-flag |  |
| [**updateComment**](DefaultApi.md#updateComment) | **PATCH** /api/v1/comments/{id} |  |
| [**updateEmailTemplate**](DefaultApi.md#updateEmailTemplate) | **PATCH** /api/v1/email-templates/{id} |  |
| [**updateFeedPost**](DefaultApi.md#updateFeedPost) | **PATCH** /api/v1/feed-posts/{id} |  |
| [**updateModerator**](DefaultApi.md#updateModerator) | **PATCH** /api/v1/moderators/{id} |  |
| [**updateNotification**](DefaultApi.md#updateNotification) | **PATCH** /api/v1/notifications/{id} |  |
| [**updateQuestionConfig**](DefaultApi.md#updateQuestionConfig) | **PATCH** /api/v1/question-configs/{id} |  |
| [**updateQuestionResult**](DefaultApi.md#updateQuestionResult) | **PATCH** /api/v1/question-results/{id} |  |
| [**updateSubscription**](DefaultApi.md#updateSubscription) | **PATCH** /api/v1/subscriptions/{id} |  |
| [**updateTenant**](DefaultApi.md#updateTenant) | **PATCH** /api/v1/tenants/{id} |  |
| [**updateTenantPackage**](DefaultApi.md#updateTenantPackage) | **PATCH** /api/v1/tenant-packages/{id} |  |
| [**updateTenantUser**](DefaultApi.md#updateTenantUser) | **PATCH** /api/v1/tenant-users/{id} |  |
| [**updateUserBadge**](DefaultApi.md#updateUserBadge) | **PUT** /api/v1/user-badges/{id} |  |


<a name="addDomainConfig"></a>
# **addDomainConfig**
> AddDomainConfigResponse addDomainConfig(tenantId, AddDomainConfigParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **AddDomainConfigParams** | [**AddDomainConfigParams**](../Models/AddDomainConfigParams.md)|  | |

### Return type

[**AddDomainConfigResponse**](../Models/AddDomainConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="addHashTag"></a>
# **addHashTag**
> CreateHashTagResponse addHashTag(tenantId, CreateHashTagBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **CreateHashTagBody** | [**CreateHashTagBody**](../Models/CreateHashTagBody.md)|  | [optional] |

### Return type

[**CreateHashTagResponse**](../Models/CreateHashTagResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="addHashTagsBulk"></a>
# **addHashTagsBulk**
> BulkCreateHashTagsResponse addHashTagsBulk(tenantId, BulkCreateHashTagsBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **BulkCreateHashTagsBody** | [**BulkCreateHashTagsBody**](../Models/BulkCreateHashTagsBody.md)|  | [optional] |

### Return type

[**BulkCreateHashTagsResponse**](../Models/BulkCreateHashTagsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="addPage"></a>
# **addPage**
> AddPageAPIResponse addPage(tenantId, CreateAPIPageData)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateAPIPageData** | [**CreateAPIPageData**](../Models/CreateAPIPageData.md)|  | |

### Return type

[**AddPageAPIResponse**](../Models/AddPageAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="addSSOUser"></a>
# **addSSOUser**
> AddSSOUserAPIResponse addSSOUser(tenantId, CreateAPISSOUserData)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateAPISSOUserData** | [**CreateAPISSOUserData**](../Models/CreateAPISSOUserData.md)|  | |

### Return type

[**AddSSOUserAPIResponse**](../Models/AddSSOUserAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="aggregate"></a>
# **aggregate**
> AggregateResponse aggregate(tenantId, AggregationRequest, parentTenantId, includeStats)



    Aggregates documents by grouping them (if groupBy is provided) and applying multiple operations. Different operations (e.g. sum, countDistinct, avg, etc.) are supported.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **AggregationRequest** | [**AggregationRequest**](../Models/AggregationRequest.md)|  | |
| **parentTenantId** | **String**|  | [optional] [default to null] |
| **includeStats** | **Boolean**|  | [optional] [default to null] |

### Return type

[**AggregateResponse**](../Models/AggregateResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="aggregateQuestionResults"></a>
# **aggregateQuestionResults**
> AggregateQuestionResultsResponse aggregateQuestionResults(tenantId, questionId, questionIds, urlId, timeBucket, startDate, forceRecalculate)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **questionId** | **String**|  | [optional] [default to null] |
| **questionIds** | [**List**](../Models/String.md)|  | [optional] [default to null] |
| **urlId** | **String**|  | [optional] [default to null] |
| **timeBucket** | [**AggregateTimeBucket**](../Models/.md)|  | [optional] [default to null] [enum: day, month, year] |
| **startDate** | **Date**|  | [optional] [default to null] |
| **forceRecalculate** | **Boolean**|  | [optional] [default to null] |

### Return type

[**AggregateQuestionResultsResponse**](../Models/AggregateQuestionResultsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="blockUserFromComment"></a>
# **blockUserFromComment**
> BlockSuccess blockUserFromComment(tenantId, id, BlockFromCommentParams, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **BlockFromCommentParams** | [**BlockFromCommentParams**](../Models/BlockFromCommentParams.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**BlockSuccess**](../Models/BlockSuccess.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="bulkAggregateQuestionResults"></a>
# **bulkAggregateQuestionResults**
> BulkAggregateQuestionResultsResponse bulkAggregateQuestionResults(tenantId, BulkAggregateQuestionResultsRequest, forceRecalculate)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **BulkAggregateQuestionResultsRequest** | [**BulkAggregateQuestionResultsRequest**](../Models/BulkAggregateQuestionResultsRequest.md)|  | |
| **forceRecalculate** | **Boolean**|  | [optional] [default to null] |

### Return type

[**BulkAggregateQuestionResultsResponse**](../Models/BulkAggregateQuestionResultsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="changeTicketState"></a>
# **changeTicketState**
> ChangeTicketStateResponse changeTicketState(tenantId, userId, id, ChangeTicketStateBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **ChangeTicketStateBody** | [**ChangeTicketStateBody**](../Models/ChangeTicketStateBody.md)|  | |

### Return type

[**ChangeTicketStateResponse**](../Models/ChangeTicketStateResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="combineCommentsWithQuestionResults"></a>
# **combineCommentsWithQuestionResults**
> CombineQuestionResultsWithCommentsResponse combineCommentsWithQuestionResults(tenantId, questionId, questionIds, urlId, startDate, forceRecalculate, minValue, maxValue, limit)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **questionId** | **String**|  | [optional] [default to null] |
| **questionIds** | [**List**](../Models/String.md)|  | [optional] [default to null] |
| **urlId** | **String**|  | [optional] [default to null] |
| **startDate** | **Date**|  | [optional] [default to null] |
| **forceRecalculate** | **Boolean**|  | [optional] [default to null] |
| **minValue** | **Double**|  | [optional] [default to null] |
| **maxValue** | **Double**|  | [optional] [default to null] |
| **limit** | **Double**|  | [optional] [default to null] |

### Return type

[**CombineQuestionResultsWithCommentsResponse**](../Models/CombineQuestionResultsWithCommentsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="createEmailTemplate"></a>
# **createEmailTemplate**
> CreateEmailTemplateResponse createEmailTemplate(tenantId, CreateEmailTemplateBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateEmailTemplateBody** | [**CreateEmailTemplateBody**](../Models/CreateEmailTemplateBody.md)|  | |

### Return type

[**CreateEmailTemplateResponse**](../Models/CreateEmailTemplateResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createFeedPost"></a>
# **createFeedPost**
> CreateFeedPostsResponse createFeedPost(tenantId, CreateFeedPostParams, broadcastId, isLive, doSpamCheck, skipDupCheck)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateFeedPostParams** | [**CreateFeedPostParams**](../Models/CreateFeedPostParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **isLive** | **Boolean**|  | [optional] [default to null] |
| **doSpamCheck** | **Boolean**|  | [optional] [default to null] |
| **skipDupCheck** | **Boolean**|  | [optional] [default to null] |

### Return type

[**CreateFeedPostsResponse**](../Models/CreateFeedPostsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createModerator"></a>
# **createModerator**
> CreateModeratorResponse createModerator(tenantId, CreateModeratorBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateModeratorBody** | [**CreateModeratorBody**](../Models/CreateModeratorBody.md)|  | |

### Return type

[**CreateModeratorResponse**](../Models/CreateModeratorResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createQuestionConfig"></a>
# **createQuestionConfig**
> CreateQuestionConfigResponse createQuestionConfig(tenantId, CreateQuestionConfigBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateQuestionConfigBody** | [**CreateQuestionConfigBody**](../Models/CreateQuestionConfigBody.md)|  | |

### Return type

[**CreateQuestionConfigResponse**](../Models/CreateQuestionConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createQuestionResult"></a>
# **createQuestionResult**
> CreateQuestionResultResponse createQuestionResult(tenantId, CreateQuestionResultBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateQuestionResultBody** | [**CreateQuestionResultBody**](../Models/CreateQuestionResultBody.md)|  | |

### Return type

[**CreateQuestionResultResponse**](../Models/CreateQuestionResultResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createSubscription"></a>
# **createSubscription**
> CreateSubscriptionAPIResponse createSubscription(tenantId, CreateAPIUserSubscriptionData)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateAPIUserSubscriptionData** | [**CreateAPIUserSubscriptionData**](../Models/CreateAPIUserSubscriptionData.md)|  | |

### Return type

[**CreateSubscriptionAPIResponse**](../Models/CreateSubscriptionAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createTenant"></a>
# **createTenant**
> CreateTenantResponse createTenant(tenantId, CreateTenantBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateTenantBody** | [**CreateTenantBody**](../Models/CreateTenantBody.md)|  | |

### Return type

[**CreateTenantResponse**](../Models/CreateTenantResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createTenantPackage"></a>
# **createTenantPackage**
> CreateTenantPackageResponse createTenantPackage(tenantId, CreateTenantPackageBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateTenantPackageBody** | [**CreateTenantPackageBody**](../Models/CreateTenantPackageBody.md)|  | |

### Return type

[**CreateTenantPackageResponse**](../Models/CreateTenantPackageResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createTenantUser"></a>
# **createTenantUser**
> CreateTenantUserResponse createTenantUser(tenantId, CreateTenantUserBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateTenantUserBody** | [**CreateTenantUserBody**](../Models/CreateTenantUserBody.md)|  | |

### Return type

[**CreateTenantUserResponse**](../Models/CreateTenantUserResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createTicket"></a>
# **createTicket**
> CreateTicketResponse createTicket(tenantId, userId, CreateTicketBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [default to null] |
| **CreateTicketBody** | [**CreateTicketBody**](../Models/CreateTicketBody.md)|  | |

### Return type

[**CreateTicketResponse**](../Models/CreateTicketResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createUserBadge"></a>
# **createUserBadge**
> APICreateUserBadgeResponse createUserBadge(tenantId, CreateUserBadgeParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateUserBadgeParams** | [**CreateUserBadgeParams**](../Models/CreateUserBadgeParams.md)|  | |

### Return type

[**APICreateUserBadgeResponse**](../Models/APICreateUserBadgeResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createVote"></a>
# **createVote**
> VoteResponse createVote(tenantId, commentId, direction, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **direction** | **String**|  | [default to null] [enum: up, down] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**VoteResponse**](../Models/VoteResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteComment"></a>
# **deleteComment**
> DeleteCommentResult deleteComment(tenantId, id, contextUserId, isLive)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **contextUserId** | **String**|  | [optional] [default to null] |
| **isLive** | **Boolean**|  | [optional] [default to null] |

### Return type

[**DeleteCommentResult**](../Models/DeleteCommentResult.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteDomainConfig"></a>
# **deleteDomainConfig**
> DeleteDomainConfigResponse deleteDomainConfig(tenantId, domain)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domain** | **String**|  | [default to null] |

### Return type

[**DeleteDomainConfigResponse**](../Models/DeleteDomainConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteEmailTemplate"></a>
# **deleteEmailTemplate**
> APIEmptyResponse deleteEmailTemplate(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteEmailTemplateRenderError"></a>
# **deleteEmailTemplateRenderError**
> APIEmptyResponse deleteEmailTemplateRenderError(tenantId, id, errorId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **errorId** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteHashTag"></a>
# **deleteHashTag**
> APIEmptyResponse deleteHashTag(tag, tenantId, DeleteHashTagRequestBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tag** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **DeleteHashTagRequestBody** | [**DeleteHashTagRequestBody**](../Models/DeleteHashTagRequestBody.md)|  | [optional] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="deleteModerator"></a>
# **deleteModerator**
> APIEmptyResponse deleteModerator(tenantId, id, sendEmail)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **sendEmail** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteNotificationCount"></a>
# **deleteNotificationCount**
> APIEmptyResponse deleteNotificationCount(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deletePage"></a>
# **deletePage**
> DeletePageAPIResponse deletePage(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**DeletePageAPIResponse**](../Models/DeletePageAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deletePendingWebhookEvent"></a>
# **deletePendingWebhookEvent**
> APIEmptyResponse deletePendingWebhookEvent(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteQuestionConfig"></a>
# **deleteQuestionConfig**
> APIEmptyResponse deleteQuestionConfig(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteQuestionResult"></a>
# **deleteQuestionResult**
> APIEmptyResponse deleteQuestionResult(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteSSOUser"></a>
# **deleteSSOUser**
> DeleteSSOUserAPIResponse deleteSSOUser(tenantId, id, deleteComments, commentDeleteMode)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **deleteComments** | **Boolean**|  | [optional] [default to null] |
| **commentDeleteMode** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteSSOUserAPIResponse**](../Models/DeleteSSOUserAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteSubscription"></a>
# **deleteSubscription**
> DeleteSubscriptionAPIResponse deleteSubscription(tenantId, id, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteSubscriptionAPIResponse**](../Models/DeleteSubscriptionAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteTenant"></a>
# **deleteTenant**
> APIEmptyResponse deleteTenant(tenantId, id, sure)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **sure** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteTenantPackage"></a>
# **deleteTenantPackage**
> APIEmptyResponse deleteTenantPackage(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteTenantUser"></a>
# **deleteTenantUser**
> APIEmptyResponse deleteTenantUser(tenantId, id, deleteComments, commentDeleteMode)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **deleteComments** | **String**|  | [optional] [default to null] |
| **commentDeleteMode** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteUserBadge"></a>
# **deleteUserBadge**
> APIEmptySuccessResponse deleteUserBadge(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIEmptySuccessResponse**](../Models/APIEmptySuccessResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteVote"></a>
# **deleteVote**
> VoteDeleteResponse deleteVote(tenantId, id, editKey)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **editKey** | **String**|  | [optional] [default to null] |

### Return type

[**VoteDeleteResponse**](../Models/VoteDeleteResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="flagComment"></a>
# **flagComment**
> FlagCommentResponse flagComment(tenantId, id, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentResponse**](../Models/FlagCommentResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAuditLogs"></a>
# **getAuditLogs**
> GetAuditLogsResponse getAuditLogs(tenantId, limit, skip, order, after, before)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **limit** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |
| **order** | [**SORT_DIR**](../Models/.md)|  | [optional] [default to null] [enum: ASC, DESC] |
| **after** | **Double**|  | [optional] [default to null] |
| **before** | **Double**|  | [optional] [default to null] |

### Return type

[**GetAuditLogsResponse**](../Models/GetAuditLogsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCachedNotificationCount"></a>
# **getCachedNotificationCount**
> GetCachedNotificationCountResponse getCachedNotificationCount(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetCachedNotificationCountResponse**](../Models/GetCachedNotificationCountResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getComment"></a>
# **getComment**
> APIGetCommentResponse getComment(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIGetCommentResponse**](../Models/APIGetCommentResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getComments"></a>
# **getComments**
> APIGetCommentsResponse getComments(tenantId, page, limit, skip, asTree, skipChildren, limitChildren, maxTreeDepth, urlId, userId, anonUserId, contextUserId, hashTag, parentId, direction, fromDate, toDate)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **page** | **Integer**|  | [optional] [default to null] |
| **limit** | **Integer**|  | [optional] [default to null] |
| **skip** | **Integer**|  | [optional] [default to null] |
| **asTree** | **Boolean**|  | [optional] [default to null] |
| **skipChildren** | **Integer**|  | [optional] [default to null] |
| **limitChildren** | **Integer**|  | [optional] [default to null] |
| **maxTreeDepth** | **Integer**|  | [optional] [default to null] |
| **urlId** | **String**|  | [optional] [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |
| **contextUserId** | **String**|  | [optional] [default to null] |
| **hashTag** | **String**|  | [optional] [default to null] |
| **parentId** | **String**|  | [optional] [default to null] |
| **direction** | [**SortDirections**](../Models/.md)|  | [optional] [default to null] [enum: OF, NF, MR] |
| **fromDate** | **Long**|  | [optional] [default to null] |
| **toDate** | **Long**|  | [optional] [default to null] |

### Return type

[**APIGetCommentsResponse**](../Models/APIGetCommentsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getDomainConfig"></a>
# **getDomainConfig**
> GetDomainConfigResponse getDomainConfig(tenantId, domain)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domain** | **String**|  | [default to null] |

### Return type

[**GetDomainConfigResponse**](../Models/GetDomainConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getDomainConfigs"></a>
# **getDomainConfigs**
> GetDomainConfigsResponse getDomainConfigs(tenantId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |

### Return type

[**GetDomainConfigsResponse**](../Models/GetDomainConfigsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplate"></a>
# **getEmailTemplate**
> GetEmailTemplateResponse getEmailTemplate(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetEmailTemplateResponse**](../Models/GetEmailTemplateResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplateDefinitions"></a>
# **getEmailTemplateDefinitions**
> GetEmailTemplateDefinitionsResponse getEmailTemplateDefinitions(tenantId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |

### Return type

[**GetEmailTemplateDefinitionsResponse**](../Models/GetEmailTemplateDefinitionsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplateRenderErrors"></a>
# **getEmailTemplateRenderErrors**
> GetEmailTemplateRenderErrorsResponse getEmailTemplateRenderErrors(tenantId, id, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetEmailTemplateRenderErrorsResponse**](../Models/GetEmailTemplateRenderErrorsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplates"></a>
# **getEmailTemplates**
> GetEmailTemplatesResponse getEmailTemplates(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetEmailTemplatesResponse**](../Models/GetEmailTemplatesResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFeedPosts"></a>
# **getFeedPosts**
> GetFeedPostsResponse getFeedPosts(tenantId, afterId, limit, tags)



     req tenantId afterId

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **afterId** | **String**|  | [optional] [default to null] |
| **limit** | **Integer**|  | [optional] [default to null] |
| **tags** | [**List**](../Models/String.md)|  | [optional] [default to null] |

### Return type

[**GetFeedPostsResponse**](../Models/GetFeedPostsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getHashTags"></a>
# **getHashTags**
> GetHashTagsResponse getHashTags(tenantId, page)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **page** | **Double**|  | [optional] [default to null] |

### Return type

[**GetHashTagsResponse**](../Models/GetHashTagsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerator"></a>
# **getModerator**
> GetModeratorResponse getModerator(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetModeratorResponse**](../Models/GetModeratorResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerators"></a>
# **getModerators**
> GetModeratorsResponse getModerators(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetModeratorsResponse**](../Models/GetModeratorsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNotificationCount"></a>
# **getNotificationCount**
> GetNotificationCountResponse getNotificationCount(tenantId, userId, urlId, fromCommentId, viewed, type)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **urlId** | **String**|  | [optional] [default to null] |
| **fromCommentId** | **String**|  | [optional] [default to null] |
| **viewed** | **Boolean**|  | [optional] [default to null] |
| **type** | **String**|  | [optional] [default to null] |

### Return type

[**GetNotificationCountResponse**](../Models/GetNotificationCountResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNotifications"></a>
# **getNotifications**
> GetNotificationsResponse getNotifications(tenantId, userId, urlId, fromCommentId, viewed, type, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **urlId** | **String**|  | [optional] [default to null] |
| **fromCommentId** | **String**|  | [optional] [default to null] |
| **viewed** | **Boolean**|  | [optional] [default to null] |
| **type** | **String**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetNotificationsResponse**](../Models/GetNotificationsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPageByURLId"></a>
# **getPageByURLId**
> GetPageByURLIdAPIResponse getPageByURLId(tenantId, urlId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |

### Return type

[**GetPageByURLIdAPIResponse**](../Models/GetPageByURLIdAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPages"></a>
# **getPages**
> GetPagesAPIResponse getPages(tenantId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |

### Return type

[**GetPagesAPIResponse**](../Models/GetPagesAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPendingWebhookEventCount"></a>
# **getPendingWebhookEventCount**
> GetPendingWebhookEventCountResponse getPendingWebhookEventCount(tenantId, commentId, externalId, eventType, type, domain, attemptCountGT)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [optional] [default to null] |
| **externalId** | **String**|  | [optional] [default to null] |
| **eventType** | **String**|  | [optional] [default to null] |
| **type** | **String**|  | [optional] [default to null] |
| **domain** | **String**|  | [optional] [default to null] |
| **attemptCountGT** | **Double**|  | [optional] [default to null] |

### Return type

[**GetPendingWebhookEventCountResponse**](../Models/GetPendingWebhookEventCountResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPendingWebhookEvents"></a>
# **getPendingWebhookEvents**
> GetPendingWebhookEventsResponse getPendingWebhookEvents(tenantId, commentId, externalId, eventType, type, domain, attemptCountGT, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [optional] [default to null] |
| **externalId** | **String**|  | [optional] [default to null] |
| **eventType** | **String**|  | [optional] [default to null] |
| **type** | **String**|  | [optional] [default to null] |
| **domain** | **String**|  | [optional] [default to null] |
| **attemptCountGT** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetPendingWebhookEventsResponse**](../Models/GetPendingWebhookEventsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionConfig"></a>
# **getQuestionConfig**
> GetQuestionConfigResponse getQuestionConfig(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetQuestionConfigResponse**](../Models/GetQuestionConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionConfigs"></a>
# **getQuestionConfigs**
> GetQuestionConfigsResponse getQuestionConfigs(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetQuestionConfigsResponse**](../Models/GetQuestionConfigsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionResult"></a>
# **getQuestionResult**
> GetQuestionResultResponse getQuestionResult(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetQuestionResultResponse**](../Models/GetQuestionResultResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionResults"></a>
# **getQuestionResults**
> GetQuestionResultsResponse getQuestionResults(tenantId, urlId, userId, startDate, questionId, questionIds, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [optional] [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **startDate** | **String**|  | [optional] [default to null] |
| **questionId** | **String**|  | [optional] [default to null] |
| **questionIds** | **String**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetQuestionResultsResponse**](../Models/GetQuestionResultsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSSOUserByEmail"></a>
# **getSSOUserByEmail**
> GetSSOUserByEmailAPIResponse getSSOUserByEmail(tenantId, email)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **email** | **String**|  | [default to null] |

### Return type

[**GetSSOUserByEmailAPIResponse**](../Models/GetSSOUserByEmailAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSSOUserById"></a>
# **getSSOUserById**
> GetSSOUserByIdAPIResponse getSSOUserById(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetSSOUserByIdAPIResponse**](../Models/GetSSOUserByIdAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSSOUsers"></a>
# **getSSOUsers**
> GetSSOUsersResponse getSSOUsers(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Integer**|  | [optional] [default to null] |

### Return type

[**GetSSOUsersResponse**](../Models/GetSSOUsersResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSubscriptions"></a>
# **getSubscriptions**
> GetSubscriptionsAPIResponse getSubscriptions(tenantId, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |

### Return type

[**GetSubscriptionsAPIResponse**](../Models/GetSubscriptionsAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenant"></a>
# **getTenant**
> GetTenantResponse getTenant(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetTenantResponse**](../Models/GetTenantResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantDailyUsages"></a>
# **getTenantDailyUsages**
> GetTenantDailyUsagesResponse getTenantDailyUsages(tenantId, yearNumber, monthNumber, dayNumber, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **yearNumber** | **Double**|  | [optional] [default to null] |
| **monthNumber** | **Double**|  | [optional] [default to null] |
| **dayNumber** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantDailyUsagesResponse**](../Models/GetTenantDailyUsagesResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantPackage"></a>
# **getTenantPackage**
> GetTenantPackageResponse getTenantPackage(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetTenantPackageResponse**](../Models/GetTenantPackageResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantPackages"></a>
# **getTenantPackages**
> GetTenantPackagesResponse getTenantPackages(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantPackagesResponse**](../Models/GetTenantPackagesResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantUser"></a>
# **getTenantUser**
> GetTenantUserResponse getTenantUser(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetTenantUserResponse**](../Models/GetTenantUserResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantUsers"></a>
# **getTenantUsers**
> GetTenantUsersResponse getTenantUsers(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantUsersResponse**](../Models/GetTenantUsersResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenants"></a>
# **getTenants**
> GetTenantsResponse getTenants(tenantId, meta, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **meta** | **String**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantsResponse**](../Models/GetTenantsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTicket"></a>
# **getTicket**
> GetTicketResponse getTicket(tenantId, id, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |

### Return type

[**GetTicketResponse**](../Models/GetTicketResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTickets"></a>
# **getTickets**
> GetTicketsResponse getTickets(tenantId, userId, state, skip, limit)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **state** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |
| **limit** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTicketsResponse**](../Models/GetTicketsResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUser"></a>
# **getUser**
> GetUserResponse getUser(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetUserResponse**](../Models/GetUserResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadge"></a>
# **getUserBadge**
> APIGetUserBadgeResponse getUserBadge(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIGetUserBadgeResponse**](../Models/APIGetUserBadgeResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadgeProgressById"></a>
# **getUserBadgeProgressById**
> APIGetUserBadgeProgressResponse getUserBadgeProgressById(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**APIGetUserBadgeProgressResponse**](../Models/APIGetUserBadgeProgressResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadgeProgressByUserId"></a>
# **getUserBadgeProgressByUserId**
> APIGetUserBadgeProgressResponse getUserBadgeProgressByUserId(tenantId, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [default to null] |

### Return type

[**APIGetUserBadgeProgressResponse**](../Models/APIGetUserBadgeProgressResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadgeProgressList"></a>
# **getUserBadgeProgressList**
> APIGetUserBadgeProgressListResponse getUserBadgeProgressList(tenantId, userId, limit, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **limit** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**APIGetUserBadgeProgressListResponse**](../Models/APIGetUserBadgeProgressListResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadges"></a>
# **getUserBadges**
> APIGetUserBadgesResponse getUserBadges(tenantId, userId, badgeId, type, displayedOnComments, limit, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **badgeId** | **String**|  | [optional] [default to null] |
| **type** | **Double**|  | [optional] [default to null] |
| **displayedOnComments** | **Boolean**|  | [optional] [default to null] |
| **limit** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**APIGetUserBadgesResponse**](../Models/APIGetUserBadgesResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVotes"></a>
# **getVotes**
> GetVotesResponse getVotes(tenantId, urlId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |

### Return type

[**GetVotesResponse**](../Models/GetVotesResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVotesForUser"></a>
# **getVotesForUser**
> GetVotesForUserResponse getVotesForUser(tenantId, urlId, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**GetVotesForUserResponse**](../Models/GetVotesForUserResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="patchDomainConfig"></a>
# **patchDomainConfig**
> PatchDomainConfigResponse patchDomainConfig(tenantId, domainToUpdate, PatchDomainConfigParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domainToUpdate** | **String**|  | [default to null] |
| **PatchDomainConfigParams** | [**PatchDomainConfigParams**](../Models/PatchDomainConfigParams.md)|  | |

### Return type

[**PatchDomainConfigResponse**](../Models/PatchDomainConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="patchHashTag"></a>
# **patchHashTag**
> UpdateHashTagResponse patchHashTag(tag, tenantId, UpdateHashTagBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tag** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **UpdateHashTagBody** | [**UpdateHashTagBody**](../Models/UpdateHashTagBody.md)|  | [optional] |

### Return type

[**UpdateHashTagResponse**](../Models/UpdateHashTagResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="patchPage"></a>
# **patchPage**
> PatchPageAPIResponse patchPage(tenantId, id, UpdateAPIPageData)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateAPIPageData** | [**UpdateAPIPageData**](../Models/UpdateAPIPageData.md)|  | |

### Return type

[**PatchPageAPIResponse**](../Models/PatchPageAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="patchSSOUser"></a>
# **patchSSOUser**
> PatchSSOUserAPIResponse patchSSOUser(tenantId, id, UpdateAPISSOUserData, updateComments)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateAPISSOUserData** | [**UpdateAPISSOUserData**](../Models/UpdateAPISSOUserData.md)|  | |
| **updateComments** | **Boolean**|  | [optional] [default to null] |

### Return type

[**PatchSSOUserAPIResponse**](../Models/PatchSSOUserAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="putDomainConfig"></a>
# **putDomainConfig**
> PutDomainConfigResponse putDomainConfig(tenantId, domainToUpdate, UpdateDomainConfigParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domainToUpdate** | **String**|  | [default to null] |
| **UpdateDomainConfigParams** | [**UpdateDomainConfigParams**](../Models/UpdateDomainConfigParams.md)|  | |

### Return type

[**PutDomainConfigResponse**](../Models/PutDomainConfigResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="putSSOUser"></a>
# **putSSOUser**
> PutSSOUserAPIResponse putSSOUser(tenantId, id, UpdateAPISSOUserData, updateComments)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateAPISSOUserData** | [**UpdateAPISSOUserData**](../Models/UpdateAPISSOUserData.md)|  | |
| **updateComments** | **Boolean**|  | [optional] [default to null] |

### Return type

[**PutSSOUserAPIResponse**](../Models/PutSSOUserAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="renderEmailTemplate"></a>
# **renderEmailTemplate**
> RenderEmailTemplateResponse renderEmailTemplate(tenantId, RenderEmailTemplateBody, locale)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **RenderEmailTemplateBody** | [**RenderEmailTemplateBody**](../Models/RenderEmailTemplateBody.md)|  | |
| **locale** | **String**|  | [optional] [default to null] |

### Return type

[**RenderEmailTemplateResponse**](../Models/RenderEmailTemplateResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="replaceTenantPackage"></a>
# **replaceTenantPackage**
> APIEmptyResponse replaceTenantPackage(tenantId, id, ReplaceTenantPackageBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **ReplaceTenantPackageBody** | [**ReplaceTenantPackageBody**](../Models/ReplaceTenantPackageBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="replaceTenantUser"></a>
# **replaceTenantUser**
> APIEmptyResponse replaceTenantUser(tenantId, id, ReplaceTenantUserBody, updateComments)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **ReplaceTenantUserBody** | [**ReplaceTenantUserBody**](../Models/ReplaceTenantUserBody.md)|  | |
| **updateComments** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="saveComment"></a>
# **saveComment**
> APISaveCommentResponse saveComment(tenantId, CreateCommentParams, isLive, doSpamCheck, sendEmails, populateNotifications)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateCommentParams** | [**CreateCommentParams**](../Models/CreateCommentParams.md)|  | |
| **isLive** | **Boolean**|  | [optional] [default to null] |
| **doSpamCheck** | **Boolean**|  | [optional] [default to null] |
| **sendEmails** | **Boolean**|  | [optional] [default to null] |
| **populateNotifications** | **Boolean**|  | [optional] [default to null] |

### Return type

[**APISaveCommentResponse**](../Models/APISaveCommentResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="saveCommentsBulk"></a>
# **saveCommentsBulk**
> List saveCommentsBulk(tenantId, CreateCommentParams, isLive, doSpamCheck, sendEmails, populateNotifications)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateCommentParams** | [**List**](../Models/CreateCommentParams.md)|  | |
| **isLive** | **Boolean**|  | [optional] [default to null] |
| **doSpamCheck** | **Boolean**|  | [optional] [default to null] |
| **sendEmails** | **Boolean**|  | [optional] [default to null] |
| **populateNotifications** | **Boolean**|  | [optional] [default to null] |

### Return type

[**List**](../Models/SaveCommentsBulkResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="sendInvite"></a>
# **sendInvite**
> APIEmptyResponse sendInvite(tenantId, id, fromName)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **fromName** | **String**|  | [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="sendLoginLink"></a>
# **sendLoginLink**
> APIEmptyResponse sendLoginLink(tenantId, id, redirectURL)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **redirectURL** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="unBlockUserFromComment"></a>
# **unBlockUserFromComment**
> UnblockSuccess unBlockUserFromComment(tenantId, id, UnBlockFromCommentParams, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UnBlockFromCommentParams** | [**UnBlockFromCommentParams**](../Models/UnBlockFromCommentParams.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**UnblockSuccess**](../Models/UnblockSuccess.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="unFlagComment"></a>
# **unFlagComment**
> FlagCommentResponse unFlagComment(tenantId, id, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentResponse**](../Models/FlagCommentResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateComment"></a>
# **updateComment**
> APIEmptyResponse updateComment(tenantId, id, UpdatableCommentParams, contextUserId, doSpamCheck, isLive)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdatableCommentParams** | [**UpdatableCommentParams**](../Models/UpdatableCommentParams.md)|  | |
| **contextUserId** | **String**|  | [optional] [default to null] |
| **doSpamCheck** | **Boolean**|  | [optional] [default to null] |
| **isLive** | **Boolean**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateEmailTemplate"></a>
# **updateEmailTemplate**
> APIEmptyResponse updateEmailTemplate(tenantId, id, UpdateEmailTemplateBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateEmailTemplateBody** | [**UpdateEmailTemplateBody**](../Models/UpdateEmailTemplateBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateFeedPost"></a>
# **updateFeedPost**
> APIEmptyResponse updateFeedPost(tenantId, id, FeedPost)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **FeedPost** | [**FeedPost**](../Models/FeedPost.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateModerator"></a>
# **updateModerator**
> APIEmptyResponse updateModerator(tenantId, id, UpdateModeratorBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateModeratorBody** | [**UpdateModeratorBody**](../Models/UpdateModeratorBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateNotification"></a>
# **updateNotification**
> APIEmptyResponse updateNotification(tenantId, id, UpdateNotificationBody, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateNotificationBody** | [**UpdateNotificationBody**](../Models/UpdateNotificationBody.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateQuestionConfig"></a>
# **updateQuestionConfig**
> APIEmptyResponse updateQuestionConfig(tenantId, id, UpdateQuestionConfigBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateQuestionConfigBody** | [**UpdateQuestionConfigBody**](../Models/UpdateQuestionConfigBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateQuestionResult"></a>
# **updateQuestionResult**
> APIEmptyResponse updateQuestionResult(tenantId, id, UpdateQuestionResultBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateQuestionResultBody** | [**UpdateQuestionResultBody**](../Models/UpdateQuestionResultBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateSubscription"></a>
# **updateSubscription**
> UpdateSubscriptionAPIResponse updateSubscription(tenantId, id, UpdateAPIUserSubscriptionData, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateAPIUserSubscriptionData** | [**UpdateAPIUserSubscriptionData**](../Models/UpdateAPIUserSubscriptionData.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |

### Return type

[**UpdateSubscriptionAPIResponse**](../Models/UpdateSubscriptionAPIResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateTenant"></a>
# **updateTenant**
> APIEmptyResponse updateTenant(tenantId, id, UpdateTenantBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateTenantBody** | [**UpdateTenantBody**](../Models/UpdateTenantBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateTenantPackage"></a>
# **updateTenantPackage**
> APIEmptyResponse updateTenantPackage(tenantId, id, UpdateTenantPackageBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateTenantPackageBody** | [**UpdateTenantPackageBody**](../Models/UpdateTenantPackageBody.md)|  | |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateTenantUser"></a>
# **updateTenantUser**
> APIEmptyResponse updateTenantUser(tenantId, id, UpdateTenantUserBody, updateComments)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateTenantUserBody** | [**UpdateTenantUserBody**](../Models/UpdateTenantUserBody.md)|  | |
| **updateComments** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateUserBadge"></a>
# **updateUserBadge**
> APIEmptySuccessResponse updateUserBadge(tenantId, id, UpdateUserBadgeParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateUserBadgeParams** | [**UpdateUserBadgeParams**](../Models/UpdateUserBadgeParams.md)|  | |

### Return type

[**APIEmptySuccessResponse**](../Models/APIEmptySuccessResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

