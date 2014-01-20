/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSConditionLock.h"



#import "MFLockObject.h"



@class NSString;



@interface MFConditionLock : NSConditionLock <MFLockObject>

{

    NSString *_name;

    id _delegate;

}



+ (void)initialize;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithName:(id)arg1 andDelegate:(id)arg2;

- (id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3;

- (_Bool)isLockedByMe;

- (_Bool)lockBeforeDate:(id)arg1;

- (_Bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;

- (void)unlock;

- (void)unlockWithCondition:(long long)arg1;



@end


