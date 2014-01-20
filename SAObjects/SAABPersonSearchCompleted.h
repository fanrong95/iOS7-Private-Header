/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseCommand.h"


#import "SAServerBoundCommand.h"



@class NSArray, NSString;



@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand>

{

}



+ (id)personSearchCompleted;

+ (id)personSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

+ (id)personSearchCompletedWithResults:(id)arg1;

- (id)encodedClassName;

- (id)groupIdentifier;

- (id)initWithResults:(id)arg1;

@property(copy, nonatomic) NSArray *results;



// Remaining properties

@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;

@property(copy, nonatomic) NSString *refId; // @dynamic refId;



@end


