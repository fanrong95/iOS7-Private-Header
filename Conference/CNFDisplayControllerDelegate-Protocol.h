/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol CNFDisplayControllerDelegate <NSObject>

- (void)conferenceDisplayController:(id)arg1 endCallWithReason:(unsigned long long)arg2;



@optional

- (_Bool)auxiliaryAudioRoutesAvailable;

- (void)conferenceDisplayController:(id)arg1 cameraToggleWithReason:(unsigned long long)arg2;

- (void)conferenceDisplayController:(id)arg1 cancelCallFailureRecoveryWithReason:(unsigned long long)arg2;

- (void)conferenceDisplayController:(id)arg1 didFinishAnimatingCallEndWithReason:(unsigned long long)arg2;

- (void)conferenceDisplayController:(id)arg1 endWithReason:(unsigned long long)arg2;

- (void)conferenceDisplayController:(id)arg1 muteConferenceWithReason:(unsigned long long)arg2;

- (void)conferenceDisplayController:(id)arg1 retryVideoConferenceInvitationWithReason:(unsigned long long)arg2;

- (void)conferenceDisplayControllerEndedWhileSuspending:(id)arg1;

- (_Bool)isInPhoneCall;

- (_Bool)isOutgoingInvitation;

- (id)originationURL;

@end


