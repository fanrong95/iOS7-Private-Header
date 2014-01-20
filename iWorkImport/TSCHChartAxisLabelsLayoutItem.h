/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartLayoutItem.h"


__attribute__((visibility("hidden")))

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem

{

    unsigned long long mStride;

    float mAngleInDegrees;

    float mAngleInRadians;

}



- (struct CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect)arg3 unrotatedSize:(struct CGSize)arg4 unitSpaceValue:(double)arg5;

- (id)axisLayoutItem;

- (struct CGRect)calcDrawingRect;

- (struct CGSize)calcMinSize;

- (struct CGRect)calcOverhangRect;

- (void)clearAll;

- (struct CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2;

- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;

- (id)labelsLayoutItem;

- (struct CGRect)layoutSpaceRectForAllLabels;

- (id)mutationTuplesToApplyDuringResize;

- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;

- (unsigned long long)numberOfLabelsForAxis:(id)arg1;

- (id)p_axisFromLayoutItem;

- (unsigned long long)p_computeAutoStrideInLayoutArea:(struct CGRect)arg1;

- (id)p_overrideLabelStringForHitTestingEmptyLabel;

- (void)p_rect:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 inLayoutArea:(struct CGRect)arg3 forIndex:(unsigned long long)arg4 paragraphStyle:(id)arg5;

- (long long)p_smallestSecondValueLabelIndex:(long long)arg1 start:(long long)arg2 end:(long long)arg3 inLayoutArea:(struct CGRect)arg4 paragraphStyle:(id)arg5;

- (long long)p_smallestSecondValueLabelIndex:(long long)arg1 start:(long long)arg2 end:(long long)arg3 inLayoutArea:(struct CGRect)arg4 paragraphStyle:(id)arg5 isTop:(_Bool)arg6;

- (struct CGAffineTransform)p_transformForRenderingLabel:(unsigned long long)arg1 range:(struct _NSRange *)arg2 inLayoutArea:(struct CGRect)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 usingString:(id)arg6 stride:(unsigned long long *)arg7 useAngle:(_Bool)arg8;

- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(id)arg2;

- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2;

- (id)selectionPathLabelType;

- (void)setLayoutSize:(struct CGSize)arg1;

- (_Bool)showLabelsForAxis:(id)arg1;

@property(readonly, nonatomic) unsigned long long stride;

- (unsigned long long)strideInLayoutArea:(struct CGRect)arg1;

- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;

- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 range:(struct _NSRange)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;

- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 usingString:(id)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 useAngle:(_Bool)arg5;

- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;



@end


