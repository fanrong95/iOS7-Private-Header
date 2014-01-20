/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIInternalEvent.h"


@class NSTimer;



__attribute__((visibility("hidden")))

@interface UIMotionEvent : UIInternalEvent

{

    id _motionAccelerometer;

    long long _subtype;

    int _shakeState;

    long long _stateMachineState;

    double _shakeStartTime;

    double _lastMovementTime;

    double _highLevelTime;

    double _lowEndTimeout;

    NSTimer *_idleTimer;

    _Bool _sentMotionBegan;

    float _lowPassState[10];

    unsigned long long _lowPassStateIndex;

    unsigned long long _highPassStateIndex;

    float _highPassState[2];

    int notifyToken;

}



- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;

- (_Bool)_detectWhenNotActive;

- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;

- (void)_enablePeakDetectionIfNecessary;

- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;

- (float)_highPass:(float)arg1;

- (void)_idleTimerFired;

- (id)_init;

- (_Bool)_isDetectingMotionEvents;

- (float)_lowPass:(float)arg1;

- (void)_resetLowPassState;

- (void)_sendEventToResponder:(id)arg1;

- (void)_setSubtype:(long long)arg1;

- (int)_shakeState;

- (void)_updateAccelerometerEnabled;

- (void)_willResume;

- (void)_willSuspend;

- (id)_windows;

- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;

- (void)dealloc;

- (id)description;

@property(nonatomic) int shakeState; // @synthesize shakeState=_shakeState;

- (long long)subtype;

- (long long)type;



@end


