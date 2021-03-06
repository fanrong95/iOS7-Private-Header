/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



@interface ISHashError : NSObject <NSCopying>

{

    NSString *_actualHashString;

    NSString *_expectedHashString;

    long long _rangeEnd;

    long long _rangeStart;

}



@property(copy, nonatomic) NSString *actualHashString; // @synthesize actualHashString=_actualHashString;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(copy, nonatomic) NSString *expectedHashString; // @synthesize expectedHashString=_expectedHashString;

@property(readonly, nonatomic) NSString *hashFailureHeaderString;

@property(nonatomic) long long rangeEnd; // @synthesize rangeEnd=_rangeEnd;

@property(nonatomic) long long rangeStart; // @synthesize rangeStart=_rangeStart;



@end


