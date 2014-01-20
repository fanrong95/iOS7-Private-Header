/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainCommand.h"


@class NSDate, NSNumber, NSString;



@interface SAReminderSearch : SADomainCommand

{

}



+ (id)search;

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSNumber *completionStatus;

@property(copy, nonatomic) NSDate *dueAfter;

@property(copy, nonatomic) NSDate *dueBefore;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *listName;

- (_Bool)requiresResponse;

@property(copy, nonatomic) NSString *subject;

@property(copy, nonatomic) NSString *timeZoneId;



@end


