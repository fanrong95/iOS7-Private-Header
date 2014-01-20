/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;



@interface SPXPCConnection : NSObject

{

    NSObject<OS_xpc_object> *_conn;

    NSObject<OS_dispatch_queue> *_eventQueue;

    _Bool _ownsQueue;

    id _messageHandler;

    id _disconnectHandler;

    NSMutableSet *_outstandingMessages;

    _Bool _timeoutDisabled;

    id _context;

}



- (void)_handleXPCError:(id)arg1;

- (void)_handleXPCMessage:(id)arg1;

- (long long)_outstandingMessages;

- (void)_registerMessage:(id)arg1;

- (void)_removeMessage:(id)arg1;

- (void)_sendMessage:(id)arg1 handler:(id)arg2;

- (void)_setEventHandlerOnConnection:(id)arg1;

@property(retain, nonatomic) id context; // @synthesize context=_context;

- (void)dealloc;

@property(copy, nonatomic) id disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;

- (id)eventQueue;

- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

- (id)initWithXPCConnection:(id)arg1;

@property(copy, nonatomic) id messageHandler; // @synthesize messageHandler=_messageHandler;

- (void)sendMessage:(id)arg1;

- (void)sendMessage:(id)arg1 withReply:(id)arg2;

@property(readonly) NSString *serviceName;

@property(nonatomic) _Bool timeoutDisabled; // @synthesize timeoutDisabled=_timeoutDisabled;

- (void)shutdown;



@end


