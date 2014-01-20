/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKTileSource.h"


@class GEOActiveTileSet, VKTilePool, VKTimer, _VKTileSetBackedTileSourceTimerTarget;



__attribute__((visibility("hidden")))

@interface VKTileSetBackedTileSource : VKTileSource

{

    GEOActiveTileSet *_tileSet;

    struct _GEOTileKey _downloadTemplate;

    long long _minimumDownloadZoomLevel;

    long long _maximumDownloadZoomLevel;

    VKTimer *_expirationTimer;

    VKTilePool *_expiredTilePool;

    struct _NSRange _zoomLevelRange;

    _VKTileSetBackedTileSourceTimerTarget *_timerTarget;

}



- (id).cxx_construct;

- (double)_expirationInterval;

- (void)_expireTiles;

- (double)_nextTileExpirationDate;

- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(_Bool)arg2;

- (void)clearCaches;

- (void)dealloc;

- (long long)defaultMaximumZoomLevel;

- (long long)defaultMinimumZoomLevel;

- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;

- (_Bool)expires;

- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;

- (id)initWithTileSet:(id)arg1;

- (unsigned long long)mapLayerForZoomLevelRange;

- (long long)maximumDownloadZoomLevel;

- (long long)maximumZoomLevel;

- (long long)minimumDownloadZoomLevel;

- (long long)minimumZoomLevel;

- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;

- (void)setClient:(id)arg1;

- (void)setStylesheet:(id)arg1;

- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;

- (id)tileForKey:(const struct VKTileKey *)arg1;

@property(readonly, nonatomic) GEOActiveTileSet *tileSet; // @synthesize tileSet=_tileSet;

- (long long)tileSize;



@end


