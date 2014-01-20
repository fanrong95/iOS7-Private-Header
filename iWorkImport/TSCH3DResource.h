/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class TSCH3DDataBuffer;



__attribute__((visibility("hidden")))

@interface TSCH3DResource : NSObject <NSCopying>

{

    int mCaching;

    TSCH3DDataBuffer *mCache;

    int mUpdate;

    _Bool mChanged;

    _Bool mCached;

    struct DataBufferInfo mDataBufferInfo;

    unsigned long long mUniqueIdentifier;

}



+ (unsigned long long)allocateResourceUniqueIdentifier;

+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1;

+ (id)resource;

+ (id)resourceWithCaching:(int)arg1;

- (id).cxx_construct;

@property(readonly, nonatomic) TSCH3DDataBuffer *buffer;

@property(readonly, nonatomic) struct DataBufferInfo bufferInfo;

- (_Bool)cacheNeedsUpdate;

@property(nonatomic) int caching; // @synthesize caching=mCaching;

@property(nonatomic) _Bool changed;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)flushMemory;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCaching:(int)arg1;

@property(readonly, nonatomic) _Bool isTexturable;

- (void)setCache:(id)arg1;

@property(nonatomic) int update; // @synthesize update=mUpdate;

@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=mUniqueIdentifier;

- (void)updateBufferInfoFromBuffer:(id)arg1;



@end


