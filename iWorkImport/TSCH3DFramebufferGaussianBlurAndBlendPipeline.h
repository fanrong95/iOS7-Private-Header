/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DFramebufferGaussianBlurPipeline.h"


@class TSCH3DGLFramebuffer;



__attribute__((visibility("hidden")))

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline

{

    float mBlendFactor;

    TSCH3DGLFramebuffer *mBlendTexture;

}



+ (id)effectsArray;

@property(nonatomic) float blendFactor; // @synthesize blendFactor=mBlendFactor;

@property(retain, nonatomic) TSCH3DGLFramebuffer *blendTexture; // @synthesize blendTexture=mBlendTexture;

- (void)dealloc;

- (void)updateShaderEffectsStates;



@end


