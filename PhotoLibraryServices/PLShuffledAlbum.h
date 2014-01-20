/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLAlbumProtocol.h"

#import "PLIndexMappingCache.h"



@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;



@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol>

{

    struct __CFArray *_toBackingMap;

    struct __CFArray *_fromBackingMap;

    struct NSObject *_backingAlbum;

    PLManagedAsset *_startingAsset;

    NSMutableOrderedSet *_assets;

}



+ (struct NSObject *)shuffledAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;

+ (struct NSObject *)unshuffledAlbum:(struct NSObject *)arg1;

@property(retain, nonatomic) NSMutableOrderedSet *_assets; // @synthesize _assets;

@property(readonly, nonatomic) unsigned long long approximateCount;

@property(readonly, nonatomic) NSOrderedSet *assets;

@property(readonly, nonatomic) unsigned long long assetsCount;

@property(readonly, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum;

- (void)batchFetchAssets:(id)arg1;

@property(readonly, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;

@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;

- (_Bool)canPerformEditOperation:(int)arg1;

@property(readonly, nonatomic) _Bool canShowAvalancheStacks;

@property(readonly, nonatomic) _Bool canShowComments;

- (unsigned long long)count;

- (unsigned long long)countOfShuffledAssets;

- (void)createShuffledIndexesMaps;

- (void)createShuffledIndexesMapsIfNeeded;

- (void)dealloc;

- (Class)derivedChangeNotificationClass;

- (id)description;

- (id)displayableIndexesForCount:(unsigned long long)arg1;

- (struct __CFArray *)fromBackingMap;

@property(readonly, nonatomic) NSURL *groupURL;

@property(nonatomic) _Bool hasUnseenContentBoolValue;

@property(retain, nonatomic) NSString *importSessionID;

- (unsigned long long)indexInShuffledAssetsOfObject:(id)arg1;

- (id)init;

- (id)initWithBackingAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;

- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned long long)arg2;

@property(readonly, nonatomic) _Bool isCameraAlbum;

@property(readonly, nonatomic) _Bool isCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isEmpty;

@property(readonly, nonatomic) _Bool isLibrary;

@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isPanoramasAlbum;

@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;

@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;

@property(readonly, nonatomic) _Bool isStandInAlbum;

@property(readonly, nonatomic) _Bool isWallpaperAlbum;

@property(retain, nonatomic) PLManagedAsset *keyAsset;

@property(readonly, nonatomic) NSNumber *kind;

@property(readonly, nonatomic) int kindValue;

@property(readonly, nonatomic) NSArray *localizedLocationNames;

@property(readonly, nonatomic) NSString *localizedTitle;

- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;

@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;

@property(readonly, nonatomic) NSString *name;

- (id)objectInShuffledAssetsAtIndex:(unsigned long long)arg1;

@property(nonatomic) int pendingItemsCount;

@property(nonatomic) int pendingItemsType;

@property(readonly, nonatomic) unsigned long long photosCount;

@property(readonly, nonatomic) UIImage *posterImage;

- (void)reducePendingItemsCountBy:(unsigned long long)arg1;

- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned long long)arg1;

- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;

@property(readonly, nonatomic) id sectioningComparator;

@property(retain, nonatomic) NSDictionary *slideshowSettings;

@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;

@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;

@property(readonly, nonatomic) id sortingComparator;

@property(readonly, nonatomic) PLManagedAsset *startingAsset;

@property(readonly, nonatomic) NSString *title;

- (id)titleForSectionStartingAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) NSString *uuid;

@property(readonly, nonatomic) unsigned long long videosCount;



// Remaining properties

@property(readonly, nonatomic) NSDate *endDate;

@property(readonly, nonatomic) NSDate *startDate;



@end


