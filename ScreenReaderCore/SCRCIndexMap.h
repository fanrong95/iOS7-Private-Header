/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface SCRCIndexMap : NSObject <NSCopying>

{

    struct __CFDictionary *_map;

}



- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)arg1;

- (id)_initAndDeepCopyIndexMap:(id)arg1;

- (id)_initWithIndexMap:(id)arg1;

- (void)addObjectsFromIndexMap:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (id)deepCopyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (id)indexes;

- (id)init;

- (id)initWithObjects:(id *)arg1 andIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3;

- (id)objectForIndex:(unsigned long long)arg1;

- (void)removeAllObjects;

- (void)removeObjectForIndex:(unsigned long long)arg1;

- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;



@end

