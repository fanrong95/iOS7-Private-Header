/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DTXService.h"



#import "DTServiceQueueAuthorizedAPI.h"



@class NSMutableArray, NSString;



@interface DTServiceQueue : DTXService <DTServiceQueueAuthorizedAPI>

{

    struct dispatch_queue_s *_undeliveredGuard;

    NSMutableArray *_undeliveredMessages;

    id <DTServiceQueueDelegate> _delegate;

    NSString *_identifier;

}



- (id)allMessages;

- (void)dealloc;

- (id)delegate;

- (void)disconnect;

- (id)dispatch:(SEL)arg1 withArguments:(id)arg2;

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (id)initWithIdentifier:(id)arg1 channel:(id)arg2;

- (unsigned long long)messageCount;

- (id)nextMessage;

- (void)peerRaisedException:(id)arg1;

- (void)pushMessage:(id)arg1;

- (void)pushMessages:(id)arg1;

- (void)returnToTarget:(id)arg1 withSelector:(SEL)arg2 dispatch:(SEL)arg3 withArguments:(id)arg4;

- (void)setDelegate:(id)arg1;



@end


