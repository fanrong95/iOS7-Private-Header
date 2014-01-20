/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartValueAxis.h"


@class TSCHChartAxisAnalysis;



__attribute__((visibility("hidden")))

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis

{

    TSCHChartAxisAnalysis *mInProgressAnalysisForErrorBarData;

}



- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;

- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;

- (_Bool)editableFormatForValueStrings;

- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;

- (id)numberFormat;

- (double)totalForGroup:(unsigned long long)arg1;

- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3;

- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;

- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2 min:(double)arg3 max:(double)arg4;

- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;

- (void)updateModelMinMaxInAnalysis:(id)arg1;

- (id)userMax;

- (id)userMin;

- (id)valueForFormattedString:(id)arg1;



@end


