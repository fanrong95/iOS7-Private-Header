/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol MSSubscriber

- (void)abort;

- (void)checkForNewAssetCollections;

- (void)checkForOutstandingActivities;

@property(nonatomic) id <MSSubscriberDelegate> delegate;

- (id)ownSubscribedStream;

- (void)resetSync;

- (void)retrieveAssets:(id)arg1;

- (void)stop;

- (id)subscribedStreams;

@end


