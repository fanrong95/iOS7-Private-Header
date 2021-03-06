/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLAssetChangeObserver.h"

#import "PLCloudFeedEntriesObserver.h"

#import "PLPhotoLibraryShouldReloadObserver.h"



@class NSMutableArray, NSOrderedSet, PLPhotoLibrary;



@interface PUFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>

{

    NSMutableArray *_pendingFeedEntriesChangeNotifications;

    NSMutableArray *_pendingAssetsChangeNotifications;

    PLPhotoLibrary *_photoLibrary;

    long long _count;

    id <PUFeedRecentsManagerDelegate> _delegate;

    NSOrderedSet *__cachedRecentAssets;

}



- (void).cxx_destruct;

@property(copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets; // @synthesize _cachedRecentAssets=__cachedRecentAssets;

- (void)_didFinishPostingNotifications:(id)arg1;

- (void)_invalidateCachedRecentAssets;

- (void)_setCount:(long long)arg1;

- (void)_setPhotoLibrary:(id)arg1;

- (_Bool)_updateCachedRecentAssets;

- (void)assetsDidChange:(id)arg1;

- (void)cloudFeedEntriesDidChange:(id)arg1;

@property(nonatomic) long long count; // @synthesize count=_count;

- (void)dealloc;

@property(nonatomic) __weak id <PUFeedRecentsManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2;

@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;

@property(readonly, nonatomic) NSOrderedSet *recentAssets;

- (void)shouldReload:(id)arg1;



@end


