/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIImage, CIVector, NSNumber;



__attribute__((visibility("hidden")))

@interface CIDisintegrateWithMaskTransition : CIFilter

{

    CIImage *inputImage;

    CIImage *inputTargetImage;

    CIImage *inputMaskImage;

    NSNumber *inputTime;

    NSNumber *inputShadowRadius;

    NSNumber *inputShadowDensity;

    CIVector *inputShadowOffset;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;

@property(retain, nonatomic) NSNumber *inputShadowDensity; // @synthesize inputShadowDensity;

@property(retain, nonatomic) CIVector *inputShadowOffset; // @synthesize inputShadowOffset;

@property(retain, nonatomic) NSNumber *inputShadowRadius; // @synthesize inputShadowRadius;

@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;

@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;

- (id)outputImage;

- (void)setDefaults;



@end


