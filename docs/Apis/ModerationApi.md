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
> VoteDeleteResponse deleteModerationVote(commentId, voteId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **voteId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**VoteDeleteResponse**](../Models/VoteDeleteResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getApiComments"></a>
# **getApiComments**
> ModerationAPIGetCommentsResponse getApiComments(page, count, text-search, byIPFromComment, filters, searchFilters, sorts, demo, tenantId, sso)



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

[**ModerationAPIGetCommentsResponse**](../Models/ModerationAPIGetCommentsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getApiExportStatus"></a>
# **getApiExportStatus**
> ModerationExportStatusResponse getApiExportStatus(batchJobId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **batchJobId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationExportStatusResponse**](../Models/ModerationExportStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getApiIds"></a>
# **getApiIds**
> ModerationAPIGetCommentIdsResponse getApiIds(text-search, byIPFromComment, filters, searchFilters, afterId, demo, tenantId, sso)



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

[**ModerationAPIGetCommentIdsResponse**](../Models/ModerationAPIGetCommentIdsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBanUsersFromComment"></a>
# **getBanUsersFromComment**
> GetBannedUsersFromCommentResponse getBanUsersFromComment(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetBannedUsersFromCommentResponse**](../Models/GetBannedUsersFromCommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentBanStatus"></a>
# **getCommentBanStatus**
> GetCommentBanStatusResponse getCommentBanStatus(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentBanStatusResponse**](../Models/GetCommentBanStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCommentChildren"></a>
# **getCommentChildren**
> ModerationAPIChildCommentsResponse getCommentChildren(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationAPIChildCommentsResponse**](../Models/ModerationAPIChildCommentsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCount"></a>
# **getCount**
> ModerationAPICountCommentsResponse getCount(text-search, byIPFromComment, filter, searchFilters, demo, tenantId, sso)



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

[**ModerationAPICountCommentsResponse**](../Models/ModerationAPICountCommentsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCounts"></a>
# **getCounts**
> GetBannedUsersCountResponse getCounts(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetBannedUsersCountResponse**](../Models/GetBannedUsersCountResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLogs"></a>
# **getLogs**
> ModerationAPIGetLogsResponse getLogs(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationAPIGetLogsResponse**](../Models/ModerationAPIGetLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getManualBadges"></a>
# **getManualBadges**
> GetTenantManualBadgesResponse getManualBadges(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetTenantManualBadgesResponse**](../Models/GetTenantManualBadgesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getManualBadgesForUser"></a>
# **getManualBadgesForUser**
> GetUserManualBadgesResponse getManualBadgesForUser(badgesUserId, commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **badgesUserId** | **String**|  | [optional] [default to null] |
| **commentId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserManualBadgesResponse**](../Models/GetUserManualBadgesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerationComment"></a>
# **getModerationComment**
> ModerationAPICommentResponse getModerationComment(commentId, includeEmail, includeIP, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **includeEmail** | **Boolean**|  | [optional] [default to null] |
| **includeIP** | **Boolean**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationAPICommentResponse**](../Models/ModerationAPICommentResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getModerationCommentText"></a>
# **getModerationCommentText**
> GetCommentTextResponse getModerationCommentText(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetCommentTextResponse**](../Models/GetCommentTextResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getPreBanSummary"></a>
# **getPreBanSummary**
> PreBanSummary getPreBanSummary(commentId, includeByUserIdAndEmail, includeByIP, includeByEmailDomain, tenantId, sso)



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

[**PreBanSummary**](../Models/PreBanSummary.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchCommentsSummary"></a>
# **getSearchCommentsSummary**
> ModerationCommentSearchResponse getSearchCommentsSummary(value, filters, searchFilters, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **filters** | **String**|  | [optional] [default to null] |
| **searchFilters** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationCommentSearchResponse**](../Models/ModerationCommentSearchResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchPages"></a>
# **getSearchPages**
> ModerationPageSearchResponse getSearchPages(value, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationPageSearchResponse**](../Models/ModerationPageSearchResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchSites"></a>
# **getSearchSites**
> ModerationSiteSearchResponse getSearchSites(value, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationSiteSearchResponse**](../Models/ModerationSiteSearchResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchSuggest"></a>
# **getSearchSuggest**
> ModerationSuggestResponse getSearchSuggest(text-search, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **text-search** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationSuggestResponse**](../Models/ModerationSuggestResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearchUsers"></a>
# **getSearchUsers**
> ModerationUserSearchResponse getSearchUsers(value, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **value** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationUserSearchResponse**](../Models/ModerationUserSearchResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTrustFactor"></a>
# **getTrustFactor**
> GetUserTrustFactorResponse getTrustFactor(userId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **userId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserTrustFactorResponse**](../Models/GetUserTrustFactorResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserBanPreference"></a>
# **getUserBanPreference**
> APIModerateGetUserBanPreferencesResponse getUserBanPreference(tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIModerateGetUserBanPreferencesResponse**](../Models/APIModerateGetUserBanPreferencesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getUserInternalProfile"></a>
# **getUserInternalProfile**
> GetUserInternalProfileResponse getUserInternalProfile(commentId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**GetUserInternalProfileResponse**](../Models/GetUserInternalProfileResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postAdjustCommentVotes"></a>
# **postAdjustCommentVotes**
> AdjustVotesResponse postAdjustCommentVotes(commentId, AdjustCommentVotesParams, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **AdjustCommentVotesParams** | [**AdjustCommentVotesParams**](../Models/AdjustCommentVotesParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**AdjustVotesResponse**](../Models/AdjustVotesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postApiExport"></a>
# **postApiExport**
> ModerationExportResponse postApiExport(text-search, byIPFromComment, filters, searchFilters, sorts, tenantId, sso)



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

[**ModerationExportResponse**](../Models/ModerationExportResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postBanUserFromComment"></a>
# **postBanUserFromComment**
> BanUserFromCommentResult postBanUserFromComment(commentId, banEmail, banEmailDomain, banIP, deleteAllUsersComments, bannedUntil, isShadowBan, updateId, banReason, tenantId, sso)



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

[**BanUserFromCommentResult**](../Models/BanUserFromCommentResult.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postBanUserUndo"></a>
# **postBanUserUndo**
> APIEmptyResponse postBanUserUndo(BanUserUndoParams, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **BanUserUndoParams** | [**BanUserUndoParams**](../Models/BanUserUndoParams.md)|  | |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postBulkPreBanSummary"></a>
# **postBulkPreBanSummary**
> BulkPreBanSummary postBulkPreBanSummary(BulkPreBanParams, includeByUserIdAndEmail, includeByIP, includeByEmailDomain, tenantId, sso)



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

[**BulkPreBanSummary**](../Models/BulkPreBanSummary.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postCommentsByIds"></a>
# **postCommentsByIds**
> ModerationAPIChildCommentsResponse postCommentsByIds(CommentsByIdsParams, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **CommentsByIdsParams** | [**CommentsByIdsParams**](../Models/CommentsByIdsParams.md)|  | |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**ModerationAPIChildCommentsResponse**](../Models/ModerationAPIChildCommentsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postFlagComment"></a>
# **postFlagComment**
> APIEmptyResponse postFlagComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

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
> APIEmptyResponse postRestoreDeletedComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentApprovalStatus"></a>
# **postSetCommentApprovalStatus**
> SetCommentApprovedResponse postSetCommentApprovalStatus(commentId, approved, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **approved** | **Boolean**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**SetCommentApprovedResponse**](../Models/SetCommentApprovedResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentReviewStatus"></a>
# **postSetCommentReviewStatus**
> APIEmptyResponse postSetCommentReviewStatus(commentId, reviewed, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **reviewed** | **Boolean**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentSpamStatus"></a>
# **postSetCommentSpamStatus**
> APIEmptyResponse postSetCommentSpamStatus(commentId, spam, permNotSpam, broadcastId, tenantId, sso)



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

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postSetCommentText"></a>
# **postSetCommentText**
> SetCommentTextResponse postSetCommentText(commentId, SetCommentTextParams, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **SetCommentTextParams** | [**SetCommentTextParams**](../Models/SetCommentTextParams.md)|  | |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**SetCommentTextResponse**](../Models/SetCommentTextResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postUnFlagComment"></a>
# **postUnFlagComment**
> APIEmptyResponse postUnFlagComment(commentId, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVote"></a>
# **postVote**
> VoteResponse postVote(commentId, direction, broadcastId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **commentId** | **String**|  | [default to null] |
| **direction** | **String**|  | [optional] [default to null] |
| **broadcastId** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**VoteResponse**](../Models/VoteResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putAwardBadge"></a>
# **putAwardBadge**
> AwardUserBadgeResponse putAwardBadge(badgeId, userId, commentId, broadcastId, tenantId, sso)



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

[**AwardUserBadgeResponse**](../Models/AwardUserBadgeResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putCloseThread"></a>
# **putCloseThread**
> APIEmptyResponse putCloseThread(urlId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **urlId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putRemoveBadge"></a>
# **putRemoveBadge**
> RemoveUserBadgeResponse putRemoveBadge(badgeId, userId, commentId, broadcastId, tenantId, sso)



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

[**RemoveUserBadgeResponse**](../Models/RemoveUserBadgeResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putReopenThread"></a>
# **putReopenThread**
> APIEmptyResponse putReopenThread(urlId, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **urlId** | **String**|  | [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**APIEmptyResponse**](../Models/APIEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="setTrustFactor"></a>
# **setTrustFactor**
> SetUserTrustFactorResponse setTrustFactor(userId, trustFactor, tenantId, sso)



### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **userId** | **String**|  | [optional] [default to null] |
| **trustFactor** | **String**|  | [optional] [default to null] |
| **tenantId** | **String**|  | [optional] [default to null] |
| **sso** | **String**|  | [optional] [default to null] |

### Return type

[**SetUserTrustFactorResponse**](../Models/SetUserTrustFactorResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

