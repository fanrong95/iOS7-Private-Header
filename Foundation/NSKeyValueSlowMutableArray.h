/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueMutableArray.h"


@class NSKeyValueGetter, NSKeyValueSetter;



__attribute__((visibility("hidden")))

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray

{

    NSKeyValueGetter *_valueGetter;

    NSKeyValueSetter *_valueSetter;

    _Bool _treatNilValuesLikeEmptyArrays;

    char _padding[3];

}



+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;

- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;

- (id)_nonNilArrayValueWithSelector:(SEL)arg1;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

- (void)_proxyNonGCFinalize;

- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;

- (void)addObject:(id)arg1;

- (unsigned long long)count;

- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;

- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;

- (id)objectAtIndex:(unsigned long long)arg1;

- (id)objectsAtIndexes:(id)arg1;

- (void)removeLastObject;

- (void)removeObjectAtIndex:(unsigned long long)arg1;

- (void)removeObjectsAtIndexes:(id)arg1;

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;



@end


