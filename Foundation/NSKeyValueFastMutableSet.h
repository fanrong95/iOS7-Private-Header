/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueMutableSet.h"


@class NSKeyValueMutatingSetMethodSet;



__attribute__((visibility("hidden")))

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet

{

    NSKeyValueMutatingSetMethodSet *_mutatingMethods;

}



- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

- (void)_proxyNonGCFinalize;

- (void)addObject:(id)arg1;

- (void)addObjectsFromArray:(id)arg1;

- (void)intersectSet:(id)arg1;

- (void)minusSet:(id)arg1;

- (void)removeAllObjects;

- (void)removeObject:(id)arg1;

- (void)setSet:(id)arg1;

- (void)unionSet:(id)arg1;



@end


