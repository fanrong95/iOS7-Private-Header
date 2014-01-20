/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



@interface MCSingleSignOnPayloadKerberosInfo : NSObject

{

    NSString *_principalName;

    NSString *_realm;

    NSArray *_URLPrefixMatches;

    NSArray *_appIdentifierMatches;

    NSString *_accountGUID;

    NSString *_accountTypeGUID;

}



- (void).cxx_destruct;

@property(retain, nonatomic) NSArray *URLPrefixMatches; // @synthesize URLPrefixMatches=_URLPrefixMatches;

@property(retain, nonatomic) NSString *accountGUID; // @synthesize accountGUID=_accountGUID;

@property(retain, nonatomic) NSString *accountTypeGUID; // @synthesize accountTypeGUID=_accountTypeGUID;

@property(retain, nonatomic) NSArray *appIdentifierMatches; // @synthesize appIdentifierMatches=_appIdentifierMatches;

- (id)description;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@property(retain, nonatomic) NSString *principalName; // @synthesize principalName=_principalName;

@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;

- (id)stubDictionary;

- (_Bool)validateAppIdentifierMatch:(id)arg1 outError:(id *)arg2;

- (_Bool)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id *)arg2 outError:(id *)arg3;



@end


