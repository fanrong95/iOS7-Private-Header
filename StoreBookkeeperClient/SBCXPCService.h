/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;



__attribute__((visibility("hidden")))

@interface SBCXPCService : NSObject

{

    _Bool _isConnecting;

    id _serviceProxy;

    NSObject<OS_dispatch_queue> *_queue;

    NSXPCConnection *_xpcConnection;

    NSDictionary *_clientConfiguration;

    NSMutableDictionary *_pendingServiceCompletionHandlers;

    Class _serviceInterfaceClass;

}



- (void).cxx_destruct;

- (void)_dequeueRequestWithEnqueuedToken:(id)arg1;

- (id)_enqueueMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2;

- (void)_invalidateOutstandingRequests:(id)arg1;

- (void)_onQueueCloseServiceConnection;

- (void)_onQueueInvalidateOutstandingRequests:(id)arg1;

- (void)_openServiceConnection;

@property(readonly) NSDictionary *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;

- (void)closeServiceConnection;

- (void)dealloc;

- (void)didConnectToService;

- (id)initWithServiceInterfaceClass:(Class)arg1 clientConfiguration:(id)arg2;

@property(readonly) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;

@property(readonly) NSMutableDictionary *pendingServiceCompletionHandlers; // @synthesize pendingServiceCompletionHandlers=_pendingServiceCompletionHandlers;

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void)sendMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2 messageBlock:(void)arg3;

@property(readonly) Class serviceInterfaceClass; // @synthesize serviceInterfaceClass=_serviceInterfaceClass;

@property(readonly) id serviceProxy; // @synthesize serviceProxy=_serviceProxy;

- (oneway void)setClientConfiguration:(id)arg1;

@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;



@end


