/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))

@interface __NSPlaceholderDictionary : NSMutableDictionary

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)immutablePlaceholder;

+ (void)initialize;

+ (id)mutablePlaceholder;

- (unsigned long long)count;

- (void)dealloc;

- (id)init;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1;

- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

- (id)keyEnumerator;

- (id)objectForKey:(id)arg1;

- (oneway void)release;

- (void)removeObjectForKey:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setObject:(id)arg1 forKey:(id)arg2;



@end


