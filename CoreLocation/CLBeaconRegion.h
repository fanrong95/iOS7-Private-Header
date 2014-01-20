/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CLRegion.h"


@class NSNumber, NSUUID;



@interface CLBeaconRegion : CLRegion

{

    NSUUID *_proximityUUID;

    NSNumber *_major;

    NSNumber *_minor;

}



+ (id)any;

+ (_Bool)supportsSecureCoding;

- (BOOL)_measuredPowerForDevice;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithClientRegion:(CDStruct_f756f8ea)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithIdentifier:(id)arg1;

- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;

- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;

- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;

@property(readonly, nonatomic) NSNumber *major; // @synthesize major=_major;

@property(readonly, nonatomic) NSNumber *minor; // @synthesize minor=_minor;

@property(nonatomic) _Bool notifyEntryStateOnDisplay;

- (id)peripheralDataWithMeasuredPower:(id)arg1;

@property(readonly, nonatomic) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;



@end


