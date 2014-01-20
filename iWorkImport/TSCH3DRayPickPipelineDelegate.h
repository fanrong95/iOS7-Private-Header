/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DChartAllSceneObjectDelegate.h"



@class TSCH3DSceneObject;



__attribute__((visibility("hidden")))

@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate>

{

    TSCH3DSceneObject *mCurrentSceneObject;

    tvec2_3b141483 mCurrentElement;

}



- (id).cxx_construct;

@property(nonatomic) tvec2_3b141483 currentElement; // @synthesize currentElement=mCurrentElement;

@property(retain, nonatomic) TSCH3DSceneObject *currentSceneObject; // @synthesize currentSceneObject=mCurrentSceneObject;

- (void)dealloc;

- (void)didEndProcessingSceneObject:(id)arg1;

- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;

- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;

- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;

- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;

- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;

- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;

- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;

- (_Bool)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;

- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;

- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;

- (void)setOffset:(const tvec3_17f03ce0 *)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4;

- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute *)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg3;

- (_Bool)willBeginProcessingSceneObject:(id)arg1;

- (_Bool)willProcessElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;

- (_Bool)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;

- (_Bool)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;

- (_Bool)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;

- (_Bool)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;

- (_Bool)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg2;

- (_Bool)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(id)arg5;

- (_Bool)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;

- (_Bool)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;



@end


