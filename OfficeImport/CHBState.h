/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CHDChart;



__attribute__((visibility("hidden")))

@interface CHBState : NSObject

{

    CHDChart *mChart;

    struct __CFArray *mXlChartDataSeriesCollection;

    int mXlSeriesCount;

    int mXlCurrentSeriesIndex;

    id <CHAutoStyling> mAutoStyling;

    _Bool mHasPrimaryMixedArea;

    _Bool mHasPrimaryMixedColumn;

    _Bool mHasPrimaryMixedLine;

    _Bool mHasSecondaryMixedArea;

    _Bool mHasSecondaryMixedColumn;

    _Bool mHasSecondaryMixedLine;

}



- (id)autoStyling;

- (id)chart;

- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(_Bool)arg2;

- (void)dealloc;

- (void)deleteXlChartDataSeriesCollection;

- (_Bool)hasPrimaryMixedArea;

- (_Bool)hasPrimaryMixedColumn;

- (_Bool)hasPrimaryMixedLine;

- (_Bool)hasSecondaryMixedArea;

- (_Bool)hasSecondaryMixedColumn;

- (_Bool)hasSecondaryMixedLine;

- (id)init;

- (void)readAndCacheXlChartDataSeries;

- (id)resources;

- (void)setChart:(id)arg1;

- (void)setHasPrimaryMixedArea:(_Bool)arg1;

- (void)setHasPrimaryMixedColumn:(_Bool)arg1;

- (void)setHasPrimaryMixedLine:(_Bool)arg1;

- (void)setHasSecondaryMixedArea:(_Bool)arg1;

- (void)setHasSecondaryMixedColumn:(_Bool)arg1;

- (void)setHasSecondaryMixedLine:(_Bool)arg1;

- (void)setXlCurrentSeriesIndex:(int)arg1;

- (id)workbook;

- (struct XlChartDataSeries *)xlChartDataSeriesAtIndex:(int)arg1;

- (struct XlChartDataSeries *)xlCurrentChartDataSeries;

- (int)xlCurrentChartDataSeriesIndex;

- (int)xlSeriesCount;



@end


