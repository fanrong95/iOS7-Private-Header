/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseCommand.h"


#import "SADomainObjectCommand.h"

#import "SAServerBoundCommand.h"



@class NSString, NSURL;



@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

{

}



+ (id)domainObjectCommitCompleted;

+ (id)domainObjectCommitCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSURL *identifier;



// Remaining properties

@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;

@property(copy, nonatomic) NSString *refId; // @dynamic refId;



@end


