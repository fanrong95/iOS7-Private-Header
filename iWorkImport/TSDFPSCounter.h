/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TSDFPSCounter : NSObject

{

    NSMutableArray *_dateArray;

}



- (void)addFrame;

- (void)addFrameAtDrawTime:(double)arg1;

- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;

- (void)dealloc;

- (id)fpsGraphString;

- (id)fpsSummaryString;

- (id)init;

- (id)p_fpsSummaryStringIncludingGraph:(_Bool)arg1;

- (id)p_getFPSInfo:(_Bool)arg1;

- (void)reset;

- (void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(_Bool)arg6 slide:(long long)arg7;



@end


