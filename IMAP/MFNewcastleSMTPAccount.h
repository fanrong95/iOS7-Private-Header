/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SMTPAccount.h"



@class CastleIMAPAccount;



@interface MFNewcastleSMTPAccount : SMTPAccount

{

    CastleIMAPAccount *_castleAccount;

}



+ (id)accountTypeIdentifier;

@property(retain, nonatomic) CastleIMAPAccount *castleAccount; // @synthesize castleAccount=_castleAccount;

- (void)dealloc;

- (id)displayHostname;

- (id)mailAccountIfAvailable;

- (_Bool)shouldUseAuthentication;



@end


