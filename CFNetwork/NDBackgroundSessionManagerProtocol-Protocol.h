/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol NDBackgroundSessionManagerProtocol <NSObject>

- (void)boost:(id)arg1;

- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 reply:(id)arg4;

- (void)dropBoost;

- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(id)arg2;

- (void)releaseAssertionForSession:(id)arg1 reply:(id)arg2;

- (void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(id)arg2;

@end

