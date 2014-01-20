/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "FTMessageDelivery.h"


#import "APSConnectionDelegate.h"

#import "FTMessageQueueDelegate.h"



@class APSConnection, NSMutableArray, NSMutableDictionary;



@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate>

{

    Class _APSConnectionClass;

    Class _APSOutgoingMessageClass;

    APSConnection *_connection;

    long long _messageSize;

    NSMutableArray *_enabledTopics;

    NSMutableDictionary *_ftMessageMap;

    NSMutableDictionary *_startDateMap;

    NSMutableDictionary *_bodyMap;

    NSMutableDictionary *_apsMessageMap;

    NSMutableDictionary *_timerMap;

    NSMutableDictionary *_deathTimerMap;

    NSMutableDictionary *_retriesMap;

}



+ (id)sharedInstance;

- (id)_apsMessageBodyForMessage:(id)arg1;

- (id)_apsMessageForMessage:(id)arg1 body:(id)arg2;

- (id)_apsOutgoingMessageForFTMessage:(id)arg1;

- (id)_bodyForMessage:(id)arg1;

- (void)_clearMapForMessageID:(id)arg1;

- (id)_currentAPSMessages;

- (id)_currentMessages;

- (id)_currentTimers;

- (void)_dequeueIfNeeded;

- (_Bool)_fillMessageParameters:(id *)arg1 ftMessage:(id *)arg2;

- (void)_invalidateDeathTimerForMessageID:(id)arg1;

- (void)_invalidateTimerForMessageID:(id)arg1;

- (_Bool)_isBusyWithMessage:(id)arg1;

- (void)_messageACKTimedOut:(id)arg1;

- (void)_messageCompletelyTimedOut:(id)arg1;

- (id)_messageForAPSOutgoingMessage:(id)arg1;

- (void)_messageNeedsRetry:(id)arg1;

- (void)_messageSendTimedOut:(id)arg1;

- (void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2;

- (void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(_Bool)arg3 error:(id)arg4;

- (void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3;

- (void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(long long)arg5;

- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;

- (void)_powerLogEvent:(id)arg1 dictionary:(id)arg2;

- (id)_requiredTopics;

- (long long)_retryCountForMessage:(id)arg1;

- (void)_sendMessage:(id)arg1 ftMessage:(id)arg2;

- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;

- (void)_serverBagLoaded:(id)arg1;

- (void)_setEnabledTopics:(id)arg1;

- (void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6;

- (void)_updateTopics;

- (void)_updateWiFiAssertions;

- (id)allMessages;

- (_Bool)busy;

- (void)cancelMessage:(id)arg1;

- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;

- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;

- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;

- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;

- (void)dealloc;

- (id)init;

- (void)invalidate;

- (long long)maxMessageSize;

- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;

- (_Bool)sendMessage:(id)arg1;



@end


