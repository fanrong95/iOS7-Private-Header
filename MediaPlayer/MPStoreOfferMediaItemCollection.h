/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPMediaItemCollection.h"


@class MPMediaQuery, MPStoreOfferContentRating, NSArray, NSDictionary;



@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection

{

    NSDictionary *_storeLookupPropertyValues;

    NSArray *_unmergedStoreMediaItems;

    MPMediaQuery *_localItemsQuery;

    MPMediaItemCollection *_localCollection;

    _Bool _hasHiddenRestrictedContent;

    long long _preferredStoreOfferVariant;

    MPStoreOfferContentRating *_collectionContentRating;

}



+ (id)childItemIDsForLookupCollectionPropertyValues:(id)arg1;

+ (id)collectionLookupKeyForMediaProperty:(id)arg1;

+ (id)contentRatingForCollectionPropertyValues:(id)arg1;

+ (id)defaultPropertyValues;

+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;

+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;

+ (long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;

- (void).cxx_destruct;

- (_Bool)_checkIsUsableOffer;

- (_Bool)_hasRestrictedContent;

- (void)_loadLocalCollection;

- (id)_lookupOfferDictionaries;

- (_Bool)_offeredItemAlreadyExists;

- (id)buyOfferForVariant:(long long)arg1;

- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (long long)countOfItemsByRemovingLocalItems;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)hasDownloadableStoreOfferItemsForVariant:(long long)arg1;

- (_Bool)hasPurchasableStoreOfferItemsForVariant:(long long)arg1;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(long long)arg2;

- (id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4;

- (_Bool)isCheaperToPurchaseIndividualItems;

@property(readonly, nonatomic) _Bool isCollectionOfferPresentable;

- (_Bool)isDownloadable;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSArray *itemsByRemovingLocalItems;

@property(readonly, nonatomic) NSArray *itemsByRemovingStoreOffers;

- (id)mediaLibrary;

- (unsigned long long)persistentID;

- (long long)preferredStoreOfferVariant;

- (id)title;

- (id)valueForProperty:(id)arg1;

- (id)valuesForProperties:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) NSArray *items;



@end


