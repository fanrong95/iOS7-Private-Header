/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableDictionary.h"



__attribute__((visibility("hidden")))

@interface _NSNestedDictionary : NSMutableDictionary

{

    id _locals;

    id _bindings;

}



- (id)_recursiveAllKeys;

- (id)_recursiveAllValues;

- (unsigned long long)count;

- (id)keyEnumerator;

- (id)objectEnumerator;

- (id)objectForKey:(id)arg1;

- (void)removeObjectForKey:(id)arg1;

- (void)setObject:(id)arg1 forKey:(id)arg2;



@end


