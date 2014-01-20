/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNFrameAnimator.h"



@class NSArray, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;



__attribute__((visibility("hidden")))

@interface KNTransitionTwist : KNAnimationEffect <KNFrameAnimator>

{

    TSDGLMotionBlurEffect *_motionBlurEffect;

    TSDGLShader *_colorShader;

    TSDGLShader *_velocityShader;

    TSDGLDataBuffer *_colorDataBuffer;

    TSDGLDataBuffer *_velocityDataBuffer;

    NSArray *_colorBufferAttributes;

    NSArray *_velocityBufferAttributes;

    unsigned long long _colorPositionAttributeIndex;

    unsigned long long _colorTexCoordAttributeIndex;

    unsigned long long _colorNormalAttributeIndex;

    unsigned long long _velocityPositionAttributeIndex;

    unsigned long long _velocityPrevPositionAttributeIndex;

    long long _numPoints;

    double _twistyness;

    _Bool _shouldDrawMotionBlur;

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)customAttributes;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (id)localizedMenuString:(int)arg1;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (void)createArrays:(id)arg1;

- (void)dealloc;

- (void)drawGrid:(id)arg1;

- (double)fx:(double)arg1 withPercent:(double)arg2;

- (id)initWithAnimationContext:(id)arg1;

- (void)p_drawTwistWithVelocity:(_Bool)arg1 percent:(double)arg2 texture:(id)arg3 oldTexture:(id)arg4;

- (void)p_teardown;

- (void)renderFrameWithContext:(id)arg1;

- (void)update:(id)arg1 withPercent:(double)arg2 direction:(unsigned long long)arg3;



@end


