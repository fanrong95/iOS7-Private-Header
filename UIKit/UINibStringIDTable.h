/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface UINibStringIDTable : NSObject

{

    struct UIStringIDTableBucket **table;

    struct UIStringIDTableBucket *buckets;

    unsigned long long hashMask;

    unsigned long long count;

}



- (long long)count;

- (void)dealloc;

- (id)initWithKeysTransferingOwnership:(id *)arg1 count:(unsigned long long)arg2;

- (_Bool)lookupKey:(id)arg1 identifier:(long long *)arg2;



@end


