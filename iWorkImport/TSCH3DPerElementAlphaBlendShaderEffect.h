/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DShaderEffect.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface TSCH3DPerElementAlphaBlendShaderEffect : TSCH3DShaderEffect

{

    NSString *mFunctionName;

}



+ (id)effectWithInterpolationFunctionName:(id)arg1;

+ (void)setInterpolationRange:(box_e9f23397)arg1 effectsStates:(id)arg2;

+ (id)variablePerElementAlphaBlendInterpolationRange;

+ (id)variablePerElementAlphaBlendValue;

- (void)addVariables:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSString *functionName; // @synthesize functionName=mFunctionName;

- (id)initWithInterpolationFunctionName:(id)arg1;

- (void)inject:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (void)uploadData:(id)arg1 effectsStates:(id)arg2;

- (id)variablePerElementAlphaBlendInterpolationRange;

- (id)variablePerElementAlphaBlendValue;



@end


