/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIColor, CIImage, NSNumber;



__attribute__((visibility("hidden")))

@interface CUIOuterBevelEmbossFilter : CIFilter

{

    CIImage *inputImage;

    NSNumber *inputRadius;

    NSNumber *inputSize;

    NSNumber *inputSoften;

    NSNumber *inputAngle;

    CIColor *inputHighlightColor;

    CIColor *inputShadowColor;

}



+ (id)customAttributes;

- (id)_kernel;

- (id)_kernelC;

@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;

@property(retain, nonatomic) CIColor *inputHighlightColor; // @synthesize inputHighlightColor;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@property(retain, nonatomic) CIColor *inputShadowColor; // @synthesize inputShadowColor;

@property(retain, nonatomic) NSNumber *inputSize; // @synthesize inputSize;

@property(retain, nonatomic) NSNumber *inputSoften; // @synthesize inputSoften;

- (id)outputImage;

- (void)setDefaults;



@end


