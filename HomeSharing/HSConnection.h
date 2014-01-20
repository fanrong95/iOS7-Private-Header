/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class HSConnectionConfiguration, HSConnectionStream, HSFairPlayInfo, NSObject<OS_dispatch_queue>, NSString, NSURL;



@interface HSConnection : NSObject

{

    HSConnectionConfiguration *_configuration;

    long long _connectionState;

    HSConnectionStream *_connectionStream;

    long long _connectionType;

    NSObject<OS_dispatch_queue> *_serialQueue;

    struct __CFReadStream *_readStream;

    _Bool authenticationRequired;

    _Bool tokenCheckRequired;

    _Bool _tokenCheckRequred;

    unsigned int basePlaylistContainerID;

    unsigned int databaseID;

    unsigned int databaseRevision;

    unsigned int sessionID;

    unsigned int _interfaceID;

    unsigned int _controlKey;

    unsigned int _controlPort;

    unsigned int _promptID;

    HSFairPlayInfo *fairPlayInfo;

    NSString *homeSharingGroupID;

    NSString *password;

    NSString *username;

}



- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;

- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;

- (void)_notifyServerOfActivity;

- (void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;

- (unsigned int)_sapVersionForConnectionType;

- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;

- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(id)arg1;

@property unsigned int basePlaylistContainerID; // @synthesize basePlaylistContainerID;

@property(readonly) NSURL *baseURL;

- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;

- (void)connectWithCompletionHandler:(id)arg1;

@property long long connectionState; // @synthesize connectionState=_connectionState;

@property(readonly) long long connectionType; // @synthesize connectionType=_connectionType;

@property unsigned int controlKey; // @synthesize controlKey=_controlKey;

@property unsigned int controlPort; // @synthesize controlPort=_controlPort;

@property unsigned int databaseID; // @synthesize databaseID;

@property unsigned int databaseRevision; // @synthesize databaseRevision;

- (void)dealloc;

- (void)disconnect;

@property(retain) HSFairPlayInfo *fairPlayInfo; // @synthesize fairPlayInfo;

@property(copy) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID;

- (id)initWithBaseURL:(id)arg1;

- (id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2;

- (id)initWithConfiguration:(id)arg1 connectionType:(long long)arg2;

@property unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;

@property(getter=isAuthenticationRequired) _Bool authenticationRequired; // @synthesize authenticationRequired;

@property(readonly, getter=isTokenCheckRequired) _Bool tokenCheckRequred; // @synthesize tokenCheckRequred=_tokenCheckRequred;

- (id)newControlConnection;

@property(copy) NSString *password; // @synthesize password;

@property(nonatomic) unsigned int promptID; // @synthesize promptID=_promptID;

- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;

@property unsigned int sessionID; // @synthesize sessionID;

@property _Bool tokenCheckRequired; // @synthesize tokenCheckRequired;

@property(copy) NSString *username; // @synthesize username;



@end

