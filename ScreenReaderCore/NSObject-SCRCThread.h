/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSObject (SCRCThread)

+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;

+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;

- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(_Bool)arg4;

- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(_Bool)arg2;

- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;

- (void)_scr_safeGetValueForKeyPath:(id)arg1;

- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;

- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;

- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;

- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;

- (id)copyValueForKeyPathOnMainThread:(id)arg1;

- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;

- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;

- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;

- (id)threadDescription;

- (id)valueForBlock:(id)arg1 forThreadKey:(void)arg2 waitTime:(id)arg3;

- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;

- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;

- (id)valueForKeyPathOnMainThread:(id)arg1;

- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(_Bool)arg4 withObjects:(id)arg5;

@end


