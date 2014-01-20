/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSet.h"



__attribute__((visibility("hidden")))

@interface TSUPointerSet : NSSet

{

    struct __CFSet *mSet;

}



+ (Class)privateMutableClass;

+ (Class)privateNonMutableClass;

- (id)allObjects;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (void)getObjects:(id *)arg1;

- (id)initWithCFSet:(struct __CFSet *)arg1;

- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

- (id)member:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectEnumerator;

- (id)setByAddingObject:(id)arg1;

- (id)setByAddingObjectsFromArray:(id)arg1;

- (id)setByAddingObjectsFromSet:(id)arg1;



@end


