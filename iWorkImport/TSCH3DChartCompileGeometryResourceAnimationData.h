/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartCompileAnimationData.h"


@class TSCH3DChartAnimationDataGeometryResource;



__attribute__((visibility("hidden")))

@interface TSCH3DChartCompileGeometryResourceAnimationData : TSCH3DChartCompileAnimationData

{

    TSCH3DChartAnimationDataGeometryResource *mCurrentData;

}



+ (id)geometryResourceAnimationDataForScene:(id)arg1 seriesIndex:(unsigned long long)arg2;

+ (void)submitToProcessor:(id)arg1 portion:(int)arg2 scene:(id)arg3 seriesIndex:(unsigned long long)arg4;

- (void)addAreaGeometryCapAttributes;

- (_Bool)compileEntireBuffer;

- (id)compiledGeometry;

- (void)dealloc;

- (void)didProcessElementArraysForElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 compiler:(id)arg4;

- (struct GeometryArrays)p_cullBackfaces;

- (id)p_makeWholeBufferWithClass:(Class)arg1;

- (void)processElementArrays;

- (_Bool)transformBuffers;



@end


