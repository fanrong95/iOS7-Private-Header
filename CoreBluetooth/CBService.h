/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CBPeripheral, CBUUID, NSArray, NSNumber;



@interface CBService : NSObject

{

    CBPeripheral *_peripheral;

    CBUUID *_UUID;

    _Bool _isPrimary;

    NSArray *_includedServices;

    NSArray *_characteristics;

    NSNumber *_startHandle;

    NSNumber *_endHandle;

}



@property(readonly, nonatomic) CBUUID *UUID; // @synthesize UUID=_UUID;

@property(retain) NSArray *characteristics; // @synthesize characteristics=_characteristics;

- (void)dealloc;

@property(readonly, nonatomic) NSNumber *endHandle; // @synthesize endHandle=_endHandle;

- (id)handleCharacteristicsDiscovered:(id)arg1;

- (id)handleIncludedServicesDiscovered:(id)arg1;

@property(retain) NSArray *includedServices; // @synthesize includedServices=_includedServices;

- (id)initWithPeripheral:(id)arg1 dictionary:(id)arg2;

- (void)invalidate;

@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;

@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;

@property(readonly, nonatomic) NSNumber *startHandle; // @synthesize startHandle=_startHandle;



@end


