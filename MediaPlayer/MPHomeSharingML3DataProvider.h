/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPMediaLibraryDataProviderML3.h"


@class HSLibrary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;



@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3

{

    HSLibrary *_homeSharingLibrary;

    NSMutableDictionary *_tokenDataForDSIDs;

    NSMutableSet *_loadedContainerPIDs;

    NSMutableDictionary *_blocksForLoadingContainerPIDs;

    NSObject<OS_dispatch_queue> *_containerFillQueue;

    unsigned int _updateCheckEnabled:1;

}



+ (void)_determineHomeSharingGroupIDIfNecessary;

+ (void)beginScanningForLibraries;

+ (void)endScanningForLibraries;

+ (id)homeSharingGroupID;

+ (_Bool)isConnecting;

+ (_Bool)isScanningForLibraries;

- (void).cxx_destruct;

- (id)_cachedImagePathHomeSharingID:(unsigned int)arg1 pixelSize:(struct CGSize)arg2;

- (void)_didEnterBackgroundNotification:(id)arg1;

- (void)_fetchTokensForAuthorizedDSIDs;

- (void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(id)arg2;

- (void)_homeSharingGroupIDDidChangeNotification:(id)arg1;

- (void)_scheduleUpdateCheck;

- (id)_tokenDataForMediaItem:(id)arg1;

- (void)_willEnterForegroundNotification:(id)arg1;

- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;

- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2 progressHandler:(void)arg3;

- (void)dealloc;

- (void)disconnect;

- (id)errorResolverForMediaItem:(id)arg1;

- (_Bool)hasArtworkImageForItemWithIdentifier:(long long)arg1;

- (_Bool)hasGeniusMixes;

@property(readonly, nonatomic) HSLibrary *homeSharingLibrary; // @synthesize homeSharingLibrary=_homeSharingLibrary;

- (id)initWithHomeSharingLibrary:(id)arg1;

@property(readonly, nonatomic) _Bool isSupportedSharingVersion;

- (id)itemResultSetForQueryCriteria:(id)arg1;

- (void)loadArtworkImageForFormat:(long long)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;

- (void)loadBestArtworkImageDataForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;

- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id)arg2;

- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id)arg2;

- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;

- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;

- (id)name;

- (id)protectedContentSupportStorageURL;

- (_Bool)requiresAuthentication;

- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1;

- (void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2;

- (_Bool)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3;

- (_Bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(long long)arg2 artworkCacheID:(id)arg3;

- (_Bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize)arg2 artworkCacheID:(id)arg3;

- (id)uniqueIdentifier;



@end


