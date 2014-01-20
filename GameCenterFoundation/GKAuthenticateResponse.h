/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKInternalRepresentation.h"


@class NSString, NSURL;



@interface GKAuthenticateResponse : GKInternalRepresentation

{

    _Bool _loginDisabled;

    _Bool _passwordChangeRequired;

    _Bool _shouldShowLinkAccountsUI;

    NSString *_accountName;

    NSString *_playerID;

    NSString *_authToken;

    long long _environment;

    NSURL *_passwordChangeURL;

}



+ (id)secureCodedPropertyKeys;

@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;

@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;

- (void)dealloc;

@property(nonatomic) long long environment; // @synthesize environment=_environment;

@property(nonatomic) _Bool loginDisabled; // @synthesize loginDisabled=_loginDisabled;

@property(nonatomic) _Bool passwordChangeRequired; // @synthesize passwordChangeRequired=_passwordChangeRequired;

@property(retain, nonatomic) NSURL *passwordChangeURL; // @synthesize passwordChangeURL=_passwordChangeURL;

@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;

@property(nonatomic) _Bool shouldShowLinkAccountsUI; // @synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI;



@end


