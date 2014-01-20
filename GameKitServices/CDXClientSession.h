/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CDXClient, NSData, NSIndexSet, NSMutableIndexSet, NSObject<OS_dispatch_source>;



__attribute__((visibility("hidden")))

@interface CDXClientSession : NSObject

{

    id <CDXClientSessionDelegate> delegate_;

    CDXClient *CDXClient_;

    NSData *ticket_;

    NSData *sessionKey_;

    NSData *sessionKeyPrepped_;

    NSMutableIndexSet *participantsInFlight_;

    long long retransmitAttempts_;

    NSData *lastSent_;

    unsigned short seq_;

    unsigned char pid_;

    unsigned short *ack_;

    NSObject<OS_dispatch_source> *retransmitTimer_;

    id inboundHandler_;

}



@property(readonly, nonatomic) CDXClient *CDXClient; // @synthesize CDXClient=CDXClient_;

- (void)dealloc;

- (id)decrypt:(id)arg1 ticket:(id)arg2;

@property(nonatomic) id <CDXClientSessionDelegate> delegate; // @synthesize delegate=delegate_;

- (id)encrypt:(id)arg1;

@property(copy, nonatomic) id inboundHandler; // @synthesize inboundHandler=inboundHandler_;

- (id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3;

- (void)invalidate;

@property(readonly, nonatomic) NSIndexSet *participantsInFlight; // @synthesize participantsInFlight=participantsInFlight_;

- (void)recvRaw:(id)arg1 ticket:(id)arg2;

- (void)resetRetransmitTimer;

- (_Bool)retransmitEvent;

- (_Bool)sendData:(id)arg1;

- (_Bool)sendData:(id)arg1 toParticipants:(id)arg2;

- (_Bool)sendRaw:(id)arg1 toParticipants:(id)arg2;

@property(readonly, nonatomic) NSData *sessionKey; // @synthesize sessionKey=sessionKey_;

@property(copy, nonatomic) NSData *ticket; // @synthesize ticket=ticket_;

- (void)stopRetransmitTimer;



@end


