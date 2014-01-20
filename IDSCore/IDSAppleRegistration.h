/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;



@interface IDSAppleRegistration : NSObject <NSCopying>

{

    _Bool _needsMigration;

    _Bool _needsProvisioning;

    _Bool _runningSimpleAuthentication;

    _Bool _isDisabled;

    _Bool _shouldRegisterUsingDSHandle;

    _Bool _shouldAutoRegisterAllHandles;

    int _retries;

    int _absintheRetries;

    NSArray *_vettedEmails;

    NSString *_dsHandle;

    NSString *_profileID;

    NSNumber *_IDSVersion;

    NSNumber *_applicationVersion;

    NSString *_environment;

    NSDate *_registrationDate;

    NSDate *_nextRegistrationDate;

    NSData *_pushToken;

    NSNumber *_isC2K;

    long long _registrationStatus;

    long long _registrationType;

    NSString *_mainID;

    NSArray *_dependantRegistrations;

    NSString *_regionID;

    NSString *_deviceName;

    NSString *_regionBasePhoneNumber;

    NSDictionary *_regionServerContext;

    NSData *_registrationCert;

    NSDictionary *_userInfo;

    NSString *_serviceType;

    NSString *_guid;

    NSMutableArray *_candidateEmails;

    NSDictionary *_migrationContext;

    NSNumber *_identityVersion;

    NSString *_keyPairSignature;

    NSString *_idsUserID;

    NSString *_serviceIdentifier;

    NSArray *_uris;

}



@property(copy, nonatomic) NSNumber *IDSVersion; // @synthesize IDSVersion=_IDSVersion;

@property(copy, nonatomic) NSMutableArray *_candidateEmails; // @synthesize _candidateEmails;

- (id)_keychain_comparisonValue;

- (_Bool)_keychain_isEqual:(id)arg1;

- (id)_userID;

@property(nonatomic) int absintheRetries; // @synthesize absintheRetries=_absintheRetries;

- (void)addCandidateEmail:(id)arg1;

@property(copy, nonatomic) NSNumber *applicationVersion; // @synthesize applicationVersion=_applicationVersion;

@property(copy, nonatomic) NSData *authenticationCert;

@property(copy, nonatomic) NSString *authenticationToken;

@property(readonly, nonatomic) _Bool canRegister;

@property(readonly, nonatomic) _Bool canSendRegistration;

@property(readonly, nonatomic) NSArray *candidateEmails;

@property(readonly, nonatomic) NSArray *confirmedEmails;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(copy, nonatomic) NSArray *dependantRegistrations; // @synthesize dependantRegistrations=_dependantRegistrations;

- (id)description;

@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;

@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation; // @dynamic dictionaryRepresentation;

@property(retain, nonatomic, setter=setDSHandle:) NSString *dsHandle; // @synthesize dsHandle=_dsHandle;

@property(copy, nonatomic) NSString *email;

@property(readonly, nonatomic) NSArray *emailsToRegister;

@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;

@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;

@property(readonly, nonatomic) _Bool hasSentinel;

@property(copy, nonatomic) NSNumber *identityVersion; // @synthesize identityVersion=_identityVersion;

@property(copy, nonatomic) NSString *idsUserID; // @synthesize idsUserID=_idsUserID;

- (id)init;

- (id)initWithDictionary:(id)arg1;

@property(copy, nonatomic) NSNumber *isCDMA; // @synthesize isCDMA=_isC2K;

@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;

- (_Bool)isEqual:(id)arg1;

@property(copy, nonatomic) NSString *keyPairSignature; // @synthesize keyPairSignature=_keyPairSignature;

@property(copy, nonatomic) NSString *mainID; // @synthesize mainID=_mainID;

@property(retain, nonatomic) NSDictionary *migrationContext; // @synthesize migrationContext=_migrationContext;

@property(nonatomic) _Bool needsMigration; // @synthesize needsMigration=_needsMigration;

@property(nonatomic) _Bool needsProvisioning; // @synthesize needsProvisioning=_needsProvisioning;

@property(copy, nonatomic) NSDate *nextRegistrationDate; // @synthesize nextRegistrationDate=_nextRegistrationDate;

@property(copy, nonatomic) NSString *phoneNumber;

@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;

@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;

@property(copy, nonatomic) NSString *regionBasePhoneNumber; // @synthesize regionBasePhoneNumber=_regionBasePhoneNumber;

@property(copy, nonatomic) NSString *regionID; // @synthesize regionID=_regionID;

@property(copy, nonatomic) NSDictionary *regionServerContext; // @synthesize regionServerContext=_regionServerContext;

@property(copy, nonatomic) NSData *registrationCert; // @synthesize registrationCert=_registrationCert;

@property(copy, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;

@property(nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;

@property(nonatomic) long long registrationType; // @synthesize registrationType=_registrationType;

- (_Bool)removeBinding:(id)arg1;

- (void)removeCandidateEmail:(id)arg1;

- (_Bool)removeFromKeychain;

@property(nonatomic) int retries; // @synthesize retries=_retries;

@property(nonatomic) _Bool runningSimpleAuthentication; // @synthesize runningSimpleAuthentication=_runningSimpleAuthentication;

- (_Bool)saveToKeychain;

@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;

@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

@property(nonatomic) _Bool shouldAutoRegisterAllHandles; // @synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles;

@property(nonatomic) _Bool shouldRegisterUsingDSHandle; // @synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle;

@property(copy, nonatomic) NSArray *uris; // @synthesize uris=_uris;

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

@property(retain, nonatomic) NSArray *vettedEmails; // @synthesize vettedEmails=_vettedEmails;

@property(readonly, nonatomic) NSString *signaturePrefix;

@property(readonly, nonatomic) NSString *userID;



@end


