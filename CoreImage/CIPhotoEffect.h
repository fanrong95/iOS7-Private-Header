/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIImage;



__attribute__((visibility("hidden")))

@interface CIPhotoEffect : CIFilter

{

    CIImage *inputImage;

}



+ (id)customAttributes;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

- (id)outputImage;



@end

