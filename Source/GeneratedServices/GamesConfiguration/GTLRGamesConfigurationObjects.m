// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Game Services Publishing API (gamesConfiguration/v1configuration)
// Description:
//   The Publishing API for Google Play Game Services.
// Documentation:
//   https://developers.google.com/games/services

#import "GTLRGamesConfigurationObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_AchievementConfiguration
//

@implementation GTLRGamesConfiguration_AchievementConfiguration
@dynamic achievementType, draft, identifier, initialState, kind, published,
         stepsToUnlock, token;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_AchievementConfigurationDetail
//

@implementation GTLRGamesConfiguration_AchievementConfigurationDetail
@dynamic descriptionProperty, iconUrl, kind, name, pointValue, sortRank;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_AchievementConfigurationListResponse
//

@implementation GTLRGamesConfiguration_AchievementConfigurationListResponse
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRGamesConfiguration_AchievementConfiguration class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_GamesNumberAffixConfiguration
//

@implementation GTLRGamesConfiguration_GamesNumberAffixConfiguration
@dynamic few, many, one, other, two, zero;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_GamesNumberFormatConfiguration
//

@implementation GTLRGamesConfiguration_GamesNumberFormatConfiguration
@dynamic currencyCode, numberFormatType, numDecimalPlaces, suffix;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_ImageConfiguration
//

@implementation GTLRGamesConfiguration_ImageConfiguration
@dynamic imageType, kind, resourceId, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_LeaderboardConfiguration
//

@implementation GTLRGamesConfiguration_LeaderboardConfiguration
@dynamic draft, identifier, kind, published, scoreMax, scoreMin, scoreOrder,
         token;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_LeaderboardConfigurationDetail
//

@implementation GTLRGamesConfiguration_LeaderboardConfigurationDetail
@dynamic iconUrl, kind, name, scoreFormat, sortRank;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_LeaderboardConfigurationListResponse
//

@implementation GTLRGamesConfiguration_LeaderboardConfigurationListResponse
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRGamesConfiguration_LeaderboardConfiguration class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_LocalizedString
//

@implementation GTLRGamesConfiguration_LocalizedString
@dynamic kind, locale, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGamesConfiguration_LocalizedStringBundle
//

@implementation GTLRGamesConfiguration_LocalizedStringBundle
@dynamic kind, translations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"translations" : [GTLRGamesConfiguration_LocalizedString class]
  };
  return map;
}

@end
