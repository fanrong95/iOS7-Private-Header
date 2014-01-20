/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IMDServiceSession.h"


@class IDSAccount, NSArray, NSString;



@interface IMDAppleServiceSession : IMDServiceSession

{

    NSString *_serviceName;

    NSString *_GUID;

}



@property(readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;

- (id)_aliasStrings;

- (id)_aliases;

- (_Bool)_isDeviceRegistered;

- (void)_updateAccountStatusToUnregistered:(_Bool)arg1;

- (long long)_validationStatusForAlias:(id)arg1;

- (void)activeDevicesUpdated;

- (void)addAliases:(id)arg1;

@property(readonly, nonatomic) NSArray *aliases;

- (void)authenticateAccount;

@property(readonly, nonatomic) NSString *callerID;

@property(readonly, nonatomic) NSString *callerURI;

- (id)certForURI:(id)arg1;

- (void)clearCallerID;

- (void)deactivateAndPurgeIdentify;

- (void)dealloc;

@property(readonly, nonatomic) IDSAccount *idsAccount;

- (id)initWithAccount:(id)arg1 service:(id)arg2;

- (void)loginServiceSession;

- (void)logoutServiceSession;

- (void)passwordUpdated;

- (void)reIdentify;

- (void)refreshRegistration;

- (void)registerAccount;

@property(readonly, nonatomic) NSArray *registeredURIs;

- (void)removeAliases:(id)arg1;

- (void)reregister;

@property(readonly, nonatomic) NSString *serviceType;

- (void)sessionDidBecomeActive;

- (void)sessionWillBecomeInactive;

- (void)unregisterAccount;

- (void)unvalidateAliases:(id)arg1;

- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;

- (void)validateAliases:(id)arg1;

- (void)validateProfile;

- (long long)validationStatusForAlias:(id)arg1;

@property(readonly, nonatomic) NSArray *vettedAliases;



@end


