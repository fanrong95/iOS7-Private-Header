/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class OACredential;



@interface OAURLRequestSigner : NSObject

{

    OACredential *_credential;

    int _signatureMethod;

}



- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(_Bool)arg3;

- (void)dealloc;

- (id)initWithCredential:(id)arg1;

- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;

- (id)oauthNonce;

- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;

@property(nonatomic) int signatureMethod; // @synthesize signatureMethod=_signatureMethod;

- (id)signatureMethodString;

- (id)signedURLRequestWithRequest:(id)arg1;

- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;

- (Class)signer;

- (id)timestamp:(id)arg1;



@end


