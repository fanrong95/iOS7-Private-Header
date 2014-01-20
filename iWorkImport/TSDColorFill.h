/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDFill.h"


#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "TSDMixing.h"



@class TSUColor;



__attribute__((visibility("hidden")))

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>

{

    TSUColor *mColor;

}



+ (id)blackColor;

+ (id)blueColor;

+ (id)brownColor;

+ (id)clearColor;

+ (id)colorWithCGColor:(struct CGColor *)arg1;

+ (id)colorWithColor:(id)arg1;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

+ (id)colorWithUIColor:(id)arg1;

+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;

+ (id)cyanColor;

+ (id)grayColor;

+ (id)greenColor;

+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

+ (id)keyPathsForValuesAffectingBrightness;

+ (id)keyPathsForValuesAffectingCGColor;

+ (id)keyPathsForValuesAffectingHue;

+ (id)keyPathsForValuesAffectingLuminance;

+ (id)keyPathsForValuesAffectingOpacity;

+ (id)keyPathsForValuesAffectingSaturation;

+ (id)magentaColor;

+ (id)orangeColor;

+ (id)purpleColor;

+ (id)randomColor;

+ (id)redColor;

+ (id)whiteColor;

+ (id)yellowColor;

@property(readonly, nonatomic) struct CGColor *CGColor;

- (id)UIColor;

- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;

- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;

@property(readonly, nonatomic) double brightness;

- (_Bool)canApplyToCALayer;

- (_Bool)canApplyToCAShapeLayer;

@property(readonly, nonatomic) TSUColor *color; // @synthesize color=mColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (_Bool)drawsInOneStep;

- (int)fillType;

- (id)grayscaleColor;

- (unsigned long long)hash;

@property(readonly, nonatomic) double hue;

- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithCGColor:(struct CGColor *)arg1;

- (id)initWithColor:(id)arg1;

- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

- (id)initWithUIColor:(id)arg1;

- (id)initWithWhite:(double)arg1 alpha:(double)arg2;

- (id)invertedColor;

- (_Bool)isClear;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isNearlyWhite;

- (_Bool)isOpaque;

@property(readonly, nonatomic) double luminance;

- (SEL)mapThemeAssetSelector;

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;

- (long long)mixingTypeWithObject:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) double opacity;

- (double)p_hsbComponentWithIndex:(unsigned long long)arg1;

- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

- (id)referenceColor;

@property(readonly, nonatomic) double saturation;

- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;



@end


