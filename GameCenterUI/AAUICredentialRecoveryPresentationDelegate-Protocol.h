/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol AAUICredentialRecoveryPresentationDelegate

- (void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;

- (void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(_Bool)arg2;

- (void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;



@optional

- (id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@end


