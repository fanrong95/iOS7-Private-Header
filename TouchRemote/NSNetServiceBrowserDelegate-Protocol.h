/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol NSNetServiceBrowserDelegate <NSObject>



@optional

- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;

- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;

- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;

- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;

- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;

- (void)netServiceBrowserDidStopSearch:(id)arg1;

- (void)netServiceBrowserWillSearch:(id)arg1;

@end

