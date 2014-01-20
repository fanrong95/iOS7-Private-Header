/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CalDAVScheduleTask.h"


@class NSString;



@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask

{

    NSString *_maskedUID;

}



+ (id)_icsDate:(id)arg1 calendar:(id)arg2;

+ (id)freeBusyDocumentWithOrganizer:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 maskedUID:(id)arg5;

- (void)dealloc;

- (id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7;

@property(retain) NSString *maskedUID; // @synthesize maskedUID=_maskedUID;



@end


