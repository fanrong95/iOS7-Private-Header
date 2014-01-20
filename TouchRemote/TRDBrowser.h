/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSNetServiceBrowserDelegate.h"

#import "NSNetServiceDelegate.h"



@class NSArray, NSMapTable, NSNetServiceBrowser, NSObject<OS_dispatch_queue>;



@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

{

    NSObject<OS_dispatch_queue> *_accessQueue;

    NSNetServiceBrowser *_browser;

    unsigned long long _browsingCount;

    NSMapTable *_netServiceToService;

    NSMapTable *_netServiceToResolvingCompletionHandlers;

    NSMapTable *_XPCConnectionToBrowsingCount;

}



+ (id)sharedBrowser;

- (void).cxx_destruct;

- (void)TRXPCD_getServicesWithCompletionHandler:(id)arg1;

- (void)TRXPCD_startBrowsing;

- (void)TRXPCD_stopBrowsing;

- (void)_callResolvingCompletionHandlersForNetService:(id)arg1 withError:(id)arg2;

- (id)_init;

- (_Bool)_isXPCConnectionBrowsing:(id)arg1;

- (id)_netServiceForService:(id)arg1;

- (void)_resolveNetService:(id)arg1 withTimeout:(double)arg2 completionHandler:(id)arg3;

- (id)_serviceForNetService:(id)arg1;

- (void)dealloc;

- (id)init;

@property(readonly, nonatomic, getter=isBrowsing) _Bool browsing;

- (void)netService:(id)arg1 didNotResolve:(id)arg2;

- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;

- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;

- (void)netServiceDidResolveAddress:(id)arg1;

@property(readonly, nonatomic) NSArray *services;

- (void)startBrowsing;

- (void)stopBrowsing;



@end


