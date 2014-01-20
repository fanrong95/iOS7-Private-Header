/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCHUnretainedParent.h"



@class CALayer<TSCH3DGLLayer>, TSCH3DChartRenderCycle, TSCH3DChartRep, TSCH3DGLLayerDelegate, TSCH3DRenderProcessor, TSCH3DScene, TSCH3DSession, TSCH3DSharegroupToken;



__attribute__((visibility("hidden")))

@interface TSCH3DChartRendererState : NSObject <TSCHUnretainedParent>

{

    TSCH3DChartRep *mRep;

    TSCH3DSession *mSession;

    TSCH3DRenderProcessor *mProcessor;

    TSCH3DChartRenderCycle *mRenderCycle;

    _Bool mInteractive;

    _Bool mWantInteractiveMode;

    _Bool mIsInteractiveMode;

    struct CGSize mMinimumBufferSize;

    struct CGRect mLayerVisibleBounds;

    CALayer<TSCH3DGLLayer> *mGLLayer;

    TSCH3DGLLayerDelegate *mGLLayerDelegate;

    TSCH3DSharegroupToken *mSharegroupToken;

}



- (id).cxx_construct;

- (id)GLLayer;

- (void)beginInteractiveModeWithMinimumBufferSize:(struct CGSize)arg1 performanceHint:(int)arg2;

@property(readonly, nonatomic) _Bool canRender;

- (void)clearParent;

- (void)dealloc;

- (void)destroy;

- (void)destroyFramebuffer;

- (void)endInteractiveMode;

@property(readonly, nonatomic) _Bool framebufferCanRender;

@property(readonly, nonatomic) _Bool hasSession;

- (id)initWithRep:(id)arg1 sharegroupToken:(id)arg2;

- (_Bool)isOneShot;

@property(nonatomic) struct CGRect layerVisibleBounds; // @synthesize layerVisibleBounds=mLayerVisibleBounds;

@property(readonly, nonatomic) _Bool mustRecreateRenderCycleForCurrentRenderCycleClass;

- (void)p_createGLLayer;

- (_Bool)p_reusableForCurrentRenderCycleClass;

- (void)p_setupInteractiveMode;

- (void)p_setupRenderCycle;

- (void)p_setupSession;

- (void)p_updateLabelBitmapContextInfoForScene:(id)arg1;

- (void)p_validateLabelBitmapContextInfoForScene:(id)arg1;

@property(nonatomic) int performance;

@property(readonly, nonatomic) TSCH3DRenderProcessor *processor; // @synthesize processor=mProcessor;

- (void)recreateGLLayer;

- (void)releaseGLLayer;

@property(readonly, nonatomic) TSCH3DChartRenderCycle *renderCycle; // @synthesize renderCycle=mRenderCycle;

- (_Bool)renderLegendIntoSeparateLayer;

@property(readonly, nonatomic) TSCH3DScene *scene;

@property(readonly, nonatomic) TSCH3DSession *session;

- (void)setIfIsMoreDemandingPerformance:(int)arg1;

- (void)setupForRendering;

@property(readonly, nonatomic) TSCH3DSharegroupToken *sharegroupToken; // @synthesize sharegroupToken=mSharegroupToken;

- (_Bool)usesMultipassRendering;



@end


