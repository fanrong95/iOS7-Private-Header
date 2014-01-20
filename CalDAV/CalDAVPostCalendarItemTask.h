/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVPostTask.h"



@class NSString;



@interface CalDAVPostCalendarItemTask : CoreDAVPostTask

{

    NSString *_previousScheduleTag;

}



- (id)additionalHeaderValues;

- (void)dealloc;

- (id)description;

- (void)finishCoreDAVTaskWithError:(id)arg1;

- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;

@property(retain) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;



// Remaining properties

@property(nonatomic) id <CalDAVPostCalendarItemTaskDelegate> delegate; // @dynamic delegate;



@end


