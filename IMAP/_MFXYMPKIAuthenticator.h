/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFSASLAuthenticator.h"



@class NSData, YahooAccount;



@interface _MFXYMPKIAuthenticator : MFSASLAuthenticator

{

    _Bool sentInitialResponse;

    YahooAccount *_yahooAccount;

    NSData *_cachedSignature;

    _Bool _usedCachedSignature;

}



- (id)_XYMPKISignatureData;

- (struct __CFData *)_copyDeviceCertificate;

- (struct __CFData *)_copyDevicePrivateKey;

- (_Bool)base64EncodeResponseData;

- (_Bool)couldRetry;

- (void)dealloc;

- (id)responseForServerData:(id)arg1;

- (id)saslName;

- (void)setAuthenticationState:(int)arg1;



@end


