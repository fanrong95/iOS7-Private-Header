/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ISDialogOperation.h"


@class ISAuthenticationChallenge;



@interface ISAuthenticationChallengeOperation : ISDialogOperation

{

    ISAuthenticationChallenge *_challenge;

}



+ (id)operationWithChallenge:(id)arg1;

- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;

@property(retain) ISAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;

- (void)dealloc;

- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;

- (void)run;



@end


