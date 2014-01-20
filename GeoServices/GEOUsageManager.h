/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PBRequesterDelegate.h"



@class GEORequester, GEOUsageCollectionRequest, NSLock, NSMapTable, NSTimer;



@interface GEOUsageManager : NSObject <PBRequesterDelegate>

{

    GEORequester *_requester;

    GEOUsageCollectionRequest *_request;

    NSLock *_requestLock;

    NSTimer *_updateTimer;

    _Bool _isAppActive;

    id _backgroundTaskStart;

    id _backgroundTaskEnd;

    NSMapTable *_requesterToBackgroundTask;

}



+ (void)setUsePersistentConnection:(_Bool)arg1;

+ (id)sharedManager;

- (void)_applicationActivating;

- (void)_applicationDeactivating;

- (void)_cleanupRequester;

- (void)_cleanupTimer;

- (void)_endBackgroundTaskForRequester:(id)arg1;

- (void)_prepareRequest;

- (void)_scheduleUpdateTimer;

- (void)_sendUsageToServer;

- (void)_startBackgroundTaskForRequester:(id)arg1;

- (void)_updateTimerFired:(id)arg1;

- (id)_usageURL;

@property(copy, nonatomic) id backgroundTaskEnd; // @synthesize backgroundTaskEnd=_backgroundTaskEnd;

@property(copy, nonatomic) id backgroundTaskStart; // @synthesize backgroundTaskStart=_backgroundTaskStart;

- (void)captureDirectionsFeedbackCollection:(id)arg1;

- (void)captureMapsUsageFeedbackCollection:(id)arg1;

- (void)captureTransitAppLaunchFeedbackCollection:(id)arg1;

- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2;

- (void)captureUsageDataForTiles:(id)arg1;

- (void)dealloc;

- (id)init;

- (void)requester:(id)arg1 didFailWithError:(id)arg2;

- (void)requesterDidCancel:(id)arg1;

- (void)requesterDidFinish:(id)arg1;

- (_Bool)shouldIgnoreCollectionForCountry;



@end


