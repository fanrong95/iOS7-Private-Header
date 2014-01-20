/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CalDAVOccurrenceChange, NSMutableDictionary, NSString;



@interface CalDAVScheduleChangesProperty : NSObject

{

    NSString *_dateStamp;

    int _actionType;

    CalDAVOccurrenceChange *_masterChange;

    NSMutableDictionary *_occurrenceChanges;

    NSString *_attendeeAddress;

}



+ (id)debugStringForType:(int)arg1;

+ (void)initialize;

+ (id)propertyWithItem:(id)arg1;

@property int actionType; // @synthesize actionType=_actionType;

- (void)addOccurrenceChange:(id)arg1;

- (id)allChanges;

@property(retain) NSString *attendeeAddress; // @synthesize attendeeAddress=_attendeeAddress;

- (id)changeForOccurrence:(id)arg1;

@property(retain) NSString *dateStamp; // @synthesize dateStamp=_dateStamp;

- (void)dealloc;

- (id)init;

- (_Bool)isCancel;

- (_Bool)isCreate;

- (_Bool)isReply;

- (_Bool)isUpdate;

@property(retain) CalDAVOccurrenceChange *masterChange; // @synthesize masterChange=_masterChange;

- (id)recurrenceIDs;



@end


