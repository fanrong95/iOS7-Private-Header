/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MKMapSnapshotOptions, NSObject<OS_dispatch_queue>, VKMapSnapshotCreator;



@interface MKMapSnapshotter : NSObject

{

    MKMapSnapshotOptions *_options;

    int _loadingFlag;

    NSObject<OS_dispatch_queue> *_callbackQueue;

    id _completionHandler;

    VKMapSnapshotCreator *_snapshotCreator;

    _Bool _needsResume;

}



- (void)_cancel;

- (void)_cleanupSnapshotCreator;

- (void)_enterBackground:(id)arg1;

- (void)_exitBackground:(id)arg1;

- (void)_failWithError:(id)arg1;

- (void)_performSnapshot;

- (void)_succeedWithSnapshot:(id)arg1;

- (void)cancel;

- (void)dealloc;

- (id)init;

- (id)initWithOptions:(id)arg1;

@property(readonly, nonatomic, getter=isLoading) _Bool loading;

- (void)startWithCompletionHandler:(id)arg1;

- (void)startWithQueue:(id)arg1 completionHandler:(id)arg2;



@end


