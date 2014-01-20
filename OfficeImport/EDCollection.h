/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface EDCollection : NSObject <NSCopying>

{

    NSMutableArray *mObjects;

}



+ (id)collection;

+ (id)collectionWithObject:(id)arg1;

- (unsigned long long)addObject:(id)arg1;

- (unsigned long long)addOrEquivalentObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (unsigned long long)hash;

- (unsigned long long)indexOfObject:(id)arg1;

- (id)init;

- (id)initWithObject:(id)arg1;

- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToCollection:(id)arg1;

- (id)objectAtIndex:(unsigned long long)arg1;

- (void)removeAllObjects;

- (void)removeObjectAtIndex:(unsigned long long)arg1;

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;



@end


