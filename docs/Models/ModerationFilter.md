# ModerationFilter
## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
| **reviewed** | **Boolean** |  | [optional] [default to null] |
| **approved** | **Boolean** |  | [optional] [default to null] |
| **isSpam** | **Boolean** |  | [optional] [default to null] |
| **isBannedUser** | **Boolean** |  | [optional] [default to null] |
| **isLocked** | **Boolean** |  | [optional] [default to null] |
| **flagCountGt** | **Double** |  | [optional] [default to null] |
| **userId** | **String** |  | [optional] [default to null] |
| **urlId** | **String** |  | [optional] [default to null] |
| **domain** | **String** |  | [optional] [default to null] |
| **moderationGroupIds** | **List** |  | [optional] [default to null] |
| **commentTextSearch** | **List** | Text search terms. Each term is matched case-insensitively against the comment text. A term wrapped in quotes means exact phrase match. | [optional] [default to null] |
| **exactCommentText** | **String** | Set by the &#x60;exact&#x3D;\&quot;...\&quot;&#x60; search syntax. The comment text must equal this value exactly (case-sensitive, full-string), as opposed to the substring matching of commentTextSearch. | [optional] [default to null] |

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

