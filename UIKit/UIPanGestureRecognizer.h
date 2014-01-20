/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIGestureRecognizer.h"


@class NSMutableArray, UIPanGestureVelocitySample;



@interface UIPanGestureRecognizer : UIGestureRecognizer

{

    struct CGPoint _firstScreenLocation;

    struct CGPoint _lastScreenLocation;

    double _lastTouchTime;

    id _velocitySample;

    id _previousVelocitySample;

    NSMutableArray *_touches;

    unsigned long long _lastTouchCount;

    unsigned long long _minimumNumberOfTouches;

    unsigned long long _maximumNumberOfTouches;

    double _hysteresis;

    struct CGPoint _lastUnadjustedScreenLocation;

    unsigned int _failsPastMaxTouches:1;

    unsigned int _canPanHorizontally:1;

    unsigned int _canPanVertically:1;

    unsigned int _ignoresStationaryTouches:1;

    NSMutableArray *_movingTouches;

}



- (struct CGPoint)_adjustScreenLocation:(struct CGPoint)arg1;

- (_Bool)_canPanHorizontally;

- (_Bool)_canPanVertically;

- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;

- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromScreenCoordinatesToView:(id)arg2;

- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toScreenCoordinatesFromView:(id)arg2;

- (struct CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;

- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(id)arg2;

- (double)_hysteresis;

- (_Bool)_ignoresStationaryTouches;

- (long long)_lastTouchCount;

- (struct UIOffset)_offsetInViewFromScreenLocation:(struct CGPoint)arg1 toScreenLocation:(struct CGPoint)arg2;

@property(readonly, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;

- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;

- (void)_removeHysteresisFromTranslation;

- (void)_resetGestureRecognizer;

- (void)_resetVelocitySamples;

- (void)_setCanPanHorizontally:(_Bool)arg1;

- (void)_setCanPanVertically:(_Bool)arg1;

- (void)_setHysteresis:(double)arg1;

- (void)_setIgnoresStationaryTouches:(_Bool)arg1;

- (struct CGPoint)_shiftPanLocationToNewScreenLocation:(struct CGPoint)arg1 lockingToAxis:(int)arg2;

- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;

- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;

- (_Bool)_updateMovingTouchesArraySavingOldArray:(id *)arg1;

@property(readonly, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;

- (void)_willBeginAfterSatisfyingFailureRequirements;

- (_Bool)_willScrollX;

- (_Bool)_willScrollY;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)failsPastMaxTouches;

- (id)initWithCoder:(id)arg1;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

- (struct CGPoint)locationInView:(id)arg1;

- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;

@property(nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;

@property(nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;

- (unsigned long long)numberOfTouches;

- (void)setFailsPastMaxTouches:(_Bool)arg1;

- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

- (struct CGPoint)translationInView:(id)arg1;

- (struct CGPoint)velocityInView:(id)arg1;



@end

