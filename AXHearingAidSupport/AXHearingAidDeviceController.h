/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CBCentralManagerDelegate.h"



@class AXTimer, CBCentralManager, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;



@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate>

{

    CBCentralManager *_bluetoothManager;

    NSLock *_centralRequestsLock;

    _Bool _isScanning;

    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;

    NSMutableArray *_availableSearchBlocks;

    NSMutableArray *_connectedSearchBlocks;

    NSMutableArray *_updateDeviceBlocks;

    AXTimer *_deviceUpdatesTimer;

    NSMutableDictionary *_deviceUpdatesDescription;

    AXTimer *_advertisingTimeoutTimer;

    NSMutableDictionary *_advertisingTimestamps;

    NSMutableArray *_availablePeripherals;

    NSMutableArray *_loadedDevices;

    NSMutableArray *_connectedDevices;

    NSMutableArray *centralRequestBlocks;

    NSMutableArray *_persistentDevices;

}



+ (id)sharedController;

- (void)addAvailableDevice:(id)arg1;

- (void)addConnectedDevice:(id)arg1;

- (void)addLoadedDevice:(id)arg1;

@property(retain, nonatomic) NSMutableArray *availablePeripherals; // @synthesize availablePeripherals=_availablePeripherals;

@property(retain, nonatomic) NSMutableArray *availableSearchBlocks; // @synthesize availableSearchBlocks=_availableSearchBlocks;

- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;

- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;

- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;

- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;

- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;

- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;

- (void)centralManagerDidUpdateState:(id)arg1;

@property(retain, nonatomic) NSMutableArray *centralRequestBlocks; // @synthesize centralRequestBlocks;

- (void)clearAvailableDevices;

- (void)clearConnectedDevices;

- (void)clearLoadedDevices;

- (void)clearMissingHearingAids;

- (void)connectToPeripheral:(id)arg1;

@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;

@property(retain, nonatomic) NSMutableArray *connectedSearchBlocks; // @synthesize connectedSearchBlocks=_connectedSearchBlocks;

- (void)dealloc;

- (void)device:(id)arg1 didSubsumeSlave:(id)arg2;

- (void)device:(id)arg1 didUpdateProperty:(long long)arg2;

- (void)deviceDidFinishLoading:(id)arg1;

- (void)disconnectFromPeripheral:(id)arg1;

- (id)hearingAidForPeripheral:(id)arg1;

- (id)hearingAidsForUUID:(id)arg1;

- (id)init;

- (_Bool)isBluetoothAvailable;

- (_Bool)isScanning;

@property(retain) NSMutableArray *loadedDevices; // @synthesize loadedDevices=_loadedDevices;

- (void)loadedDevicesDidChange;

- (void)pairedHearingAidsDidChange;

@property(retain, nonatomic) NSMutableArray *persistentDevices; // @synthesize persistentDevices=_persistentDevices;

- (void)registerForPropertyUpdates:(id)arg1;

- (void)removeAvailableDevice:(id)arg1;

- (void)removeConnectedDevice:(id)arg1;

- (void)removeLoadedDevice:(id)arg1;

- (void)resetConnectionToPeripheral:(id)arg1;

- (void)searchForAvailableDevices;

- (void)searchForAvailableDevicesWithCompletion:(id)arg1;

- (void)searchForConnectedDevices;

- (void)sendRequestToCentralManager:(id)arg1;

@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;

- (void)stopPropertyUpdates;

- (void)stopSearching;



@end


