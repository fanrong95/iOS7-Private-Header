/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartAddBoundsSceneObjectMode.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode

{

    int mRotationType;

}



- (void)getBounds:(id)arg1;

- (double)p_radiusFromBounds:(const box_a3bd9649 *)arg1 pivot:(const tvec3_17f03ce0 *)arg2;

- (void)p_submitGeometryForChartBounds:(const box_a3bd9649 *)arg1 pivot:(const tvec3_17f03ce0 *)arg2 thicknessIndex:(unsigned long long)arg3 pipeline:(id)arg4;

@property(nonatomic) int rotationType; // @synthesize rotationType=mRotationType;



@end


