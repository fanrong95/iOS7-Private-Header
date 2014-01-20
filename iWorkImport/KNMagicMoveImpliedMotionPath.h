/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNAnimationPluginArchiving.h"

#import "KNAnimationPluginObsoleteNames.h"

#import "KNMagicMoveFrameAnimator.h"

#import "KNMagicMoveTransitionAnimator.h"



@class KNMotionBlurWrapper, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, TSDGLDataBuffer, TSDGLShader, TSDMagicMoveTextureZOrderer;



__attribute__((visibility("hidden")))

@interface KNMagicMoveImpliedMotionPath : KNAnimationEffect <KNMagicMoveTransitionAnimator, KNMagicMoveFrameAnimator, KNAnimationPluginObsoleteNames, KNAnimationPluginArchiving>

{

    TSDGLShader *_magicMoveShader;

    TSDGLShader *_magicMoveBlendShader;

    TSDGLDataBuffer *_dataBuffer;

    id _motionBlurWrapperTextureDrawOptionsBlock;

    id _motionBlurWrapperSetupShaderBlock;

    KNMotionBlurWrapper *_motionBlurWrapper;

    TSDMagicMoveTextureZOrderer *_mmTextureZOrderer;

    NSMutableDictionary *_animationDict;

    NSDictionary *_animationCacheDict;

    NSMutableArray *_texturesOrderingArray;

    NSMapTable *_textureToShaderMapTable;

    NSMapTable *_textureToMorphEffectDict;

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)customAttributes;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (void)initialize;

+ (_Bool)isCharacterAwareEffect;

+ (id)localizedMenuString:(int)arg1;

+ (id)obsoleteAnimationNames;

+ (_Bool)requiresBullets;

+ (_Bool)requiresMagicMoveTextures;

+ (_Bool)requiresPerspectiveTransform;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (id)animationsWithContext:(id)arg1;

- (void)dealloc;

- (id)initWithAnimationContext:(id)arg1;

- (void)p_addDebugAnimationsToArray:(id)arg1 forType:(long long)arg2 duration:(double)arg3;

- (id)p_magicMoveShaderWithShouldBlendIncoming:(_Bool)arg1 enableDebugColors:(_Bool)arg2;

- (void)p_setAnimationGroup:(id)arg1 forLayer:(id)arg2 inDictionary:(id)arg3;

- (id)p_texturesBySortingArray:(id)arg1;

- (void)renderFrameWithContext:(id)arg1;



@end


