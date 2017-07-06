// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Admin Data Transfer API (admin/datatransfer_v1)
// Description:
//   Transfers user data from one user to another.
// Documentation:
//   https://developers.google.com/admin-sdk/data-transfer/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDataTransfer_Application;
@class GTLRDataTransfer_ApplicationDataTransfer;
@class GTLRDataTransfer_ApplicationTransferParam;
@class GTLRDataTransfer_DataTransfer;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The JSON template for an Application resource.
 */
@interface GTLRDataTransfer_Application : GTLRObject

/** Etag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The application's ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/** Identifies the resource as a DataTransfer Application Resource. */
@property(nonatomic, copy, nullable) NSString *kind;

/** The application's name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The list of all possible transfer parameters for this application. These
 *  parameters can be used to select the data of the user in this application to
 *  be transfered.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDataTransfer_ApplicationTransferParam *> *transferParams;

@end


/**
 *  Template to map fields of ApplicationDataTransfer resource.
 */
@interface GTLRDataTransfer_ApplicationDataTransfer : GTLRObject

/**
 *  The application's ID.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *applicationId;

/**
 *  The transfer parameters for the application. These parameters are used to
 *  select the data which will get transfered in context of this application.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDataTransfer_ApplicationTransferParam *> *applicationTransferParams;

/** Current status of transfer for this application. (Read-only) */
@property(nonatomic, copy, nullable) NSString *applicationTransferStatus;

@end


/**
 *  Template for a collection of Applications.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "applications" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDataTransfer_ApplicationsListResponse : GTLRCollectionObject

/**
 *  List of applications that support data transfer and are also installed for
 *  the customer.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDataTransfer_Application *> *applications;

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/** Identifies the resource as a collection of Applications. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Continuation token which will be used to specify next page in list API. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Template for application transfer parameters.
 */
@interface GTLRDataTransfer_ApplicationTransferParam : GTLRObject

/** The type of the transfer parameter. eg: 'PRIVACY_LEVEL' */
@property(nonatomic, copy, nullable) NSString *key;

/**
 *  The value of the coressponding transfer parameter. eg: 'PRIVATE' or 'SHARED'
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *value;

@end


/**
 *  The JSON template for a DataTransfer resource.
 */
@interface GTLRDataTransfer_DataTransfer : GTLRObject

/**
 *  List of per application data transfer resources. It contains data transfer
 *  details of the applications associated with this transfer resource. Note
 *  that this list is also used to specify the applications for which data
 *  transfer has to be done at the time of the transfer resource creation.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDataTransfer_ApplicationDataTransfer *> *applicationDataTransfers;

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The transfer's ID (Read-only).
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Identifies the resource as a DataTransfer request. */
@property(nonatomic, copy, nullable) NSString *kind;

/** ID of the user to whom the data is being transfered. */
@property(nonatomic, copy, nullable) NSString *newOwnerUserId NS_RETURNS_NOT_RETAINED;

/** ID of the user whose data is being transfered. */
@property(nonatomic, copy, nullable) NSString *oldOwnerUserId;

/** Overall transfer status (Read-only). */
@property(nonatomic, copy, nullable) NSString *overallTransferStatusCode;

/** The time at which the data transfer was requested (Read-only). */
@property(nonatomic, strong, nullable) GTLRDateTime *requestTime;

@end


/**
 *  Template for a collection of DataTransfer resources.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "dataTransfers" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDataTransfer_DataTransfersListResponse : GTLRCollectionObject

/**
 *  List of data transfer requests.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDataTransfer_DataTransfer *> *dataTransfers;

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/** Identifies the resource as a collection of data transfer requests. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Continuation token which will be used to specify next page in list API. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end

NS_ASSUME_NONNULL_END
