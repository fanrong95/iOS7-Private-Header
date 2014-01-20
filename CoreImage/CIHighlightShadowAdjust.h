/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


#import "_CIFilterProperties.h"



@class CIImage, NSNumber;



__attribute__((visibility("hidden")))

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>

{

    CIImage *inputImage;

    NSNumber *inputRadius;

    NSNumber *inputShadowAmount;

    NSNumber *inputHighlightAmount;

}



+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;

- (_Bool)_isIdentity;

- (id)_kernelS;

- (id)_kernelSH;

- (id)_kernelSH_v1;

- (id)_kernelSHnoB_v1;

- (id)_kernelSnoB;

- (id)_outputProperties;

@property(retain, nonatomic) NSNumber *inputHighlightAmount; // @synthesize inputHighlightAmount;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@property(retain, nonatomic) NSNumber *inputShadowAmount; // @synthesize inputShadowAmount;

- (id)outputImage;

- (void)setDefaults;



@end


