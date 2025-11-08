# DefaultApi

All URIs are relative to *https://fastcomments.com*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addDomainConfig**](DefaultApi.md#addDomainConfig) | **POST** /api/v1/domain-configs |  |
| [**addPage**](DefaultApi.md#addPage) | **POST** /api/v1/pages |  |
| [**addSSOUser**](DefaultApi.md#addSSOUser) | **POST** /api/v1/sso-users |  |
| [**aggregate**](DefaultApi.md#aggregate) | **POST** /api/v1/aggregate |  |
| [**aggregateQuestionResults**](DefaultApi.md#aggregateQuestionResults) | **GET** /api/v1/question-results-aggregation |  |
| [**blockUserFromComment**](DefaultApi.md#blockUserFromComment) | **POST** /api/v1/comments/{id}/block |  |
| [**bulkAggregateQuestionResults**](DefaultApi.md#bulkAggregateQuestionResults) | **POST** /api/v1/question-results-aggregation/bulk |  |
| [**combineCommentsWithQuestionResults**](DefaultApi.md#combineCommentsWithQuestionResults) | **GET** /api/v1/question-results-aggregation/combine/comments |  |
| [**createFeedPost**](DefaultApi.md#createFeedPost) | **POST** /api/v1/feed-posts |  |
| [**createSubscription**](DefaultApi.md#createSubscription) | **POST** /api/v1/subscriptions |  |
| [**createUserBadge**](DefaultApi.md#createUserBadge) | **POST** /api/v1/user-badges |  |
| [**deleteComment**](DefaultApi.md#deleteComment) | **DELETE** /api/v1/comments/{id} |  |
| [**deleteDomainConfig**](DefaultApi.md#deleteDomainConfig) | **DELETE** /api/v1/domain-configs/{domain} |  |
| [**deletePage**](DefaultApi.md#deletePage) | **DELETE** /api/v1/pages/{id} |  |
| [**deleteSSOUser**](DefaultApi.md#deleteSSOUser) | **DELETE** /api/v1/sso-users/{id} |  |
| [**deleteSubscription**](DefaultApi.md#deleteSubscription) | **DELETE** /api/v1/subscriptions/{id} |  |
| [**deleteUserBadge**](DefaultApi.md#deleteUserBadge) | **DELETE** /api/v1/user-badges/{id} |  |
| [**flagComment**](DefaultApi.md#flagComment) | **POST** /api/v1/comments/{id}/flag |  |
| [**getAuditLogs**](DefaultApi.md#getAuditLogs) | **GET** /api/v1/audit-logs |  |
| [**getComment**](DefaultApi.md#getComment) | **GET** /api/v1/comments/{id} |  |
| [**getComments**](DefaultApi.md#getComments) | **GET** /api/v1/comments |  |
| [**getDomainConfig**](DefaultApi.md#getDomainConfig) | **GET** /api/v1/domain-configs/{domain} |  |
| [**getDomainConfigs**](DefaultApi.md#getDomainConfigs) | **GET** /api/v1/domain-configs |  |
| [**getFeedPosts**](DefaultApi.md#getFeedPosts) | **GET** /api/v1/feed-posts |  |
| [**getPageByURLId**](DefaultApi.md#getPageByURLId) | **GET** /api/v1/pages/by-url-id |  |
| [**getPages**](DefaultApi.md#getPages) | **GET** /api/v1/pages |  |
| [**getSSOUserByEmail**](DefaultApi.md#getSSOUserByEmail) | **GET** /api/v1/sso-users/by-email/{email} |  |
| [**getSSOUserById**](DefaultApi.md#getSSOUserById) | **GET** /api/v1/sso-users/by-id/{id} |  |
| [**getSSOUsers**](DefaultApi.md#getSSOUsers) | **GET** /api/v1/sso-users |  |
| [**getSubscriptions**](DefaultApi.md#getSubscriptions) | **GET** /api/v1/subscriptions |  |
| [**getUserBadge**](DefaultApi.md#getUserBadge) | **GET** /api/v1/user-badges/{id} |  |
| [**getUserBadgeProgressById**](DefaultApi.md#getUserBadgeProgressById) | **GET** /api/v1/user-badge-progress/{id} |  |
| [**getUserBadgeProgressByUserId**](DefaultApi.md#getUserBadgeProgressByUserId) | **GET** /api/v1/user-badge-progress/user/{userId} |  |
| [**getUserBadgeProgressList**](DefaultApi.md#getUserBadgeProgressList) | **GET** /api/v1/user-badge-progress |  |
| [**getUserBadges**](DefaultApi.md#getUserBadges) | **GET** /api/v1/user-badges |  |
| [**patchDomainConfig**](DefaultApi.md#patchDomainConfig) | **PATCH** /api/v1/domain-configs/{domainToUpdate} |  |
| [**patchPage**](DefaultApi.md#patchPage) | **PATCH** /api/v1/pages/{id} |  |
| [**patchSSOUser**](DefaultApi.md#patchSSOUser) | **PATCH** /api/v1/sso-users/{id} |  |
| [**putDomainConfig**](DefaultApi.md#putDomainConfig) | **PUT** /api/v1/domain-configs/{domainToUpdate} |  |
| [**putSSOUser**](DefaultApi.md#putSSOUser) | **PUT** /api/v1/sso-users/{id} |  |
| [**saveComment**](DefaultApi.md#saveComment) | **POST** /api/v1/comments |  |
| [**saveCommentsBulk**](DefaultApi.md#saveCommentsBulk) | **POST** /api/v1/comments/bulk |  |
| [**unBlockUserFromComment**](DefaultApi.md#unBlockUserFromComment) | **POST** /api/v1/comments/{id}/un-block |  |
| [**unFlagComment**](DefaultApi.md#unFlagComment) | **POST** /api/v1/comments/{id}/un-flag |  |
| [**updateComment**](DefaultApi.md#updateComment) | **PATCH** /api/v1/comments/{id} |  |
| [**updateFeedPost**](DefaultApi.md#updateFeedPost) | **PATCH** /api/v1/feed-posts/{id} |  |
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
> FlagCommentPublic_200_response updateComment(tenantId, id, body, contextUserId, doSpamCheck, isLive)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **id** | **String**|  | [default to null] |
| **body** | **Pick_APIComment.UpdatableCommentFields_**|  | |
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

