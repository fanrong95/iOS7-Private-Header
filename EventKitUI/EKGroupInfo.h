/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKSource, NSArray, NSMutableArray, NSSet, NSString;



@interface EKGroupInfo : NSObject

{

    NSMutableArray *_calendars;

    int _customGroupType;

    NSString *_customTitle;

    NSString *_customTitleAtBeginningOfSentence;

    NSString *_typeTitle;

    NSString *_title;

    NSString *_titleForBeginningOfSentence;

    _Bool _selected;

    _Bool _showSelectAllButton;

    EKSource *_source;

}



- (void).cxx_destruct;

- (id)calendarAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) NSArray *calendarInfos;

@property(readonly, nonatomic) NSSet *calendarSet;

- (id)copyCalendars;

- (id)description;

- (id)init;

- (id)initWithCustomGroupType:(int)arg1;

- (id)initWithSource:(id)arg1;

- (void)insertCalendarInfo:(id)arg1;

- (void)insertDeclinedEventsItem;

@property(readonly, nonatomic) _Bool isSubscribed;

@property(readonly, nonatomic) unsigned long long numCalendars;

@property(readonly, nonatomic) unsigned long long numSelectableCalendars;

@property(readonly, nonatomic) unsigned long long numSelectedCalendars;

- (void)removeCalendar:(id)arg1;

- (void)selectAll;

- (void)selectNone;

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;

@property(readonly, nonatomic) NSSet *selectedCalendarSet;

- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;

@property(nonatomic) _Bool showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;

@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;

@property(readonly, nonatomic) _Bool showAddCalendarButton;

@property(readonly, nonatomic) _Bool showCalendarNameIfSolitary;

@property(readonly, nonatomic) int sortOrder;

@property(readonly, nonatomic) NSString *title;

- (id)titleForBeginningOfSentence:(_Bool)arg1;

@property(readonly, nonatomic) NSString *typeTitle;



@end


