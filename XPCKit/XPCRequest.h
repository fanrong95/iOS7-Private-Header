/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_xpc_object>;



@interface XPCRequest : NSObject

{

    id _handler;

    unsigned long long _sequence;

    NSObject<OS_xpc_object> *_message;

    NSObject<OS_xpc_object> *_reply;

}



- (void).cxx_destruct;

- (id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3;

@property(readonly, nonatomic) NSObject<OS_xpc_object> *message; // @synthesize message=_message;

@property(readonly, nonatomic) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;

- (void)sendReply;

@property(readonly, nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;



@end

