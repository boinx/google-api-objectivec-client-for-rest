// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Machine Learning Engine (ml/v1)
// Description:
//   An API to enable creating and using machine learning models.
// Documentation:
//   https://cloud.google.com/ml/

#import "GTLRCloudMachineLearningEngineQuery.h"

#import "GTLRCloudMachineLearningEngineObjects.h"

@implementation GTLRCloudMachineLearningEngineQuery

@dynamic fields;

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsGetConfig

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:getConfig";
  GTLRCloudMachineLearningEngineQuery_ProjectsGetConfig *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1GetConfigResponse class];
  query.loggingName = @"ml.projects.getConfig";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1CancelJobRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleProtobufEmpty class];
  query.loggingName = @"ml.projects.jobs.cancel";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/jobs";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job class];
  query.loggingName = @"ml.projects.jobs.create";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job class];
  query.loggingName = @"ml.projects.jobs.get";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleIamV1Policy class];
  query.loggingName = @"ml.projects.jobs.getIamPolicy";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/jobs";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListJobsResponse class];
  query.loggingName = @"ml.projects.jobs.list";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleIamV1SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleIamV1Policy class];
  query.loggingName = @"ml.projects.jobs.setIamPolicy";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsJobsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRCloudMachineLearningEngineQuery_ProjectsJobsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsResponse class];
  query.loggingName = @"ml.projects.jobs.testIamPermissions";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Location class];
  query.loggingName = @"ml.projects.locations.get";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsLocationsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/locations";
  GTLRCloudMachineLearningEngineQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListLocationsResponse class];
  query.loggingName = @"ml.projects.locations.list";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/models";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model class];
  query.loggingName = @"ml.projects.models.create";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class];
  query.loggingName = @"ml.projects.models.delete";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model class];
  query.loggingName = @"ml.projects.models.get";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleIamV1Policy class];
  query.loggingName = @"ml.projects.models.getIamPolicy";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/models";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListModelsResponse class];
  query.loggingName = @"ml.projects.models.list";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class];
  query.loggingName = @"ml.projects.models.patch";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleIamV1SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleIamV1Policy class];
  query.loggingName = @"ml.projects.models.setIamPolicy";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsResponse class];
  query.loggingName = @"ml.projects.models.testIamPermissions";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/versions";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class];
  query.loggingName = @"ml.projects.models.versions.create";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class];
  query.loggingName = @"ml.projects.models.versions.delete";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version class];
  query.loggingName = @"ml.projects.models.versions.get";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/versions";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListVersionsResponse class];
  query.loggingName = @"ml.projects.models.versions.list";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class];
  query.loggingName = @"ml.projects.models.versions.patch";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsSetDefault

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1SetDefaultVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:setDefault";
  GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsSetDefault *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version class];
  query.loggingName = @"ml.projects.models.versions.setDefault";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsOperationsCancel

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRCloudMachineLearningEngineQuery_ProjectsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleProtobufEmpty class];
  query.loggingName = @"ml.projects.operations.cancel";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleProtobufEmpty class];
  query.loggingName = @"ml.projects.operations.delete";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMachineLearningEngineQuery_ProjectsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class];
  query.loggingName = @"ml.projects.operations.get";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/operations";
  GTLRCloudMachineLearningEngineQuery_ProjectsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleLongrunningListOperationsResponse class];
  query.loggingName = @"ml.projects.operations.list";
  return query;
}

@end

@implementation GTLRCloudMachineLearningEngineQuery_ProjectsPredict

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:predict";
  GTLRCloudMachineLearningEngineQuery_ProjectsPredict *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMachineLearningEngine_GoogleApiHttpBody class];
  query.loggingName = @"ml.projects.predict";
  return query;
}

@end
