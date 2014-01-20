/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPayload.h"


@class NSString;



@interface MCSubCalAccountPayload : MCPayload

{

    NSString *_accountDescription;

    NSString *_hostname;

    NSString *_username;

    NSString *_password;

    _Bool _useSSL;

    NSString *_accountPersistentUUID;

}



+ (id)localizedPluralForm;

+ (id)localizedSingularForm;

+ (id)typeStrings;

- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;

@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;

- (id)description;

@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;

- (id)stubDictionary;

- (id)subtitle1Description;

- (id)subtitle1Label;

- (id)subtitle2Description;

- (id)subtitle2Label;

- (id)title;

@property(readonly, nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;

@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;



@end


