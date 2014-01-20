/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueMutableSet.h"


@class NSKeyValueGetter, NSKeyValueSetter;



__attribute__((visibility("hidden")))

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet

{

    NSKeyValueGetter *_valueGetter;

    NSKeyValueSetter *_valueSetter;

    _Bool _treatNilValuesLikeEmptySets;

    char _padding[3];

}



+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;

- (id)_createMutableSetValueWithSelector:(SEL)arg1;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

- (void)_proxyNonGCFinalize;

- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;

- (id)_setValueWithSelector:(SEL)arg1;

- (void)addObject:(id)arg1;

- (void)addObjectsFromArray:(id)arg1;

- (unsigned long long)count;

- (void)intersectSet:(id)arg1;

- (id)member:(id)arg1;

- (void)minusSet:(id)arg1;

- (id)objectEnumerator;

- (void)removeAllObjects;

- (void)removeObject:(id)arg1;

- (void)setSet:(id)arg1;

- (void)unionSet:(id)arg1;



@end

