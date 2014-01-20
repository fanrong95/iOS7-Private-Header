/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PCLoggingDelegate.h"



@class NSDate, NSRunLoop, NSString, PCDispatchTimer;



@interface PCSimpleTimer : NSObject <PCLoggingDelegate>

{

    double _fireTime;

    double _startTime;

    double _lastUpdateTime;

    _Bool _triggerOnGMTChange;

    _Bool _disableSystemWaking;

    NSDate *_scheduledWakeDate;

    NSString *_serviceIdentifier;

    id _target;

    SEL _selector;

    id _userInfo;

    PCDispatchTimer *_preventSleepTimer;

    PCDispatchTimer *_fireTimer;

    _Bool _sleepIsImminent;

    unsigned int _powerAssertionID;

    id _timeChangeSource;

    NSRunLoop *_timerRunLoop;

    NSString *_timerMode;

    int _significantTimeChangeToken;

    struct dispatch_queue_s *_queue;

}



+ (double)currentMachTimeInterval;

+ (id)lastSystemWakeDate;

- (void)_fireTimerFired;

- (id)_getTimerMode;

- (id)_getTimerRunLoop;

- (void)_performBlockOnQueue:(id)arg1;

- (void)_powerNotificationSleepIsImminent;

- (void)_powerNotificationSleepIsNotImminent;

- (void)_preventSleepFired;

- (void)_scheduleTimer;

- (void)_setPowerMonitoringEnabled:(_Bool)arg1;

- (void)_setSignificantTimeChangeMonitoringEnabled:(_Bool)arg1;

- (void)_significantTimeChange;

- (void)_updateTimers;

- (void)dealloc;

- (id)debugDescription;

@property(nonatomic) _Bool disableSystemWaking; // @synthesize disableSystemWaking=_disableSystemWaking;

- (_Bool)firingIsImminent;

- (id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(_Bool)arg6;

- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

- (void)invalidate;

- (_Bool)isValid;

@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_serviceIdentifier;

- (void)scheduleInQueue:(struct dispatch_queue_s *)arg1;

- (void)scheduleInRunLoop:(id)arg1;

- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;

- (void)updateFireTime:(double)arg1 triggerOnGMTChange:(_Bool)arg2;

- (id)userInfo;



@end


