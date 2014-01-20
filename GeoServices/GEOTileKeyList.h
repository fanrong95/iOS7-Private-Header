/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSFastEnumeration.h"



@class GEOTileKeyMap;



@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying>

{

    void *_head;

    void *_tail;

    GEOTileKeyMap *_map;

    unsigned long long _count;

    unsigned long long _maxCount;

    unsigned long long _mutationsCount;

}



+ (id)listFromXPCData:(id)arg1;

- (void)_addKeyToBack:(const struct _GEOTileKey *)arg1;

- (void)addKey:(const struct _GEOTileKey *)arg1;

- (_Bool)addKey:(const struct _GEOTileKey *)arg1 lostKey:(struct _GEOTileKey *)arg2;

- (unsigned long long)capacity;

- (_Bool)containsKey:(const struct _GEOTileKey *)arg1;

- (id)copyWithMaxCapacity:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (struct _GEOTileKey *)firstKey;

- (id)init;

- (id)initWithMaxCapacity:(unsigned long long)arg1;

- (_Bool)intersectsList:(id)arg1;

- (id)listWithout:(id)arg1;

- (id)newXPCData;

- (_Bool)removeKey:(const struct _GEOTileKey *)arg1;

- (void)removeKeysMatchingPredicate:(id)arg1;

- (void)sort:(id)arg1;

- (id)sublistWithRange:(struct _NSRange)arg1;



@end

