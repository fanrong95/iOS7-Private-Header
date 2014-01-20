/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLAssetContainer.h"



@class NSDictionary, NSMutableOrderedSet, NSNumber, NSString, NSURL, UIImage;



@protocol PLAlbumProtocol <PLAssetContainer>

- (void)batchFetchAssets:(id)arg1;

@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;

- (id)displayableIndexesForCount:(unsigned long long)arg1;

@property(readonly, nonatomic) NSURL *groupURL;

@property(nonatomic) _Bool hasUnseenContentBoolValue;

@property(retain, nonatomic) NSString *importSessionID;

@property(readonly, nonatomic) _Bool isCameraAlbum;

@property(readonly, nonatomic) _Bool isCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isLibrary;

@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isPanoramasAlbum;

@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;

@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;

@property(readonly, nonatomic) _Bool isStandInAlbum;

@property(readonly, nonatomic) _Bool isWallpaperAlbum;

@property(readonly, nonatomic) NSNumber *kind;

@property(readonly, nonatomic) int kindValue;

@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;

@property(nonatomic) int pendingItemsCount;

@property(nonatomic) int pendingItemsType;

@property(readonly, nonatomic) UIImage *posterImage;

- (void)reducePendingItemsCountBy:(unsigned long long)arg1;

@property(readonly, nonatomic) id sectioningComparator;

@property(retain, nonatomic) NSDictionary *slideshowSettings;

@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;

@property(readonly, nonatomic) id sortingComparator;

- (id)titleForSectionStartingAtIndex:(unsigned long long)arg1;



@optional

- (id)filteredIndexesForPredicate:(id)arg1;

@property(readonly, nonatomic) NSString *name;

- (void)setUINotificationsEnabled:(_Bool)arg1;

@end


