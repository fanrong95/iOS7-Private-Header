/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVPropertyFindBaseTask.h"



@class NSSet;



@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask

{

    NSSet *_searchStrings;

    _Bool _findAttendees;

    _Bool _findLocations;

    unsigned long long _resultLimit;

}



+ (_Bool)tokensAreLegal:(id)arg1;

- (void)dealloc;

- (id)extraAttributes;

@property _Bool findAttendees; // @synthesize findAttendees=_findAttendees;

@property _Bool findLocations; // @synthesize findLocations=_findLocations;

- (void)finishCoreDAVTaskWithError:(id)arg1;

- (id)httpMethod;

- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;

- (id)requestBody;

@property unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;

- (id)searchItems;

@property(retain) NSSet *searchStrings; // @synthesize searchStrings=_searchStrings;



@end


