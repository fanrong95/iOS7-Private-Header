/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSDate;



@interface CLHeading : NSObject <NSCopying, NSSecureCoding>

{

    id _internal;

}



+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) double headingAccuracy;

- (id)initWithClientHeading:(CDStruct_b560b707)arg1;

- (id)initWithCoder:(id)arg1;

@property(readonly, nonatomic) double magneticHeading;

- (id)shortDescription;

@property(readonly, nonatomic) NSDate *timestamp;

@property(readonly, nonatomic) double trueHeading;

@property(readonly, nonatomic) double x;

@property(readonly, nonatomic) double y;

@property(readonly, nonatomic) double z;



@end

