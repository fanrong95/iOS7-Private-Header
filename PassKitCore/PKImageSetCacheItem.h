/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, PKPassImages;



@interface PKImageSetCacheItem : NSObject

{

    PKPassImages *_images;

    NSMutableSet *_cardUniqueIDs;

}



@property(retain, nonatomic) NSMutableSet *cardUniqueIDs; // @synthesize cardUniqueIDs=_cardUniqueIDs;

- (void)dealloc;

@property(retain, nonatomic) PKPassImages *images; // @synthesize images=_images;

- (id)initWithImages:(id)arg1 cardUniqueID:(id)arg2;



@end


