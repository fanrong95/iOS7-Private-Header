/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class FTRegConnectionHandler, IMServiceImpl, NSArray;



@interface FTRegAccountMonitor : NSObject

{

    long long _serviceType;

    IMServiceImpl *_service;

    NSArray *_accounts;

    FTRegConnectionHandler *_connectionHandler;

    CDStruct_34e8bc21 _monitorFlags;

}



- (id)_activeAccounts;

- (void)_handleAccountNotification:(id)arg1;

- (void)_handleDaemonConnected:(id)arg1;

- (_Bool)_shouldHandleAccountNofication:(id)arg1;

- (void)_startListeningForNotifications;

- (void)_stopListeningForNotifications;

- (void)_updateAccountState:(_Bool)arg1;

@property(readonly, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_accounts;

- (void)dealloc;

- (id)initWithServiceType:(long long)arg1;

- (id)logName;

@property(retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;

@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;



@end


