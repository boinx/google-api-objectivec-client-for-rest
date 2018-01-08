// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Remote Config API (firebaseremoteconfig/v1)
// Description:
//   Firebase Remote Config API allows the 3P clients to manage Remote Config
//   conditions and parameters for Firebase applications.
// Documentation:
//   https://firebase.google.com/docs/remote-config/

#import "GTLRFirebaseRemoteConfigObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRFirebaseRemoteConfig_RemoteConfigCondition.tagColor
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Blue = @"BLUE";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Brown = @"BROWN";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_ConditionDisplayColorUnspecified = @"CONDITION_DISPLAY_COLOR_UNSPECIFIED";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Cyan = @"CYAN";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_DeepOrange = @"DEEP_ORANGE";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Green = @"GREEN";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Indigo = @"INDIGO";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Lime = @"LIME";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Orange = @"ORANGE";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Pink = @"PINK";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Purple = @"PURPLE";
NSString * const kGTLRFirebaseRemoteConfig_RemoteConfigCondition_TagColor_Teal = @"TEAL";

// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRemoteConfig_RemoteConfig
//

@implementation GTLRFirebaseRemoteConfig_RemoteConfig
@dynamic conditions, parameters;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"conditions" : [GTLRFirebaseRemoteConfig_RemoteConfigCondition class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRemoteConfig_RemoteConfig_Parameters
//

@implementation GTLRFirebaseRemoteConfig_RemoteConfig_Parameters

+ (Class)classForAdditionalProperties {
  return [GTLRFirebaseRemoteConfig_RemoteConfigParameter class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRemoteConfig_RemoteConfigCondition
//

@implementation GTLRFirebaseRemoteConfig_RemoteConfigCondition
@dynamic descriptionProperty, expression, name, tagColor;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRemoteConfig_RemoteConfigParameter
//

@implementation GTLRFirebaseRemoteConfig_RemoteConfigParameter
@dynamic conditionalValues, defaultValue, descriptionProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRemoteConfig_RemoteConfigParameter_ConditionalValues
//

@implementation GTLRFirebaseRemoteConfig_RemoteConfigParameter_ConditionalValues

+ (Class)classForAdditionalProperties {
  return [GTLRFirebaseRemoteConfig_RemoteConfigParameterValue class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRemoteConfig_RemoteConfigParameterValue
//

@implementation GTLRFirebaseRemoteConfig_RemoteConfigParameterValue
@dynamic useInAppDefault, value;
@end
