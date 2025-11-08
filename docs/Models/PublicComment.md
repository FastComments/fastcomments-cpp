# PublicComment
## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
| **date** | **Date** |  | [default to null] |
| **\_id** | **String** |  | [default to null] |
| **userId** | **String** |  | [optional] [default to null] |
| **anonUserId** | **String** |  | [optional] [default to null] |
| **commenterName** | **String** |  | [default to null] |
| **commenterLink** | **String** |  | [optional] [default to null] |
| **commentHTML** | **String** |  | [default to null] |
| **parentId** | **String** |  | [optional] [default to null] |
| **votes** | **Integer** |  | [optional] [default to null] |
| **votesUp** | **Integer** |  | [optional] [default to null] |
| **votesDown** | **Integer** |  | [optional] [default to null] |
| **verified** | **Boolean** |  | [default to null] |
| **avatarSrc** | **String** |  | [optional] [default to null] |
| **isSpam** | **Boolean** |  | [optional] [default to null] |
| **hasImages** | **Boolean** |  | [optional] [default to null] |
| **isDeleted** | **Boolean** |  | [optional] [default to null] |
| **isDeletedUser** | **Boolean** |  | [optional] [default to null] |
| **isByAdmin** | **Boolean** |  | [optional] [default to null] |
| **isByModerator** | **Boolean** |  | [optional] [default to null] |
| **isPinned** | **Boolean** |  | [optional] [default to null] |
| **isLocked** | **Boolean** |  | [optional] [default to null] |
| **rating** | **Double** |  | [optional] [default to null] |
| **displayLabel** | **String** |  | [optional] [default to null] |
| **badges** | [**List**](CommentUserBadgeInfo.md) |  | [optional] [default to null] |
| **feedbackIds** | **List** |  | [optional] [default to null] |
| **viewCount** | **Long** |  | [optional] [default to null] |
| **requiresVerification** | **Boolean** |  | [optional] [default to null] |
| **editKey** | **String** |  | [optional] [default to null] |
| **isUnread** | **Boolean** |  | [optional] [default to null] |
| **myVoteId** | **String** |  | [optional] [default to null] |
| **isVotedDown** | **Boolean** |  | [optional] [default to null] |
| **isVotedUp** | **Boolean** |  | [optional] [default to null] |
| **hasChildren** | **Boolean** | This is always set when asTree&#x3D;true | [optional] [default to null] |
| **nestedChildrenCount** | **Integer** | The total nested child count included in this response (may be more available w/ pagination) Only set with asTree&#x3D;true, otherwise this will be null. | [optional] [default to null] |
| **childCount** | **Integer** | You must ask the API to count children (with asTree&#x3D;true&amp;countChildren&#x3D;true), otherwise this will be null. This will be the complete direct child count, whereas children may only contain a subset based on pagination. | [optional] [default to null] |
| **children** | [**List**](PublicComment.md) |  | [optional] [default to null] |
| **isFlagged** | **Boolean** |  | [optional] [default to null] |
| **isBlocked** | **Boolean** |  | [optional] [default to null] |

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

