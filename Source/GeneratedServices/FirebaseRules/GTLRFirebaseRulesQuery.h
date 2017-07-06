// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Rules API (firebaserules/v1)
// Description:
//   Creates and manages rules that determine when a Firebase Rules-enabled
//   service should permit a request.
// Documentation:
//   https://firebase.google.com/docs/storage/security

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseRules_Release;
@class GTLRFirebaseRules_Ruleset;
@class GTLRFirebaseRules_TestRulesetRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Firebase Rules query classes.
 */
@interface GTLRFirebaseRulesQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Create a `Release`.
 *  Release names should reflect the developer's deployment practices. For
 *  example, the release name may include the environment name, application
 *  name, application version, or any other name meaningful to the developer.
 *  Once a `Release` refers to a `Ruleset`, the rules can be enforced by
 *  Firebase Rules-enabled services.
 *  More than one `Release` may be 'live' concurrently. Consider the following
 *  three `Release` names for `projects/foo` and the `Ruleset` to which they
 *  refer.
 *  Release Name | Ruleset Name
 *  --------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/beta | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/v23 | projects/foo/rulesets/uuid456
 *  The table reflects the `Ruleset` rollout in progress. The `prod` and
 *  `prod/beta` releases refer to the same `Ruleset`. However, `prod/v23`
 *  refers to a new `Ruleset`. The `Ruleset` reference for a `Release` may be
 *  updated using the UpdateRelease method.
 *
 *  Method: firebaserules.projects.releases.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 */
@interface GTLRFirebaseRulesQuery_ProjectsReleasesCreate : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsReleasesCreateWithObject:name:]

/**
 *  Resource name for the project which owns this `Release`.
 *  Format: `projects/{project_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Release.
 *
 *  Create a `Release`.
 *  Release names should reflect the developer's deployment practices. For
 *  example, the release name may include the environment name, application
 *  name, application version, or any other name meaningful to the developer.
 *  Once a `Release` refers to a `Ruleset`, the rules can be enforced by
 *  Firebase Rules-enabled services.
 *  More than one `Release` may be 'live' concurrently. Consider the following
 *  three `Release` names for `projects/foo` and the `Ruleset` to which they
 *  refer.
 *  Release Name | Ruleset Name
 *  --------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/beta | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/v23 | projects/foo/rulesets/uuid456
 *  The table reflects the `Ruleset` rollout in progress. The `prod` and
 *  `prod/beta` releases refer to the same `Ruleset`. However, `prod/v23`
 *  refers to a new `Ruleset`. The `Ruleset` reference for a `Release` may be
 *  updated using the UpdateRelease method.
 *
 *  @param object The @c GTLRFirebaseRules_Release to include in the query.
 *  @param name Resource name for the project which owns this `Release`.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsReleasesCreate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRules_Release *)object
                           name:(NSString *)name;

@end

/**
 *  Delete a `Release` by resource name.
 *
 *  Method: firebaserules.projects.releases.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 */
@interface GTLRFirebaseRulesQuery_ProjectsReleasesDelete : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsReleasesDeleteWithname:]

/**
 *  Resource name for the `Release` to delete.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Empty.
 *
 *  Delete a `Release` by resource name.
 *
 *  @param name Resource name for the `Release` to delete.
 *    Format: `projects/{project_id}/releases/{release_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsReleasesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a `Release` by name.
 *
 *  Method: firebaserules.projects.releases.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 *    @c kGTLRAuthScopeFirebaseRulesFirebaseReadonly
 */
@interface GTLRFirebaseRulesQuery_ProjectsReleasesGet : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsReleasesGetWithname:]

/**
 *  Resource name of the `Release`.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Release.
 *
 *  Get a `Release` by name.
 *
 *  @param name Resource name of the `Release`.
 *    Format: `projects/{project_id}/releases/{release_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsReleasesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List the `Release` values for a project. This list may optionally be
 *  filtered by `Release` name, `Ruleset` name, `TestSuite` name, or any
 *  combination thereof.
 *
 *  Method: firebaserules.projects.releases.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 *    @c kGTLRAuthScopeFirebaseRulesFirebaseReadonly
 */
@interface GTLRFirebaseRulesQuery_ProjectsReleasesList : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsReleasesListWithname:]

/**
 *  `Release` filter. The list method supports filters with restrictions on the
 *  `Release.name`, `Release.ruleset_name`, and `Release.test_suite_name`.
 *  Example 1: A filter of 'name=prod*' might return `Release`s with names
 *  within 'projects/foo' prefixed with 'prod':
 *  Name | Ruleset Name
 *  ------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/uuid1234
 *  projects/foo/releases/prod/v1 | projects/foo/rulesets/uuid1234
 *  projects/foo/releases/prod/v2 | projects/foo/rulesets/uuid8888
 *  Example 2: A filter of `name=prod* ruleset_name=uuid1234` would return only
 *  `Release` instances for 'projects/foo' with names prefixed with 'prod'
 *  referring to the same `Ruleset` name of 'uuid1234':
 *  Name | Ruleset Name
 *  ------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/1234
 *  projects/foo/releases/prod/v1 | projects/foo/rulesets/1234
 *  In the examples, the filter parameters refer to the search filters are
 *  relative to the project. Fully qualified prefixed may also be used. e.g.
 *  `test_suite_name=projects/foo/testsuites/uuid1`
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Resource name for the project.
 *  Format: `projects/{project_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Page size to load. Maximum of 100. Defaults to 10.
 *  Note: `page_size` is just a hint and the service may choose to load fewer
 *  than `page_size` results due to the size of the output. To traverse all of
 *  the releases, the caller should iterate until the `page_token` on the
 *  response is empty.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** Next page token for the next batch of `Release` instances. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirebaseRules_ListReleasesResponse.
 *
 *  List the `Release` values for a project. This list may optionally be
 *  filtered by `Release` name, `Ruleset` name, `TestSuite` name, or any
 *  combination thereof.
 *
 *  @param name Resource name for the project.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsReleasesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Update a `Release`.
 *  Only updates to the `ruleset_name` and `test_suite_name` fields will be
 *  honored. `Release` rename is not supported. To create a `Release` use the
 *  CreateRelease method.
 *
 *  Method: firebaserules.projects.releases.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 */
@interface GTLRFirebaseRulesQuery_ProjectsReleasesUpdate : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsReleasesUpdateWithObject:name:]

/**
 *  Resource name for the `Release`.
 *  `Release` names may be structured `app1/prod/v2` or flat `app1_prod_v2`
 *  which affords developers a great deal of flexibility in mapping the name
 *  to the style that best fits their existing development practices. For
 *  example, a name could refer to an environment, an app, a version, or some
 *  combination of three.
 *  In the table below, for the project name `projects/foo`, the following
 *  relative release paths show how flat and structured names might be chosen
 *  to match a desired development / deployment strategy.
 *  Use Case | Flat Name | Structured Name
 *  -------------|---------------------|----------------
 *  Environments | releases/qa | releases/qa
 *  Apps | releases/app1_qa | releases/app1/qa
 *  Versions | releases/app1_v2_qa | releases/app1/v2/qa
 *  The delimiter between the release name path elements can be almost anything
 *  and it should work equally well with the release name list filter, but in
 *  many ways the structured paths provide a clearer picture of the
 *  relationship between `Release` instances.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Release.
 *
 *  Update a `Release`.
 *  Only updates to the `ruleset_name` and `test_suite_name` fields will be
 *  honored. `Release` rename is not supported. To create a `Release` use the
 *  CreateRelease method.
 *
 *  @param object The @c GTLRFirebaseRules_Release to include in the query.
 *  @param name Resource name for the `Release`.
 *    `Release` names may be structured `app1/prod/v2` or flat `app1_prod_v2`
 *    which affords developers a great deal of flexibility in mapping the name
 *    to the style that best fits their existing development practices. For
 *    example, a name could refer to an environment, an app, a version, or some
 *    combination of three.
 *    In the table below, for the project name `projects/foo`, the following
 *    relative release paths show how flat and structured names might be chosen
 *    to match a desired development / deployment strategy.
 *    Use Case | Flat Name | Structured Name
 *    -------------|---------------------|----------------
 *    Environments | releases/qa | releases/qa
 *    Apps | releases/app1_qa | releases/app1/qa
 *    Versions | releases/app1_v2_qa | releases/app1/v2/qa
 *    The delimiter between the release name path elements can be almost
 *    anything
 *    and it should work equally well with the release name list filter, but in
 *    many ways the structured paths provide a clearer picture of the
 *    relationship between `Release` instances.
 *    Format: `projects/{project_id}/releases/{release_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsReleasesUpdate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRules_Release *)object
                           name:(NSString *)name;

@end

/**
 *  Create a `Ruleset` from `Source`.
 *  The `Ruleset` is given a unique generated name which is returned to the
 *  caller. `Source` containing syntactic or semantics errors will result in an
 *  error response indicating the first error encountered. For a detailed view
 *  of `Source` issues, use TestRuleset.
 *
 *  Method: firebaserules.projects.rulesets.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 */
@interface GTLRFirebaseRulesQuery_ProjectsRulesetsCreate : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsRulesetsCreateWithObject:name:]

/**
 *  Resource name for Project which owns this `Ruleset`.
 *  Format: `projects/{project_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Ruleset.
 *
 *  Create a `Ruleset` from `Source`.
 *  The `Ruleset` is given a unique generated name which is returned to the
 *  caller. `Source` containing syntactic or semantics errors will result in an
 *  error response indicating the first error encountered. For a detailed view
 *  of `Source` issues, use TestRuleset.
 *
 *  @param object The @c GTLRFirebaseRules_Ruleset to include in the query.
 *  @param name Resource name for Project which owns this `Ruleset`.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsRulesetsCreate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRules_Ruleset *)object
                           name:(NSString *)name;

@end

/**
 *  Delete a `Ruleset` by resource name.
 *  If the `Ruleset` is referenced by a `Release` the operation will fail.
 *
 *  Method: firebaserules.projects.rulesets.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 */
@interface GTLRFirebaseRulesQuery_ProjectsRulesetsDelete : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsRulesetsDeleteWithname:]

/**
 *  Resource name for the ruleset to delete.
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Empty.
 *
 *  Delete a `Ruleset` by resource name.
 *  If the `Ruleset` is referenced by a `Release` the operation will fail.
 *
 *  @param name Resource name for the ruleset to delete.
 *    Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsRulesetsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a `Ruleset` by name including the full `Source` contents.
 *
 *  Method: firebaserules.projects.rulesets.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 *    @c kGTLRAuthScopeFirebaseRulesFirebaseReadonly
 */
@interface GTLRFirebaseRulesQuery_ProjectsRulesetsGet : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsRulesetsGetWithname:]

/**
 *  Resource name for the ruleset to get.
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_Ruleset.
 *
 *  Get a `Ruleset` by name including the full `Source` contents.
 *
 *  @param name Resource name for the ruleset to get.
 *    Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsRulesetsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List `Ruleset` metadata only and optionally filter the results by `Ruleset`
 *  name.
 *  The full `Source` contents of a `Ruleset` may be retrieved with
 *  GetRuleset.
 *
 *  Method: firebaserules.projects.rulesets.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 *    @c kGTLRAuthScopeFirebaseRulesFirebaseReadonly
 */
@interface GTLRFirebaseRulesQuery_ProjectsRulesetsList : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsRulesetsListWithname:]

/**
 *  `Ruleset` filter. The list method supports filters with restrictions on
 *  `Ruleset.name`.
 *  Filters on `Ruleset.create_time` should use the `date` function which
 *  parses strings that conform to the RFC 3339 date/time specifications.
 *  Example: `create_time > date("2017-01-01") AND name=UUID-*`
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Resource name for the project.
 *  Format: `projects/{project_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Page size to load. Maximum of 100. Defaults to 10.
 *  Note: `page_size` is just a hint and the service may choose to load less
 *  than `page_size` due to the size of the output. To traverse all of the
 *  releases, caller should iterate until the `page_token` is empty.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** Next page token for loading the next batch of `Ruleset` instances. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirebaseRules_ListRulesetsResponse.
 *
 *  List `Ruleset` metadata only and optionally filter the results by `Ruleset`
 *  name.
 *  The full `Source` contents of a `Ruleset` may be retrieved with
 *  GetRuleset.
 *
 *  @param name Resource name for the project.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsRulesetsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Test `Source` for syntactic and semantic correctness. Issues present, if
 *  any, will be returned to the caller with a description, severity, and
 *  source location.
 *  The test method may be executed with `Source` or a `Ruleset` name.
 *  Passing `Source` is useful for unit testing new rules. Passing a `Ruleset`
 *  name is useful for regression testing an existing rule.
 *  The following is an example of `Source` that permits users to upload images
 *  to a bucket bearing their user id and matching the correct metadata:
 *  _*Example*_
 *  // Users are allowed to subscribe and unsubscribe to the blog.
 *  service firebase.storage {
 *  match /users/{userId}/images/{imageName} {
 *  allow write: if userId == request.auth.uid
 *  && (imageName.matches('*.png$')
 *  || imageName.matches('*.jpg$'))
 *  && resource.mimeType.matches('^image/')
 *  }
 *  }
 *
 *  Method: firebaserules.projects.test
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesCloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesFirebase
 *    @c kGTLRAuthScopeFirebaseRulesFirebaseReadonly
 */
@interface GTLRFirebaseRulesQuery_ProjectsTest : GTLRFirebaseRulesQuery
// Previous library name was
//   +[GTLQueryFirebaseRules queryForProjectsTestWithObject:name:]

/**
 *  Tests may either provide `source` or a `Ruleset` resource name.
 *  For tests against `source`, the resource name must refer to the project:
 *  Format: `projects/{project_id}`
 *  For tests against a `Ruleset`, this must be the `Ruleset` resource name:
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRules_TestRulesetResponse.
 *
 *  Test `Source` for syntactic and semantic correctness. Issues present, if
 *  any, will be returned to the caller with a description, severity, and
 *  source location.
 *  The test method may be executed with `Source` or a `Ruleset` name.
 *  Passing `Source` is useful for unit testing new rules. Passing a `Ruleset`
 *  name is useful for regression testing an existing rule.
 *  The following is an example of `Source` that permits users to upload images
 *  to a bucket bearing their user id and matching the correct metadata:
 *  _*Example*_
 *  // Users are allowed to subscribe and unsubscribe to the blog.
 *  service firebase.storage {
 *  match /users/{userId}/images/{imageName} {
 *  allow write: if userId == request.auth.uid
 *  && (imageName.matches('*.png$')
 *  || imageName.matches('*.jpg$'))
 *  && resource.mimeType.matches('^image/')
 *  }
 *  }
 *
 *  @param object The @c GTLRFirebaseRules_TestRulesetRequest to include in the
 *    query.
 *  @param name Tests may either provide `source` or a `Ruleset` resource name.
 *    For tests against `source`, the resource name must refer to the project:
 *    Format: `projects/{project_id}`
 *    For tests against a `Ruleset`, this must be the `Ruleset` resource name:
 *    Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *
 *  @returns GTLRFirebaseRulesQuery_ProjectsTest
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRules_TestRulesetRequest *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
