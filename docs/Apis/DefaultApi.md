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
| [**updateTenant**](DefaultApi.md#updateTenant) | **PATCH** /api/v1/tenants/{id} |  |
| [**updateTenantPackage**](DefaultApi.md#updateTenantPackage) | **PATCH** /api/v1/tenant-packages/{id} |  |
| [**updateTenantUser**](DefaultApi.md#updateTenantUser) | **PATCH** /api/v1/tenant-users/{id} |  |
| [**updateUserBadge**](DefaultApi.md#updateUserBadge) | **PUT** /api/v1/user-badges/{id} |  |


<a name="addDomainConfig"></a>
# **addDomainConfig**
> AddDomainConfig_200_response addDomainConfig(tenantId, AddDomainConfigParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **AddDomainConfigParams** | [**AddDomainConfigParams**](../Models/AddDomainConfigParams.md)|  | |

### Return type

[**AddDomainConfig_200_response**](../Models/AddDomainConfig_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="addHashTag"></a>
# **addHashTag**
> AddHashTag_200_response addHashTag(tenantId, CreateHashTagBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **CreateHashTagBody** | [**CreateHashTagBody**](../Models/CreateHashTagBody.md)|  | [optional] |

### Return type

[**AddHashTag_200_response**](../Models/AddHashTag_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="addHashTagsBulk"></a>
# **addHashTagsBulk**
> AddHashTagsBulk_200_response addHashTagsBulk(tenantId, BulkCreateHashTagsBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **BulkCreateHashTagsBody** | [**BulkCreateHashTagsBody**](../Models/BulkCreateHashTagsBody.md)|  | [optional] |

### Return type

[**AddHashTagsBulk_200_response**](../Models/AddHashTagsBulk_200_response.md)

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
> AggregationResponse aggregate(tenantId, AggregationRequest, parentTenantId, includeStats)



    Aggregates documents by grouping them (if groupBy is provided) and applying multiple operations. Different operations (e.g. sum, countDistinct, avg, etc.) are supported.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **AggregationRequest** | [**AggregationRequest**](../Models/AggregationRequest.md)|  | |
| **parentTenantId** | **String**|  | [optional] [default to null] |
| **includeStats** | **Boolean**|  | [optional] [default to null] |

### Return type

[**AggregationResponse**](../Models/AggregationResponse.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="aggregateQuestionResults"></a>
# **aggregateQuestionResults**
> AggregateQuestionResults_200_response aggregateQuestionResults(tenantId, questionId, questionIds, urlId, timeBucket, startDate, forceRecalculate)



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

[**AggregateQuestionResults_200_response**](../Models/AggregateQuestionResults_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="blockUserFromComment"></a>
# **blockUserFromComment**
> BlockFromCommentPublic_200_response blockUserFromComment(tenantId, id, BlockFromCommentParams, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **BlockFromCommentParams** | [**BlockFromCommentParams**](../Models/BlockFromCommentParams.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**BlockFromCommentPublic_200_response**](../Models/BlockFromCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="bulkAggregateQuestionResults"></a>
# **bulkAggregateQuestionResults**
> BulkAggregateQuestionResults_200_response bulkAggregateQuestionResults(tenantId, BulkAggregateQuestionResultsRequest, forceRecalculate)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **BulkAggregateQuestionResultsRequest** | [**BulkAggregateQuestionResultsRequest**](../Models/BulkAggregateQuestionResultsRequest.md)|  | |
| **forceRecalculate** | **Boolean**|  | [optional] [default to null] |

### Return type

[**BulkAggregateQuestionResults_200_response**](../Models/BulkAggregateQuestionResults_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="combineCommentsWithQuestionResults"></a>
# **combineCommentsWithQuestionResults**
> CombineCommentsWithQuestionResults_200_response combineCommentsWithQuestionResults(tenantId, questionId, questionIds, urlId, startDate, forceRecalculate, minValue, maxValue, limit)



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

[**CombineCommentsWithQuestionResults_200_response**](../Models/CombineCommentsWithQuestionResults_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="createEmailTemplate"></a>
# **createEmailTemplate**
> CreateEmailTemplate_200_response createEmailTemplate(tenantId, CreateEmailTemplateBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateEmailTemplateBody** | [**CreateEmailTemplateBody**](../Models/CreateEmailTemplateBody.md)|  | |

### Return type

[**CreateEmailTemplate_200_response**](../Models/CreateEmailTemplate_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createFeedPost"></a>
# **createFeedPost**
> CreateFeedPost_200_response createFeedPost(tenantId, CreateFeedPostParams, broadcastId, isLive, doSpamCheck, skipDupCheck)



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

[**CreateFeedPost_200_response**](../Models/CreateFeedPost_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createModerator"></a>
# **createModerator**
> CreateModerator_200_response createModerator(tenantId, CreateModeratorBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateModeratorBody** | [**CreateModeratorBody**](../Models/CreateModeratorBody.md)|  | |

### Return type

[**CreateModerator_200_response**](../Models/CreateModerator_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createQuestionConfig"></a>
# **createQuestionConfig**
> CreateQuestionConfig_200_response createQuestionConfig(tenantId, CreateQuestionConfigBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateQuestionConfigBody** | [**CreateQuestionConfigBody**](../Models/CreateQuestionConfigBody.md)|  | |

### Return type

[**CreateQuestionConfig_200_response**](../Models/CreateQuestionConfig_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createQuestionResult"></a>
# **createQuestionResult**
> CreateQuestionResult_200_response createQuestionResult(tenantId, CreateQuestionResultBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateQuestionResultBody** | [**CreateQuestionResultBody**](../Models/CreateQuestionResultBody.md)|  | |

### Return type

[**CreateQuestionResult_200_response**](../Models/CreateQuestionResult_200_response.md)

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
> CreateTenant_200_response createTenant(tenantId, CreateTenantBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateTenantBody** | [**CreateTenantBody**](../Models/CreateTenantBody.md)|  | |

### Return type

[**CreateTenant_200_response**](../Models/CreateTenant_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createTenantPackage"></a>
# **createTenantPackage**
> CreateTenantPackage_200_response createTenantPackage(tenantId, CreateTenantPackageBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateTenantPackageBody** | [**CreateTenantPackageBody**](../Models/CreateTenantPackageBody.md)|  | |

### Return type

[**CreateTenantPackage_200_response**](../Models/CreateTenantPackage_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createTenantUser"></a>
# **createTenantUser**
> CreateTenantUser_200_response createTenantUser(tenantId, CreateTenantUserBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateTenantUserBody** | [**CreateTenantUserBody**](../Models/CreateTenantUserBody.md)|  | |

### Return type

[**CreateTenantUser_200_response**](../Models/CreateTenantUser_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createUserBadge"></a>
# **createUserBadge**
> CreateUserBadge_200_response createUserBadge(tenantId, CreateUserBadgeParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateUserBadgeParams** | [**CreateUserBadgeParams**](../Models/CreateUserBadgeParams.md)|  | |

### Return type

[**CreateUserBadge_200_response**](../Models/CreateUserBadge_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createVote"></a>
# **createVote**
> VoteComment_200_response createVote(tenantId, commentId, direction, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **direction** | **String**|  | [default to null] [enum: up, down] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**VoteComment_200_response**](../Models/VoteComment_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteComment"></a>
# **deleteComment**
> DeleteComment_200_response deleteComment(tenantId, id, contextUserId, isLive)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **contextUserId** | **String**|  | [optional] [default to null] |
| **isLive** | **Boolean**|  | [optional] [default to null] |

### Return type

[**DeleteComment_200_response**](../Models/DeleteComment_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteDomainConfig"></a>
# **deleteDomainConfig**
> DeleteDomainConfig_200_response deleteDomainConfig(tenantId, domain)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domain** | **String**|  | [default to null] |

### Return type

[**DeleteDomainConfig_200_response**](../Models/DeleteDomainConfig_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteEmailTemplate"></a>
# **deleteEmailTemplate**
> FlagCommentPublic_200_response deleteEmailTemplate(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteEmailTemplateRenderError"></a>
# **deleteEmailTemplateRenderError**
> FlagCommentPublic_200_response deleteEmailTemplateRenderError(tenantId, id, errorId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **errorId** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteHashTag"></a>
# **deleteHashTag**
> FlagCommentPublic_200_response deleteHashTag(tag, tenantId, DeleteHashTag\_request)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tag** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **DeleteHashTag\_request** | [**DeleteHashTag_request**](../Models/DeleteHashTag_request.md)|  | [optional] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="deleteModerator"></a>
# **deleteModerator**
> FlagCommentPublic_200_response deleteModerator(tenantId, id, sendEmail)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **sendEmail** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteNotificationCount"></a>
# **deleteNotificationCount**
> FlagCommentPublic_200_response deleteNotificationCount(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

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
> FlagCommentPublic_200_response deletePendingWebhookEvent(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteQuestionConfig"></a>
# **deleteQuestionConfig**
> FlagCommentPublic_200_response deleteQuestionConfig(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteQuestionResult"></a>
# **deleteQuestionResult**
> FlagCommentPublic_200_response deleteQuestionResult(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

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
> FlagCommentPublic_200_response deleteTenant(tenantId, id, sure)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **sure** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteTenantPackage"></a>
# **deleteTenantPackage**
> FlagCommentPublic_200_response deleteTenantPackage(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteTenantUser"></a>
# **deleteTenantUser**
> FlagCommentPublic_200_response deleteTenantUser(tenantId, id, deleteComments, commentDeleteMode)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **deleteComments** | **String**|  | [optional] [default to null] |
| **commentDeleteMode** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteUserBadge"></a>
# **deleteUserBadge**
> UpdateUserBadge_200_response deleteUserBadge(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**UpdateUserBadge_200_response**](../Models/UpdateUserBadge_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteVote"></a>
# **deleteVote**
> DeleteCommentVote_200_response deleteVote(tenantId, id, editKey)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **editKey** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteCommentVote_200_response**](../Models/DeleteCommentVote_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="flagComment"></a>
# **flagComment**
> FlagComment_200_response flagComment(tenantId, id, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**FlagComment_200_response**](../Models/FlagComment_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAuditLogs"></a>
# **getAuditLogs**
> GetAuditLogs_200_response getAuditLogs(tenantId, limit, skip, order, after, before)



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

[**GetAuditLogs_200_response**](../Models/GetAuditLogs_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCachedNotificationCount"></a>
# **getCachedNotificationCount**
> GetCachedNotificationCount_200_response getCachedNotificationCount(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetCachedNotificationCount_200_response**](../Models/GetCachedNotificationCount_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getComment"></a>
# **getComment**
> GetComment_200_response getComment(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetComment_200_response**](../Models/GetComment_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getComments"></a>
# **getComments**
> GetComments_200_response getComments(tenantId, page, limit, skip, asTree, skipChildren, limitChildren, maxTreeDepth, urlId, userId, anonUserId, contextUserId, hashTag, parentId, direction)



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

### Return type

[**GetComments_200_response**](../Models/GetComments_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getDomainConfig"></a>
# **getDomainConfig**
> GetDomainConfig_200_response getDomainConfig(tenantId, domain)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domain** | **String**|  | [default to null] |

### Return type

[**GetDomainConfig_200_response**](../Models/GetDomainConfig_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getDomainConfigs"></a>
# **getDomainConfigs**
> GetDomainConfigs_200_response getDomainConfigs(tenantId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |

### Return type

[**GetDomainConfigs_200_response**](../Models/GetDomainConfigs_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplate"></a>
# **getEmailTemplate**
> GetEmailTemplate_200_response getEmailTemplate(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetEmailTemplate_200_response**](../Models/GetEmailTemplate_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplateDefinitions"></a>
# **getEmailTemplateDefinitions**
> GetEmailTemplateDefinitions_200_response getEmailTemplateDefinitions(tenantId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |

### Return type

[**GetEmailTemplateDefinitions_200_response**](../Models/GetEmailTemplateDefinitions_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplateRenderErrors"></a>
# **getEmailTemplateRenderErrors**
> GetEmailTemplateRenderErrors_200_response getEmailTemplateRenderErrors(tenantId, id, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetEmailTemplateRenderErrors_200_response**](../Models/GetEmailTemplateRenderErrors_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEmailTemplates"></a>
# **getEmailTemplates**
> GetEmailTemplates_200_response getEmailTemplates(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetEmailTemplates_200_response**](../Models/GetEmailTemplates_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFeedPosts"></a>
# **getFeedPosts**
> GetFeedPosts_200_response getFeedPosts(tenantId, afterId, limit, tags)



     req tenantId afterId

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **afterId** | **String**|  | [optional] [default to null] |
| **limit** | **Integer**|  | [optional] [default to null] |
| **tags** | [**List**](../Models/String.md)|  | [optional] [default to null] |

### Return type

[**GetFeedPosts_200_response**](../Models/GetFeedPosts_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getHashTags"></a>
# **getHashTags**
> GetHashTags_200_response getHashTags(tenantId, page)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **page** | **Double**|  | [optional] [default to null] |

### Return type

[**GetHashTags_200_response**](../Models/GetHashTags_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerator"></a>
# **getModerator**
> GetModerator_200_response getModerator(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetModerator_200_response**](../Models/GetModerator_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerators"></a>
# **getModerators**
> GetModerators_200_response getModerators(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetModerators_200_response**](../Models/GetModerators_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNotificationCount"></a>
# **getNotificationCount**
> GetNotificationCount_200_response getNotificationCount(tenantId, userId, urlId, fromCommentId, viewed, type)



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

[**GetNotificationCount_200_response**](../Models/GetNotificationCount_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNotifications"></a>
# **getNotifications**
> GetNotifications_200_response getNotifications(tenantId, userId, urlId, fromCommentId, viewed, type, skip)



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

[**GetNotifications_200_response**](../Models/GetNotifications_200_response.md)

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
> GetPendingWebhookEventCount_200_response getPendingWebhookEventCount(tenantId, commentId, externalId, eventType, type, domain, attemptCountGT)



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

[**GetPendingWebhookEventCount_200_response**](../Models/GetPendingWebhookEventCount_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPendingWebhookEvents"></a>
# **getPendingWebhookEvents**
> GetPendingWebhookEvents_200_response getPendingWebhookEvents(tenantId, commentId, externalId, eventType, type, domain, attemptCountGT, skip)



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

[**GetPendingWebhookEvents_200_response**](../Models/GetPendingWebhookEvents_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionConfig"></a>
# **getQuestionConfig**
> GetQuestionConfig_200_response getQuestionConfig(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetQuestionConfig_200_response**](../Models/GetQuestionConfig_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionConfigs"></a>
# **getQuestionConfigs**
> GetQuestionConfigs_200_response getQuestionConfigs(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetQuestionConfigs_200_response**](../Models/GetQuestionConfigs_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionResult"></a>
# **getQuestionResult**
> GetQuestionResult_200_response getQuestionResult(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetQuestionResult_200_response**](../Models/GetQuestionResult_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQuestionResults"></a>
# **getQuestionResults**
> GetQuestionResults_200_response getQuestionResults(tenantId, urlId, userId, startDate, questionId, questionIds, skip)



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

[**GetQuestionResults_200_response**](../Models/GetQuestionResults_200_response.md)

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
> GetSSOUsers_200_response getSSOUsers(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Integer**|  | [optional] [default to null] |

### Return type

[**GetSSOUsers_200_response**](../Models/GetSSOUsers_200_response.md)

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
> GetTenant_200_response getTenant(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetTenant_200_response**](../Models/GetTenant_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantDailyUsages"></a>
# **getTenantDailyUsages**
> GetTenantDailyUsages_200_response getTenantDailyUsages(tenantId, yearNumber, monthNumber, dayNumber, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **yearNumber** | **Double**|  | [optional] [default to null] |
| **monthNumber** | **Double**|  | [optional] [default to null] |
| **dayNumber** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantDailyUsages_200_response**](../Models/GetTenantDailyUsages_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantPackage"></a>
# **getTenantPackage**
> GetTenantPackage_200_response getTenantPackage(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetTenantPackage_200_response**](../Models/GetTenantPackage_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantPackages"></a>
# **getTenantPackages**
> GetTenantPackages_200_response getTenantPackages(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantPackages_200_response**](../Models/GetTenantPackages_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantUser"></a>
# **getTenantUser**
> GetTenantUser_200_response getTenantUser(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetTenantUser_200_response**](../Models/GetTenantUser_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenantUsers"></a>
# **getTenantUsers**
> GetTenantUsers_200_response getTenantUsers(tenantId, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenantUsers_200_response**](../Models/GetTenantUsers_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTenants"></a>
# **getTenants**
> GetTenants_200_response getTenants(tenantId, meta, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **meta** | **String**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetTenants_200_response**](../Models/GetTenants_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUser"></a>
# **getUser**
> GetUser_200_response getUser(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetUser_200_response**](../Models/GetUser_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadge"></a>
# **getUserBadge**
> GetUserBadge_200_response getUserBadge(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetUserBadge_200_response**](../Models/GetUserBadge_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadgeProgressById"></a>
# **getUserBadgeProgressById**
> GetUserBadgeProgressById_200_response getUserBadgeProgressById(tenantId, id)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |

### Return type

[**GetUserBadgeProgressById_200_response**](../Models/GetUserBadgeProgressById_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadgeProgressByUserId"></a>
# **getUserBadgeProgressByUserId**
> GetUserBadgeProgressById_200_response getUserBadgeProgressByUserId(tenantId, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [default to null] |

### Return type

[**GetUserBadgeProgressById_200_response**](../Models/GetUserBadgeProgressById_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadgeProgressList"></a>
# **getUserBadgeProgressList**
> GetUserBadgeProgressList_200_response getUserBadgeProgressList(tenantId, userId, limit, skip)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **limit** | **Double**|  | [optional] [default to null] |
| **skip** | **Double**|  | [optional] [default to null] |

### Return type

[**GetUserBadgeProgressList_200_response**](../Models/GetUserBadgeProgressList_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBadges"></a>
# **getUserBadges**
> GetUserBadges_200_response getUserBadges(tenantId, userId, badgeId, type, displayedOnComments, limit, skip)



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

[**GetUserBadges_200_response**](../Models/GetUserBadges_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVotes"></a>
# **getVotes**
> GetVotes_200_response getVotes(tenantId, urlId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |

### Return type

[**GetVotes_200_response**](../Models/GetVotes_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVotesForUser"></a>
# **getVotesForUser**
> GetVotesForUser_200_response getVotesForUser(tenantId, urlId, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**GetVotesForUser_200_response**](../Models/GetVotesForUser_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="patchDomainConfig"></a>
# **patchDomainConfig**
> GetDomainConfig_200_response patchDomainConfig(tenantId, domainToUpdate, PatchDomainConfigParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domainToUpdate** | **String**|  | [default to null] |
| **PatchDomainConfigParams** | [**PatchDomainConfigParams**](../Models/PatchDomainConfigParams.md)|  | |

### Return type

[**GetDomainConfig_200_response**](../Models/GetDomainConfig_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="patchHashTag"></a>
# **patchHashTag**
> PatchHashTag_200_response patchHashTag(tag, tenantId, UpdateHashTagBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tag** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **UpdateHashTagBody** | [**UpdateHashTagBody**](../Models/UpdateHashTagBody.md)|  | [optional] |

### Return type

[**PatchHashTag_200_response**](../Models/PatchHashTag_200_response.md)

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
> GetDomainConfig_200_response putDomainConfig(tenantId, domainToUpdate, UpdateDomainConfigParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **domainToUpdate** | **String**|  | [default to null] |
| **UpdateDomainConfigParams** | [**UpdateDomainConfigParams**](../Models/UpdateDomainConfigParams.md)|  | |

### Return type

[**GetDomainConfig_200_response**](../Models/GetDomainConfig_200_response.md)

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
> RenderEmailTemplate_200_response renderEmailTemplate(tenantId, RenderEmailTemplateBody, locale)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **RenderEmailTemplateBody** | [**RenderEmailTemplateBody**](../Models/RenderEmailTemplateBody.md)|  | |
| **locale** | **String**|  | [optional] [default to null] |

### Return type

[**RenderEmailTemplate_200_response**](../Models/RenderEmailTemplate_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="replaceTenantPackage"></a>
# **replaceTenantPackage**
> FlagCommentPublic_200_response replaceTenantPackage(tenantId, id, ReplaceTenantPackageBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **ReplaceTenantPackageBody** | [**ReplaceTenantPackageBody**](../Models/ReplaceTenantPackageBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="replaceTenantUser"></a>
# **replaceTenantUser**
> FlagCommentPublic_200_response replaceTenantUser(tenantId, id, ReplaceTenantUserBody, updateComments)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **ReplaceTenantUserBody** | [**ReplaceTenantUserBody**](../Models/ReplaceTenantUserBody.md)|  | |
| **updateComments** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="saveComment"></a>
# **saveComment**
> SaveComment_200_response saveComment(tenantId, CreateCommentParams, isLive, doSpamCheck, sendEmails, populateNotifications)



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

[**SaveComment_200_response**](../Models/SaveComment_200_response.md)

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

[**List**](../Models/SaveComment_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="sendInvite"></a>
# **sendInvite**
> FlagCommentPublic_200_response sendInvite(tenantId, id, fromName)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **fromName** | **String**|  | [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="sendLoginLink"></a>
# **sendLoginLink**
> FlagCommentPublic_200_response sendLoginLink(tenantId, id, redirectURL)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **redirectURL** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="unBlockUserFromComment"></a>
# **unBlockUserFromComment**
> UnBlockCommentPublic_200_response unBlockUserFromComment(tenantId, id, UnBlockFromCommentParams, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UnBlockFromCommentParams** | [**UnBlockFromCommentParams**](../Models/UnBlockFromCommentParams.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**UnBlockCommentPublic_200_response**](../Models/UnBlockCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="unFlagComment"></a>
# **unFlagComment**
> FlagComment_200_response unFlagComment(tenantId, id, userId, anonUserId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **anonUserId** | **String**|  | [optional] [default to null] |

### Return type

[**FlagComment_200_response**](../Models/FlagComment_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateComment"></a>
# **updateComment**
> FlagCommentPublic_200_response updateComment(tenantId, id, UpdatableCommentParams, contextUserId, doSpamCheck, isLive)



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

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateEmailTemplate"></a>
# **updateEmailTemplate**
> FlagCommentPublic_200_response updateEmailTemplate(tenantId, id, UpdateEmailTemplateBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateEmailTemplateBody** | [**UpdateEmailTemplateBody**](../Models/UpdateEmailTemplateBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateFeedPost"></a>
# **updateFeedPost**
> FlagCommentPublic_200_response updateFeedPost(tenantId, id, FeedPost)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **FeedPost** | [**FeedPost**](../Models/FeedPost.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateModerator"></a>
# **updateModerator**
> FlagCommentPublic_200_response updateModerator(tenantId, id, UpdateModeratorBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateModeratorBody** | [**UpdateModeratorBody**](../Models/UpdateModeratorBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateNotification"></a>
# **updateNotification**
> FlagCommentPublic_200_response updateNotification(tenantId, id, UpdateNotificationBody, userId)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateNotificationBody** | [**UpdateNotificationBody**](../Models/UpdateNotificationBody.md)|  | |
| **userId** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateQuestionConfig"></a>
# **updateQuestionConfig**
> FlagCommentPublic_200_response updateQuestionConfig(tenantId, id, UpdateQuestionConfigBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateQuestionConfigBody** | [**UpdateQuestionConfigBody**](../Models/UpdateQuestionConfigBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateQuestionResult"></a>
# **updateQuestionResult**
> FlagCommentPublic_200_response updateQuestionResult(tenantId, id, UpdateQuestionResultBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateQuestionResultBody** | [**UpdateQuestionResultBody**](../Models/UpdateQuestionResultBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateTenant"></a>
# **updateTenant**
> FlagCommentPublic_200_response updateTenant(tenantId, id, UpdateTenantBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateTenantBody** | [**UpdateTenantBody**](../Models/UpdateTenantBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateTenantPackage"></a>
# **updateTenantPackage**
> FlagCommentPublic_200_response updateTenantPackage(tenantId, id, UpdateTenantPackageBody)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateTenantPackageBody** | [**UpdateTenantPackageBody**](../Models/UpdateTenantPackageBody.md)|  | |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateTenantUser"></a>
# **updateTenantUser**
> FlagCommentPublic_200_response updateTenantUser(tenantId, id, UpdateTenantUserBody, updateComments)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateTenantUserBody** | [**UpdateTenantUserBody**](../Models/UpdateTenantUserBody.md)|  | |
| **updateComments** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateUserBadge"></a>
# **updateUserBadge**
> UpdateUserBadge_200_response updateUserBadge(tenantId, id, UpdateUserBadgeParams)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **UpdateUserBadgeParams** | [**UpdateUserBadgeParams**](../Models/UpdateUserBadgeParams.md)|  | |

### Return type

[**UpdateUserBadge_200_response**](../Models/UpdateUserBadge_200_response.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

