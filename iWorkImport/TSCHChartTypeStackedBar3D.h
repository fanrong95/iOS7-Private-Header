/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartType.h"


__attribute__((visibility("hidden")))

@interface TSCHChartTypeStackedBar3D : TSCH3DChartType

{

}



- (struct CGRect)adjustChartFrame:(struct CGRect)arg1 forPresetImageTarget:(int)arg2;

- (double)categoryAxisTitleRotation;

- (id)defaultSeriesType:(unsigned long long)arg1;

- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6;

- (id)init;

- (struct TSCH3DChartRotationLimit)rotation3DLimit;

- (void)setupPresetImageChart:(id)arg1;

- (_Bool)supportsBevels;

- (id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned long long)arg4;

- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;

- (id)userInterfaceName;

- (double)valueAxisTitleRotation;



@end


