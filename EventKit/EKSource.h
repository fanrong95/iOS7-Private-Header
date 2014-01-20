/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


@class EKSourceConstraints, NSNumber, NSSet, NSString;



@interface EKSource : EKObject

{

}



+ (id)sourceWithEventStore:(id)arg1;

- (id)_persistentItem;

@property(readonly, nonatomic) NSSet *allCalendars;

@property(readonly, nonatomic) NSSet *calendars;

- (id)calendarsForEntityType:(unsigned long long)arg1;

- (_Bool)commit:(id *)arg1;

@property(readonly, nonatomic) EKSourceConstraints *constraints;

@property(copy, nonatomic) NSNumber *defaultAlarmOffset;

- (id)description;

@property(readonly, nonatomic) int displayOrderForNewCalendar;

@property(copy, nonatomic) NSString *externalID;

@property(copy, nonatomic) NSString *externalModificationTag;

- (id)init;

@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;

@property(readonly, nonatomic) _Bool isFacebookSource;

@property(nonatomic) _Bool onlyCreatorCanModify;

- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;

- (_Bool)remove:(id *)arg1;

@property(copy, nonatomic) NSString *title;

@property(readonly, nonatomic) NSString *sourceIdentifier;

@property(readonly, nonatomic) int sourceType;



@end


