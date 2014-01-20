/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPinchGestureRecognizer.h"



@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer

{

    struct CGPoint _touch0InitialLocation;

    struct CGPoint _touch1InitialLocation;

    double _lastTransitionProgress;

    unsigned long long _transitionDirection;

}



- (void)_resetTransitionState;

@property(readonly, nonatomic) struct CGSize centerOffset;

- (void)reset;

- (void)setState:(long long)arg1;

@property(readonly, nonatomic) unsigned long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;

@property(readonly, nonatomic) double transitionProgress;

@property(readonly, nonatomic) _Bool transitionShouldFinish;



@end


