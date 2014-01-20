/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface UIAnimator : NSObject

{

    NSMutableArray *_animations;

    double _lastUpdateTime;

    id _heartbeat[3];

    int _heartbeatClientCount[3];

}



+ (void)disableAnimation;

+ (void)enableAnimation;

+ (id)sharedAnimator;

- (void)_LCDHeartbeatCallback:(id)arg1;

- (void)_TVHeartbeatCallback:(id)arg1;

- (void)_TimerHeartbeatCallback:(id)arg1;

- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(_Bool)arg3 startTime:(double)arg4;

- (void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2;

- (_Bool)_isRunningAnimation:(id)arg1;

- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;

- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(_Bool)arg3;

- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(_Bool)arg3;

- (void)dealloc;

- (float)fractionForAnimation:(id)arg1;

- (void)removeAnimationsForTarget:(id)arg1;

- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;

- (void)startAnimation:(id)arg1;

- (void)stopAnimation:(id)arg1;



@end


