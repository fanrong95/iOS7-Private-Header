/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CHDChartType.h"


__attribute__((visibility("hidden")))

@interface CHDPie2DType : CHDChartType

{

    int mFirstSliceAngle;

    _Bool mDoughnutType;

    _Bool mPieOfPieType;

    _Bool mBarOfPieType;

}



- (id)contentFormat;

- (int)defaultLabelPosition;

- (int)firstSliceAngle;

- (_Bool)hasExplosion;

- (id)initWithChart:(id)arg1;

- (_Bool)isBarOfPieType;

- (_Bool)isDoughnutType;

- (_Bool)isPieOfPieType;

- (void)setBarOfPieType:(_Bool)arg1;

- (void)setDoughnutType:(_Bool)arg1;

- (void)setFirstSliceAngle:(int)arg1;

- (void)setPieOfPieType:(_Bool)arg1;



@end

