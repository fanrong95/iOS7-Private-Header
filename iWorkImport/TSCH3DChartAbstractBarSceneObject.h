/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartElementSceneObject.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject

{

}



+ (Class)propertiesClass;

+ (void)setLowDetailedGeometriesForScene:(id)arg1;

- (void)addZAxisAnimationToClips:(id)arg1 scene:(id)arg2;

- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 scene:(id)arg2;

- (_Bool)blendOpaqueForElementBlendAnimationClip;

- (_Bool)canOptimizePositiveOnlyForGrowAnimation;

- (float)capFudgeForGrowAnimation;

- (float)chartMinZForScene:(id)arg1;

- (float)clipFudgeForGrowAnimation;

- (_Bool)delayOpaqueForElementBlendAnimationClip;

- (float)depthForScene:(id)arg1;

- (_Bool)growNeedsPerElementAlphaBlendingForDeliveryStyle:(unsigned long long)arg1;

- (tvec2_84d5962d)p_valueLabelPaddingForLabelPosition:(unsigned int)arg1;

- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;

- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;

- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;

- (box_e9f23397)shadowBlendRangeForChartDeliveryStyle:(unsigned long long)arg1;

- (box_a3bd9649)shadowPlanePadding;

- (_Bool)shouldRenderEachValue;

- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;

- (tvec3_17f03ce0)sortingPositionForElement:(const struct RenderElementInfo *)arg1;

- (void)updateElementEffectsStates:(const struct RenderElementInfo *)arg1 depthToWidthRatio:(float)arg2;

- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 series:(id)arg2 properties:(id)arg3 textureTiling:(id)arg4 areaSize:(tvec3_17f03ce0 *)arg5 element:(tvec2_3b141483 *)arg6;



@end


