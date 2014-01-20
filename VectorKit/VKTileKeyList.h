/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSFastEnumeration.h"



@class VKTileKeyMap;



__attribute__((visibility("hidden")))

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying>

{

    void *_head;

    void *_tail;

    VKTileKeyMap *_map;

    unsigned long long _count;

    unsigned long long _maxCount;

}



- (void)_addKeyToBack:(const struct VKTileKey *)arg1;

- (void)addKey:(const struct VKTileKey *)arg1;

- (_Bool)addKey:(const struct VKTileKey *)arg1 lostKey:(struct VKTileKey *)arg2;

- (unsigned long long)capacity;

- (_Bool)containsKey:(const struct VKTileKey *)arg1;

- (id)copyWithMaxCapacity:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (struct VKTileKey *)firstKey;

- (id)init;

- (id)initWithMaxCapacity:(unsigned long long)arg1;

- (_Bool)isEqualToList:(id)arg1;

- (id)listWithout:(id)arg1;

- (_Bool)removeKey:(const struct VKTileKey *)arg1;

- (void)removeKeysMatchingPredicate:(id)arg1;

- (void)sort:(id)arg1;



@end


