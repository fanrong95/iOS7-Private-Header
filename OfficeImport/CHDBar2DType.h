/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CHDChartTypeWithGrouping.h"


__attribute__((visibility("hidden")))

@interface CHDBar2DType : CHDChartTypeWithGrouping

{

    int mGapWidth;

    _Bool mColumn;

    int mOverlap;

}



- (int)defaultLabelPosition;

- (int)gapWidth;

- (id)initWithChart:(id)arg1;

- (_Bool)isColumn;

- (_Bool)isHorizontal;

- (int)overlap;

- (void)setColumn:(_Bool)arg1;

- (void)setGapWidth:(int)arg1;

- (void)setOverlap:(int)arg1;



@end

