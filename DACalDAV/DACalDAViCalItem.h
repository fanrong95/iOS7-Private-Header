/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CalDAVCalendarItemProtocol.h"

#import "CoreDAVLeafDataPayload.h"

#import "DADataElement.h"



@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, ICSDocument, NSArray, NSData, NSMutableDictionary, NSNumber, NSString, NSURL;



@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol>

{

    NSURL *_serverID;

    NSNumber *_clientID;

    NSString *_syncKey;

    NSString *_scheduleTag;

    void *_calItem;

    NSData *_dataPayload;

    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;

    CalDAVUpdateOwnerItem *_createdBy;

    CalDAVUpdateOwnerItem *_updatedBy;

    NSMutableDictionary *_originatingChangeItems;

    _Bool isMigrate;

    ICSDocument *_document;

    _Bool _isMigrate;

}



+ (_Bool)_checkOccurrencesForEvent:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;

+ (_Bool)_shouldApplyEvent:(id)arg1 instanceWithStartDate:(id)arg2 startRange:(id)arg3 endRange:(id)arg4;

+ (_Bool)_shouldApplyEventFromSyncReport:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

+ (_Bool)_shouldApplyTodoFromSyncReport:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (_Bool)_addOrModifyEvent:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 inMobileCalendar:(id)arg6;

- (_Bool)_addOrModifyTask:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 inMobileCalendar:(id)arg6;

- (void)_fixUpCalendarForServer:(id)arg1;

- (void)_setModificationInfoOnItem:(void *)arg1;

- (void)addChangeOfType:(id)arg1 forChangeRowid:(int)arg2;

@property(readonly) void *calItem; // @synthesize calItem=_calItem;

@property(retain) NSNumber *clientID; // @synthesize clientID=_clientID;

@property(retain) CalDAVUpdateOwnerItem *createdBy; // @synthesize createdBy=_createdBy;

@property(readonly) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;

- (void)dealloc;

- (_Bool)deleteFromContainer:(void *)arg1;

- (id)description;

@property(retain, nonatomic) ICSDocument *document; // @synthesize document=_document;

@property(readonly) NSString *filename;

- (id)initWithCalRecord:(void *)arg1 inContainer:(id)arg2;

- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

@property _Bool isMigrate; // @synthesize isMigrate=_isMigrate;

- (_Bool)loadLocalItemWithAccount:(id)arg1;

- (void *)localItem;

@property(copy) NSMutableDictionary *originatingChangeItems;

- (_Bool)saveServerIDToExistingItem;

- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;

- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5 calendar:(id)arg6;

@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;

@property(retain) NSString *scheduleTag;

@property(retain) NSURL *serverID; // @synthesize serverID=_serverID;

- (void)setLocalItem:(void *)arg1;

@property(retain) CalDAVUpdateOwnerItem *updatedBy; // @synthesize updatedBy=_updatedBy;

@property(readonly) _Bool statusChanged;

@property(readonly) NSString *syncKey;

@property(readonly) NSString *uniqueIdentifier;



// Remaining properties

@property(readonly) NSArray *childrenOrder;



@end


