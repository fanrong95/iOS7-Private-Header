/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIImage, CIVector, NSNumber;



__attribute__((visibility("hidden")))

@interface CIVortexDistortion : CIFilter

{

    CIImage *inputImage;

    CIVector *inputCenter;

    NSNumber *inputRadius;

    NSNumber *inputAngle;

}



+ (id)customAttributes;

- (_Bool)_isIdentity;

- (id)_kernel;

@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;

@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

- (id)outputImage;

- (void)setDefaults;



@end


