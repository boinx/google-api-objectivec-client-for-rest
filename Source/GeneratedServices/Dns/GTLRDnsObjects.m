// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud DNS API (dns/v1)
// Description:
//   Configures and serves authoritative DNS records.
// Documentation:
//   https://developers.google.com/cloud-dns

#import "GTLRDnsObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRDns_Change.status
NSString * const kGTLRDns_Change_Status_Done    = @"done";
NSString * const kGTLRDns_Change_Status_Pending = @"pending";

// GTLRDns_DnsKey.algorithm
NSString * const kGTLRDns_DnsKey_Algorithm_Ecdsap256sha256 = @"ecdsap256sha256";
NSString * const kGTLRDns_DnsKey_Algorithm_Ecdsap384sha384 = @"ecdsap384sha384";
NSString * const kGTLRDns_DnsKey_Algorithm_Rsasha1         = @"rsasha1";
NSString * const kGTLRDns_DnsKey_Algorithm_Rsasha256       = @"rsasha256";
NSString * const kGTLRDns_DnsKey_Algorithm_Rsasha512       = @"rsasha512";

// GTLRDns_DnsKey.type
NSString * const kGTLRDns_DnsKey_Type_KeySigning  = @"keySigning";
NSString * const kGTLRDns_DnsKey_Type_ZoneSigning = @"zoneSigning";

// GTLRDns_DnsKeySpec.algorithm
NSString * const kGTLRDns_DnsKeySpec_Algorithm_Ecdsap256sha256 = @"ecdsap256sha256";
NSString * const kGTLRDns_DnsKeySpec_Algorithm_Ecdsap384sha384 = @"ecdsap384sha384";
NSString * const kGTLRDns_DnsKeySpec_Algorithm_Rsasha1         = @"rsasha1";
NSString * const kGTLRDns_DnsKeySpec_Algorithm_Rsasha256       = @"rsasha256";
NSString * const kGTLRDns_DnsKeySpec_Algorithm_Rsasha512       = @"rsasha512";

// GTLRDns_DnsKeySpec.keyType
NSString * const kGTLRDns_DnsKeySpec_KeyType_KeySigning  = @"keySigning";
NSString * const kGTLRDns_DnsKeySpec_KeyType_ZoneSigning = @"zoneSigning";

// GTLRDns_KeyDigest.type
NSString * const kGTLRDns_KeyDigest_Type_Sha1   = @"sha1";
NSString * const kGTLRDns_KeyDigest_Type_Sha256 = @"sha256";
NSString * const kGTLRDns_KeyDigest_Type_Sha384 = @"sha384";

// GTLRDns_ManagedZoneDnsSecConfig.nonExistence
NSString * const kGTLRDns_ManagedZoneDnsSecConfig_NonExistence_Nsec = @"nsec";
NSString * const kGTLRDns_ManagedZoneDnsSecConfig_NonExistence_Nsec3 = @"nsec3";

// GTLRDns_ManagedZoneDnsSecConfig.state
NSString * const kGTLRDns_ManagedZoneDnsSecConfig_State_Off    = @"off";
NSString * const kGTLRDns_ManagedZoneDnsSecConfig_State_On     = @"on";
NSString * const kGTLRDns_ManagedZoneDnsSecConfig_State_Transfer = @"transfer";

// GTLRDns_Operation.status
NSString * const kGTLRDns_Operation_Status_Done    = @"done";
NSString * const kGTLRDns_Operation_Status_Pending = @"pending";

// ----------------------------------------------------------------------------
//
//   GTLRDns_Change
//

@implementation GTLRDns_Change
@dynamic additions, deletions, identifier, isServing, kind, startTime, status;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"additions" : [GTLRDns_ResourceRecordSet class],
    @"deletions" : [GTLRDns_ResourceRecordSet class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ChangesListResponse
//

@implementation GTLRDns_ChangesListResponse
@dynamic changes, header, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"changes" : [GTLRDns_Change class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"changes";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_DnsKey
//

@implementation GTLRDns_DnsKey
@dynamic algorithm, creationTime, descriptionProperty, digests, identifier,
         isActive, keyLength, keyTag, kind, publicKey, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"digests" : [GTLRDns_KeyDigest class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_DnsKeysListResponse
//

@implementation GTLRDns_DnsKeysListResponse
@dynamic dnsKeys, header, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dnsKeys" : [GTLRDns_DnsKey class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"dnsKeys";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_DnsKeySpec
//

@implementation GTLRDns_DnsKeySpec
@dynamic algorithm, keyLength, keyType, kind;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_KeyDigest
//

@implementation GTLRDns_KeyDigest
@dynamic digest, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ManagedZone
//

@implementation GTLRDns_ManagedZone
@dynamic creationTime, descriptionProperty, dnsName, dnssecConfig, identifier,
         kind, labels, name, nameServers, nameServerSet;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"nameServers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ManagedZone_Labels
//

@implementation GTLRDns_ManagedZone_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ManagedZoneDnsSecConfig
//

@implementation GTLRDns_ManagedZoneDnsSecConfig
@dynamic defaultKeySpecs, kind, nonExistence, state;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"defaultKeySpecs" : [GTLRDns_DnsKeySpec class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ManagedZoneOperationsListResponse
//

@implementation GTLRDns_ManagedZoneOperationsListResponse
@dynamic header, kind, nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRDns_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ManagedZonesListResponse
//

@implementation GTLRDns_ManagedZonesListResponse
@dynamic header, kind, managedZones, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"managedZones" : [GTLRDns_ManagedZone class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"managedZones";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_Operation
//

@implementation GTLRDns_Operation
@dynamic dnsKeyContext, identifier, kind, startTime, status, type, user,
         zoneContext;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_OperationDnsKeyContext
//

@implementation GTLRDns_OperationDnsKeyContext
@dynamic newValue, oldValue;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_OperationManagedZoneContext
//

@implementation GTLRDns_OperationManagedZoneContext
@dynamic newValue, oldValue;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_Project
//

@implementation GTLRDns_Project
@dynamic identifier, kind, number, quota;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_Quota
//

@implementation GTLRDns_Quota
@dynamic blackHoleHidesSystemZones, dnsKeysPerManagedZone, kind, managedZones,
         resourceRecordsPerRrset, rrsetAdditionsPerChange,
         rrsetDeletionsPerChange, rrsetsPerManagedZone,
         totalRrdataSizePerChange, whitelistedKeySpecs;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"whitelistedKeySpecs" : [GTLRDns_DnsKeySpec class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ResourceRecordSet
//

@implementation GTLRDns_ResourceRecordSet
@dynamic kind, name, rrdatas, signatureRrdatas, ttl, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rrdatas" : [NSString class],
    @"signatureRrdatas" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ResourceRecordSetsListResponse
//

@implementation GTLRDns_ResourceRecordSetsListResponse
@dynamic header, kind, nextPageToken, rrsets;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rrsets" : [GTLRDns_ResourceRecordSet class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"rrsets";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDns_ResponseHeader
//

@implementation GTLRDns_ResponseHeader
@dynamic operationId;
@end
