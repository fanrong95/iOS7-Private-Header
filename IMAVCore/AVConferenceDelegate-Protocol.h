/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol AVConferenceDelegate

- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;

- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;

- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;

- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;

- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;

- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(long long)arg3;

- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;

- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;

- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;

- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;

- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;

- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;

- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;

- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;

- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;

- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;

- (void)serverDiedForConference:(id)arg1;



@optional

- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;

- (void)conference:(id)arg1 didReceiveARPLData:(id)arg2 withCallID:(long long)arg3;

- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(long long)arg3 error:(id)arg4;

- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;

- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3;

@end

