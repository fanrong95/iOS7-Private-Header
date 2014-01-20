/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol GKTurnBasedService <NSObject>

- (oneway void)acceptInviteForTurnBasedMatch:(id)arg1 handler:(id)arg2;

- (oneway void)cancelExchange:(id)arg1 withMessage:(id)arg2 match:(id)arg3 handler:(id)arg4;

- (oneway void)completeTurnBasedMatch:(id)arg1 scores:(id)arg2 achievements:(id)arg3 handler:(id)arg4;

- (oneway void)createTurnBasedGameForMatchRequest:(id)arg1 individualMessages:(id)arg2 handler:(id)arg3;

- (oneway void)declineInviteForTurnBasedMatch:(id)arg1 handler:(id)arg2;

- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 handler:(id)arg3;

- (oneway void)getNextTurnBasedEventWithHandler:(id)arg1;

- (oneway void)getTurnBasedMatchesAndCompatibleBundleID:(_Bool)arg1 handler:(id)arg2;

- (oneway void)removeTurnBasedMatch:(id)arg1 handler:(id)arg2;

- (oneway void)replyToExchange:(id)arg1 withMessage:(id)arg2 data:(id)arg3 match:(id)arg4 handler:(id)arg5;

- (oneway void)resignFromTurnBasedGame:(id)arg1 outcome:(unsigned long long)arg2 handler:(id)arg3;

- (oneway void)saveDataForTurnBasedMatch:(id)arg1 resolvedExchangeIDs:(id)arg2 handler:(id)arg3;

- (oneway void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 message:(id)arg3 timeout:(double)arg4 match:(id)arg5 handler:(id)arg6;

- (oneway void)sendReminderToParticipants:(id)arg1 message:(id)arg2 match:(id)arg3 handler:(id)arg4;

- (oneway void)submitTurnForTurnBasedMatch:(id)arg1 nextParticipantIndexes:(id)arg2 turnTimeout:(double)arg3 handler:(id)arg4;

@end


