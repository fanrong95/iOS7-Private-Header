/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSString;



@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

{

}



+ (id)getSocialCredential;

+ (id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(copy, nonatomic) NSString *explicitUserPermission;

- (id)groupIdentifier;

- (_Bool)requiresResponse;

@property(copy, nonatomic) NSString *socialNetwork;



@end


