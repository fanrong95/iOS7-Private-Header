/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainCommand.h"


@class SAClockObject;



@interface SAClockAdd : SADomainCommand

{

}



+ (id)add;

+ (id)addWithDictionary:(id)arg1 context:(id)arg2;

@property(retain, nonatomic) SAClockObject *clockToAdd;

- (id)encodedClassName;

- (id)groupIdentifier;

- (_Bool)requiresResponse;



@end


