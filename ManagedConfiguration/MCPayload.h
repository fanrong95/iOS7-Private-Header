/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MCProfile, NSArray, NSDictionary, NSString;



@interface MCPayload : NSObject

{

    MCProfile *_profile;

    NSString *_type;

    NSString *_payloadDescription;

    NSString *_displayName;

    NSString *_identifier;

    NSString *_organization;

    NSString *_UUID;

    long long _version;

    NSString *_persistentResourceID;

    _Bool _mustInstallNonInteractively;

}



+ (id)badFieldTypeErrorWithField:(id)arg1;

+ (id)badFieldValueErrorWithField:(id)arg1;

+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;

+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;

+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;

+ (id)localizedPluralForm;

+ (id)localizedSingularForm;

+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;

+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

+ (id)typeStrings;

+ (id)wrapperPayloadDictionary;

- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;

- (id)description;

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

@property(readonly, nonatomic) NSString *friendlyName;

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@property(readonly, nonatomic) NSArray *installationWarnings;

- (id)malformedPayloadErrorWithError:(id)arg1;

@property(nonatomic) _Bool mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;

@property(readonly, nonatomic) NSString *organization; // @synthesize organization=_organization;

@property(readonly, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;

@property(retain, nonatomic) NSString *persistentResourceID; // @synthesize persistentResourceID=_persistentResourceID;

@property(readonly, nonatomic) MCProfile *profile; // @synthesize profile=_profile;

@property(readonly, nonatomic) NSDictionary *restrictions;

- (id)stubDictionary;

- (id)subtitle1Description;

- (id)subtitle1Label;

- (id)subtitle2Description;

- (id)subtitle2Label;

- (id)title;

@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;

@property(readonly, nonatomic) long long version; // @synthesize version=_version;



@end


