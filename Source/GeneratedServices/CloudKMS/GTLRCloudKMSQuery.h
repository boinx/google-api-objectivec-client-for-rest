// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Key Management Service (KMS) API (cloudkms/v1)
// Description:
//   Manages encryption for your cloud services the same way you do on-premises.
//   You can generate, use, rotate, and destroy AES256 encryption keys.
// Documentation:
//   https://cloud.google.com/kms/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudKMS_CryptoKey;
@class GTLRCloudKMS_CryptoKeyVersion;
@class GTLRCloudKMS_DecryptRequest;
@class GTLRCloudKMS_DestroyCryptoKeyVersionRequest;
@class GTLRCloudKMS_EncryptRequest;
@class GTLRCloudKMS_KeyRing;
@class GTLRCloudKMS_RestoreCryptoKeyVersionRequest;
@class GTLRCloudKMS_SetIamPolicyRequest;
@class GTLRCloudKMS_TestIamPermissionsRequest;
@class GTLRCloudKMS_UpdateCryptoKeyPrimaryVersionRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud KMS query classes.
 */
@interface GTLRCloudKMSQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Get information about a location.
 *
 *  Method: cloudkms.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsGet : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_Location.
 *
 *  Get information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Create a new KeyRing in a given Project and Location.
 *
 *  Method: cloudkms.projects.locations.keyRings.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCreate : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCreateWithObject:parent:]

/**
 *  Required. It must be unique within a location and match the regular
 *  expression `[a-zA-Z0-9_-]{1,63}`
 */
@property(nonatomic, copy, nullable) NSString *keyRingId;

/**
 *  Required. The resource name of the location associated with the
 *  KeyRings, in the format `projects/ * /locations/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudKMS_KeyRing.
 *
 *  Create a new KeyRing in a given Project and Location.
 *
 *  @param object The @c GTLRCloudKMS_KeyRing to include in the query.
 *  @param parent Required. The resource name of the location associated with
 *    the
 *    KeyRings, in the format `projects/ * /locations/ *`.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_KeyRing *)object
                         parent:(NSString *)parent;

@end

/**
 *  Create a new CryptoKey within a KeyRing.
 *  CryptoKey.purpose is required.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCreate : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCreateWithObject:parent:]

/**
 *  Required. It must be unique within a KeyRing and match the regular
 *  expression `[a-zA-Z0-9_-]{1,63}`
 */
@property(nonatomic, copy, nullable) NSString *cryptoKeyId;

/**
 *  Required. The name of the KeyRing associated with the
 *  CryptoKeys.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKey.
 *
 *  Create a new CryptoKey within a KeyRing.
 *  CryptoKey.purpose is required.
 *
 *  @param object The @c GTLRCloudKMS_CryptoKey to include in the query.
 *  @param parent Required. The name of the KeyRing associated with the
 *    CryptoKeys.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKey *)object
                         parent:(NSString *)parent;

@end

/**
 *  Create a new CryptoKeyVersion in a CryptoKey.
 *  The server will assign the next sequential id. If unset,
 *  state will be set to
 *  ENABLED.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsCreate : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsCreateWithObject:parent:]

/**
 *  Required. The name of the CryptoKey associated with
 *  the CryptoKeyVersions.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKeyVersion.
 *
 *  Create a new CryptoKeyVersion in a CryptoKey.
 *  The server will assign the next sequential id. If unset,
 *  state will be set to
 *  ENABLED.
 *
 *  @param object The @c GTLRCloudKMS_CryptoKeyVersion to include in the query.
 *  @param parent Required. The name of the CryptoKey associated with
 *    the CryptoKeyVersions.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKeyVersion *)object
                         parent:(NSString *)parent;

@end

/**
 *  Schedule a CryptoKeyVersion for destruction.
 *  Upon calling this method, CryptoKeyVersion.state will be set to
 *  DESTROY_SCHEDULED
 *  and destroy_time will be set to a time 24
 *  hours in the future, at which point the state
 *  will be changed to
 *  DESTROYED, and the key
 *  material will be irrevocably destroyed.
 *  Before the destroy_time is reached,
 *  RestoreCryptoKeyVersion may be called to reverse the process.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.destroy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsDestroy : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsDestroyWithObject:name:]

/** The resource name of the CryptoKeyVersion to destroy. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKeyVersion.
 *
 *  Schedule a CryptoKeyVersion for destruction.
 *  Upon calling this method, CryptoKeyVersion.state will be set to
 *  DESTROY_SCHEDULED
 *  and destroy_time will be set to a time 24
 *  hours in the future, at which point the state
 *  will be changed to
 *  DESTROYED, and the key
 *  material will be irrevocably destroyed.
 *  Before the destroy_time is reached,
 *  RestoreCryptoKeyVersion may be called to reverse the process.
 *
 *  @param object The @c GTLRCloudKMS_DestroyCryptoKeyVersionRequest to include
 *    in the query.
 *  @param name The resource name of the CryptoKeyVersion to destroy.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsDestroy
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_DestroyCryptoKeyVersionRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns metadata for a given CryptoKeyVersion.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsGet : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsGetWithname:]

/** The name of the CryptoKeyVersion to get. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKeyVersion.
 *
 *  Returns metadata for a given CryptoKeyVersion.
 *
 *  @param name The name of the CryptoKeyVersion to get.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists CryptoKeyVersions.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsList : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsListWithparent:]

/**
 *  Optional limit on the number of CryptoKeyVersions to
 *  include in the response. Further CryptoKeyVersions can
 *  subsequently be obtained by including the
 *  ListCryptoKeyVersionsResponse.next_page_token in a subsequent request.
 *  If unspecified, the server will pick an appropriate default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional pagination token, returned earlier via
 *  ListCryptoKeyVersionsResponse.next_page_token.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of the CryptoKey to list, in the format
 *  `projects/ * /locations/ * /keyRings/ * /cryptoKeys/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudKMS_ListCryptoKeyVersionsResponse.
 *
 *  Lists CryptoKeyVersions.
 *
 *  @param parent Required. The resource name of the CryptoKey to list, in the
 *    format
 *    `projects/ * /locations/ * /keyRings/ * /cryptoKeys/ *`.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Update a CryptoKeyVersion's metadata.
 *  state may be changed between
 *  ENABLED and
 *  DISABLED using this
 *  method. See DestroyCryptoKeyVersion and RestoreCryptoKeyVersion to
 *  move between other states.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsPatch : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsPatchWithObject:name:]

/**
 *  Output only. The resource name for this CryptoKeyVersion in the format
 *  `projects/ * /locations/ * /keyRings/ * /cryptoKeys/ * /cryptoKeyVersions/
 *  *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required list of fields to be updated in this request.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKeyVersion.
 *
 *  Update a CryptoKeyVersion's metadata.
 *  state may be changed between
 *  ENABLED and
 *  DISABLED using this
 *  method. See DestroyCryptoKeyVersion and RestoreCryptoKeyVersion to
 *  move between other states.
 *
 *  @param object The @c GTLRCloudKMS_CryptoKeyVersion to include in the query.
 *  @param name Output only. The resource name for this CryptoKeyVersion in the
 *    format
 *    `projects/ * /locations/ * /keyRings/ * /cryptoKeys/ * /cryptoKeyVersions/
 *    *`.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKeyVersion *)object
                           name:(NSString *)name;

@end

/**
 *  Restore a CryptoKeyVersion in the
 *  DESTROY_SCHEDULED,
 *  state.
 *  Upon restoration of the CryptoKeyVersion, state
 *  will be set to DISABLED,
 *  and destroy_time will be cleared.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.restore
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsRestore : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsRestoreWithObject:name:]

/** The resource name of the CryptoKeyVersion to restore. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKeyVersion.
 *
 *  Restore a CryptoKeyVersion in the
 *  DESTROY_SCHEDULED,
 *  state.
 *  Upon restoration of the CryptoKeyVersion, state
 *  will be set to DISABLED,
 *  and destroy_time will be cleared.
 *
 *  @param object The @c GTLRCloudKMS_RestoreCryptoKeyVersionRequest to include
 *    in the query.
 *  @param name The resource name of the CryptoKeyVersion to restore.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsRestore
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_RestoreCryptoKeyVersionRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Decrypts data that was protected by Encrypt.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.decrypt
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysDecrypt : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysDecryptWithObject:name:]

/**
 *  Required. The resource name of the CryptoKey to use for decryption.
 *  The server will choose the appropriate version.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_DecryptResponse.
 *
 *  Decrypts data that was protected by Encrypt.
 *
 *  @param object The @c GTLRCloudKMS_DecryptRequest to include in the query.
 *  @param name Required. The resource name of the CryptoKey to use for
 *    decryption.
 *    The server will choose the appropriate version.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysDecrypt
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_DecryptRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Encrypts data, so that it can only be recovered by a call to Decrypt.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.encrypt
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysEncrypt : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysEncryptWithObject:name:]

/**
 *  Required. The resource name of the CryptoKey or CryptoKeyVersion
 *  to use for encryption.
 *  If a CryptoKey is specified, the server will use its
 *  primary version.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_EncryptResponse.
 *
 *  Encrypts data, so that it can only be recovered by a call to Decrypt.
 *
 *  @param object The @c GTLRCloudKMS_EncryptRequest to include in the query.
 *  @param name Required. The resource name of the CryptoKey or CryptoKeyVersion
 *    to use for encryption.
 *    If a CryptoKey is specified, the server will use its
 *    primary version.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysEncrypt
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_EncryptRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns metadata for a given CryptoKey, as well as its
 *  primary CryptoKeyVersion.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGet : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysGetWithname:]

/** The name of the CryptoKey to get. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKey.
 *
 *  Returns metadata for a given CryptoKey, as well as its
 *  primary CryptoKeyVersion.
 *
 *  @param name The name of the CryptoKey to get.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGetIamPolicy : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysGetIamPolicyWithresource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudKMS_Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Lists CryptoKeys.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysList : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysListWithparent:]

/**
 *  Optional limit on the number of CryptoKeys to include in the
 *  response. Further CryptoKeys can subsequently be obtained by
 *  including the ListCryptoKeysResponse.next_page_token in a subsequent
 *  request. If unspecified, the server will pick an appropriate default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional pagination token, returned earlier via
 *  ListCryptoKeysResponse.next_page_token.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of the KeyRing to list, in the format
 *  `projects/ * /locations/ * /keyRings/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudKMS_ListCryptoKeysResponse.
 *
 *  Lists CryptoKeys.
 *
 *  @param parent Required. The resource name of the KeyRing to list, in the
 *    format
 *    `projects/ * /locations/ * /keyRings/ *`.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Update a CryptoKey.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysPatch : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysPatchWithObject:name:]

/**
 *  Output only. The resource name for this CryptoKey in the format
 *  `projects/ * /locations/ * /keyRings/ * /cryptoKeys/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required list of fields to be updated in this request.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKey.
 *
 *  Update a CryptoKey.
 *
 *  @param object The @c GTLRCloudKMS_CryptoKey to include in the query.
 *  @param name Output only. The resource name for this CryptoKey in the format
 *    `projects/ * /locations/ * /keyRings/ * /cryptoKeys/ *`.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKey *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysSetIamPolicy : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudKMS_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  @param object The @c GTLRCloudKMS_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysTestIamPermissions : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudKMS_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  @param object The @c GTLRCloudKMS_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Update the version of a CryptoKey that will be used in Encrypt
 *
 *  Method: cloudkms.projects.locations.keyRings.cryptoKeys.updatePrimaryVersion
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysUpdatePrimaryVersion : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsCryptoKeysUpdatePrimaryVersionWithObject:name:]

/** The resource name of the CryptoKey to update. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_CryptoKey.
 *
 *  Update the version of a CryptoKey that will be used in Encrypt
 *
 *  @param object The @c GTLRCloudKMS_UpdateCryptoKeyPrimaryVersionRequest to
 *    include in the query.
 *  @param name The resource name of the CryptoKey to update.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysUpdatePrimaryVersion
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_UpdateCryptoKeyPrimaryVersionRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns metadata for a given KeyRing.
 *
 *  Method: cloudkms.projects.locations.keyRings.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGet : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsGetWithname:]

/** The name of the KeyRing to get. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudKMS_KeyRing.
 *
 *  Returns metadata for a given KeyRing.
 *
 *  @param name The name of the KeyRing to get.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: cloudkms.projects.locations.keyRings.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGetIamPolicy : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsGetIamPolicyWithresource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudKMS_Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Lists KeyRings.
 *
 *  Method: cloudkms.projects.locations.keyRings.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsList : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsListWithparent:]

/**
 *  Optional limit on the number of KeyRings to include in the
 *  response. Further KeyRings can subsequently be obtained by
 *  including the ListKeyRingsResponse.next_page_token in a subsequent
 *  request. If unspecified, the server will pick an appropriate default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional pagination token, returned earlier via
 *  ListKeyRingsResponse.next_page_token.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of the location associated with the
 *  KeyRings, in the format `projects/ * /locations/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudKMS_ListKeyRingsResponse.
 *
 *  Lists KeyRings.
 *
 *  @param parent Required. The resource name of the location associated with
 *    the
 *    KeyRings, in the format `projects/ * /locations/ *`.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  Method: cloudkms.projects.locations.keyRings.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsSetIamPolicy : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudKMS_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  @param object The @c GTLRCloudKMS_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  Method: cloudkms.projects.locations.keyRings.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsKeyRingsTestIamPermissions : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsKeyRingsTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudKMS_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  @param object The @c GTLRCloudKMS_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsKeyRingsTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudKMS_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: cloudkms.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudKMSCloudPlatform
 */
@interface GTLRCloudKMSQuery_ProjectsLocationsList : GTLRCloudKMSQuery
// Previous library name was
//   +[GTLQueryCloudKMS queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudKMS_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @returns GTLRCloudKMSQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END