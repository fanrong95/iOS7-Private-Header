/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSNumber, NSString;



@interface SAGetRequestOrigin : SABaseClientBoundCommand

{

}



+ (id)getRequestOrigin;

+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *desiredAccuracy;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSNumber *maxAge;

- (_Bool)requiresResponse;

@property(copy, nonatomic) NSNumber *searchTimeout;



@end


