/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DTexturedRectangle.h"


@class TSCH3DChartRepAnimationTextureState;



__attribute__((visibility("hidden")))

@interface TSCH3DRenderBlockTexturedRectangle : TSCH3DTexturedRectangle

{

    TSCH3DChartRepAnimationTextureState *mAnimationTextureState;

}



- (void)dealloc;

- (id)initWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 animationTextureState:(id)arg3 renderBlock:(id)arg4;

- (void)teardown;



@end


