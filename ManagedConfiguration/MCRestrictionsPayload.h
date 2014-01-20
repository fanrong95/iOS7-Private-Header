/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPayload.h"


@class NSMutableDictionary, NSString;



@interface MCRestrictionsPayload : MCPayload

{

    NSMutableDictionary *_restrictions;

    NSString *_iCloudPassword;

}



+ (id)localizedPluralForm;

+ (id)localizedSingularForm;

+ (id)typeStrings;

- (void).cxx_destruct;

- (id)_defaultMediaSettings;

- (id)_enforcedFeatureStrings;

- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(_Bool)arg3;

- (id)_intersectionStrings;

- (id)_invalidFieldErrorWithFieldName:(id)arg1;

- (id)_restrictedFeatureStrings;

- (id)_unionStrings;

@property(retain, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

- (id)installationWarnings;

- (id)restrictions;

- (id)stubDictionary;

- (id)subtitle1Description;



@end


