/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CalDAVCalendar.h"



@class NSString, NSURL;



@protocol CalDAVSubscribedCalendar <CalDAVCalendar>

@property _Bool hasAlarmFilter;

@property _Bool hasAttachmentFilter;

@property _Bool hasTaskFilter;

@property double refreshInterval;

@property(retain) NSURL *subscriptionURL;



@optional

@property _Bool autoprovisioned;

@property(retain) NSString *languageCode;

@property(retain) NSString *locationCode;

@end


