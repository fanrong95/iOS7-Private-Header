/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSNetServiceDelegate.h"



@class NSNetService, NSObject<OS_dispatch_queue>, NSObject<OS_tcp_listener>, NSString, TRAdvertisingInfo;



@interface TRServer : NSObject <NSNetServiceDelegate>

{

    TRAdvertisingInfo *_advertisingInfo;

    NSObject<OS_tcp_listener> *_listener;

    NSObject<OS_dispatch_queue> *_listenerQueue;

    NSNetService *_netService;

    unsigned short _port;

    id <TRServerDelegate> _delegate;

    NSString *_name;

}



+ (id)newServerWithName:(id)arg1;

+ (id)newServerWithName:(id)arg1 port:(unsigned short)arg2;

- (void).cxx_destruct;

- (id)_initWithName:(id)arg1 port:(unsigned short)arg2;

@property(copy, nonatomic) TRAdvertisingInfo *advertisingInfo; // @synthesize advertisingInfo=_advertisingInfo;

- (void)dealloc;

@property(nonatomic) __weak id <TRServerDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

- (void)netService:(id)arg1 didNotPublish:(id)arg2;

- (void)netServiceDidPublish:(id)arg1;

- (void)netServiceWillPublish:(id)arg1;

@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;

- (void)start;

- (void)stop;



@end

