/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "TSDMixing.h"



__attribute__((visibility("hidden")))

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>

{

    _Bool mHorizontalFlip;

    _Bool mVerticalFlip;

}



+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize)arg2;

+ (id)pathSourceWithArchive:(const struct PathSourceArchive *)arg1;

- (id)bezierPath;

- (id)bezierPathWithoutFlips;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property _Bool hasHorizontalFlip; // @synthesize hasHorizontalFlip=mHorizontalFlip;

@property _Bool hasVerticalFlip; // @synthesize hasVerticalFlip=mVerticalFlip;

- (id)initWithArchive:(const struct PathSourceArchive *)arg1;

- (id)interiorWrapPath;

- (_Bool)isCircular;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isRectangular;

- (_Bool)isRectangularForever;

- (void)loadSharedFromArchive:(const struct PathSourceArchive *)arg1;

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;

- (long long)mixingTypeWithObject:(id)arg1;

- (struct CGSize)naturalSize;

- (struct CGAffineTransform)pathFlipTransform;

- (Class)preferredControllerClass;

- (void)saveSharedToArchive:(struct PathSourceArchive *)arg1;

- (void)saveToArchive:(struct PathSourceArchive *)arg1;

- (void)scaleToNaturalSize:(struct CGSize)arg1;

- (void)setNaturalSize:(struct CGSize)arg1;

- (double)uniformScaleForScalingToNaturalSize:(struct CGSize)arg1;

- (id)valueForSetSelector:(SEL)arg1;



@end


