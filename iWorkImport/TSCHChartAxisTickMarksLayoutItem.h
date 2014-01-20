/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartLayoutItem.h"


__attribute__((visibility("hidden")))

@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

{

}



- (struct CGRect)calcDrawingRect;

- (struct CGSize)calcMinSize;

- (id)initWithParent:(id)arg1;

- (int)location;

@property(readonly, nonatomic) float majorTickmarkLength;

@property(readonly, nonatomic) float minorTickmarkLength;

- (struct CGRect)p_effectiveRootedLayoutRect;

- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;



@end


