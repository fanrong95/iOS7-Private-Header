/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol NSURLAuthenticationChallengeSender <NSObject>

- (void)cancelAuthenticationChallenge:(id)arg1;

- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;



@optional

- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@end


