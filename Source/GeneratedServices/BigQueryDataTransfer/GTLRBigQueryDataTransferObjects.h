// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   BigQuery Data Transfer API (bigquerydatatransfer/v1)
// Description:
//   Transfers data from partner SaaS applications to Google BigQuery on a
//   scheduled, managed basis.
// Documentation:
//   https://cloud.google.com/bigquery/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRBigQueryDataTransfer_DataSource;
@class GTLRBigQueryDataTransfer_DataSourceParameter;
@class GTLRBigQueryDataTransfer_Location;
@class GTLRBigQueryDataTransfer_Location_Labels;
@class GTLRBigQueryDataTransfer_Location_Metadata;
@class GTLRBigQueryDataTransfer_Status;
@class GTLRBigQueryDataTransfer_Status_Details_Item;
@class GTLRBigQueryDataTransfer_TransferConfig;
@class GTLRBigQueryDataTransfer_TransferConfig_Params;
@class GTLRBigQueryDataTransfer_TransferMessage;
@class GTLRBigQueryDataTransfer_TransferRun;
@class GTLRBigQueryDataTransfer_TransferRun_Params;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_DataSource.authorizationType

/**
 *  Use OAuth 2 authorization codes that can be exchanged
 *  for a refresh token on the backend.
 *
 *  Value: "AUTHORIZATION_CODE"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_AuthorizationType_AuthorizationCode;
/**
 *  Type unspecified.
 *
 *  Value: "AUTHORIZATION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_AuthorizationType_AuthorizationTypeUnspecified;
/**
 *  Return an authorization code for a given Google+ page that can then be
 *  exchanged for a refresh token on the backend.
 *
 *  Value: "GOOGLE_PLUS_AUTHORIZATION_CODE"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_AuthorizationType_GooglePlusAuthorizationCode;

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_DataSource.dataRefreshType

/**
 *  The data source supports data auto refresh, and runs will be scheduled
 *  for the past few days. Allows custom values to be set for each transfer
 *  config.
 *
 *  Value: "CUSTOM_SLIDING_WINDOW"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_DataRefreshType_CustomSlidingWindow;
/**
 *  The data source won't support data auto refresh, which is default value.
 *
 *  Value: "DATA_REFRESH_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_DataRefreshType_DataRefreshTypeUnspecified;
/**
 *  The data source supports data auto refresh, and runs will be scheduled
 *  for the past few days. Does not allow custom values to be set for each
 *  transfer config.
 *
 *  Value: "SLIDING_WINDOW"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_DataRefreshType_SlidingWindow;

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_DataSource.transferType

/**
 *  Batch data transfer.
 *
 *  Value: "BATCH"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_TransferType_Batch;
/**
 *  Streaming data transfer. Streaming data source currently doesn't
 *  support multiple transfer configs per project.
 *
 *  Value: "STREAMING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_TransferType_Streaming;
/**
 *  Invalid or Unknown transfer type placeholder.
 *
 *  Value: "TRANSFER_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSource_TransferType_TransferTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_DataSourceParameter.type

/**
 *  Boolean parameter.
 *
 *  Value: "BOOLEAN"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Boolean;
/**
 *  Double precision floating point parameter.
 *
 *  Value: "DOUBLE"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Double;
/**
 *  Integer parameter (64-bits).
 *  Will be serialized to json as string.
 *
 *  Value: "INTEGER"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Integer;
/**
 *  Page ID for a Google+ Page.
 *
 *  Value: "PLUS_PAGE"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_PlusPage;
/**
 *  Record parameter.
 *
 *  Value: "RECORD"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Record;
/**
 *  String parameter.
 *
 *  Value: "STRING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_String;
/**
 *  Type unspecified.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_DataSourceParameter_Type_TypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_TransferConfig.state

/**
 *  Data transfer is cancelled.
 *
 *  Value: "CANCELLED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferConfig_State_Cancelled;
/**
 *  Data transfer failed.
 *
 *  Value: "FAILED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferConfig_State_Failed;
/**
 *  Data transfer is scheduled and is waiting to be picked up by
 *  data transfer backend.
 *
 *  Value: "PENDING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferConfig_State_Pending;
/**
 *  Data transfer is in progress.
 *
 *  Value: "RUNNING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferConfig_State_Running;
/**
 *  Data transfer completed successsfully.
 *
 *  Value: "SUCCEEDED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferConfig_State_Succeeded;
/**
 *  State placeholder.
 *
 *  Value: "TRANSFER_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferConfig_State_TransferStateUnspecified;

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_TransferMessage.severity

/**
 *  Error message.
 *
 *  Value: "ERROR"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferMessage_Severity_Error;
/**
 *  Informational message.
 *
 *  Value: "INFO"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferMessage_Severity_Info;
/**
 *  No severity specified.
 *
 *  Value: "MESSAGE_SEVERITY_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferMessage_Severity_MessageSeverityUnspecified;
/**
 *  Warning message.
 *
 *  Value: "WARNING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferMessage_Severity_Warning;

// ----------------------------------------------------------------------------
// GTLRBigQueryDataTransfer_TransferRun.state

/**
 *  Data transfer is cancelled.
 *
 *  Value: "CANCELLED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferRun_State_Cancelled;
/**
 *  Data transfer failed.
 *
 *  Value: "FAILED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferRun_State_Failed;
/**
 *  Data transfer is scheduled and is waiting to be picked up by
 *  data transfer backend.
 *
 *  Value: "PENDING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferRun_State_Pending;
/**
 *  Data transfer is in progress.
 *
 *  Value: "RUNNING"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferRun_State_Running;
/**
 *  Data transfer completed successsfully.
 *
 *  Value: "SUCCEEDED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferRun_State_Succeeded;
/**
 *  State placeholder.
 *
 *  Value: "TRANSFER_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRBigQueryDataTransfer_TransferRun_State_TransferStateUnspecified;

/**
 *  A request to determine whether the user has valid credentials. This method
 *  is used to limit the number of OAuth popups in the user interface. The
 *  user id is inferred from the API call context.
 *  If the data source has the Google+ authorization type, this method
 *  returns false, as it cannot be determined whether the credentials are
 *  already valid merely based on the user id.
 */
@interface GTLRBigQueryDataTransfer_CheckValidCredsRequest : GTLRObject
@end


/**
 *  A response indicating whether the credentials exist and are valid.
 */
@interface GTLRBigQueryDataTransfer_CheckValidCredsResponse : GTLRObject

/**
 *  If set to `true`, the credentials exist and are valid.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasValidCreds;

@end


/**
 *  Represents data source metadata. Metadata is sufficient to
 *  render UI and request proper OAuth tokens.
 */
@interface GTLRBigQueryDataTransfer_DataSource : GTLRObject

/**
 *  Indicates the type of authorization.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_AuthorizationType_AuthorizationCode
 *        Use OAuth 2 authorization codes that can be exchanged
 *        for a refresh token on the backend. (Value: "AUTHORIZATION_CODE")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_AuthorizationType_AuthorizationTypeUnspecified
 *        Type unspecified. (Value: "AUTHORIZATION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_AuthorizationType_GooglePlusAuthorizationCode
 *        Return an authorization code for a given Google+ page that can then be
 *        exchanged for a refresh token on the backend. (Value:
 *        "GOOGLE_PLUS_AUTHORIZATION_CODE")
 */
@property(nonatomic, copy, nullable) NSString *authorizationType;

/**
 *  Data source client id which should be used to receive refresh token.
 *  When not supplied, no offline credentials are populated for data transfer.
 */
@property(nonatomic, copy, nullable) NSString *clientId;

/**
 *  Specifies whether the data source supports automatic data refresh for the
 *  past few days, and how it's supported.
 *  For some data sources, data might not be complete until a few days later,
 *  so it's useful to refresh data automatically.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_DataRefreshType_CustomSlidingWindow
 *        The data source supports data auto refresh, and runs will be scheduled
 *        for the past few days. Allows custom values to be set for each
 *        transfer
 *        config. (Value: "CUSTOM_SLIDING_WINDOW")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_DataRefreshType_DataRefreshTypeUnspecified
 *        The data source won't support data auto refresh, which is default
 *        value. (Value: "DATA_REFRESH_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_DataRefreshType_SlidingWindow
 *        The data source supports data auto refresh, and runs will be scheduled
 *        for the past few days. Does not allow custom values to be set for each
 *        transfer config. (Value: "SLIDING_WINDOW")
 */
@property(nonatomic, copy, nullable) NSString *dataRefreshType;

/** Data source id. */
@property(nonatomic, copy, nullable) NSString *dataSourceId;

/**
 *  Default data refresh window on days.
 *  Only meaningful when `data_refresh_type` = `SLIDING_WINDOW`.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *defaultDataRefreshWindowDays;

/**
 *  Default data transfer schedule.
 *  Examples of valid schedules include:
 *  `1st,3rd monday of month 15:30`,
 *  `every wed,fri of jan,jun 13:15`, and
 *  `first sunday of quarter 00:00`.
 */
@property(nonatomic, copy, nullable) NSString *defaultSchedule;

/**
 *  User friendly data source description string.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** User friendly data source name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Url for the help document for this data source. */
@property(nonatomic, copy, nullable) NSString *helpUrl;

/**
 *  Disables backfilling and manual run scheduling
 *  for the data source.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *manualRunsDisabled;

/** The minimum interval for scheduler to schedule runs. */
@property(nonatomic, strong, nullable) GTLRDuration *minimumScheduleInterval;

/** Output only. Data source resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/** Data source parameters. */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_DataSourceParameter *> *parameters;

/**
 *  Api auth scopes for which refresh token needs to be obtained. Only valid
 *  when `client_id` is specified. Ignored otherwise. These are scopes needed
 *  by a data source to prepare data and ingest them into BigQuery,
 *  e.g., https://www.googleapis.com/auth/bigquery
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *scopes;

/**
 *  Specifies whether the data source supports a user defined schedule, or
 *  operates on the default schedule.
 *  When set to `true`, user can override default schedule.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *supportsCustomSchedule;

/**
 *  Deprecated. This field has no effect.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *supportsMultipleTransfers;

/**
 *  Deprecated. This field has no effect.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_TransferType_Batch Batch data
 *        transfer. (Value: "BATCH")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_TransferType_Streaming
 *        Streaming data transfer. Streaming data source currently doesn't
 *        support multiple transfer configs per project. (Value: "STREAMING")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSource_TransferType_TransferTypeUnspecified
 *        Invalid or Unknown transfer type placeholder. (Value:
 *        "TRANSFER_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *transferType;

/**
 *  The number of seconds to wait for an update from the data source
 *  before BigQuery marks the transfer as failed.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *updateDeadlineSeconds;

@end


/**
 *  Represents a data source parameter with validation rules, so that
 *  parameters can be rendered in the UI. These parameters are given to us by
 *  supported data sources, and include all needed information for rendering
 *  and validation.
 *  Thus, whoever uses this api can decide to generate either generic ui,
 *  or custom data source specific forms.
 */
@interface GTLRBigQueryDataTransfer_DataSourceParameter : GTLRObject

/** All possible values for the parameter. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *allowedValues;

/**
 *  Parameter description.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** Parameter display name in the user interface. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** When parameter is a record, describes child fields. */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_DataSourceParameter *> *fields;

/**
 *  Cannot be changed after initial creation.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *immutable;

/**
 *  For integer and double values specifies maxminum allowed value.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxValue;

/**
 *  For integer and double values specifies minimum allowed value.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minValue;

/** Parameter identifier. */
@property(nonatomic, copy, nullable) NSString *paramId;

/**
 *  If set to true, schema should be taken from the parent with the same
 *  parameter_id. Only applicable when parameter type is RECORD.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *recurse;

/**
 *  Can parameter have multiple values.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *repeated;

/**
 *  Is parameter required.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *required;

/**
 *  Parameter type.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Boolean Boolean
 *        parameter. (Value: "BOOLEAN")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Double Double
 *        precision floating point parameter. (Value: "DOUBLE")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Integer Integer
 *        parameter (64-bits).
 *        Will be serialized to json as string. (Value: "INTEGER")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_PlusPage Page
 *        ID for a Google+ Page. (Value: "PLUS_PAGE")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_Record Record
 *        parameter. (Value: "RECORD")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_String String
 *        parameter. (Value: "STRING")
 *    @arg @c kGTLRBigQueryDataTransfer_DataSourceParameter_Type_TypeUnspecified
 *        Type unspecified. (Value: "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  Description of the requirements for this field, in case the user input does
 *  not fulfill the regex pattern or min/max values.
 */
@property(nonatomic, copy, nullable) NSString *validationDescription;

/** URL to a help document to further explain the naming requirements. */
@property(nonatomic, copy, nullable) NSString *validationHelpUrl;

/** Regular expression which can be used for parameter validation. */
@property(nonatomic, copy, nullable) NSString *validationRegex;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRBigQueryDataTransfer_Empty : GTLRObject
@end


/**
 *  Returns list of supported data sources and their metadata.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "dataSources" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBigQueryDataTransfer_ListDataSourcesResponse : GTLRCollectionObject

/**
 *  List of supported data sources and their transfer settings.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_DataSource *> *dataSources;

/**
 *  Output only. The next-pagination token. For multiple-page list results,
 *  this token can be used as the
 *  `ListDataSourcesRequest.page_token`
 *  to request the next page of list results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBigQueryDataTransfer_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The returned list of pipelines in the project.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "transferConfigs" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRBigQueryDataTransfer_ListTransferConfigsResponse : GTLRCollectionObject

/**
 *  Output only. The next-pagination token. For multiple-page list results,
 *  this token can be used as the
 *  `ListTransferConfigsRequest.page_token`
 *  to request the next page of list results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  Output only. The stored pipeline transfer configurations.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_TransferConfig *> *transferConfigs;

@end


/**
 *  The returned list transfer run messages.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "transferMessages" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRBigQueryDataTransfer_ListTransferLogsResponse : GTLRCollectionObject

/**
 *  Output only. The next-pagination token. For multiple-page list results,
 *  this token can be used as the
 *  `GetTransferRunLogRequest.page_token`
 *  to request the next page of list results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  Output only. The stored pipeline transfer messages.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_TransferMessage *> *transferMessages;

@end


/**
 *  The returned list of pipelines in the project.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "transferRuns" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBigQueryDataTransfer_ListTransferRunsResponse : GTLRCollectionObject

/**
 *  Output only. The next-pagination token. For multiple-page list results,
 *  this token can be used as the
 *  `ListTransferRunsRequest.page_token`
 *  to request the next page of list results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  Output only. The stored pipeline transfer runs.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_TransferRun *> *transferRuns;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRBigQueryDataTransfer_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name.
 *  For example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRBigQueryDataTransfer_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRBigQueryDataTransfer_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations.
 *  For example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRBigQueryDataTransfer_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRBigQueryDataTransfer_Location_Metadata : GTLRObject
@end


/**
 *  A request to schedule transfer runs for a time range.
 */
@interface GTLRBigQueryDataTransfer_ScheduleTransferRunsRequest : GTLRObject

/**
 *  End time of the range of transfer runs. For example,
 *  `"2017-05-30T00:00:00+00:00"`.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  Start time of the range of transfer runs. For example,
 *  `"2017-05-25T00:00:00+00:00"`.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

@end


/**
 *  A response to schedule transfer runs for a time range.
 */
@interface GTLRBigQueryDataTransfer_ScheduleTransferRunsResponse : GTLRObject

/** The transfer runs that were scheduled. */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_TransferRun *> *runs;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` that can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRBigQueryDataTransfer_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBigQueryDataTransfer_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRBigQueryDataTransfer_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRBigQueryDataTransfer_Status_Details_Item : GTLRObject
@end


/**
 *  Represents a data transfer configuration. A transfer configuration
 *  contains all metadata needed to perform a data transfer. For example,
 *  `destination_dataset_id` specifies where data should be stored.
 *  When a new transfer configuration is created, the specified
 *  `destination_dataset_id` is created when needed and shared with the
 *  appropriate data source service account.
 */
@interface GTLRBigQueryDataTransfer_TransferConfig : GTLRObject

/**
 *  The number of days to look back to automatically refresh the data.
 *  For example, if `data_refresh_window_days = 10`, then every day
 *  BigQuery reingests data for [today-10, today-1], rather than ingesting data
 *  for just [today-1].
 *  Only valid if the data source supports the feature. Set the value to 0
 *  to use the default value.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *dataRefreshWindowDays;

/** Output only. Region in which BigQuery dataset is located. */
@property(nonatomic, copy, nullable) NSString *datasetRegion;

/** Data source id. Cannot be changed once data transfer is created. */
@property(nonatomic, copy, nullable) NSString *dataSourceId;

/** The BigQuery target dataset id. */
@property(nonatomic, copy, nullable) NSString *destinationDatasetId;

/**
 *  Is this config disabled. When set to true, no runs are scheduled
 *  for a given transfer.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disabled;

/** User specified display name for the data transfer. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The resource name of the transfer config.
 *  Transfer config names have the form
 *  `projects/{project_id}/transferConfigs/{config_id}`.
 *  Where `config_id` is usually a uuid, even though it is not
 *  guaranteed or required. The name is ignored when creating a transfer
 *  config.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Output only. Next time when data transfer will run. */
@property(nonatomic, strong, nullable) GTLRDateTime *nextRunTime;

/** Data transfer specific parameters. */
@property(nonatomic, strong, nullable) GTLRBigQueryDataTransfer_TransferConfig_Params *params;

/**
 *  Data transfer schedule.
 *  If the data source does not support a custom schedule, this should be
 *  empty. If it is empty, the default value for the data source will be
 *  used.
 *  The specified times are in UTC.
 *  Examples of valid format:
 *  `1st,3rd monday of month 15:30`,
 *  `every wed,fri of jan,jun 13:15`, and
 *  `first sunday of quarter 00:00`.
 *  See more explanation about the format here:
 *  https://cloud.google.com/appengine/docs/flexible/python/scheduling-jobs-with-cron-yaml#the_schedule_format
 *  NOTE: the granularity should be at least 8 hours, or less frequent.
 */
@property(nonatomic, copy, nullable) NSString *schedule;

/**
 *  Output only. State of the most recently updated transfer run.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_TransferConfig_State_Cancelled Data
 *        transfer is cancelled. (Value: "CANCELLED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferConfig_State_Failed Data
 *        transfer failed. (Value: "FAILED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferConfig_State_Pending Data
 *        transfer is scheduled and is waiting to be picked up by
 *        data transfer backend. (Value: "PENDING")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferConfig_State_Running Data
 *        transfer is in progress. (Value: "RUNNING")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferConfig_State_Succeeded Data
 *        transfer completed successsfully. (Value: "SUCCEEDED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferConfig_State_TransferStateUnspecified
 *        State placeholder. (Value: "TRANSFER_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  Output only. Data transfer modification time. Ignored by server on input.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

/**
 *  Output only. Unique ID of the user on whose behalf transfer is done.
 *  Applicable only to data sources that do not support service accounts.
 *  When set to 0, the data source service account credentials are used.
 *  May be negative. Note, that this identifier is not stable.
 *  It may change over time even for the same user.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *userId;

@end


/**
 *  Data transfer specific parameters.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRBigQueryDataTransfer_TransferConfig_Params : GTLRObject
@end


/**
 *  Represents a user facing message for a particular data transfer run.
 */
@interface GTLRBigQueryDataTransfer_TransferMessage : GTLRObject

/** Message text. */
@property(nonatomic, copy, nullable) NSString *messageText;

/** Time when message was logged. */
@property(nonatomic, strong, nullable) GTLRDateTime *messageTime;

/**
 *  Message severity.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_TransferMessage_Severity_Error Error
 *        message. (Value: "ERROR")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferMessage_Severity_Info
 *        Informational message. (Value: "INFO")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferMessage_Severity_MessageSeverityUnspecified
 *        No severity specified. (Value: "MESSAGE_SEVERITY_UNSPECIFIED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferMessage_Severity_Warning Warning
 *        message. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *severity;

@end


/**
 *  Represents a data transfer run.
 */
@interface GTLRBigQueryDataTransfer_TransferRun : GTLRObject

/** Output only. Data source id. */
@property(nonatomic, copy, nullable) NSString *dataSourceId;

/** Output only. The BigQuery target dataset id. */
@property(nonatomic, copy, nullable) NSString *destinationDatasetId;

/**
 *  Output only. Time when transfer run ended.
 *  Parameter ignored by server for input requests.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Status of the transfer run. */
@property(nonatomic, strong, nullable) GTLRBigQueryDataTransfer_Status *errorStatus;

/**
 *  The resource name of the transfer run.
 *  Transfer run names have the form
 *  `projects/{project_id}/locations/{location}/transferConfigs/{config_id}/runs/{run_id}`.
 *  The name is ignored when creating a transfer run.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Output only. Data transfer specific parameters. */
@property(nonatomic, strong, nullable) GTLRBigQueryDataTransfer_TransferRun_Params *params;

/**
 *  For batch transfer runs, specifies the date and time that
 *  data should be ingested.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *runTime;

/**
 *  Output only. Describes the schedule of this transfer run if it was
 *  created as part of a regular schedule. For batch transfer runs that are
 *  scheduled manually, this is empty.
 *  NOTE: the system might choose to delay the schedule depending on the
 *  current load, so `schedule_time` doesn't always matches this.
 */
@property(nonatomic, copy, nullable) NSString *schedule;

/** Minimum time after which a transfer run can be started. */
@property(nonatomic, strong, nullable) GTLRDateTime *scheduleTime;

/**
 *  Output only. Time when transfer run was started.
 *  Parameter ignored by server for input requests.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/**
 *  Data transfer run state. Ignored for input requests.
 *
 *  Likely values:
 *    @arg @c kGTLRBigQueryDataTransfer_TransferRun_State_Cancelled Data
 *        transfer is cancelled. (Value: "CANCELLED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferRun_State_Failed Data transfer
 *        failed. (Value: "FAILED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferRun_State_Pending Data transfer
 *        is scheduled and is waiting to be picked up by
 *        data transfer backend. (Value: "PENDING")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferRun_State_Running Data transfer
 *        is in progress. (Value: "RUNNING")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferRun_State_Succeeded Data
 *        transfer completed successsfully. (Value: "SUCCEEDED")
 *    @arg @c kGTLRBigQueryDataTransfer_TransferRun_State_TransferStateUnspecified
 *        State placeholder. (Value: "TRANSFER_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/** Output only. Last time the data transfer run state was updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

/**
 *  Output only. Unique ID of the user on whose behalf transfer is done.
 *  Applicable only to data sources that do not support service accounts.
 *  When set to 0, the data source service account credentials are used.
 *  May be negative. Note, that this identifier is not stable.
 *  It may change over time even for the same user.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *userId;

@end


/**
 *  Output only. Data transfer specific parameters.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRBigQueryDataTransfer_TransferRun_Params : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
