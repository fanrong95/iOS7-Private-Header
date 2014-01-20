/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



__attribute__((visibility("hidden")))

@interface EKRecurrenceHelper : NSObject

{

    NSString *_specifier;

    _Bool _dirty;

    _Bool _parsed;

    NSArray *_daysOfTheWeek;

    NSArray *_daysOfTheMonth;

    NSArray *_daysOfTheYear;

    NSArray *_weeksOfTheYear;

    NSArray *_monthsOfTheYear;

    NSArray *_setPositions;

}



- (void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2;

- (void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3;

- (void)_clearArrays;

- (id)_parseDaysOfWeek:(CDStruct_f9502b4c *)arg1 range:(CDStruct_912cb5d2)arg2;

- (id)_parseIndexList:(CDStruct_f9502b4c *)arg1 range:(CDStruct_912cb5d2)arg2;

- (void)_parseSpecifierIfNeeded;

- (void)_updateSpecifier;

@property(copy, nonatomic) NSArray *daysOfTheMonth;

@property(copy, nonatomic) NSArray *daysOfTheWeek;

@property(copy, nonatomic) NSArray *daysOfTheYear;

- (void)dealloc;

- (id)initWithSpecifier:(id)arg1;

@property(readonly, nonatomic) _Bool isDirty;

- (_Bool)isEqual:(id)arg1;

@property(copy, nonatomic) NSArray *monthsOfTheYear;

- (void)revert;

@property(copy, nonatomic) NSArray *setPositions;

@property(copy, nonatomic) NSString *specifier;

@property(copy, nonatomic) NSArray *weeksOfTheYear;



@end


