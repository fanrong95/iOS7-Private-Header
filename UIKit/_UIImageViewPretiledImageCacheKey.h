/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIImage;



__attribute__((visibility("hidden")))

@interface _UIImageViewPretiledImageCacheKey : NSObject

{

    UIImage *_originalImage;

    struct CGSize _pretiledSize;

}



+ (id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(struct CGSize)arg2;

- (id)description;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;



@end


