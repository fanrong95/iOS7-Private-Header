/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSTTableDataObjectKeyDict : NSObject

{

    struct hash_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>>> *mMap;

}



- (unsigned long long)count;

- (void)dealloc;

- (id)init;

- (unsigned int)keyForObject:(id)arg1;

- (void)removeAllKeys;

- (void)removeKeyForObject:(id)arg1;

- (void)setKey:(unsigned int)arg1 forObject:(id)arg2;



@end


