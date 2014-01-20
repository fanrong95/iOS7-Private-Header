/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;



@interface AITXPCConnection : NSObject

{

    int _pid;

    id <AITXPCConnectionDelegate> _delegate;

    NSString *_bundleId;

    NSObject<OS_xpc_object> *_connection;

    NSObject<OS_xpc_object> *_currentMessage;

    NSObject<OS_dispatch_queue> *_dispatchQueue;

    NSObject<OS_dispatch_queue> *_internalQueue;

}



- (id)_deserializeMessage:(id)arg1;

- (void)_handleEvent:(id)arg1;

@property(readonly, nonatomic) _Bool available;

- (void)barrierWithCompletionHandler:(id)arg1;

@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;

- (void)closeConnection;

@property(nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;

@property(nonatomic) NSObject<OS_xpc_object> *currentMessage; // @synthesize currentMessage=_currentMessage;

- (void)dealloc;

@property(nonatomic) id <AITXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;

- (id)initWithConnection:(id)arg1 delegate:(id)arg2;

- (id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;

@property(nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;

@property(readonly, nonatomic) int pid;

- (void)sendMessage:(id)arg1 userInfo:(id)arg2;

- (void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(id)arg3;



@end


