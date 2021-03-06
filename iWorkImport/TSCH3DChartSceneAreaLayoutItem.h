/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartAbstractAreaLayoutItem.h"


@class TSCH3DChartResizerHelper, TSCH3DScene, TSCH3DVector;



__attribute__((visibility("hidden")))

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem

{

    struct CGRect mChartBodyLayoutRect;

    TSCH3DChartResizerHelper *mResizerHelper;

    TSCH3DScene *mScene;

    tvec2_84d5962d mChartBodyLayoutOffsetInChartAreaLayoutSpace;

    _Bool mIsInvariant;

    _Bool mIsInvalidated;

    tvec4_ac57c72d mInitialInfoChartScale;

}



+ (id)worldBoundsDescriptionForScene:(id)arg1;

- (id).cxx_construct;

- (id)boundsLayout;

- (id)boundsLayout:(struct CGRect)arg1 scene:(id)arg2 allowsEmptyBodyLayoutBounds:(_Bool)arg3;

- (struct CGRect)calcDrawingRect;

@property(nonatomic) struct CGRect chartBodyLayoutRect; // @synthesize chartBodyLayoutRect=mChartBodyLayoutRect;

- (void)clearAll;

- (void)clearScene;

@property(readonly, nonatomic) tvec2_3b141483 containingViewport;

@property(readonly, nonatomic) TSCH3DVector *containingViewportVector;

- (void)dealloc;

- (id)debug_rotationBounds;

- (id)initWithParent:(id)arg1;

- (void)invalidateBounds;

- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2;

@property(nonatomic) _Bool isInvariant; // @synthesize isInvariant=mIsInvariant;

- (id)p_cache;

- (id)p_cacheInwardLayout;

- (id)p_cacheOutwardLayout;

- (tvec2_3b141483)p_currentModelSize;

- (_Bool)p_inwardLayoutCanUseCacheItem:(id)arg1;

- (void)p_layoutInward;

- (void)p_layoutOutward;

- (_Bool)p_needsRefinementForInwardLayout;

- (_Bool)p_outwardLayoutCanUseCacheItem:(id)arg1;

- (void)p_updateBodyLayoutRect;

- (void)p_updateFromCacheItem:(id)arg1;

- (void)p_updateLayoutSize:(struct CGSize)arg1 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const tvec2_84d5962d *)arg2;

- (id)p_updatedResizerHelper;

- (_Bool)p_validCacheItem:(id)arg1 inward:(_Bool)arg2;

- (void)p_validate;

@property(readonly, nonatomic) const struct ChartProjectedBoundsSpaces *projectedBounds;

- (const struct ChartProjectedBoundsSpaces *)projectedBoundsWithScene:(id)arg1 allowsEmptyBodyLayoutBounds:(_Bool)arg2;

- (id)renderersWithRep:(id)arg1;

@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;

- (void)setChartBodyLayoutSize:(struct CGSize)arg1;

- (void)setLayoutOffset:(struct CGPoint)arg1;

- (void)setStabilizedChartBodyLayoutRectUsingConverter:(const struct ChartProjectedBoundsConverter *)arg1;



@end


