/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSDate;



@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding>

{

    NSDate *_entryTime;

    NSDate *_exitTime;

}



+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (_Bool)_enteredAndExitedOnSameDay;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) NSDate *entryTime; // @synthesize entryTime=_entryTime;

@property(readonly, nonatomic) NSDate *exitTime; // @synthesize exitTime=_exitTime;

- (id)initWithCoder:(id)arg1;

- (id)initWithEntryTime:(id)arg1 exitTime:(id)arg2;

- (id)localizedDateDetail;

- (id)localizedDescription;

- (id)localizedTimeDetail;



@end


