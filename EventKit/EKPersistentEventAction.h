/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentObject.h"


@class EKPersistentCalendarItem, NSData, NSString;



@interface EKPersistentEventAction : EKPersistentObject

{

}



+ (id)relations;

- (int)entityType;

@property(copy, nonatomic) NSData *externalData;

@property(copy, nonatomic) NSString *externalFolderID;

@property(copy, nonatomic) NSString *externalID;

@property(copy, nonatomic) NSString *externalModTag;

@property(copy, nonatomic) NSString *externalScheduleID;

@property(retain, nonatomic) EKPersistentCalendarItem *owner;



@end


