// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Machine Learning Engine (ml/v1)
// Description:
//   An API to enable creating and using machine learning models.
// Documentation:
//   https://cloud.google.com/ml/

#import "GTLRCloudMachineLearningEngineObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterSpec.goal
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterSpec_Goal_GoalTypeUnspecified = @"GOAL_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterSpec_Goal_Maximize = @"MAXIMIZE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterSpec_Goal_Minimize = @"MINIMIZE";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job.state
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Cancelled = @"CANCELLED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Cancelling = @"CANCELLING";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Failed = @"FAILED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Preparing = @"PREPARING";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Queued = @"QUEUED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Running = @"RUNNING";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_State_Succeeded = @"SUCCEEDED";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata.operationType
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_CreateVersion = @"CREATE_VERSION";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_DeleteModel = @"DELETE_MODEL";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_DeleteVersion = @"DELETE_VERSION";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_OperationTypeUnspecified = @"OPERATION_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_UpdateConfig = @"UPDATE_CONFIG";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_UpdateModel = @"UPDATE_MODEL";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_OperationType_UpdateVersion = @"UPDATE_VERSION";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec.scaleType
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_ScaleType_None = @"NONE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_ScaleType_UnitLinearScale = @"UNIT_LINEAR_SCALE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_ScaleType_UnitLogScale = @"UNIT_LOG_SCALE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_ScaleType_UnitReverseLogScale = @"UNIT_REVERSE_LOG_SCALE";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec.type
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_Type_Categorical = @"CATEGORICAL";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_Type_Discrete = @"DISCRETE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_Type_Double = @"DOUBLE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_Type_Integer = @"INTEGER";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec_Type_ParameterTypeUnspecified = @"PARAMETER_TYPE_UNSPECIFIED";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput.dataFormat
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput_DataFormat_DataFormatUnspecified = @"DATA_FORMAT_UNSPECIFIED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput_DataFormat_Text = @"TEXT";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput_DataFormat_TfRecord = @"TF_RECORD";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput_DataFormat_TfRecordGzip = @"TF_RECORD_GZIP";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput.scaleTier
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput_ScaleTier_Basic = @"BASIC";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput_ScaleTier_BasicGpu = @"BASIC_GPU";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput_ScaleTier_BasicTpu = @"BASIC_TPU";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput_ScaleTier_Custom = @"CUSTOM";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput_ScaleTier_Premium1 = @"PREMIUM_1";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput_ScaleTier_Standard1 = @"STANDARD_1";

// GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version.state
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_State_Creating = @"CREATING";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_State_Deleting = @"DELETING";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_State_Failed = @"FAILED";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_State_Ready = @"READY";
NSString * const kGTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_State_Unknown = @"UNKNOWN";

// GTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig.logType
NSString * const kGTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleApiHttpBody
//

@implementation GTLRCloudMachineLearningEngine_GoogleApiHttpBody
@dynamic contentType, data, extensions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"extensions" : [GTLRCloudMachineLearningEngine_GoogleApiHttpBody_Extensions_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleApiHttpBody_Extensions_Item
//

@implementation GTLRCloudMachineLearningEngine_GoogleApiHttpBody_Extensions_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1AutoScaling
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1AutoScaling
@dynamic minNodes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1CancelJobRequest
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1CancelJobRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1GetConfigResponse
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1GetConfigResponse
@dynamic serviceAccount, serviceAccountProject;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutput
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutput
@dynamic allMetrics, finalMetric, hyperparameters, trialId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allMetrics" : [GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutputHyperparameterMetric class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutput_Hyperparameters
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutput_Hyperparameters

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutputHyperparameterMetric
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutputHyperparameterMetric
@dynamic objectiveValue, trainingStep;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterSpec
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterSpec
@dynamic goal, hyperparameterMetricTag, maxParallelTrials, maxTrials, params;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"params" : [GTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job
@dynamic createTime, endTime, errorMessage, ETag, jobId, labels,
         predictionInput, predictionOutput, startTime, state, trainingInput,
         trainingOutput;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_Labels
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListJobsResponse
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListJobsResponse
@dynamic jobs, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"jobs" : [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"jobs";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListModelsResponse
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListModelsResponse
@dynamic models, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"models" : [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"models";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListVersionsResponse
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListVersionsResponse
@dynamic nextPageToken, versions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"versions" : [GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"versions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1ManualScaling
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1ManualScaling
@dynamic nodes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model
@dynamic defaultVersion, descriptionProperty, ETag, labels, name,
         onlinePredictionLogging, regions;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"regions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model_Labels
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata
@dynamic createTime, endTime, isCancellationRequested, labels, modelName,
         operationType, projectNumber, startTime, version;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_Labels
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1OperationMetadata_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1ParameterSpec
@dynamic categoricalValues, discreteValues, maxValue, minValue, parameterName,
         scaleType, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"categoricalValues" : [NSString class],
    @"discreteValues" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionInput
@dynamic batchSize, dataFormat, inputPaths, maxWorkerCount, modelName,
         outputPath, region, runtimeVersion, signatureName, uri, versionName;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"inputPaths" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionOutput
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictionOutput
@dynamic errorCount, nodeHours, outputPath, predictionCount;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictRequest
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictRequest
@dynamic httpBody;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1SetDefaultVersionRequest
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1SetDefaultVersionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingInput
@dynamic args, hyperparameters, jobDir, masterType, packageUris,
         parameterServerCount, parameterServerType, pythonModule, pythonVersion,
         region, runtimeVersion, scaleTier, workerCount, workerType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"args" : [NSString class],
    @"packageUris" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingOutput
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1TrainingOutput
@dynamic completedTrialCount, consumedMLUnits, isHyperparameterTuningJob,
         trials;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"trials" : [GTLRCloudMachineLearningEngine_GoogleCloudMlV1HyperparameterOutput class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version
@dynamic autoScaling, createTime, deploymentUri, descriptionProperty,
         errorMessage, ETag, isDefault, labels, lastUseTime, manualScaling,
         name, runtimeVersion, state;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_Labels
//

@implementation GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleIamV1AuditConfig
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1AuditConfig
@dynamic auditLogConfigs, exemptedMembers, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig class],
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1AuditLogConfig
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
//   GTLRCloudMachineLearningEngine_GoogleIamV1Binding
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleIamV1Policy
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1Policy
@dynamic auditConfigs, bindings, ETag, iamOwned, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRCloudMachineLearningEngine_GoogleIamV1AuditConfig class],
    @"bindings" : [GTLRCloudMachineLearningEngine_GoogleIamV1Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleIamV1SetIamPolicyRequest
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsRequest
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsRequest
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
//   GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsResponse
//

@implementation GTLRCloudMachineLearningEngine_GoogleIamV1TestIamPermissionsResponse
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
//   GTLRCloudMachineLearningEngine_GoogleLongrunningListOperationsResponse
//

@implementation GTLRCloudMachineLearningEngine_GoogleLongrunningListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCloudMachineLearningEngine_GoogleLongrunningOperation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleLongrunningOperation
//

@implementation GTLRCloudMachineLearningEngine_GoogleLongrunningOperation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleLongrunningOperation_Metadata
//

@implementation GTLRCloudMachineLearningEngine_GoogleLongrunningOperation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleLongrunningOperation_Response
//

@implementation GTLRCloudMachineLearningEngine_GoogleLongrunningOperation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleProtobufEmpty
//

@implementation GTLRCloudMachineLearningEngine_GoogleProtobufEmpty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleRpcStatus
//

@implementation GTLRCloudMachineLearningEngine_GoogleRpcStatus
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudMachineLearningEngine_GoogleRpcStatus_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleRpcStatus_Details_Item
//

@implementation GTLRCloudMachineLearningEngine_GoogleRpcStatus_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudMachineLearningEngine_GoogleTypeExpr
//

@implementation GTLRCloudMachineLearningEngine_GoogleTypeExpr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end
