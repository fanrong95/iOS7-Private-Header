/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKLRUCache.h"


__attribute__((visibility("hidden")))

@interface VKTileCache : VKLRUCache

{

}



- (id)objectForKey:(const struct VKTileKey *)arg1;

- (id)objectWithoutPromotingForKey:(const struct VKTileKey *)arg1;

- (void)setObject:(id)arg1 forKey:(const struct VKTileKey *)arg2;

- (id)tileWithoutTouchingForKey:(const struct VKTileKey *)arg1;



@end


