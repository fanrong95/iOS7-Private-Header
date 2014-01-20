/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIColor, CIImage, CIVector, NSNumber;



__attribute__((visibility("hidden")))

@interface CUIShapeEffectBlur1 : CIFilter

{

    CIImage *inputImage;

    CIImage *inputFill;

    CIVector *inputOffset;

    NSNumber *inputRadius;

    CIColor *inputGlowColorInner;

    CIColor *inputGlowColorOuter;

    CIColor *inputShadowColorInner;

    CIColor *inputShadowColorOuter;

    NSNumber *inputShadowBlurInner;

    NSNumber *inputShadowBlurOuter;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) CIImage *inputFill; // @synthesize inputFill;

@property(retain, nonatomic) CIColor *inputGlowColorInner; // @synthesize inputGlowColorInner;

@property(retain, nonatomic) CIColor *inputGlowColorOuter; // @synthesize inputGlowColorOuter;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;

@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@property(retain, nonatomic) NSNumber *inputShadowBlurInner; // @synthesize inputShadowBlurInner;

@property(retain, nonatomic) NSNumber *inputShadowBlurOuter; // @synthesize inputShadowBlurOuter;

@property(retain, nonatomic) CIColor *inputShadowColorInner; // @synthesize inputShadowColorInner;

@property(retain, nonatomic) CIColor *inputShadowColorOuter; // @synthesize inputShadowColorOuter;

- (id)outputImage;

- (void)setDefaults;



@end


