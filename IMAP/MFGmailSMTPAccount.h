/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SMTPAccount.h"



#import "MFGmailAccountClientTokenProtocol.h"



@class GmailAccount;



@interface MFGmailSMTPAccount : SMTPAccount <MFGmailAccountClientTokenProtocol>

{

    GmailAccount *_account;

}



+ (id)accountTypeIdentifier;

- (id)_urlFromResponse:(id)arg1;

- (id)clientToken;

- (void)dealloc;

- (id)displayHostname;

- (id)errorForResponse:(id)arg1;

- (id)hostname;

@property(retain, nonatomic, getter=mailAccountIfAvailable) GmailAccount *mailAccount; // @synthesize mailAccount=_account;

- (id)password;

- (unsigned int)portNumber;

- (id)preferredAuthScheme;

- (_Bool)shouldUseAuthentication;

- (id)username;

- (_Bool)usesSSL;



@end


