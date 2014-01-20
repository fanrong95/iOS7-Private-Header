/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CalDAVOperation.h"


#import "CoreDAVContainerInfoSyncProvider.h"

#import "CoreDAVContainerInfoTaskGroupDelegate.h"

#import "CoreDAVPropPatchTaskDelegate.h"

#import "CoreDAVTaskGroupDelegate.h"



@class NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSString;



@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>

{

    NSError *_savedError;

    NSMutableDictionary *_ctags;

    NSMutableDictionary *_syncTokens;

    _Bool _forceClearCalendarHomeSyncToken;

    NSString *_calendarHomeSyncToken;

    _Bool _useCalendarHomeSyncReport;

    NSMutableDictionary *_pathToLocalCalendar;

    NSMutableSet *_localCalendarsWithNoPath;

    NSMutableSet *_updatedCalendars;

    _Bool _didFinish;

    _Bool _didMakeCalendars;

    _Bool _isSecondRefresh;

    int _nextCalendarOrder;

    NSObject<OS_dispatch_group> *_outstandingTasksGroup;

}



- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;

- (void)_finishRefresh;

- (id)_generateTimeZoneString:(id)arg1;

- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;

- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(_Bool)arg2;

- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;

- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;

- (void)_handleCalendarPublish;

- (_Bool)_handleUpdateForCalendar:(id)arg1;

- (void)_initializePrincipalCalendarCache;

- (void)_prepareCalendarsBeforeRefresh;

- (void)_reallyRefreshCalendarProperties;

- (void)_sendAddsForCalendars;

- (void)_sendDeletesForCalendars;

- (void)_sendShareActionTasks;

- (int)_sharingStatusForContainer:(id)arg1;

@property(retain, nonatomic) NSString *calendarHomeSyncToken; // @synthesize calendarHomeSyncToken=_calendarHomeSyncToken;

- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;

- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;

- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;

- (void)dealloc;

- (id)initWithPrincipal:(id)arg1;

- (void)refreshCalendarProperties;

@property(nonatomic) _Bool useCalendarHomeSyncReport; // @synthesize useCalendarHomeSyncReport=_useCalendarHomeSyncReport;



// Remaining properties

@property(nonatomic) id <CalDAVCalendarPropertyRefreshDelegate> delegate; // @dynamic delegate;



@end


