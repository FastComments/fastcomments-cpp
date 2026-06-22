# ModerationApi

All URIs are relative to *https://fastcomments.com*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**deleteModerationVote**](ModerationApi.md#deleteModerationVote) | **DELETE** /auth/my-account/moderate-comments/vote/{commentId}/{voteId} |  |
| [**getApiComments**](ModerationApi.md#getApiComments) | **GET** /auth/my-account/moderate-comments/api/comments |  |
| [**getApiExportStatus**](ModerationApi.md#getApiExportStatus) | **GET** /auth/my-account/moderate-comments/api/export/status |  |
| [**getApiIds**](ModerationApi.md#getApiIds) | **GET** /auth/my-account/moderate-comments/api/ids |  |
| [**getBanUsersFromComment**](ModerationApi.md#getBanUsersFromComment) | **GET** /auth/my-account/moderate-comments/ban-users/from-comment/{commentId} |  |
| [**getCommentBanStatus**](ModerationApi.md#getCommentBanStatus) | **GET** /auth/my-account/moderate-comments/get-comment-ban-status/{commentId} |  |
| [**getCommentChildren**](ModerationApi.md#getCommentChildren) | **GET** /auth/my-account/moderate-comments/comment-children/{commentId} |  |
| [**getCount**](ModerationApi.md#getCount) | **GET** /auth/my-account/moderate-comments/count |  |
| [**getCounts**](ModerationApi.md#getCounts) | **GET** /auth/my-account/moderate-comments/banned-users/counts |  |
| [**getLogs**](ModerationApi.md#getLogs) | **GET** /auth/my-account/moderate-comments/logs/{commentId} |  |
| [**getManualBadges**](ModerationApi.md#getManualBadges) | **GET** /auth/my-account/moderate-comments/get-manual-badges |  |
| [**getManualBadgesForUser**](ModerationApi.md#getManualBadgesForUser) | **GET** /auth/my-account/moderate-comments/get-manual-badges-for-user |  |
| [**getModerationComment**](ModerationApi.md#getModerationComment) | **GET** /auth/my-account/moderate-comments/comment/{commentId} |  |
| [**getModerationCommentText**](ModerationApi.md#getModerationCommentText) | **GET** /auth/my-account/moderate-comments/get-comment-text/{commentId} |  |
| [**getPreBanSummary**](ModerationApi.md#getPreBanSummary) | **GET** /auth/my-account/moderate-comments/pre-ban-summary/{commentId} |  |
| [**getSearchCommentsSummary**](ModerationApi.md#getSearchCommentsSummary) | **GET** /auth/my-account/moderate-comments/search/comments/summary |  |
| [**getSearchPages**](ModerationApi.md#getSearchPages) | **GET** /auth/my-account/moderate-comments/search/pages |  |
| [**getSearchSites**](ModerationApi.md#getSearchSites) | **GET** /auth/my-account/moderate-comments/search/sites |  |
| [**getSearchSuggest**](ModerationApi.md#getSearchSuggest) | **GET** /auth/my-account/moderate-comments/search/suggest |  |
| [**getSearchUsers**](ModerationApi.md#getSearchUsers) | **GET** /auth/my-account/moderate-comments/search/users |  |
| [**getTrustFactor**](ModerationApi.md#getTrustFactor) | **GET** /auth/my-account/moderate-comments/get-trust-factor |  |
| [**getUserBanPreference**](ModerationApi.md#getUserBanPreference) | **GET** /auth/my-account/moderate-comments/user-ban-preference |  |
| [**getUserInternalProfile**](ModerationApi.md#getUserInternalProfile) | **GET** /auth/my-account/moderate-comments/get-user-internal-profile |  |
| [**postAdjustCommentVotes**](ModerationApi.md#postAdjustCommentVotes) | **POST** /auth/my-account/moderate-comments/adjust-comment-votes/{commentId} |  |
| [**postApiExport**](ModerationApi.md#postApiExport) | **POST** /auth/my-account/moderate-comments/api/export |  |
| [**postBanUserFromComment**](ModerationApi.md#postBanUserFromComment) | **POST** /auth/my-account/moderate-comments/ban-user/from-comment/{commentId} |  |
| [**postBanUserUndo**](ModerationApi.md#postBanUserUndo) | **POST** /auth/my-account/moderate-comments/ban-user/undo |  |
| [**postBulkPreBanSummary**](ModerationApi.md#postBulkPreBanSummary) | **POST** /auth/my-account/moderate-comments/bulk-pre-ban-summary |  |
| [**postCommentsByIds**](ModerationApi.md#postCommentsByIds) | **POST** /auth/my-account/moderate-comments/comments-by-ids |  |
| [**postFlagComment**](ModerationApi.md#postFlagComment) | **POST** /auth/my-account/moderate-comments/flag-comment/{commentId} |  |
| [**postRemoveComment**](ModerationApi.md#postRemoveComment) | **POST** /auth/my-account/moderate-comments/remove-comment/{commentId} |  |
| [**postRestoreDeletedComment**](ModerationApi.md#postRestoreDeletedComment) | **POST** /auth/my-account/moderate-comments/restore-deleted-comment/{commentId} |  |
| [**postSetCommentApprovalStatus**](ModerationApi.md#postSetCommentApprovalStatus) | **POST** /auth/my-account/moderate-comments/set-comment-approval-status/{commentId} |  |
| [**postSetCommentReviewStatus**](ModerationApi.md#postSetCommentReviewStatus) | **POST** /auth/my-account/moderate-comments/set-comment-review-status/{commentId} |  |
| [**postSetCommentSpamStatus**](ModerationApi.md#postSetCommentSpamStatus) | **POST** /auth/my-account/moderate-comments/set-comment-spam-status/{commentId} |  |
| [**postSetCommentText**](ModerationApi.md#postSetCommentText) | **POST** /auth/my-account/moderate-comments/set-comment-text/{commentId} |  |
| [**postUnFlagComment**](ModerationApi.md#postUnFlagComment) | **POST** /auth/my-account/moderate-comments/un-flag-comment/{commentId} |  |
| [**postVote**](ModerationApi.md#postVote) | **POST** /auth/my-account/moderate-comments/vote/{commentId} |  |
| [**putAwardBadge**](ModerationApi.md#putAwardBadge) | **PUT** /auth/my-account/moderate-comments/award-badge |  |
| [**putCloseThread**](ModerationApi.md#putCloseThread) | **PUT** /auth/my-account/moderate-comments/close-thread |  |
| [**putRemoveBadge**](ModerationApi.md#putRemoveBadge) | **PUT** /auth/my-account/moderate-comments/remove-badge |  |
| [**putReopenThread**](ModerationApi.md#putReopenThread) | **PUT** /auth/my-account/moderate-comments/reopen-thread |  |
| [**setTrustFactor**](ModerationApi.md#setTrustFactor) | **PUT** /auth/my-account/moderate-comments/set-trust-factor |  |


<a name="deleteModerationVote"></a>
# **deleteModerationVote**
> DeleteModerationVoteResponse deleteModerationVote(commentId, voteId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **voteId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**DeleteModerationVoteResponse**](../Models/DeleteModerationVoteResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getApiComments"></a>
# **getApiComments**
> GetApiCommentsResponse getApiComments(page, count, text-search, byIPFromComment, filters, searchFilters, sorts, demo, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **page** | **Double**|  | [optional] [default to null] |
| **count** | **Double**|  | [optional] [default to null] |
| **text-search** | **String**|  | [optional] [default to null] |
| **byIPFromComment** | **String**|  | [optional] [default to null] |
| **filters** | **String**|  | [optional] [default to null] |
| **searchFilters** | **String**|  | [optional] [default to null] |
| **sorts** | **String**|  | [optional] [default to null] |
| **demo** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetApiCommentsResponse**](../Models/GetApiCommentsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getApiExportStatus"></a>
# **getApiExportStatus**
> GetApiExportStatusResponse getApiExportStatus(batchJobId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **batchJobId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetApiExportStatusResponse**](../Models/GetApiExportStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getApiIds"></a>
# **getApiIds**
> GetApiIdsResponse getApiIds(text-search, byIPFromComment, filters, searchFilters, afterId, demo, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **text-search** | **String**|  | [optional] [default to null] |
| **byIPFromComment** | **String**|  | [optional] [default to null] |
| **filters** | **String**|  | [optional] [default to null] |
| **searchFilters** | **String**|  | [optional] [default to null] |
| **afterId** | **String**|  | [optional] [default to null] |
| **demo** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetApiIdsResponse**](../Models/GetApiIdsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBanUsersFromComment"></a>
# **getBanUsersFromComment**
> GetBanUsersFromCommentResponse getBanUsersFromComment(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetBanUsersFromCommentResponse**](../Models/GetBanUsersFromCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentBanStatus"></a>
# **getCommentBanStatus**
> GetCommentBanStatusResponse_1 getCommentBanStatus(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentBanStatusResponse_1**](../Models/GetCommentBanStatusResponse_1.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentChildren"></a>
# **getCommentChildren**
> GetCommentChildrenResponse getCommentChildren(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentChildrenResponse**](../Models/GetCommentChildrenResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCount"></a>
# **getCount**
> GetCountResponse getCount(text-search, byIPFromComment, filter, searchFilters, demo, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **text-search** | **String**|  | [optional] [default to null] |
| **byIPFromComment** | **String**|  | [optional] [default to null] |
| **filter** | **String**|  | [optional] [default to null] |
| **searchFilters** | **String**|  | [optional] [default to null] |
| **demo** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCountResponse**](../Models/GetCountResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCounts"></a>
# **getCounts**
> GetCountsResponse getCounts(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCountsResponse**](../Models/GetCountsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLogs"></a>
# **getLogs**
> GetLogsResponse getLogs(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetLogsResponse**](../Models/GetLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getManualBadges"></a>
# **getManualBadges**
> GetManualBadgesResponse getManualBadges(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetManualBadgesResponse**](../Models/GetManualBadgesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getManualBadgesForUser"></a>
# **getManualBadgesForUser**
> GetManualBadgesForUserResponse getManualBadgesForUser(badgesUserId, commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **badgesUserId** | **String**|  | [optional] [default to null] |
| **commentId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetManualBadgesForUserResponse**](../Models/GetManualBadgesForUserResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerationComment"></a>
# **getModerationComment**
> GetModerationCommentResponse getModerationComment(commentId, includeEmail, includeIP, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **includeEmail** | **Boolean**|  | [optional] [default to null] |
| **includeIP** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetModerationCommentResponse**](../Models/GetModerationCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerationCommentText"></a>
# **getModerationCommentText**
> GetModerationCommentTextResponse getModerationCommentText(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetModerationCommentTextResponse**](../Models/GetModerationCommentTextResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPreBanSummary"></a>
# **getPreBanSummary**
> GetPreBanSummaryResponse getPreBanSummary(commentId, includeByUserIdAndEmail, includeByIP, includeByEmailDomain, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **includeByUserIdAndEmail** | **Boolean**|  | [optional] [default to null] |
| **includeByIP** | **Boolean**|  | [optional] [default to null] |
| **includeByEmailDomain** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetPreBanSummaryResponse**](../Models/GetPreBanSummaryResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchCommentsSummary"></a>
# **getSearchCommentsSummary**
> GetSearchCommentsSummaryResponse getSearchCommentsSummary(value, filters, searchFilters, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **filters** | **String**|  | [optional] [default to null] |
| **searchFilters** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetSearchCommentsSummaryResponse**](../Models/GetSearchCommentsSummaryResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchPages"></a>
# **getSearchPages**
> GetSearchPagesResponse getSearchPages(value, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetSearchPagesResponse**](../Models/GetSearchPagesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchSites"></a>
# **getSearchSites**
> GetSearchSitesResponse getSearchSites(value, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetSearchSitesResponse**](../Models/GetSearchSitesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchSuggest"></a>
# **getSearchSuggest**
> GetSearchSuggestResponse getSearchSuggest(text-search, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **text-search** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetSearchSuggestResponse**](../Models/GetSearchSuggestResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchUsers"></a>
# **getSearchUsers**
> GetSearchUsersResponse getSearchUsers(value, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetSearchUsersResponse**](../Models/GetSearchUsersResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTrustFactor"></a>
# **getTrustFactor**
> GetTrustFactorResponse getTrustFactor(userId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **userId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetTrustFactorResponse**](../Models/GetTrustFactorResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBanPreference"></a>
# **getUserBanPreference**
> GetUserBanPreferenceResponse getUserBanPreference(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserBanPreferenceResponse**](../Models/GetUserBanPreferenceResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserInternalProfile"></a>
# **getUserInternalProfile**
> GetUserInternalProfileResponse_1 getUserInternalProfile(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserInternalProfileResponse_1**](../Models/GetUserInternalProfileResponse_1.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postAdjustCommentVotes"></a>
# **postAdjustCommentVotes**
> PostAdjustCommentVotesResponse postAdjustCommentVotes(commentId, AdjustCommentVotesParams, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **AdjustCommentVotesParams** | [**AdjustCommentVotesParams**](../Models/AdjustCommentVotesParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostAdjustCommentVotesResponse**](../Models/PostAdjustCommentVotesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postApiExport"></a>
# **postApiExport**
> PostApiExportResponse postApiExport(text-search, byIPFromComment, filters, searchFilters, sorts, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **text-search** | **String**|  | [optional] [default to null] |
| **byIPFromComment** | **String**|  | [optional] [default to null] |
| **filters** | **String**|  | [optional] [default to null] |
| **searchFilters** | **String**|  | [optional] [default to null] |
| **sorts** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostApiExportResponse**](../Models/PostApiExportResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postBanUserFromComment"></a>
# **postBanUserFromComment**
> PostBanUserFromCommentResponse postBanUserFromComment(commentId, banEmail, banEmailDomain, banIP, deleteAllUsersComments, bannedUntil, isShadowBan, updateId, banReason, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **banEmail** | **Boolean**|  | [optional] [default to null] |
| **banEmailDomain** | **Boolean**|  | [optional] [default to null] |
| **banIP** | **Boolean**|  | [optional] [default to null] |
| **deleteAllUsersComments** | **Boolean**|  | [optional] [default to null] |
| **bannedUntil** | **String**|  | [optional] [default to null] |
| **isShadowBan** | **Boolean**|  | [optional] [default to null] |
| **updateId** | **String**|  | [optional] [default to null] |
| **banReason** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostBanUserFromCommentResponse**](../Models/PostBanUserFromCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postBanUserUndo"></a>
# **postBanUserUndo**
> PostBanUserUndoResponse postBanUserUndo(BanUserUndoParams, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **BanUserUndoParams** | [**BanUserUndoParams**](../Models/BanUserUndoParams.md)|  | |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostBanUserUndoResponse**](../Models/PostBanUserUndoResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postBulkPreBanSummary"></a>
# **postBulkPreBanSummary**
> PostBulkPreBanSummaryResponse postBulkPreBanSummary(BulkPreBanParams, includeByUserIdAndEmail, includeByIP, includeByEmailDomain, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **BulkPreBanParams** | [**BulkPreBanParams**](../Models/BulkPreBanParams.md)|  | |
| **includeByUserIdAndEmail** | **Boolean**|  | [optional] [default to null] |
| **includeByIP** | **Boolean**|  | [optional] [default to null] |
| **includeByEmailDomain** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostBulkPreBanSummaryResponse**](../Models/PostBulkPreBanSummaryResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postCommentsByIds"></a>
# **postCommentsByIds**
> PostCommentsByIdsResponse postCommentsByIds(CommentsByIdsParams, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **CommentsByIdsParams** | [**CommentsByIdsParams**](../Models/CommentsByIdsParams.md)|  | |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostCommentsByIdsResponse**](../Models/PostCommentsByIdsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postFlagComment"></a>
# **postFlagComment**
> PostFlagCommentResponse postFlagComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostFlagCommentResponse**](../Models/PostFlagCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postRemoveComment"></a>
# **postRemoveComment**
> PostRemoveCommentResponse postRemoveComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostRemoveCommentResponse**](../Models/PostRemoveCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postRestoreDeletedComment"></a>
# **postRestoreDeletedComment**
> PostRestoreDeletedCommentResponse postRestoreDeletedComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostRestoreDeletedCommentResponse**](../Models/PostRestoreDeletedCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentApprovalStatus"></a>
# **postSetCommentApprovalStatus**
> PostSetCommentApprovalStatusResponse postSetCommentApprovalStatus(commentId, approved, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **approved** | **Boolean**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostSetCommentApprovalStatusResponse**](../Models/PostSetCommentApprovalStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentReviewStatus"></a>
# **postSetCommentReviewStatus**
> PostSetCommentReviewStatusResponse postSetCommentReviewStatus(commentId, reviewed, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **reviewed** | **Boolean**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostSetCommentReviewStatusResponse**](../Models/PostSetCommentReviewStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentSpamStatus"></a>
# **postSetCommentSpamStatus**
> PostSetCommentSpamStatusResponse postSetCommentSpamStatus(commentId, spam, permNotSpam, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **spam** | **Boolean**|  | [optional] [default to null] |
| **permNotSpam** | **Boolean**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostSetCommentSpamStatusResponse**](../Models/PostSetCommentSpamStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentText"></a>
# **postSetCommentText**
> PostSetCommentTextResponse postSetCommentText(commentId, SetCommentTextParams, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **SetCommentTextParams** | [**SetCommentTextParams**](../Models/SetCommentTextParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostSetCommentTextResponse**](../Models/PostSetCommentTextResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postUnFlagComment"></a>
# **postUnFlagComment**
> PostUnFlagCommentResponse postUnFlagComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostUnFlagCommentResponse**](../Models/PostUnFlagCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVote"></a>
# **postVote**
> PostVoteResponse postVote(commentId, direction, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **direction** | **String**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PostVoteResponse**](../Models/PostVoteResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putAwardBadge"></a>
# **putAwardBadge**
> PutAwardBadgeResponse putAwardBadge(badgeId, userId, commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **badgeId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **commentId** | **String**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PutAwardBadgeResponse**](../Models/PutAwardBadgeResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putCloseThread"></a>
# **putCloseThread**
> PutCloseThreadResponse putCloseThread(urlId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **urlId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PutCloseThreadResponse**](../Models/PutCloseThreadResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putRemoveBadge"></a>
# **putRemoveBadge**
> PutRemoveBadgeResponse putRemoveBadge(badgeId, userId, commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **badgeId** | **String**|  | [default to null] |
| **userId** | **String**|  | [optional] [default to null] |
| **commentId** | **String**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PutRemoveBadgeResponse**](../Models/PutRemoveBadgeResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putReopenThread"></a>
# **putReopenThread**
> PutReopenThreadResponse putReopenThread(urlId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **urlId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**PutReopenThreadResponse**](../Models/PutReopenThreadResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="setTrustFactor"></a>
# **setTrustFactor**
> SetTrustFactorResponse setTrustFactor(userId, trustFactor, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **userId** | **String**|  | [optional] [default to null] |
| **trustFactor** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**SetTrustFactorResponse**](../Models/SetTrustFactorResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

