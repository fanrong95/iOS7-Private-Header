/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SMTPAccount.h"



@class YahooAccount;



@interface MFYahooSMTPAccount : SMTPAccount

{

    YahooAccount *_account;

}



+ (id)accountTypeIdentifier;

- (void)dealloc;

- (id)displayHostname;

@property(retain, nonatomic, getter=mailAccountIfAvailable) YahooAccount *mailAccount; // @synthesize mailAccount=_account;

- (id)preferredAuthScheme;

- (_Bool)shouldUseSaveSentForAccount:(id)arg1;

- (_Bool)usesSSL;



@end


