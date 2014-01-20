/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class TSCH3DTexturePool;



__attribute__((visibility("hidden")))

@interface TSCH3DChartElementProperties : NSObject <NSCopying>

{

    TSCH3DTexturePool *mPool;

}



+ (id)properties;

- (void)addTexcoordsToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3;

- (void)applyChartElementsTransform:(struct ObjectTransforms *)arg1;

- (void)applyChartElementsTransformToProcessor:(id)arg1;

- (_Bool)applyCombinedTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;

- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;

- (_Bool)applyElementTransformToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor *)arg1;

- (id)getPropertiesOfType:(Class)arg1;

- (id)init;

@property(readonly, nonatomic) TSCH3DTexturePool *pool; // @synthesize pool=mPool;

- (id)renderingLightingModelForSeries:(id)arg1;



@end


