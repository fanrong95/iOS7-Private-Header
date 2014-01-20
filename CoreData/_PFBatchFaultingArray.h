/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSArray.h"



@class NSFetchRequest, NSManagedObjectContext, _PFArray;



__attribute__((visibility("hidden")))

@interface _PFBatchFaultingArray : NSArray

{

    int _cd_rc;

    unsigned int _count;

    _PFArray *_array;

    unsigned int *_entryFlags;

    NSManagedObjectContext *_moc;

    NSFetchRequest *_request;

    unsigned int _batchSize;

    unsigned int *_LRUBatches;

    struct _PFBatchFaultingArrayFlags _flags;

}



+ (_Bool)accessInstanceVariablesDirectly;

+ (id)alloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (void)initialize;

- (_Bool)_isDeallocating;

- (id)_newSubArrayInRange:(struct _NSRange)arg1 asMutable:(_Bool)arg2;

- (_Bool)_tryRetain;

- (void)_turnAllBatchesIntoFaults;

- (id)arrayFromObjectIDs;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (void)getObjects:(id *)arg1;

- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;

- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;

- (unsigned long long)indexOfObject:(id)arg1;

- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;

- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;

- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;

- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;

- (_Bool)isEqualToArray:(id)arg1;

- (id)managedObjectIDAtIndex:(unsigned long long)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)newArrayFromObjectIDs;

- (id)objectAtIndex:(unsigned long long)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;

- (id)subarrayWithRange:(struct _NSRange)arg1;



@end


