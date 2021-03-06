/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class MPMediaItem, MPMediaLibrary;



@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>

{

}



+ (_Bool)canFilterByProperty:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (id)buyOffer;

- (id)buyOfferForVariant:(long long)arg1;

- (id)completionOfferForVariant:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (void)invalidateCachedProperties;

@property(readonly, nonatomic) _Bool isDownloadable;

@property(readonly, nonatomic) _Bool isDownloadableStoreOffer;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool isPurchasableStoreOffer;

@property(readonly, nonatomic) MPMediaLibrary *mediaLibrary;

@property(readonly, nonatomic) unsigned long long persistentID;

@property(readonly, nonatomic) long long preferredStoreOfferVariant;

@property(readonly, nonatomic) MPMediaItem *representativeItem;

- (id)valueForProperty:(id)arg1;

- (id)valuesForProperties:(id)arg1;



@end


