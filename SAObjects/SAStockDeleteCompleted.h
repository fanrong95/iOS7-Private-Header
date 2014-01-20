/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseCommand.h"


#import "SAServerBoundCommand.h"



@class NSArray, NSString;



@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand>

{

}



+ (id)deleteCompleted;

+ (id)deleteCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSArray *results;

@property(copy, nonatomic) NSArray *stocks;



// Remaining properties

@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;

@property(copy, nonatomic) NSString *refId; // @dynamic refId;



@end

