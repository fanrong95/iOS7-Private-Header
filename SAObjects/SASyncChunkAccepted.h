/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class SASyncAnchor;



@interface SASyncChunkAccepted : SABaseClientBoundCommand

{

}



+ (id)chunkAccepted;

+ (id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2;

@property(retain, nonatomic) SASyncAnchor *current;

- (id)encodedClassName;

- (id)groupIdentifier;

- (_Bool)requiresResponse;



@end


