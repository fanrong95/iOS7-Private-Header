/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CICodeGenerator.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface CIQRCodeGenerator : CICodeGenerator

{

    NSString *inputCorrectionLevel;

}



+ (id)customAttributes;

@property(copy, nonatomic) NSString *inputCorrectionLevel; // @synthesize inputCorrectionLevel;

- (struct CGImage *)outputCGImage;

- (void)setDefaults;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;



@end

