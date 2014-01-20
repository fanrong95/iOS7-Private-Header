/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreOfferMediaItemCollection, NSDictionary, NSURL;



@interface MPStoreCompletionOffering : NSObject <NSCopying>

{

    long long _preferredStoreOfferVariant;

    NSDictionary *_responseCollectionDictionary;

    MPMediaQuery *_localItemsQuery;

    MPStoreCollectionCompletionOffering *_collectionWithCompletionItemsOffering;

    long long _presentationStyle;

    NSURL *_storeURL;

}



+ (long long)defaultOfferVariant;

+ (id)offeringWithCollectionResponseDictionary:(id)arg1 localItemsQuery:(id)arg2;

+ (void)setDefaultOfferVariant:(long long)arg1;

- (void).cxx_destruct;

- (void)_loadOfferingData;

@property(readonly, nonatomic) MPStoreOfferMediaItemCollection *collectionWithCompletionItems;

- (id)copyByInvalidatingCalculatedContent;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)initWithCollectionResponseDictionary:(id)arg1 localItemsQuery:(id)arg2;

@property(nonatomic) long long preferredStoreOfferVariant;

@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;

@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;



@end


