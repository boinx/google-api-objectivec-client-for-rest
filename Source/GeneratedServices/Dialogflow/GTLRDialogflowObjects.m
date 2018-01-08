// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Dialogflow API (dialogflow/v2beta1)
// Description:
//   An end-to-end development suite for conversational interfaces (e.g.,
//   chatbots, voice-powered apps and devices).
// Documentation:
//   https://cloud.google.com/dialogflow-enterprise/

#import "GTLRDialogflowObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRDialogflow_Agent.matchMode
NSString * const kGTLRDialogflow_Agent_MatchMode_MatchModeHybrid = @"MATCH_MODE_HYBRID";
NSString * const kGTLRDialogflow_Agent_MatchMode_MatchModeMlOnly = @"MATCH_MODE_ML_ONLY";
NSString * const kGTLRDialogflow_Agent_MatchMode_MatchModeUnspecified = @"MATCH_MODE_UNSPECIFIED";

// GTLRDialogflow_BatchUpdateIntentsRequest.intentView
NSString * const kGTLRDialogflow_BatchUpdateIntentsRequest_IntentView_IntentViewFull = @"INTENT_VIEW_FULL";
NSString * const kGTLRDialogflow_BatchUpdateIntentsRequest_IntentView_IntentViewUnspecified = @"INTENT_VIEW_UNSPECIFIED";

// GTLRDialogflow_EntityType.autoExpansionMode
NSString * const kGTLRDialogflow_EntityType_AutoExpansionMode_AutoExpansionModeDefault = @"AUTO_EXPANSION_MODE_DEFAULT";
NSString * const kGTLRDialogflow_EntityType_AutoExpansionMode_AutoExpansionModeUnspecified = @"AUTO_EXPANSION_MODE_UNSPECIFIED";

// GTLRDialogflow_EntityType.kind
NSString * const kGTLRDialogflow_EntityType_Kind_KindList      = @"KIND_LIST";
NSString * const kGTLRDialogflow_EntityType_Kind_KindMap       = @"KIND_MAP";
NSString * const kGTLRDialogflow_EntityType_Kind_KindUnspecified = @"KIND_UNSPECIFIED";

// GTLRDialogflow_InputAudioConfig.audioEncoding
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingAmr = @"AUDIO_ENCODING_AMR";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingAmrWb = @"AUDIO_ENCODING_AMR_WB";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingFlac = @"AUDIO_ENCODING_FLAC";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingLinear16 = @"AUDIO_ENCODING_LINEAR_16";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingMulaw = @"AUDIO_ENCODING_MULAW";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingOggOpus = @"AUDIO_ENCODING_OGG_OPUS";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingSpeexWithHeaderByte = @"AUDIO_ENCODING_SPEEX_WITH_HEADER_BYTE";
NSString * const kGTLRDialogflow_InputAudioConfig_AudioEncoding_AudioEncodingUnspecified = @"AUDIO_ENCODING_UNSPECIFIED";

// GTLRDialogflow_Intent.defaultResponsePlatforms
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_ActionsOnGoogle = @"ACTIONS_ON_GOOGLE";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Facebook = @"FACEBOOK";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Kik = @"KIK";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Line = @"LINE";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_PlatformUnspecified = @"PLATFORM_UNSPECIFIED";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Skype = @"SKYPE";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Slack = @"SLACK";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Telegram = @"TELEGRAM";
NSString * const kGTLRDialogflow_Intent_DefaultResponsePlatforms_Viber = @"VIBER";

// GTLRDialogflow_Intent.webhookState
NSString * const kGTLRDialogflow_Intent_WebhookState_WebhookStateEnabled = @"WEBHOOK_STATE_ENABLED";
NSString * const kGTLRDialogflow_Intent_WebhookState_WebhookStateEnabledForSlotFilling = @"WEBHOOK_STATE_ENABLED_FOR_SLOT_FILLING";
NSString * const kGTLRDialogflow_Intent_WebhookState_WebhookStateUnspecified = @"WEBHOOK_STATE_UNSPECIFIED";

// GTLRDialogflow_IntentMessage.platform
NSString * const kGTLRDialogflow_IntentMessage_Platform_ActionsOnGoogle = @"ACTIONS_ON_GOOGLE";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Facebook = @"FACEBOOK";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Kik    = @"KIK";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Line   = @"LINE";
NSString * const kGTLRDialogflow_IntentMessage_Platform_PlatformUnspecified = @"PLATFORM_UNSPECIFIED";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Skype  = @"SKYPE";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Slack  = @"SLACK";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Telegram = @"TELEGRAM";
NSString * const kGTLRDialogflow_IntentMessage_Platform_Viber  = @"VIBER";

// GTLRDialogflow_IntentTrainingPhrase.type
NSString * const kGTLRDialogflow_IntentTrainingPhrase_Type_Example = @"EXAMPLE";
NSString * const kGTLRDialogflow_IntentTrainingPhrase_Type_Template = @"TEMPLATE";
NSString * const kGTLRDialogflow_IntentTrainingPhrase_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";

// GTLRDialogflow_SessionEntityType.entityOverrideMode
NSString * const kGTLRDialogflow_SessionEntityType_EntityOverrideMode_EntityOverrideModeOverride = @"ENTITY_OVERRIDE_MODE_OVERRIDE";
NSString * const kGTLRDialogflow_SessionEntityType_EntityOverrideMode_EntityOverrideModeSupplement = @"ENTITY_OVERRIDE_MODE_SUPPLEMENT";
NSString * const kGTLRDialogflow_SessionEntityType_EntityOverrideMode_EntityOverrideModeUnspecified = @"ENTITY_OVERRIDE_MODE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Agent
//

@implementation GTLRDialogflow_Agent
@dynamic avatarUri, classificationThreshold, defaultLanguageCode,
         descriptionProperty, displayName, enableLogging, matchMode, parent,
         supportedLanguageCodes, timeZone;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"supportedLanguageCodes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchCreateEntitiesRequest
//

@implementation GTLRDialogflow_BatchCreateEntitiesRequest
@dynamic entities, languageCode;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entities" : [GTLRDialogflow_EntityTypeEntity class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchDeleteEntitiesRequest
//

@implementation GTLRDialogflow_BatchDeleteEntitiesRequest
@dynamic entityValues, languageCode;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entityValues" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchDeleteEntityTypesRequest
//

@implementation GTLRDialogflow_BatchDeleteEntityTypesRequest
@dynamic entityTypeNames;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entityTypeNames" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchDeleteIntentsRequest
//

@implementation GTLRDialogflow_BatchDeleteIntentsRequest
@dynamic intents;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"intents" : [GTLRDialogflow_Intent class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchUpdateEntitiesRequest
//

@implementation GTLRDialogflow_BatchUpdateEntitiesRequest
@dynamic entities, languageCode, updateMask;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entities" : [GTLRDialogflow_EntityTypeEntity class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchUpdateEntityTypesRequest
//

@implementation GTLRDialogflow_BatchUpdateEntityTypesRequest
@dynamic entityTypeBatchInline, entityTypeBatchUri, languageCode, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchUpdateEntityTypesResponse
//

@implementation GTLRDialogflow_BatchUpdateEntityTypesResponse
@dynamic entityTypes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entityTypes" : [GTLRDialogflow_EntityType class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchUpdateIntentsRequest
//

@implementation GTLRDialogflow_BatchUpdateIntentsRequest
@dynamic intentBatchInline, intentBatchUri, intentView, languageCode,
         updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_BatchUpdateIntentsResponse
//

@implementation GTLRDialogflow_BatchUpdateIntentsResponse
@dynamic intents;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"intents" : [GTLRDialogflow_Intent class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Context
//

@implementation GTLRDialogflow_Context
@dynamic lifespanCount, name, parameters;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Context_Parameters
//

@implementation GTLRDialogflow_Context_Parameters

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_DetectIntentRequest
//

@implementation GTLRDialogflow_DetectIntentRequest
@dynamic inputAudio, queryInput, queryParams;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_DetectIntentResponse
//

@implementation GTLRDialogflow_DetectIntentResponse
@dynamic queryResult, responseId, webhookStatus;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Empty
//

@implementation GTLRDialogflow_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_EntityType
//

@implementation GTLRDialogflow_EntityType
@dynamic autoExpansionMode, displayName, entities, kind, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entities" : [GTLRDialogflow_EntityTypeEntity class]
  };
  return map;
}

+ (BOOL)isKindValidForClassRegistry {
  // This class has a "kind" property that doesn't appear to be usable to
  // determine what type of object was encoded in the JSON.
  return NO;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_EntityTypeBatch
//

@implementation GTLRDialogflow_EntityTypeBatch
@dynamic entityTypes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entityTypes" : [GTLRDialogflow_EntityType class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_EntityTypeEntity
//

@implementation GTLRDialogflow_EntityTypeEntity
@dynamic synonyms, value;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"synonyms" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_EventInput
//

@implementation GTLRDialogflow_EventInput
@dynamic languageCode, name, parameters;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_EventInput_Parameters
//

@implementation GTLRDialogflow_EventInput_Parameters

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ExportAgentRequest
//

@implementation GTLRDialogflow_ExportAgentRequest
@dynamic agentUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ExportAgentResponse
//

@implementation GTLRDialogflow_ExportAgentResponse
@dynamic agentContent, agentUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ImportAgentRequest
//

@implementation GTLRDialogflow_ImportAgentRequest
@dynamic agentContent, agentUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_InputAudioConfig
//

@implementation GTLRDialogflow_InputAudioConfig
@dynamic audioEncoding, languageCode, phraseHints, sampleRateHertz;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"phraseHints" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Intent
//

@implementation GTLRDialogflow_Intent
@dynamic action, defaultResponsePlatforms, displayName, events,
         followupIntentInfo, inputContextNames, isFallback, messages, mlEnabled,
         name, outputContexts, parameters, parentFollowupIntentName, priority,
         resetContexts, rootFollowupIntentName, trainingPhrases, webhookState;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"defaultResponsePlatforms" : [NSString class],
    @"events" : [NSString class],
    @"followupIntentInfo" : [GTLRDialogflow_IntentFollowupIntentInfo class],
    @"inputContextNames" : [NSString class],
    @"messages" : [GTLRDialogflow_IntentMessage class],
    @"outputContexts" : [GTLRDialogflow_Context class],
    @"parameters" : [GTLRDialogflow_IntentParameter class],
    @"trainingPhrases" : [GTLRDialogflow_IntentTrainingPhrase class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentBatch
//

@implementation GTLRDialogflow_IntentBatch
@dynamic intents;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"intents" : [GTLRDialogflow_Intent class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentFollowupIntentInfo
//

@implementation GTLRDialogflow_IntentFollowupIntentInfo
@dynamic followupIntentName, parentFollowupIntentName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessage
//

@implementation GTLRDialogflow_IntentMessage
@dynamic basicCard, card, carouselSelect, image, linkOutSuggestion, listSelect,
         payload, platform, quickReplies, simpleResponses, suggestions, text;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessage_Payload
//

@implementation GTLRDialogflow_IntentMessage_Payload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageBasicCard
//

@implementation GTLRDialogflow_IntentMessageBasicCard
@dynamic buttons, formattedText, image, subtitle, title;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"buttons" : [GTLRDialogflow_IntentMessageBasicCardButton class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageBasicCardButton
//

@implementation GTLRDialogflow_IntentMessageBasicCardButton
@dynamic openUriAction, title;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageBasicCardButtonOpenUriAction
//

@implementation GTLRDialogflow_IntentMessageBasicCardButtonOpenUriAction
@dynamic uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageCard
//

@implementation GTLRDialogflow_IntentMessageCard
@dynamic buttons, imageUri, subtitle, title;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"buttons" : [GTLRDialogflow_IntentMessageCardButton class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageCardButton
//

@implementation GTLRDialogflow_IntentMessageCardButton
@dynamic postback, text;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageCarouselSelect
//

@implementation GTLRDialogflow_IntentMessageCarouselSelect
@dynamic items;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRDialogflow_IntentMessageCarouselSelectItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageCarouselSelectItem
//

@implementation GTLRDialogflow_IntentMessageCarouselSelectItem
@dynamic descriptionProperty, image, info, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageImage
//

@implementation GTLRDialogflow_IntentMessageImage
@dynamic imageUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageLinkOutSuggestion
//

@implementation GTLRDialogflow_IntentMessageLinkOutSuggestion
@dynamic destinationName, uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageListSelect
//

@implementation GTLRDialogflow_IntentMessageListSelect
@dynamic items, title;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRDialogflow_IntentMessageListSelectItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageListSelectItem
//

@implementation GTLRDialogflow_IntentMessageListSelectItem
@dynamic descriptionProperty, image, info, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageQuickReplies
//

@implementation GTLRDialogflow_IntentMessageQuickReplies
@dynamic quickReplies, title;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"quickReplies" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageSelectItemInfo
//

@implementation GTLRDialogflow_IntentMessageSelectItemInfo
@dynamic key, synonyms;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"synonyms" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageSimpleResponse
//

@implementation GTLRDialogflow_IntentMessageSimpleResponse
@dynamic displayText, ssml, textToSpeech;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageSimpleResponses
//

@implementation GTLRDialogflow_IntentMessageSimpleResponses
@dynamic simpleResponses;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"simpleResponses" : [GTLRDialogflow_IntentMessageSimpleResponse class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageSuggestion
//

@implementation GTLRDialogflow_IntentMessageSuggestion
@dynamic title;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageSuggestions
//

@implementation GTLRDialogflow_IntentMessageSuggestions
@dynamic suggestions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"suggestions" : [GTLRDialogflow_IntentMessageSuggestion class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentMessageText
//

@implementation GTLRDialogflow_IntentMessageText
@dynamic text;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"text" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentParameter
//

@implementation GTLRDialogflow_IntentParameter
@dynamic defaultValue, displayName, entityTypeDisplayName, isList, mandatory,
         name, prompts, value;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"prompts" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentTrainingPhrase
//

@implementation GTLRDialogflow_IntentTrainingPhrase
@dynamic name, parts, timesAddedCount, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"parts" : [GTLRDialogflow_IntentTrainingPhrasePart class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_IntentTrainingPhrasePart
//

@implementation GTLRDialogflow_IntentTrainingPhrasePart
@dynamic alias, entityType, text, userDefined;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_LatLng
//

@implementation GTLRDialogflow_LatLng
@dynamic latitude, longitude;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ListContextsResponse
//

@implementation GTLRDialogflow_ListContextsResponse
@dynamic contexts, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"contexts" : [GTLRDialogflow_Context class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"contexts";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ListEntityTypesResponse
//

@implementation GTLRDialogflow_ListEntityTypesResponse
@dynamic entityTypes, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entityTypes" : [GTLRDialogflow_EntityType class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"entityTypes";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ListIntentsResponse
//

@implementation GTLRDialogflow_ListIntentsResponse
@dynamic intents, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"intents" : [GTLRDialogflow_Intent class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"intents";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_ListSessionEntityTypesResponse
//

@implementation GTLRDialogflow_ListSessionEntityTypesResponse
@dynamic nextPageToken, sessionEntityTypes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sessionEntityTypes" : [GTLRDialogflow_SessionEntityType class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"sessionEntityTypes";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Operation
//

@implementation GTLRDialogflow_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Operation_Metadata
//

@implementation GTLRDialogflow_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Operation_Response
//

@implementation GTLRDialogflow_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_OriginalDetectIntentRequest
//

@implementation GTLRDialogflow_OriginalDetectIntentRequest
@dynamic payload, source;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_OriginalDetectIntentRequest_Payload
//

@implementation GTLRDialogflow_OriginalDetectIntentRequest_Payload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryInput
//

@implementation GTLRDialogflow_QueryInput
@dynamic audioConfig, event, text;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryParameters
//

@implementation GTLRDialogflow_QueryParameters
@dynamic contexts, geoLocation, payload, resetContexts, sessionEntityTypes,
         timeZone;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"contexts" : [GTLRDialogflow_Context class],
    @"sessionEntityTypes" : [GTLRDialogflow_SessionEntityType class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryParameters_Payload
//

@implementation GTLRDialogflow_QueryParameters_Payload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryResult
//

@implementation GTLRDialogflow_QueryResult
@dynamic action, allRequiredParamsPresent, diagnosticInfo, fulfillmentMessages,
         fulfillmentText, intent, intentDetectionConfidence, languageCode,
         outputContexts, parameters, queryText, speechRecognitionConfidence,
         webhookPayload, webhookSource;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"fulfillmentMessages" : [GTLRDialogflow_IntentMessage class],
    @"outputContexts" : [GTLRDialogflow_Context class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryResult_DiagnosticInfo
//

@implementation GTLRDialogflow_QueryResult_DiagnosticInfo

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryResult_Parameters
//

@implementation GTLRDialogflow_QueryResult_Parameters

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_QueryResult_WebhookPayload
//

@implementation GTLRDialogflow_QueryResult_WebhookPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_RestoreAgentRequest
//

@implementation GTLRDialogflow_RestoreAgentRequest
@dynamic agentContent, agentUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_SearchAgentsResponse
//

@implementation GTLRDialogflow_SearchAgentsResponse
@dynamic agents, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"agents" : [GTLRDialogflow_Agent class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"agents";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_SessionEntityType
//

@implementation GTLRDialogflow_SessionEntityType
@dynamic entities, entityOverrideMode, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entities" : [GTLRDialogflow_EntityTypeEntity class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Status
//

@implementation GTLRDialogflow_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRDialogflow_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_Status_Details_Item
//

@implementation GTLRDialogflow_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_TextInput
//

@implementation GTLRDialogflow_TextInput
@dynamic languageCode, text;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_TrainAgentRequest
//

@implementation GTLRDialogflow_TrainAgentRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_WebhookRequest
//

@implementation GTLRDialogflow_WebhookRequest
@dynamic originalDetectIntentRequest, queryResult, responseId, session;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_WebhookResponse
//

@implementation GTLRDialogflow_WebhookResponse
@dynamic followupEventInput, fulfillmentMessages, fulfillmentText,
         outputContexts, payload, source;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"fulfillmentMessages" : [GTLRDialogflow_IntentMessage class],
    @"outputContexts" : [GTLRDialogflow_Context class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDialogflow_WebhookResponse_Payload
//

@implementation GTLRDialogflow_WebhookResponse_Payload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
