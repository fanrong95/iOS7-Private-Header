/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CHDChart, CHDDataLabel, CHDSeriesCollection, EDCollection;



__attribute__((visibility("hidden")))

@interface CHDChartType : NSObject

{

    CHDChart *mChart;

    EDCollection *mAxisIds;

    CHDSeriesCollection *mSeries;

    CHDDataLabel *mDefaultDataLabel;

    _Bool mVaryColors;

}



+ (id)chartTypeWithChart:(id)arg1;

+ (_Bool)is3DType;

- (id)axes;

- (id)axisForClass:(Class)arg1;

- (id)axisIds;

- (unsigned long long)categoryCount;

- (id)chart;

- (id)contentFormat;

- (void)dealloc;

- (id)defaultDataLabel;

- (int)defaultLabelPosition;

- (id)defaultTitleWithResources:(id)arg1;

- (id)initWithChart:(id)arg1;

- (_Bool)isHorizontal;

- (_Bool)isPlotedOnSecondaryAxis;

- (_Bool)isVaryColors;

- (id)seriesCollection;

- (unsigned long long)seriesCount;

- (void)setDefaultDataLabel:(id)arg1;

- (void)setSeriesCollection:(id)arg1;

- (void)setVaryColors:(_Bool)arg1;



@end


