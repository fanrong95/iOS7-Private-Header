/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSMutableData, NSObject<OS_dispatch_queue>;



@interface MPReshuffledArrayIndexMap : NSObject <NSSecureCoding, NSCopying>

{

    unsigned long long _arrayCount;

    unsigned long long _identityIndexesCount;

    NSObject<OS_dispatch_queue> *_shuffledIndexesQueue;

    NSMutableData *_shuffledIndexesData;

    struct _NSRange _focusedRange;

    _Bool _autoReshufflingDisabled;

}



+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (_Bool)_canExtendShuffleMapToCount:(unsigned long long)arg1;

- (_Bool)_onQueueExtendMap;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) unsigned long long countOfArrayIndexMappings;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) struct _NSRange focusedRange; // @synthesize focusedRange=_focusedRange;

- (id)initWithCoder:(id)arg1;

- (id)initWithSourceArrayCount:(unsigned long long)arg1 identityArraysCount:(unsigned long long)arg2;

- (id)initWithSourceArrayCount:(unsigned long long)arg1 identityIndexesCount:(unsigned long long)arg2;

- (unsigned long long)sourceArrayIndexForIndex:(unsigned long long)arg1;



@end


