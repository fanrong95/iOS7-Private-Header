/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, UIImage;



@interface SKUIRatingStarsCache : NSObject

{

    NSMutableDictionary *_cachedImages;

    UIImage *_emptyStarImage;

    UIImage *_filledStarImage;

    UIImage *_halfStarImage;

}



+ (id)cacheWithProperties:(long long)arg1;

- (void).cxx_destruct;

- (id)initWithProperties:(long long)arg1;

- (id)ratingStarsImageForRating:(double)arg1;



@end


