/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol SSDownloadQueueObserver <NSObject>

- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;



@optional

- (void)downloadQueue:(id)arg1 downloadStatusChangedAtIndex:(long long)arg2;

- (void)downloadQueueNetworkUsageChanged:(id)arg1;

@end


