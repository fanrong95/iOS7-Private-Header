/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;



@interface MSConnection : NSObject

{

    NSXPCConnection *_center;

    NSXPCConnection *_noWakeCenter;

    NSMutableDictionary *_serverSideConfig;

    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;

    int _serverSideConfigNotificationToken;

}



+ (id)sharedConnection;

- (void).cxx_destruct;

- (id)_machErrorWithUnderlyingError:(id)arg1;

- (void)_waitForMessageToBeSent;

- (void)abortActivitiesForPersonID:(id)arg1;

- (void)checkForOutstandingActivities;

- (void)dealloc;

- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;

- (_Bool)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id *)arg3;

- (_Bool)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id *)arg3;

- (void)forgetPersonID:(id)arg1;

- (void)handleSubscriptionPushForPersonID:(id)arg1;

- (id)init;

- (_Bool)isBusy;

- (void)isBusyCompletionBlock:(id)arg1;

- (id)pause;

- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;

- (void)refreshServerSideConfigurationForPersonID:(id)arg1;

- (void)resetServerStateForPersonID:(id)arg1;

- (void)resume:(id)arg1;

- (id)serverSideConfigurationForPersonID:(id)arg1;



@end


