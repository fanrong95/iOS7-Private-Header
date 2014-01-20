/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNAnimationPluginArchiving.h"

#import "KNFrameBuildAnimator.h"



@class KNAnimParameterGroup, KNBuildCrumbleSystem, KNBuildSmokeSystem, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLTextureInfo;



__attribute__((visibility("hidden")))

@interface KNBuildCrumble : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>

{

    KNAnimParameterGroup *_parameterGroup;

    KNBuildCrumbleSystem *_shatterSystem;

    TSDGLShader *_shatterSystemShader;

    KNBuildSmokeSystem *_smokeSystem;

    TSDGLShader *_smokeSystemShader;

    TSDGLTextureInfo *_smokeTextureInfo;

    TSDGLShader *_fboShader;

    TSDGLDataBuffer *_fboDataBuffer;

    TSDGLDataBuffer *_blurDataBuffer;

    TSDGLFrameBuffer *_shadowFramebuffer;

    TSDGLShader *_blurShader;

    struct CATransform3D _projectionMatrix;

    struct CATransform3D _shadowFBOProjectionMatrix;

    struct CGRect _drawableFrame;

    struct CGRect _animationRect;

    int _oldViewportRect[4];

    _Bool _oldViewportRectInitialized;

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (id)localizedMenuString:(int)arg1;

+ (_Bool)requiresSingleTexturePerStage;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (void)dealloc;

- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

- (id)initWithAnimationContext:(id)arg1;

- (void)p_setupMVPMatricesWithContext:(id)arg1;

- (void)p_setupParticleSystemsWithImage:(id)arg1 animatedBuild:(id)arg2 context:(id)arg3;

- (void)p_setupShadersWithContext:(id)arg1;

- (void)renderFrameWithContext:(id)arg1;

- (void)teardown;



@end


