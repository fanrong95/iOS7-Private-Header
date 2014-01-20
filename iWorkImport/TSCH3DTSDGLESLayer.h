/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDGLLayer.h"


#import "TSCH3DGLLayer.h"



@class TSCH3DLayerCacheLogic;



__attribute__((visibility("hidden")))

@interface TSCH3DTSDGLESLayer : TSDGLLayer <TSCH3DGLLayer>

{

    TSCH3DLayerCacheLogic *mCacheLogic;

}



- (id)cacheLogic;

- (double)contentsScale;

- (void)dealloc;

- (id)framebufferFromContext:(id)arg1 attributes:(const struct FramebufferAttributes *)arg2;

- (id)initWithLayerCacheLogicClass:(Class)arg1;

- (Class)layerDelegateClass;

- (void)presentLayerWithPresenterInfo:(const struct PresenterInfo *)arg1;

- (void)setContentsScale:(double)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)willDestroyFramebuffer:(id)arg1 session:(id)arg2;



@end


