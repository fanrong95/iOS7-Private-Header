/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPayload.h"


@class NSDictionary;



@interface MCDefaultsPayload : MCPayload

{

    NSDictionary *_defaultsByDomain;

}



+ (id)localizedPluralForm;

+ (id)localizedSingularForm;

+ (id)typeStrings;

- (void).cxx_destruct;

- (id)defaultsForDomain:(id)arg1;

- (id)description;

- (id)domains;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

- (_Bool)isAllowedToWriteDefaults;

- (id)stubDictionary;

- (id)subtitle1Description;



@end


