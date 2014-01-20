/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary;



@interface FTEntitlementSupport : NSObject

{

}



+ (id)sharedInstance;

- (void)_cleanupMachInfo;

- (_Bool)_disconnectCTServerConnection;

- (void)_handleEntitlementNotification:(struct __CFDictionary *)arg1;

- (id)_rawEntitlementValue;

- (_Bool)_reconnectCTServerConnectionIfNecessary;

- (_Bool)_registerForCTEntitlementNotifications;

- (void)_registrationStateChanged;

- (_Bool)_setupCTServerConnection;

- (void)_unregisterForCTEntitlementNotifications;

@property(readonly, nonatomic) _Bool faceTimeNonWiFiEntitled;

- (id)init;

@property(readonly, nonatomic) NSDictionary *registrationState;



@end


