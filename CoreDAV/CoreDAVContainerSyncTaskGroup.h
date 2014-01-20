/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVTaskGroup.h"


#import "CoreDAVDeleteTaskDelegate.h"

#import "CoreDAVGetTaskDelegate.h"

#import "CoreDAVPutTaskDelegate.h"



@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;



@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate>

{

    int _phase;

    NSURL *_folderURL;

    NSString *_previousCTag;

    NSString *_nextCTag;

    _Bool _ensureUpdatedCTag;

    _Bool _useSyncCollection;

    NSString *_previousSyncToken;

    NSString *_nextSyncToken;

    NSMutableArray *_actions;

    void *_context;

    unsigned long long _multiGetBatchSize;

    NSMutableArray *_unsubmittedTasks;

    unsigned long long _maxIndependentTasks;

    NSURL *_addMemberURL;

    _Bool _useMultiGet;

    NSDictionary *_bulkRequests;

    NSString *_bulkChangeCheckCTag;

    NSMutableSet *_syncReportDeletedURLs;

    NSMutableDictionary *_urlToETag;

    Class _appSpecificDataItemClass;

    _Bool _syncItemOrder;

    NSMutableArray *_localItemURLOrder;

    NSMutableDictionary *_remainingUUIDsToAddActions;

    NSMutableDictionary *_remainingHREFsToModDeleteActions;

    _Bool _actionsOnly;

}



- (void)_bulkChange;

- (void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2;

- (void)_configureMultiGet:(id)arg1;

- (void)_getCTag;

- (void)_getDataPayloads;

- (void)_getETags;

- (void)_getOrder;

- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;

- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;

- (void)_pushActions;

- (void)_sendNextBatch;

- (unsigned long long)_submitTasks;

- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;

- (void)_tearDownAllUnsubmittedTasks;

@property _Bool actionsOnly; // @synthesize actionsOnly=_actionsOnly;

@property(retain) NSURL *addMemberURL; // @synthesize addMemberURL=_addMemberURL;

- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;

- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;

- (void)bailWithError:(id)arg1;

@property(retain) NSString *bulkChangeCheckCTag; // @synthesize bulkChangeCheckCTag=_bulkChangeCheckCTag;

- (Class)bulkChangeTaskClass;

@property(retain) NSDictionary *bulkRequests; // @synthesize bulkRequests=_bulkRequests;

- (void)cancelTaskGroup;

@property(readonly) void *context; // @synthesize context=_context;

- (id)copyAdditionalResourcePropertiesToFetch;

- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;

- (id)copyGetTaskWithURL:(id)arg1;

- (id)copyMultiGetTaskWithURLs:(id)arg1;

- (id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;

- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;

- (id)dataContentType;

- (void)dealloc;

- (void)deleteResourceURLs:(id)arg1;

- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;

- (id)description;

@property _Bool ensureUpdatedCTag; // @synthesize ensureUpdatedCTag=_ensureUpdatedCTag;

@property(readonly) NSURL *folderURL; // @synthesize folderURL=_folderURL;

- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;

- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(_Bool)arg5 context:(void *)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8;

- (_Bool)isWhitelistedError:(id)arg1;

@property(readonly) NSArray *localItemURLOrder; // @synthesize localItemURLOrder=_localItemURLOrder;

@property unsigned long long maxIndependentTasks; // @synthesize maxIndependentTasks=_maxIndependentTasks;

@property unsigned long long multiGetBatchSize; // @synthesize multiGetBatchSize=_multiGetBatchSize;

@property(retain) NSString *nextCTag; // @synthesize nextCTag=_nextCTag;

@property(retain) NSString *previousCTag; // @synthesize previousCTag=_previousCTag;

@property(retain) NSString *previousSyncToken; // @synthesize previousSyncToken=_previousSyncToken;

- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;

- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;

- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;

@property _Bool useMultiGet; // @synthesize useMultiGet=_useMultiGet;

@property _Bool useSyncCollection; // @synthesize useSyncCollection=_useSyncCollection;

- (_Bool)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;

- (_Bool)shouldFetchMoreETags;

- (_Bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;

- (void)startTaskGroup;

- (void)syncAway;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;

- (void)taskGroupWillCancelWithError:(id)arg1;



// Remaining properties

@property(nonatomic) id <CoreDAVLocalDBInfoProvider> delegate; // @dynamic delegate;



@end


