/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSObject (LockingAdditions)

+ (void)mf_clearLocks;

- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;

- (void)_mf_checkToAllowLock:(id)arg1;

- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;

- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;

- (void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2;

- (id)_mf_lockOrderingForType:(int)arg1;

- (_Bool)_mf_ntsIsLocked;

- (id)mf_exclusiveLocks;

- (void)mf_lock;

- (id)mf_lockOrdering;

- (void)mf_lockWithPriority;

- (id)mf_strictLockOrdering;

- (_Bool)mf_tryLock;

- (_Bool)mf_tryLockWithPriority;

- (void)mf_unlock;

@end


