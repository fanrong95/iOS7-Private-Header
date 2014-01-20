/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDTilingLayer.h"


@class TSCHRenderer;



__attribute__((visibility("hidden")))

@interface TSCHRendererLayer : TSDTilingLayer

{

    TSCHRenderer *mRenderer;

}



- (void)dealloc;

- (void)drawInContext:(struct CGContext *)arg1;

- (id)initWithRenderer:(id)arg1;

- (struct CGRect)p_calculateLayerFrame;

- (struct CGRect)p_layerFrameFromUnscaledFrame:(struct CGRect)arg1;

- (id)renderer;

- (void)updateFrameFromLayout;



@end

