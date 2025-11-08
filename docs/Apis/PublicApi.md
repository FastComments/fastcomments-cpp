# PublicApi

All URIs are relative to *https://fastcomments.com*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**blockFromCommentPublic**](PublicApi.md#blockFromCommentPublic) | **POST** /block-from-comment/{commentId} |  |
| [**checkedCommentsForBlocked**](PublicApi.md#checkedCommentsForBlocked) | **GET** /check-blocked-comments |  |
| [**createCommentPublic**](PublicApi.md#createCommentPublic) | **POST** /comments/{tenantId} |  |
| [**createFeedPostPublic**](PublicApi.md#createFeedPostPublic) | **POST** /feed-posts/{tenantId} |  |
| [**deleteCommentPublic**](PublicApi.md#deleteCommentPublic) | **DELETE** /comments/{tenantId}/{commentId} |  |
| [**deleteCommentVote**](PublicApi.md#deleteCommentVote) | **DELETE** /comments/{tenantId}/{commentId}/vote/{voteId} |  |
| [**deleteFeedPostPublic**](PublicApi.md#deleteFeedPostPublic) | **DELETE** /feed-posts/{tenantId}/{postId} |  |
| [**flagCommentPublic**](PublicApi.md#flagCommentPublic) | **POST** /flag-comment/{commentId} |  |
| [**getCommentText**](PublicApi.md#getCommentText) | **GET** /comments/{tenantId}/{commentId}/text |  |
| [**getCommentVoteUserNames**](PublicApi.md#getCommentVoteUserNames) | **GET** /comments/{tenantId}/{commentId}/votes |  |
| [**getCommentsPublic**](PublicApi.md#getCommentsPublic) | **GET** /comments/{tenantId} |  |
| [**getEventLog**](PublicApi.md#getEventLog) | **GET** /event-log/{tenantId} |  |
| [**getFeedPostsPublic**](PublicApi.md#getFeedPostsPublic) | **GET** /feed-posts/{tenantId} |  |
| [**getFeedPostsStats**](PublicApi.md#getFeedPostsStats) | **GET** /feed-posts/{tenantId}/stats |  |
| [**getGlobalEventLog**](PublicApi.md#getGlobalEventLog) | **GET** /event-log/global/{tenantId} |  |
| [**getUserNotificationCount**](PublicApi.md#getUserNotificationCount) | **GET** /user-notifications/get-count |  |
| [**getUserNotifications**](PublicApi.md#getUserNotifications) | **GET** /user-notifications |  |
| [**getUserPresenceStatuses**](PublicApi.md#getUserPresenceStatuses) | **GET** /user-presence-status |  |
| [**getUserReactsPublic**](PublicApi.md#getUserReactsPublic) | **GET** /feed-posts/{tenantId}/user-reacts |  |
| [**lockComment**](PublicApi.md#lockComment) | **POST** /comments/{tenantId}/{commentId}/lock |  |
| [**pinComment**](PublicApi.md#pinComment) | **POST** /comments/{tenantId}/{commentId}/pin |  |
| [**reactFeedPostPublic**](PublicApi.md#reactFeedPostPublic) | **POST** /feed-posts/{tenantId}/react/{postId} |  |
| [**resetUserNotificationCount**](PublicApi.md#resetUserNotificationCount) | **POST** /user-notifications/reset-count |  |
| [**resetUserNotifications**](PublicApi.md#resetUserNotifications) | **POST** /user-notifications/reset |  |
| [**searchUsers**](PublicApi.md#searchUsers) | **GET** /user-search/{tenantId} |  |
| [**setCommentText**](PublicApi.md#setCommentText) | **POST** /comments/{tenantId}/{commentId}/update-text |  |
| [**unBlockCommentPublic**](PublicApi.md#unBlockCommentPublic) | **DELETE** /block-from-comment/{commentId} |  |
| [**unLockComment**](PublicApi.md#unLockComment) | **POST** /comments/{tenantId}/{commentId}/unlock |  |
| [**unPinComment**](PublicApi.md#unPinComment) | **POST** /comments/{tenantId}/{commentId}/unpin |  |
| [**updateFeedPostPublic**](PublicApi.md#updateFeedPostPublic) | **PUT** /feed-posts/{tenantId}/{postId} |  |
| [**updateUserNotificationCommentSubscriptionStatus**](PublicApi.md#updateUserNotificationCommentSubscriptionStatus) | **POST** /user-notifications/{notificationId}/mark-opted/{optedInOrOut} |  |
| [**updateUserNotificationPageSubscriptionStatus**](PublicApi.md#updateUserNotificationPageSubscriptionStatus) | **POST** /user-notifications/set-subscription-state/{subscribedOrUnsubscribed} |  |
| [**updateUserNotificationStatus**](PublicApi.md#updateUserNotificationStatus) | **POST** /user-notifications/{notificationId}/mark/{newStatus} |  |
| [**uploadImage**](PublicApi.md#uploadImage) | **POST** /upload-image/{tenantId} |  |
| [**voteComment**](PublicApi.md#voteComment) | **POST** /comments/{tenantId}/{commentId}/vote |  |


<a name="blockFromCommentPublic"></a>
# **blockFromCommentPublic**
> BlockFromCommentPublic_200_response blockFromCommentPublic(tenantId, commentId, PublicBlockFromCommentParams, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **PublicBlockFromCommentParams** | [**PublicBlockFromCommentParams**](../Models/PublicBlockFromCommentParams.md)|  | |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**BlockFromCommentPublic_200_response**](../Models/BlockFromCommentPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="checkedCommentsForBlocked"></a>
# **checkedCommentsForBlocked**
> CheckedCommentsForBlocked_200_response checkedCommentsForBlocked(tenantId, commentIds, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentIds** | **String**| A comma separated list of comment ids. | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**CheckedCommentsForBlocked_200_response**](../Models/CheckedCommentsForBlocked_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="createCommentPublic"></a>
# **createCommentPublic**
> CreateCommentPublic_200_response createCommentPublic(tenantId, urlId, broadcastId, CommentData, sessionId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **CommentData** | [**CommentData**](../Models/CommentData.md)|  | |
| **sessionId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**CreateCommentPublic_200_response**](../Models/CreateCommentPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createFeedPostPublic"></a>
# **createFeedPostPublic**
> CreateFeedPostPublic_200_response createFeedPostPublic(tenantId, CreateFeedPostParams, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **CreateFeedPostParams** | [**CreateFeedPostParams**](../Models/CreateFeedPostParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**CreateFeedPostPublic_200_response**](../Models/CreateFeedPostPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="deleteCommentPublic"></a>
# **deleteCommentPublic**
> DeleteCommentPublic_200_response deleteCommentPublic(tenantId, commentId, broadcastId, editKey, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **editKey** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteCommentPublic_200_response**](../Models/DeleteCommentPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteCommentVote"></a>
# **deleteCommentVote**
> DeleteCommentVote_200_response deleteCommentVote(tenantId, commentId, voteId, urlId, broadcastId, editKey, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **voteId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **editKey** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteCommentVote_200_response**](../Models/DeleteCommentVote_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteFeedPostPublic"></a>
# **deleteFeedPostPublic**
> DeleteFeedPostPublic_200_response deleteFeedPostPublic(tenantId, postId, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **postId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteFeedPostPublic_200_response**](../Models/DeleteFeedPostPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="flagCommentPublic"></a>
# **flagCommentPublic**
> FlagCommentPublic_200_response flagCommentPublic(tenantId, commentId, isFlagged, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **isFlagged** | **Boolean**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**FlagCommentPublic_200_response**](../Models/FlagCommentPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentText"></a>
# **getCommentText**
> GetCommentText_200_response getCommentText(tenantId, commentId, editKey, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **editKey** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentText_200_response**](../Models/GetCommentText_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentVoteUserNames"></a>
# **getCommentVoteUserNames**
> GetCommentVoteUserNames_200_response getCommentVoteUserNames(tenantId, commentId, dir, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **dir** | **Integer**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentVoteUserNames_200_response**](../Models/GetCommentVoteUserNames_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentsPublic"></a>
# **getCommentsPublic**
> GetCommentsPublic_200_response getCommentsPublic(tenantId, urlId, page, direction, sso, skip, skipChildren, limit, limitChildren, countChildren, fetchPageForCommentId, includeConfig, countAll, includei10n, locale, modules, isCrawler, includeNotificationCount, asTree, maxTreeDepth, useFullTranslationIds, parentId, searchText, hashTags, userId, customConfigStr, afterCommentId, beforeCommentId)



     req tenantId urlId

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **page** | **Integer**|  | [optional] [default to null] |
| **direction** | [**SortDirections**](../Models/.md)|  | [optional] [default to null] [enum: OF, NF, MR] |
| **sso** | **String**|  | [optional] [default to null] |
| **skip** | **Integer**|  | [optional] [default to null] |
| **skipChildren** | **Integer**|  | [optional] [default to null] |
| **limit** | **Integer**|  | [optional] [default to null] |
| **limitChildren** | **Integer**|  | [optional] [default to null] |
| **countChildren** | **Boolean**|  | [optional] [default to null] |
| **fetchPageForCommentId** | **String**|  | [optional] [default to null] |
| **includeConfig** | **Boolean**|  | [optional] [default to null] |
| **countAll** | **Boolean**|  | [optional] [default to null] |
| **includei10n** | **Boolean**|  | [optional] [default to null] |
| **locale** | **String**|  | [optional] [default to null] |
| **modules** | **String**|  | [optional] [default to null] |
| **isCrawler** | **Boolean**|  | [optional] [default to null] |
| **includeNotificationCount** | **Boolean**|  | [optional] [default to null] |
| **asTree** | **Boolean**|  | [optional] [default to null] |
| **maxTreeDepth** | **Integer**|  | [optional] [default to null] |
| **useFullTranslationIds** | **Boolean**|  | [optional] [default to null] |
| **parentId** | **String**|  | [optional] [default to null] |
| **searchText** | **String**|  | [optional] [default to null] |
| **hashTags** | [**List**](../Models/String.md)|  | [optional] [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **customConfigStr** | **String**|  | [optional] [default to null] |
| **afterCommentId** | **String**|  | [optional] [default to null] |
| **beforeCommentId** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentsPublic_200_response**](../Models/GetCommentsPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getEventLog"></a>
# **getEventLog**
> GetEventLog_200_response getEventLog(tenantId, urlId, userIdWS, startTime, endTime)



     req tenantId urlId userIdWS

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **userIdWS** | **String**|  | [default to null] |
| **startTime** | **Long**|  | [default to null] |
| **endTime** | **Long**|  | [default to null] |

### Return type

[**GetEventLog_200_response**](../Models/GetEventLog_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFeedPostsPublic"></a>
# **getFeedPostsPublic**
> GetFeedPostsPublic_200_response getFeedPostsPublic(tenantId, afterId, limit, tags, sso, isCrawler, includeUserInfo)



     req tenantId afterId

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **afterId** | **String**|  | [optional] [default to null] |
| **limit** | **Integer**|  | [optional] [default to null] |
| **tags** | [**List**](../Models/String.md)|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |
| **isCrawler** | **Boolean**|  | [optional] [default to null] |
| **includeUserInfo** | **Boolean**|  | [optional] [default to null] |

### Return type

[**GetFeedPostsPublic_200_response**](../Models/GetFeedPostsPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFeedPostsStats"></a>
# **getFeedPostsStats**
> GetFeedPostsStats_200_response getFeedPostsStats(tenantId, postIds, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **postIds** | [**List**](../Models/String.md)|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetFeedPostsStats_200_response**](../Models/GetFeedPostsStats_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getGlobalEventLog"></a>
# **getGlobalEventLog**
> GetEventLog_200_response getGlobalEventLog(tenantId, urlId, userIdWS, startTime, endTime)



     req tenantId urlId userIdWS

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **userIdWS** | **String**|  | [default to null] |
| **startTime** | **Long**|  | [default to null] |
| **endTime** | **Long**|  | [default to null] |

### Return type

[**GetEventLog_200_response**](../Models/GetEventLog_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserNotificationCount"></a>
# **getUserNotificationCount**
> GetUserNotificationCount_200_response getUserNotificationCount(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserNotificationCount_200_response**](../Models/GetUserNotificationCount_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserNotifications"></a>
# **getUserNotifications**
> GetUserNotifications_200_response getUserNotifications(tenantId, pageSize, afterId, includeContext, afterCreatedAt, unreadOnly, dmOnly, noDm, includeTranslations, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **pageSize** | **Integer**|  | [optional] [default to null] |
| **afterId** | **String**|  | [optional] [default to null] |
| **includeContext** | **Boolean**|  | [optional] [default to null] |
| **afterCreatedAt** | **Long**|  | [optional] [default to null] |
| **unreadOnly** | **Boolean**|  | [optional] [default to null] |
| **dmOnly** | **Boolean**|  | [optional] [default to null] |
| **noDm** | **Boolean**|  | [optional] [default to null] |
| **includeTranslations** | **Boolean**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserNotifications_200_response**](../Models/GetUserNotifications_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserPresenceStatuses"></a>
# **getUserPresenceStatuses**
> GetUserPresenceStatuses_200_response getUserPresenceStatuses(tenantId, urlIdWS, userIds)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlIdWS** | **String**|  | [default to null] |
| **userIds** | **String**|  | [default to null] |

### Return type

[**GetUserPresenceStatuses_200_response**](../Models/GetUserPresenceStatuses_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserReactsPublic"></a>
# **getUserReactsPublic**
> GetUserReactsPublic_200_response getUserReactsPublic(tenantId, postIds, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **postIds** | [**List**](../Models/String.md)|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserReactsPublic_200_response**](../Models/GetUserReactsPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="lockComment"></a>
# **lockComment**
> LockComment_200_response lockComment(tenantId, commentId, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**LockComment_200_response**](../Models/LockComment_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="pinComment"></a>
# **pinComment**
> PinComment_200_response pinComment(tenantId, commentId, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PinComment_200_response**](../Models/PinComment_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="reactFeedPostPublic"></a>
# **reactFeedPostPublic**
> ReactFeedPostPublic_200_response reactFeedPostPublic(tenantId, postId, ReactBodyParams, isUndo, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **postId** | **String**|  | [default to null] |
| **ReactBodyParams** | [**ReactBodyParams**](../Models/ReactBodyParams.md)|  | |
| **isUndo** | **Boolean**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ReactFeedPostPublic_200_response**](../Models/ReactFeedPostPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="resetUserNotificationCount"></a>
# **resetUserNotificationCount**
> ResetUserNotifications_200_response resetUserNotificationCount(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ResetUserNotifications_200_response**](../Models/ResetUserNotifications_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="resetUserNotifications"></a>
# **resetUserNotifications**
> ResetUserNotifications_200_response resetUserNotifications(tenantId, afterId, afterCreatedAt, unreadOnly, dmOnly, noDm, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **afterId** | **String**|  | [optional] [default to null] |
| **afterCreatedAt** | **Long**|  | [optional] [default to null] |
| **unreadOnly** | **Boolean**|  | [optional] [default to null] |
| **dmOnly** | **Boolean**|  | [optional] [default to null] |
| **noDm** | **Boolean**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ResetUserNotifications_200_response**](../Models/ResetUserNotifications_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="searchUsers"></a>
# **searchUsers**
> SearchUsers_200_response searchUsers(tenantId, urlId, usernameStartsWith, mentionGroupIds, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **usernameStartsWith** | **String**|  | [default to null] |
| **mentionGroupIds** | [**List**](../Models/String.md)|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**SearchUsers_200_response**](../Models/SearchUsers_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="setCommentText"></a>
# **setCommentText**
> SetCommentText_200_response setCommentText(tenantId, commentId, broadcastId, CommentTextUpdateRequest, editKey, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **CommentTextUpdateRequest** | [**CommentTextUpdateRequest**](../Models/CommentTextUpdateRequest.md)|  | |
| **editKey** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**SetCommentText_200_response**](../Models/SetCommentText_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="unBlockCommentPublic"></a>
# **unBlockCommentPublic**
> UnBlockCommentPublic_200_response unBlockCommentPublic(tenantId, commentId, PublicBlockFromCommentParams, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **PublicBlockFromCommentParams** | [**PublicBlockFromCommentParams**](../Models/PublicBlockFromCommentParams.md)|  | |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**UnBlockCommentPublic_200_response**](../Models/UnBlockCommentPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="unLockComment"></a>
# **unLockComment**
> LockComment_200_response unLockComment(tenantId, commentId, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**LockComment_200_response**](../Models/LockComment_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="unPinComment"></a>
# **unPinComment**
> PinComment_200_response unPinComment(tenantId, commentId, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PinComment_200_response**](../Models/PinComment_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateFeedPostPublic"></a>
# **updateFeedPostPublic**
> CreateFeedPostPublic_200_response updateFeedPostPublic(tenantId, postId, UpdateFeedPostParams, broadcastId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **postId** | **String**|  | [default to null] |
| **UpdateFeedPostParams** | [**UpdateFeedPostParams**](../Models/UpdateFeedPostParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**CreateFeedPostPublic_200_response**](../Models/CreateFeedPostPublic_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="updateUserNotificationCommentSubscriptionStatus"></a>
# **updateUserNotificationCommentSubscriptionStatus**
> UpdateUserNotificationStatus_200_response updateUserNotificationCommentSubscriptionStatus(tenantId, notificationId, optedInOrOut, commentId, sso)



    Enable or disable notifications for a specific comment.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **notificationId** | **String**|  | [default to null] |
| **optedInOrOut** | **String**|  | [default to null] [enum: in, out] |
| **commentId** | **String**|  | [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**UpdateUserNotificationStatus_200_response**](../Models/UpdateUserNotificationStatus_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateUserNotificationPageSubscriptionStatus"></a>
# **updateUserNotificationPageSubscriptionStatus**
> UpdateUserNotificationStatus_200_response updateUserNotificationPageSubscriptionStatus(tenantId, urlId, url, pageTitle, subscribedOrUnsubscribed, sso)



    Enable or disable notifications for a page. When users are subscribed to a page, notifications are created for new root comments, and also

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **url** | **String**|  | [default to null] |
| **pageTitle** | **String**|  | [default to null] |
| **subscribedOrUnsubscribed** | **String**|  | [default to null] [enum: subscribe, unsubscribe] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**UpdateUserNotificationStatus_200_response**](../Models/UpdateUserNotificationStatus_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateUserNotificationStatus"></a>
# **updateUserNotificationStatus**
> UpdateUserNotificationStatus_200_response updateUserNotificationStatus(tenantId, notificationId, newStatus, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **notificationId** | **String**|  | [default to null] |
| **newStatus** | **String**|  | [default to null] [enum: read, unread] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**UpdateUserNotificationStatus_200_response**](../Models/UpdateUserNotificationStatus_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="uploadImage"></a>
# **uploadImage**
> UploadImageResponse uploadImage(tenantId, file, sizePreset, urlId)



    Upload and resize an image

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **file** | **File**|  | [default to null] |
| **sizePreset** | [**SizePreset**](../Models/.md)| Size preset: \&quot;Default\&quot; (1000x1000px) or \&quot;CrossPlatform\&quot; (creates sizes for popular devices) | [optional] [default to null] [enum: Default, CrossPlatform] |
| **urlId** | **String**| Page id that upload is happening from, to configure | [optional] [default to null] |

### Return type

[**UploadImageResponse**](../Models/UploadImageResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: multipart/form-data
- **Accept**: application/json

<a name="voteComment"></a>
# **voteComment**
> VoteComment_200_response voteComment(tenantId, commentId, urlId, broadcastId, VoteBodyParams, sessionId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [default to null] |
| **commentId** | **String**|  | [default to null] |
| **urlId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [default to null] |
| **VoteBodyParams** | [**VoteBodyParams**](../Models/VoteBodyParams.md)|  | |
| **sessionId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**VoteComment_200_response**](../Models/VoteComment_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

