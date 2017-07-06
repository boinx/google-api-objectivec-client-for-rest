// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Tracing API (tracing/v2)
// Description:
//   Send and retrieve trace data from Google Stackdriver Trace.
// Documentation:
//   https://cloud.google.com/trace

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRTracing_BatchWriteSpansRequest;
@class GTLRTracing_Span;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Tracing query classes.
 */
@interface GTLRTracingQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Sends new spans to Stackdriver Trace or updates existing traces. If the
 *  name of a trace that you send matches that of an existing trace, new spans
 *  are added to the existing trace. Attempt to update existing spans results
 *  undefined behavior. If the name does not match, a new trace is created
 *  with given set of spans.
 *
 *  Method: tracing.projects.traces.batchWrite
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTracingCloudPlatform
 *    @c kGTLRAuthScopeTracingTraceAppend
 */
@interface GTLRTracingQuery_ProjectsTracesBatchWrite : GTLRTracingQuery
// Previous library name was
//   +[GTLQueryTracing queryForProjectsTracesBatchWriteWithObject:name:]

/**
 *  Name of the project where the spans belong to. Format is
 *  `projects/PROJECT_ID`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTracing_Empty.
 *
 *  Sends new spans to Stackdriver Trace or updates existing traces. If the
 *  name of a trace that you send matches that of an existing trace, new spans
 *  are added to the existing trace. Attempt to update existing spans results
 *  undefined behavior. If the name does not match, a new trace is created
 *  with given set of spans.
 *
 *  @param object The @c GTLRTracing_BatchWriteSpansRequest to include in the
 *    query.
 *  @param name Name of the project where the spans belong to. Format is
 *    `projects/PROJECT_ID`.
 *
 *  @returns GTLRTracingQuery_ProjectsTracesBatchWrite
 */
+ (instancetype)queryWithObject:(GTLRTracing_BatchWriteSpansRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns of a list of traces that match the specified filter conditions.
 *
 *  Method: tracing.projects.traces.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTracingCloudPlatform
 *    @c kGTLRAuthScopeTracingTraceReadonly
 */
@interface GTLRTracingQuery_ProjectsTracesList : GTLRTracingQuery
// Previous library name was
//   +[GTLQueryTracing queryForProjectsTracesListWithparent:]

/**
 *  End of the time interval (inclusive) during which the trace data was
 *  collected from the application.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  An optional filter for the request.
 *  Example:
 *  `version_label_key:a some_label:some_label_key`
 *  returns traces from version `a` and has `some_label` with `some_label_key`.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Field used to sort the returned traces. Optional.
 *  Can be one of the following:
 *  * `trace_id`
 *  * `name` (`name` field of root span in the trace)
 *  * `duration` (difference between `end_time` and `start_time` fields of
 *  the root span)
 *  * `start` (`start_time` field of the root span)
 *  Descending order can be specified by appending `desc` to the sort field
 *  (for example, `name desc`).
 *  Only one sort field is permitted.
 */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  Maximum number of traces to return. If not specified or <= 0, the
 *  implementation selects a reasonable value. The implementation may
 *  return fewer traces than the requested page size. Optional.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Token identifying the page of results to return. If provided, use the
 *  value of the `next_page_token` field from a previous request. Optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  ID of the Cloud project where the trace data is stored which is
 *  `projects/PROJECT_ID`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Start of the time interval (inclusive) during which the trace data was
 *  collected from the application.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/**
 *  Fetches a @c GTLRTracing_ListTracesResponse.
 *
 *  Returns of a list of traces that match the specified filter conditions.
 *
 *  @param parent ID of the Cloud project where the trace data is stored which
 *    is
 *    `projects/PROJECT_ID`.
 *
 *  @returns GTLRTracingQuery_ProjectsTracesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Returns a list of spans within a trace.
 *
 *  Method: tracing.projects.traces.listSpans
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTracingCloudPlatform
 *    @c kGTLRAuthScopeTracingTraceReadonly
 */
@interface GTLRTracingQuery_ProjectsTracesListSpans : GTLRTracingQuery
// Previous library name was
//   +[GTLQueryTracing queryForProjectsTracesListSpansWithparent:]

/**
 *  Token identifying the page of results to return. If provided, use the
 *  value of the `nextPageToken` field from a previous request. Optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  ID of the trace for which to list child spans. Format is
 *  `projects/PROJECT_ID/traces/TRACE_ID`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRTracing_ListSpansResponse.
 *
 *  Returns a list of spans within a trace.
 *
 *  @param parent ID of the trace for which to list child spans. Format is
 *    `projects/PROJECT_ID/traces/TRACE_ID`.
 *
 *  @returns GTLRTracingQuery_ProjectsTracesListSpans
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Creates a new Span.
 *
 *  Method: tracing.projects.traces.spans.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTracingCloudPlatform
 *    @c kGTLRAuthScopeTracingTraceAppend
 */
@interface GTLRTracingQuery_ProjectsTracesSpansCreate : GTLRTracingQuery
// Previous library name was
//   +[GTLQueryTracing queryForProjectsTracesSpansCreateWithObject:name:]

/**
 *  The resource name of Span in the format
 *  `projects/PROJECT_ID/traces/TRACE_ID/spans/SPAN_ID`.
 *  `TRACE_ID` is a unique identifier for a trace within a project and is a
 *  base16-encoded, case-insensitive string and is required to be 32 char long.
 *  `SPAN_ID` is a unique identifier for a span within a trace. It is a
 *  base 16-encoded, case-insensitive string of a 8-bytes array and is required
 *  to be 16 char long.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTracing_Span.
 *
 *  Creates a new Span.
 *
 *  @param object The @c GTLRTracing_Span to include in the query.
 *  @param name The resource name of Span in the format
 *    `projects/PROJECT_ID/traces/TRACE_ID/spans/SPAN_ID`.
 *    `TRACE_ID` is a unique identifier for a trace within a project and is a
 *    base16-encoded, case-insensitive string and is required to be 32 char
 *    long.
 *    `SPAN_ID` is a unique identifier for a span within a trace. It is a
 *    base 16-encoded, case-insensitive string of a 8-bytes array and is
 *    required
 *    to be 16 char long.
 *
 *  @returns GTLRTracingQuery_ProjectsTracesSpansCreate
 */
+ (instancetype)queryWithObject:(GTLRTracing_Span *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
