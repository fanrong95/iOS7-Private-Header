/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableSet.h"



__attribute__((visibility("hidden")))

@interface NSCFSet : NSMutableSet

{

}



+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (_Bool)_isDeallocating;

- (unsigned long long)_trueCount;

- (_Bool)_tryRetain;

- (void)addObject:(id)arg1;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)finalize;

- (void)getObjects:(id *)arg1;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (id)member:(id)arg1;

- (void)minusSet:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectEnumerator;

- (oneway void)release;

- (void)removeAllObjects;

- (void)removeObject:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setSet:(id)arg1;

- (void)unionSet:(id)arg1;



@end


