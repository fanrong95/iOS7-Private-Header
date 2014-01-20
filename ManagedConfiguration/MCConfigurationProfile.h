/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCProfile.h"


@class MCProfileServiceProfile, NSArray;



@interface MCConfigurationProfile : MCProfile

{

    NSArray *_payloads;

    _Bool _isCloudProfile;

    _Bool _isCloudLocked;

    MCProfileServiceProfile *_OTAProfile;

}



- (void).cxx_destruct;

@property(retain, nonatomic) MCProfileServiceProfile *OTAProfile; // @synthesize OTAProfile=_OTAProfile;

- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;

- (void)_sortPayloads;

- (id)description;

- (id)earliestCertificateExpiryDate;

- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(_Bool)arg2 outError:(id *)arg3;

- (id)installationWarningsIncludeUnsignedProfileWarning:(_Bool)arg1;

@property(nonatomic) _Bool isCloudLocked; // @synthesize isCloudLocked=_isCloudLocked;

@property(nonatomic) _Bool isCloudProfile; // @synthesize isCloudProfile=_isCloudProfile;

- (_Bool)isManagedByProfileService;

- (id)localizedPayloadSummaryByType;

- (id)payloadWithUUID:(id)arg1;

- (id)payloads;

- (id)stubDictionary;



@end


