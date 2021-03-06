/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIImage, NSNumber;



__attribute__((visibility("hidden")))

@interface CISkyAndGrassAdjust : CIFilter

{

    CIImage *inputImage;

    NSNumber *inputSkyAmount;

    NSNumber *inputGrassAmount;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) NSNumber *inputGrassAmount; // @synthesize inputGrassAmount;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) NSNumber *inputSkyAmount; // @synthesize inputSkyAmount;

- (id)outputImage;

- (void)setDefaults;



@end


