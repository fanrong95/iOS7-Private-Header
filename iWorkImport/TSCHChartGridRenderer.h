/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHRenderer.h"


__attribute__((visibility("hidden")))

@interface TSCHChartGridRenderer : TSCHRenderer

{

}



- (void)dealloc;

- (id)init;

- (void)p_renderBackground:(struct CGContext *)arg1;

- (void)p_renderBackground:(struct CGContext *)arg1 style:(id)arg2;

- (void)p_renderGridlines:(struct CGContext *)arg1 axis:(id)arg2 locations:(id)arg3 showProperty:(int)arg4 strokeProperty:(int)arg5 shadowProperty:(int)arg6 opacityProperty:(int)arg7;

- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;



@end


