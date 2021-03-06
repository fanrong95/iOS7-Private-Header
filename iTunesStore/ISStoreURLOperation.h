/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ISURLOperation.h"


@class NSNumber;



@interface ISStoreURLOperation : ISURLOperation

{

    NSNumber *_authenticatedDSID;

    _Bool _canSendGUIDParameter;

    _Bool _ignorePreexistingSecureToken;

    _Bool _needsAuthentication;

    _Bool _needsURLBag;

    _Bool _performsMachineDataActions;

    _Bool _shouldSendXTokenHeader;

    _Bool _urlKnownToBeTrusted;

    _Bool _useUserSpecificURLBag;

}



+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3;

+ (id)_restrictionsHeaderValue;

+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;

+ (void)handleITunesStoreResponseHeaders:(id)arg1 withAccountIdentifier:(id)arg2;

+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;

+ (id)pingOperationWithUrl:(id)arg1;

+ (id)propertyListOperationWithURLBagKey:(id)arg1;

- (id)_account;

- (void)_addStandardQueryParametersForURL:(id)arg1;

- (_Bool)_authenticateWithContext:(id)arg1 error:(id *)arg2;

- (_Bool)_canSendTokenToURL:(id)arg1;

- (id)_copyAuthenticationContext;

- (id)_copyAuthenticationContextForAttemptNumber:(long long)arg1;

- (id)_copyURLBagContext;

- (_Bool)_isErrorTokenError:(id)arg1;

- (id)_resolvedURLInBagContext:(id)arg1 URLBag:(id *)arg2;

- (void)_runURLOperation;

- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(_Bool)arg2;

- (id)authenticatedAccountDSID;

@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;

@property _Bool canSendGUIDParameter;

- (void)dealloc;

- (_Bool)handleRedirectFromDataProvider:(id)arg1 error:(id *)arg2;

- (void)handleResponse:(id)arg1;

@property(nonatomic) _Bool ignorePreexistingSecureToken;

- (id)init;

@property _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;

@property _Bool needsURLBag; // @synthesize needsURLBag=_needsURLBag;

- (id)newRequestWithURL:(id)arg1;

@property _Bool performsMachineDataActions;

- (void)run;

@property _Bool shouldSendXTokenHeader;

@property _Bool urlKnownToBeTrusted; // @synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted;

@property _Bool useUserSpecificURLBag; // @synthesize useUserSpecificURLBag=_useUserSpecificURLBag;

- (_Bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;



// Remaining properties

@property id <ISStoreURLOperationDelegate> delegate; // @dynamic delegate;



@end


