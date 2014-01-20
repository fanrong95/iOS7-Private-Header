/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class BKSProcessAssertion, NSError, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, _UIAsyncInvocation;



__attribute__((visibility("hidden")))

@interface _UIViewServiceInterfaceConnectionRequest : NSObject

{

    id _connectionHandler;

    NSString *_serviceBundleIdentifier;

    NSObject<OS_dispatch_queue> *_queue;

    _Bool _isCancelled;

    NSError *_cancellationError;

    _UIAsyncInvocation *_cancellationInvocation;

    int _sessionRequestNotifyToken;

    BKSProcessAssertion *_serviceProcessAssertion;

    NSXPCConnection *_serviceSessionConnection;

    int __automatic_invalidation_retainCount;

    _Bool __automatic_invalidation_invalidated;

}



+ (id)connectToViewServiceViaXPCObjectsWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2;

+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2;

- (int)__automatic_invalidation_logic;

- (void)_cancelUnconditionallyThen:(id)arg1;

- (void)_cancelWithError:(id)arg1;

- (void)_createProcessAssertion;

- (void)_didConnectToService;

- (void)_establishConnection;

- (_Bool)_isDeallocating;

- (void)_launchService;

- (_Bool)_tryRetain;

- (void)dealloc;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end


