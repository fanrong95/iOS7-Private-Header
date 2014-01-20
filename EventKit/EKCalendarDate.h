/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"



@class EKTimeZone;



@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying>

{

    CDStruct_b0fa4487 _dateGr;

    double _dateAbs;

    EKTimeZone *_timeZone;

    unsigned int _flags;

}



+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;

+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;

+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;

+ (id)calendarDateWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;

- (double)absoluteTime;

- (id)calendarDateByAddingDays:(int)arg1;

- (id)calendarDateByAddingGregorianUnits:(CDStruct_6e43267c)arg1;

- (id)calendarDateByAddingMonths:(int)arg1;

- (id)calendarDateByAddingWeeks:(int)arg1;

- (id)calendarDateByAddingYears:(int)arg1;

- (id)calendarDateForDay;

- (id)calendarDateForEndOfDay;

- (id)calendarDateForEndOfMonth;

- (id)calendarDateForEndOfWeekWithWeekStart:(int)arg1;

- (id)calendarDateForMonth;

- (id)calendarDateForWeekWithWeekStart:(int)arg1;

- (id)calendarDateForWeekWithWeekStart:(int)arg1 daysSinceWeekStart:(int *)arg2;

- (id)calendarDateForYear;

- (id)calendarDateInTimeZone:(id)arg1;

- (id)calendarDateWithDate:(id)arg1;

- (long long)compare:(id)arg1;

- (id)components;

- (id)componentsIncludingTime:(_Bool)arg1;

- (id)componentsWithoutTime;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)date;

- (unsigned long long)day;

- (int)dayOfWeek;

- (unsigned int)dayOfYear;

- (unsigned int)daysInMonth;

- (unsigned int)daysInYear;

- (void)dealloc;

- (id)description;

- (CDStruct_6e43267c)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2;

- (int)differenceInDays:(id)arg1;

- (int)differenceInMonths:(id)arg1;

- (int)differenceInYears:(id)arg1;

- (id)earlierDate:(id)arg1;

- (CDStruct_b0fa4487)gregorianDate;

- (unsigned long long)hour;

- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;

- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;

- (id)initWithDate:(id)arg1 timeZone:(id)arg2;

- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;

- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 internalTimeZone:(id)arg2;

- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (id)laterDate:(id)arg1;

- (unsigned long long)minute;

- (unsigned long long)month;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (double)second;

- (long long)secondsFromGMT;

- (id)timeZone;

- (unsigned int)weekOfYear;

- (unsigned int)weeksInYear;

- (unsigned long long)year;



@end


