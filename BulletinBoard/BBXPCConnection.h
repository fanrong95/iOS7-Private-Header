/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, Protocol;



@interface BBXPCConnection : NSObject

{

    id _remoteProxy;

    NSObject<OS_dispatch_queue> *_queue;

    id <XPCProxyTarget> _target;

    id <BBXPCConnectionDelegate> _delegate;

    _Bool _established;

    _Bool _invalidated;

    Protocol *_protocol;

}



- (void)_invalidateConnection;

- (void)_noteConnectionStateDidChange:(_Bool)arg1;

- (id)_queue;

@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;

- (void)dealloc;

@property(nonatomic) id <BBXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

- (_Bool)established;

- (id)init;

- (id)initWithQueue:(id)arg1 target:(id)arg2 remoteProtocol:(id)arg3;

- (void)invalidate;

- (_Bool)isValid;

@property(readonly, nonatomic) id proxy; // @synthesize proxy=_remoteProxy;

- (void)resume;



@end


