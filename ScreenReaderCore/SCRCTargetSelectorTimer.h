/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SCRCTargetSelector.h"


@class NSLock;



@interface SCRCTargetSelectorTimer : SCRCTargetSelector

{

    struct __CFRunLoopTimer *_timer;

    id _key;

    _Bool _isCancelled;

    _Bool _isPending;

    id _object;

    NSLock *_lock;

    _Bool _createdTimer;

}



+ (void)_runThread;

+ (void)initialize;

- (_Bool)_createdTimer;

- (void)_dispatch;

- (void)_dispatchMainThread;

- (void)_dispatchSCRCThread;

- (void)cancel;

- (void)dealloc;

- (void)dispatchAfterDelay:(double)arg1;

- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;

- (void)invalidate;

- (_Bool)isCancelled;

- (_Bool)isPending;

- (oneway void)release;

- (id)threadKey;



@end


