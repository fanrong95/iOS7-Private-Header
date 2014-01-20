/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CalDAVCalendarServerResourceChangeElement.h"


@class ICSDateValue, NSString;



@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement

{

    NSString *_componentType;

    NSString *_summary;

    NSString *_displayName;

    ICSDateValue *_nextInstance;

    _Bool _hadMoreInstances;

}



@property(retain) NSString *componentType; // @synthesize componentType=_componentType;

- (id)copyParseRules;

- (void)dealloc;

@property(retain) NSString *displayName; // @synthesize displayName=_displayName;

@property _Bool hadMoreInstances; // @synthesize hadMoreInstances=_hadMoreInstances;

- (id)init;

@property(retain) ICSDateValue *nextInstance; // @synthesize nextInstance=_nextInstance;

- (void)setDeletedDetails:(id)arg1;

@property(retain) NSString *summary; // @synthesize summary=_summary;



@end


