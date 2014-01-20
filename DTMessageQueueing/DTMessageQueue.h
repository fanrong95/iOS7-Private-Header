/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DTXConnection.h"



#import "DTMessageQueueAuthorizedAPI.h"



@class NSMutableArray;



@interface DTMessageQueue : DTXConnection <DTMessageQueueAuthorizedAPI>

{

    struct dispatch_queue_s *_undeliveredGuard;

    NSMutableArray *_undeliveredMessages;

    id <DTMessageQueueDelegate> _delegate;

}



- (id)allMessages;

- (id)createServiceForIdentifier:(id)arg1;

- (void)dealloc;

- (id)dispatch:(SEL)arg1 withArguments:(id)arg2;

- (id)initWithAddress:(id)arg1 asServer:(_Bool)arg2;

- (void)logWithFormat:(const char *)arg1;

- (_Bool)loggingEnabled;

- (id)nextMessage;

- (void)peerRaisedException:(id)arg1;

- (void)pushMessage:(id)arg1;

- (void)pushMessages:(id)arg1;

- (void)returnToTarget:(id)arg1 withSelector:(SEL)arg2 dispatch:(SEL)arg3 withArguments:(id)arg4;

- (void)setDelegate:(id)arg1;

- (void)setLoggingEnabled:(id)arg1;

- (void)setOutgoingQueueSyncThreshold:(unsigned long long)arg1;

- (void)stop;

- (double)timeIntervalDifference;



@end


