/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIColor, CIImage, CIVector, NSNumber;



__attribute__((visibility("hidden")))

@interface CUIOuterGlowOrShadowFilter : CIFilter

{

    CIImage *inputImage;

    CIVector *inputOffset;

    NSNumber *inputRange;

    NSNumber *inputRadius;

    CIColor *inputColor;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;

@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@property(retain, nonatomic) NSNumber *inputRange; // @synthesize inputRange;

- (id)outputImage;

- (void)setDefaults;



@end


