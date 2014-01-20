/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, TSCH3DGLStatisticsData;



__attribute__((visibility("hidden")))

@interface TSCH3DGLStatistics : NSObject

{

    unsigned long long mLifespan;

    NSMutableArray *mFrames;

}



- (void)activateShader:(id)arg1;

@property(readonly, nonatomic) TSCH3DGLStatisticsData *allFramesStatistics;

- (void)beginFrame;

@property(readonly, nonatomic) TSCH3DGLStatisticsData *currentFrameStatistics;

- (void)dealloc;

- (id)description;

- (void)drawGeometry:(id)arg1;

- (void)endFrame;

- (id)init;

- (void)pushStatistics;



@end


