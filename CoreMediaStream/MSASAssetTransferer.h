/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MMCSEngineDelegate.h"



@class MMCSEngine, MSASPersonModel, MSAlbumSharingDaemon, MSBackoffManager, NSObject<OS_dispatch_queue>, NSString;



@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>

{

    _Bool _hasShutDown;

    int _maxBatchCount;

    int _maxRetryCount;

    id _delegate;

    NSString *_personID;

    MMCSEngine *_engine;

    double _maxMMCSTokenValidityTimeInterval;

    MSAlbumSharingDaemon *_daemon;

    MSASPersonModel *_model;

    MSBackoffManager *_backoffManager;

    NSString *_focusAlbumGUID;

    NSString *_focusAssetCollectionGUID;

    NSObject<OS_dispatch_queue> *_workQueue;

    NSObject<OS_dispatch_queue> *_eventQueue;

}



- (void).cxx_destruct;

- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;

- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;

- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;

- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;

- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;

- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;

- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;

- (_Bool)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;

- (id)_MMCSTokenTooOldError;

- (id)_canceledError;

- (id)_missingMMCSTokenError;

- (id)_missingURLError;

- (id)_pathForPersonID:(id)arg1;

- (void)_rereadPerformanceLoggingSetting;

- (void)_sendDidIdleNotification;

@property(nonatomic) __weak MSBackoffManager *backoffManager; // @synthesize backoffManager=_backoffManager;

- (void)cancelCompletionBlock:(id)arg1;

@property(nonatomic) __weak MSAlbumSharingDaemon *daemon; // @synthesize daemon=_daemon;

- (void)dealloc;

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;

- (void)didFinishGettingAllAssets;

- (void)didFinishPuttingAllAssets;

@property(readonly, nonatomic) MMCSEngine *engine; // @synthesize engine=_engine;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;

@property(copy, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;

@property(copy, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;

@property(nonatomic) _Bool hasShutDown; // @synthesize hasShutDown=_hasShutDown;

- (id)initWithPersonID:(id)arg1;

- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;

@property(nonatomic) int maxBatchCount; // @synthesize maxBatchCount=_maxBatchCount;

@property(nonatomic) double maxMMCSTokenValidityTimeInterval; // @synthesize maxMMCSTokenValidityTimeInterval=_maxMMCSTokenValidityTimeInterval;

@property(nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;

@property(nonatomic) __weak MSASPersonModel *model; // @synthesize model=_model;

@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;

- (void)retryOutstandingActivities;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void)shutDownCompletionBlock:(id)arg1;

- (void)stopCompletionBlock:(id)arg1;

- (void)workQueueCancel;

- (double)workQueueMaxMMCSTokenValidityTimeInterval;

- (unsigned long long)workQueueNextItemID;

- (void)workQueueRetryOutstandingActivities;

- (void)workQueueShutDownCompletionBlock:(id)arg1;

- (void)workQueueStop;



@end


