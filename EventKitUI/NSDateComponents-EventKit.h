/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSDateComponents.h"



@interface NSDateComponents (EventKit)

+ (id)dateComponentsFromGregorianDate:(CDStruct_79f9e052)arg1;

- (void)clearTimeComponents;

- (id)dateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;

- (id)dateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;

- (id)dateComponentsForDateOnly;

- (id)dateComponentsForEndOfDay;

- (CDStruct_79f9e052)gregorianDate;

- (_Bool)hasTimeComponents;

@end


