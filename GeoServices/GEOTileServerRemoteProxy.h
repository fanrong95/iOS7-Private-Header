/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GEOTileServerProxy.h"


@class NSHashTable, NSLock, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;



__attribute__((visibility("hidden")))

@interface GEOTileServerRemoteProxy : GEOTileServerProxy

{

    NSObject<OS_dispatch_queue> *_connQueue;

    NSObject<OS_xpc_object> *_conn;

    NSLock *_connLock;

    int _suspendCount;

    unsigned long long _handleCounter;

    NSHashTable *_cancellingConnections;

    NSLock *_cancellingConnectionsLock;

}



- (void)_handleEditionUpgrade:(id)arg1;

- (void)_handleError:(id)arg1;

- (void)_handleEvent:(id)arg1 fromConnection:(id)arg2;

- (void)_handleNetworkBegan:(id)arg1;

- (void)_handleTile:(id)arg1;

- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;

- (void)cancel:(const struct _GEOTileKey *)arg1;

- (void)close;

- (void)dealloc;

- (void)endPreloadSession;

- (void)flushPendingWrites;

- (id)init;

- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned long long)arg3 client:(id)arg4;

- (void)open;

- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;

- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;

- (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;



@end


