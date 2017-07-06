// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud User Accounts API (clouduseraccounts/vm_alpha)
// Description:
//   Creates and manages users and groups for accessing Google Compute Engine
//   virtual machines.
// Documentation:
//   https://cloud.google.com/compute/docs/access/user-accounts/api/latest/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudUserAccountsCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudUserAccountsCloudPlatformReadOnly;
/**
 *  Authorization scope: Manage your Google Cloud User Accounts
 *
 *  Value "https://www.googleapis.com/auth/cloud.useraccounts"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudUserAccountsCloudUseraccounts;
/**
 *  Authorization scope: View your Google Cloud User Accounts
 *
 *  Value "https://www.googleapis.com/auth/cloud.useraccounts.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudUserAccountsCloudUseraccountsReadonly;

// ----------------------------------------------------------------------------
//   GTLRCloudUserAccountsService
//

/**
 *  Service for executing Cloud User Accounts API queries.
 *
 *  Creates and manages users and groups for accessing Google Compute Engine
 *  virtual machines.
 */
@interface GTLRCloudUserAccountsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudUserAccountsQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
