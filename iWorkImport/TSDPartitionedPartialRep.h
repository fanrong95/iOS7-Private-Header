/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDRep.h"


__attribute__((visibility("hidden")))

@interface TSDPartitionedPartialRep : TSDRep

{

}



- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;

- (struct CGRect)clipRect;

- (void)didUpdateLayer:(id)arg1;

- (_Bool)directlyManagesLayerContent;

- (void)drawInContext:(struct CGContext *)arg1;

- (id)i_queueForTileProvider;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (struct CGRect)layerFrameInScaledCanvas;

- (struct CGRect)p_clipRect;

- (struct CGRect)p_convertBaseToNaturalRect:(struct CGRect)arg1;

- (struct UIEdgeInsets)p_edgeInsetsForClipping;

- (struct CGImage *)p_newImageForCachingBaseRep;

- (void)resetCachedPartitionedRendering;

- (void)willBeRemoved;



@end


