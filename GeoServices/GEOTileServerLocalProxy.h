/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GEOTileServerProxy.h"


#import "GEOResourceManifestTileGroupObserver.h"



@class GEOTileDBReader, GEOTileDBWriter, NSLock, NSMapTable, NSMutableArray, NSString;



__attribute__((visibility("hidden")))

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver>

{

    GEOTileDBWriter *_dbWriter;

    GEOTileDBReader *_dbReader;

    NSString *_cacheLocation;

    NSMapTable *_providers;

    NSMutableArray *_inProgress;

    NSLock *_inProgressLock;

}



- (void)_registerBuiltInProviders;

- (void)_updateExpiringTilesets;

- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;

- (void)cancel:(const struct _GEOTileKey *)arg1;

- (void)close;

- (void)dealloc;

- (void)endPreloadSession;

- (void)flushPendingWrites;

- (id)initWithCacheLocation:(id)arg1;

- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned long long)arg3 client:(id)arg4;

- (void)open;

- (void)registerProvider:(Class)arg1;

- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;

- (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;

- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 forKey:(struct _GEOTileKey)arg5 userInfo:(id)arg6;

- (void)tileRequester:(id)arg1 receivedError:(id)arg2;

- (void)tileRequesterFinished:(id)arg1;



@end


