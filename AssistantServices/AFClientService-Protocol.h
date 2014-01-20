/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol AFClientService <NSObject>

- (oneway void)_barrierWithReply:(id)arg1;

- (oneway void)_broadcastCommandDictionary:(id)arg1;

- (oneway void)_clearAssistantInfoForAccountIdentifier:(id)arg1;

- (oneway void)_fetchAppContextWithReply:(id)arg1;

- (oneway void)_listInstalledServicesWithReply:(id)arg1;

- (oneway void)_performCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(id)arg3;

- (oneway void)_pingServiceForIdentifier:(id)arg1 reply:(id)arg2;

- (oneway void)_refreshAssistantValidation;

- (oneway void)_sendLargeData:(id)arg1 reply:(id)arg2;

- (oneway void)_startSpeechWithURL:(id)arg1 isNarrowBand:(_Bool)arg2;

- (oneway void)cancelRequest;

- (oneway void)cancelSpeech;

- (oneway void)clearContext;

- (oneway void)endSession;

- (oneway void)performGenericAceCommand:(id)arg1 interruptOutstandingRequest:(_Bool)arg2 reply:(id)arg3;

- (oneway void)preheat;

- (oneway void)redoRequest;

- (oneway void)requestStateUpdateWithReply:(id)arg1;

- (oneway void)rollbackClearContext;

- (oneway void)rollbackRequest;

- (oneway void)sendAssistantDirectActionRequest:(id)arg1;

- (oneway void)sendAssistantRequest:(id)arg1 reply:(id)arg2;

- (oneway void)setAlertContextWithBulletins:(id)arg1;

- (oneway void)setApplicationContext;

- (oneway void)setIsStark:(_Bool)arg1;

- (oneway void)setLockState:(_Bool)arg1 showingLockScreen:(_Bool)arg2;

- (oneway void)setVoiceOverIsActive:(_Bool)arg1;

- (oneway void)startSpeechCorrectionWithText:(id)arg1 forCorrectionContext:(id)arg2;

- (oneway void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;

- (oneway void)startSpeechRequestWithOptions:(id)arg1;

- (oneway void)stopSpeechWithOptions:(id)arg1;

- (oneway void)telephonyRequestCompleted;

- (oneway void)undoRequest;

- (oneway void)updateSpeechOptions:(id)arg1;

@end


