/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSData, NSString;



@interface SASetActivationToken : SABaseClientBoundCommand

{

}



+ (id)setActivationToken;

+ (id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSData *activationToken;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *language;

- (_Bool)requiresResponse;



@end


