/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ACDOAuthSignerProtocol.h"



@class ACDClient, ACDClientAuthorizationManager, ACDDatabase;



@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>

{

    ACDDatabase *_database;

    ACDClient *_client;

    ACDClientAuthorizationManager *_authorizationManager;

    _Bool _shouldIncludeAppIdInRequest;

}



- (void).cxx_destruct;

- (_Bool)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;

- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;

- (id)ckForAccountType:(id)arg1;

- (id)csForAccountType:(id)arg1;

- (id)initWithClient:(id)arg1;

- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;

- (void)setShouldIncludeAppIdInRequest:(_Bool)arg1;

- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(id)arg5;

- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(id)arg5;

- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;



@end


