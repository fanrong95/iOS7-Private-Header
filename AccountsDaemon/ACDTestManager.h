/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSXPCListener, NSXPCListenerEndpoint;



@interface ACDTestManager : NSObject

{

    NSXPCListener *_accountStoreConnectionListener;

    NSXPCListener *_oauthSignerConnectionListener;

    NSXPCListener *_authenticationDialogConnectionListener;

    NSString *_storePath;

}



+ (id)testServer;

- (void).cxx_destruct;

- (id)_pseudoUniqueDatabasePath;

@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;

@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;

- (void)startTestServer;

- (void)stopTestServer;



@end


