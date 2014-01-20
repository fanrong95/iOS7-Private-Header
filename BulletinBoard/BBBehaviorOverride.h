/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSArray;



@interface BBBehaviorOverride : NSObject <NSCopying, NSCoding>

{

    unsigned long long _overrideType;

    unsigned long long _mode;

    NSArray *_effectiveIntervals;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(copy, nonatomic) NSArray *effectiveIntervals; // @synthesize effectiveIntervals=_effectiveIntervals;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned long long)arg2;

- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;

- (_Bool)isActiveForDate:(id)arg1;

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;

- (id)nextOverrideTransitionDateAfterDate:(id)arg1;

@property(nonatomic) unsigned long long overrideType; // @synthesize overrideType=_overrideType;



@end


