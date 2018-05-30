// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   YouTube Reporting API (youtubereporting/v1)
// Description:
//   Schedules reporting jobs containing your YouTube Analytics data and
//   downloads the resulting bulk data reports in the form of CSV files.
// Documentation:
//   https://developers.google.com/youtube/reporting/v1/reports/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRYouTubeReporting_GdataBlobstore2Info;
@class GTLRYouTubeReporting_GdataCompositeMedia;
@class GTLRYouTubeReporting_GdataContentTypeInfo;
@class GTLRYouTubeReporting_GdataDiffChecksumsResponse;
@class GTLRYouTubeReporting_GdataDiffDownloadResponse;
@class GTLRYouTubeReporting_GdataDiffUploadRequest;
@class GTLRYouTubeReporting_GdataDiffUploadResponse;
@class GTLRYouTubeReporting_GdataDiffVersionResponse;
@class GTLRYouTubeReporting_GdataDownloadParameters;
@class GTLRYouTubeReporting_GdataObjectId;
@class GTLRYouTubeReporting_Job;
@class GTLRYouTubeReporting_Report;
@class GTLRYouTubeReporting_ReportType;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRYouTubeReporting_GdataCompositeMedia.referenceType

/**
 *  gdata
 *
 *  Value: "BIGSTORE_REF"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_BigstoreRef;
/**
 *  gdata
 *
 *  Value: "BLOB_REF"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_BlobRef;
/**
 *  gdata
 *
 *  Value: "COSMO_BINARY_REFERENCE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_CosmoBinaryReference;
/**
 *  gdata
 *
 *  Value: "INLINE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_Inline;
/**
 *  gdata
 *
 *  Value: "PATH"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_Path;

// ----------------------------------------------------------------------------
// GTLRYouTubeReporting_GdataMedia.referenceType

/**
 *  gdata
 *
 *  Value: "ARBITRARY_BYTES"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_ArbitraryBytes;
/**
 *  gdata
 *
 *  Value: "BIGSTORE_REF"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_BigstoreRef;
/**
 *  gdata
 *
 *  Value: "BLOB_REF"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_BlobRef;
/**
 *  gdata
 *
 *  Value: "COMPOSITE_MEDIA"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_CompositeMedia;
/**
 *  gdata
 *
 *  Value: "COSMO_BINARY_REFERENCE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_CosmoBinaryReference;
/**
 *  gdata
 *
 *  Value: "DIFF_CHECKSUMS_RESPONSE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffChecksumsResponse;
/**
 *  gdata
 *
 *  Value: "DIFF_DOWNLOAD_RESPONSE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffDownloadResponse;
/**
 *  gdata
 *
 *  Value: "DIFF_UPLOAD_REQUEST"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffUploadRequest;
/**
 *  gdata
 *
 *  Value: "DIFF_UPLOAD_RESPONSE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffUploadResponse;
/**
 *  gdata
 *
 *  Value: "DIFF_VERSION_RESPONSE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffVersionResponse;
/**
 *  gdata
 *
 *  Value: "GET_MEDIA"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_GetMedia;
/**
 *  gdata
 *
 *  Value: "INLINE"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_Inline;
/**
 *  gdata
 *
 *  Value: "PATH"
 */
GTLR_EXTERN NSString * const kGTLRYouTubeReporting_GdataMedia_ReferenceType_Path;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRYouTubeReporting_Empty : GTLRObject
@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataBlobstore2Info : GTLRObject

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *blobGeneration;

/** gdata */
@property(nonatomic, copy, nullable) NSString *blobId;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *downloadReadHandle;

/** gdata */
@property(nonatomic, copy, nullable) NSString *readToken;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *uploadMetadataContainer;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataCompositeMedia : GTLRObject

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *blobRef;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataBlobstore2Info *blobstore2Info;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *cosmoBinaryReference;

/**
 *  gdata
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSNumber *crc32cHash;

/**
 *  gdata
 *
 *  Remapped to 'inlineProperty' to avoid language reserved word 'inline'.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *inlineProperty;

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *length;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *md5Hash;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataObjectId *objectId;

/** gdata */
@property(nonatomic, copy, nullable) NSString *path;

/**
 *  gdata
 *
 *  Likely values:
 *    @arg @c kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_BigstoreRef
 *        gdata (Value: "BIGSTORE_REF")
 *    @arg @c kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_BlobRef
 *        gdata (Value: "BLOB_REF")
 *    @arg @c kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_CosmoBinaryReference
 *        gdata (Value: "COSMO_BINARY_REFERENCE")
 *    @arg @c kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_Inline
 *        gdata (Value: "INLINE")
 *    @arg @c kGTLRYouTubeReporting_GdataCompositeMedia_ReferenceType_Path gdata
 *        (Value: "PATH")
 */
@property(nonatomic, copy, nullable) NSString *referenceType;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *sha1Hash;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataContentTypeInfo : GTLRObject

/** gdata */
@property(nonatomic, copy, nullable) NSString *bestGuess;

/** gdata */
@property(nonatomic, copy, nullable) NSString *fromBytes;

/** gdata */
@property(nonatomic, copy, nullable) NSString *fromFileName;

/** gdata */
@property(nonatomic, copy, nullable) NSString *fromHeader;

/** gdata */
@property(nonatomic, copy, nullable) NSString *fromUrlPath;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataDiffChecksumsResponse : GTLRObject

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataCompositeMedia *checksumsLocation;

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *chunkSizeBytes;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataCompositeMedia *objectLocation;

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *objectSizeBytes;

/** gdata */
@property(nonatomic, copy, nullable) NSString *objectVersion;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataDiffDownloadResponse : GTLRObject

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataCompositeMedia *objectLocation;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataDiffUploadRequest : GTLRObject

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataCompositeMedia *checksumsInfo;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataCompositeMedia *objectInfo;

/** gdata */
@property(nonatomic, copy, nullable) NSString *objectVersion;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataDiffUploadResponse : GTLRObject

/** gdata */
@property(nonatomic, copy, nullable) NSString *objectVersion;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataCompositeMedia *originalObject;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataDiffVersionResponse : GTLRObject

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *objectSizeBytes;

/** gdata */
@property(nonatomic, copy, nullable) NSString *objectVersion;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataDownloadParameters : GTLRObject

/**
 *  gdata
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *allowGzipCompression;

/**
 *  gdata
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ignoreRange;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataMedia : GTLRObject

/** gdata */
@property(nonatomic, copy, nullable) NSString *algorithm;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *bigstoreObjectRef;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *blobRef;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataBlobstore2Info *blobstore2Info;

/** gdata */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeReporting_GdataCompositeMedia *> *compositeMedia;

/** gdata */
@property(nonatomic, copy, nullable) NSString *contentType;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataContentTypeInfo *contentTypeInfo;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *cosmoBinaryReference;

/**
 *  gdata
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSNumber *crc32cHash;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataDiffChecksumsResponse *diffChecksumsResponse;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataDiffDownloadResponse *diffDownloadResponse;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataDiffUploadRequest *diffUploadRequest;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataDiffUploadResponse *diffUploadResponse;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataDiffVersionResponse *diffVersionResponse;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataDownloadParameters *downloadParameters;

/** gdata */
@property(nonatomic, copy, nullable) NSString *filename;

/**
 *  gdata
 *
 *  Remapped to 'hashProperty' to avoid NSObject's 'hash'.
 */
@property(nonatomic, copy, nullable) NSString *hashProperty;

/**
 *  gdata
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hashVerified;

/**
 *  gdata
 *
 *  Remapped to 'inlineProperty' to avoid language reserved word 'inline'.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *inlineProperty;

/**
 *  gdata
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isPotentialRetry;

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *length;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *md5Hash;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *mediaId;

/** gdata */
@property(nonatomic, strong, nullable) GTLRYouTubeReporting_GdataObjectId *objectId;

/** gdata */
@property(nonatomic, copy, nullable) NSString *path;

/**
 *  gdata
 *
 *  Likely values:
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_ArbitraryBytes
 *        gdata (Value: "ARBITRARY_BYTES")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_BigstoreRef gdata
 *        (Value: "BIGSTORE_REF")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_BlobRef gdata
 *        (Value: "BLOB_REF")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_CompositeMedia
 *        gdata (Value: "COMPOSITE_MEDIA")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_CosmoBinaryReference
 *        gdata (Value: "COSMO_BINARY_REFERENCE")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffChecksumsResponse
 *        gdata (Value: "DIFF_CHECKSUMS_RESPONSE")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffDownloadResponse
 *        gdata (Value: "DIFF_DOWNLOAD_RESPONSE")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffUploadRequest
 *        gdata (Value: "DIFF_UPLOAD_REQUEST")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffUploadResponse
 *        gdata (Value: "DIFF_UPLOAD_RESPONSE")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_DiffVersionResponse
 *        gdata (Value: "DIFF_VERSION_RESPONSE")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_GetMedia gdata
 *        (Value: "GET_MEDIA")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_Inline gdata
 *        (Value: "INLINE")
 *    @arg @c kGTLRYouTubeReporting_GdataMedia_ReferenceType_Path gdata (Value:
 *        "PATH")
 */
@property(nonatomic, copy, nullable) NSString *referenceType;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *sha1Hash;

/**
 *  gdata
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *sha256Hash;

/**
 *  gdata
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *timestamp;

/** gdata */
@property(nonatomic, copy, nullable) NSString *token;

@end


/**
 *  gdata
 */
@interface GTLRYouTubeReporting_GdataObjectId : GTLRObject

/** gdata */
@property(nonatomic, copy, nullable) NSString *bucketName;

/**
 *  gdata
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *generation;

/** gdata */
@property(nonatomic, copy, nullable) NSString *objectName;

@end


/**
 *  A job creating reports of a specific type.
 */
@interface GTLRYouTubeReporting_Job : GTLRObject

/** The creation date/time of the job. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The date/time when this job will expire/expired. After a job expired, no
 *  new reports are generated.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *expireTime;

/**
 *  The server-generated ID of the job (max. 40 characters).
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The name of the job (max. 100 characters). */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The type of reports this job creates. Corresponds to the ID of a
 *  ReportType.
 */
@property(nonatomic, copy, nullable) NSString *reportTypeId;

/**
 *  True if this a system-managed job that cannot be modified by the user;
 *  otherwise false.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *systemManaged;

@end


/**
 *  Response message for ReportingService.ListJobs.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "jobs" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRYouTubeReporting_ListJobsResponse : GTLRCollectionObject

/**
 *  The list of jobs.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeReporting_Job *> *jobs;

/**
 *  A token to retrieve next page of results.
 *  Pass this value in the
 *  ListJobsRequest.page_token
 *  field in the subsequent call to `ListJobs` method to retrieve the next
 *  page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response message for ReportingService.ListReports.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "reports" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRYouTubeReporting_ListReportsResponse : GTLRCollectionObject

/**
 *  A token to retrieve next page of results.
 *  Pass this value in the
 *  ListReportsRequest.page_token
 *  field in the subsequent call to `ListReports` method to retrieve the next
 *  page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of report types.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeReporting_Report *> *reports;

@end


/**
 *  Response message for ReportingService.ListReportTypes.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "reportTypes" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRYouTubeReporting_ListReportTypesResponse : GTLRCollectionObject

/**
 *  A token to retrieve next page of results.
 *  Pass this value in the
 *  ListReportTypesRequest.page_token
 *  field in the subsequent call to `ListReportTypes` method to retrieve the
 *  next
 *  page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of report types.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeReporting_ReportType *> *reportTypes;

@end


/**
 *  A report's metadata including the URL from which the report itself can be
 *  downloaded.
 */
@interface GTLRYouTubeReporting_Report : GTLRObject

/** The date/time when this report was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** The URL from which the report can be downloaded (max. 1000 characters). */
@property(nonatomic, copy, nullable) NSString *downloadUrl;

/**
 *  The end of the time period that the report instance covers. The value is
 *  exclusive.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  The server-generated ID of the report.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The date/time when the job this report belongs to will expire/expired. */
@property(nonatomic, strong, nullable) GTLRDateTime *jobExpireTime;

/** The ID of the job that created this report. */
@property(nonatomic, copy, nullable) NSString *jobId;

/**
 *  The start of the time period that the report instance covers. The value is
 *  inclusive.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

@end


/**
 *  A report type.
 */
@interface GTLRYouTubeReporting_ReportType : GTLRObject

/** The date/time when this report type was/will be deprecated. */
@property(nonatomic, strong, nullable) GTLRDateTime *deprecateTime;

/**
 *  The ID of the report type (max. 100 characters).
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The name of the report type (max. 100 characters). */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  True if this a system-managed report type; otherwise false. Reporting jobs
 *  for system-managed report types are created automatically and can thus not
 *  be used in the `CreateJob` method.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *systemManaged;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
