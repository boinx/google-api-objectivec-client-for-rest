// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Source Repositories API (sourcerepo/v1)
// Description:
//   Access source code repositories hosted by Google.
// Documentation:
//   https://cloud.google.com/source-repositories/docs/apis

#import "GTLRCloudSourceRepositoriesObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudSourceRepositories_AuditLogConfig.logType
NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_AuditConfig
//

@implementation GTLRCloudSourceRepositories_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRCloudSourceRepositories_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_AuditLogConfig
//

@implementation GTLRCloudSourceRepositories_AuditLogConfig
@dynamic exemptedMembers, logType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_Binding
//

@implementation GTLRCloudSourceRepositories_Binding
@dynamic members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_Empty
//

@implementation GTLRCloudSourceRepositories_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_ListReposResponse
//

@implementation GTLRCloudSourceRepositories_ListReposResponse
@dynamic nextPageToken, repos;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"repos" : [GTLRCloudSourceRepositories_Repo class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"repos";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_MirrorConfig
//

@implementation GTLRCloudSourceRepositories_MirrorConfig
@dynamic deployKeyId, url, webhookId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_Policy
//

@implementation GTLRCloudSourceRepositories_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRCloudSourceRepositories_AuditConfig class],
    @"bindings" : [GTLRCloudSourceRepositories_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_Repo
//

@implementation GTLRCloudSourceRepositories_Repo
@dynamic mirrorConfig, name, size, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_SetIamPolicyRequest
//

@implementation GTLRCloudSourceRepositories_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_TestIamPermissionsRequest
//

@implementation GTLRCloudSourceRepositories_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudSourceRepositories_TestIamPermissionsResponse
//

@implementation GTLRCloudSourceRepositories_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end
