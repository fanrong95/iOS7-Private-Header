/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueFastMutableSet.h"


@class NSKeyValueGetter;



__attribute__((visibility("hidden")))

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet

{

    NSKeyValueGetter *_valueGetter;

}



+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;

- (id)_nonNilSetValueWithSelector:(SEL)arg1;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

- (void)_proxyNonGCFinalize;

- (unsigned long long)count;

- (id)member:(id)arg1;

- (id)objectEnumerator;



@end


