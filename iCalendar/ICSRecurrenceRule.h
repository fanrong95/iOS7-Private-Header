/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ICSWriting.h"

#import "NSCoding.h"



@class ICSDateValue, NSArray, NSMutableDictionary, NSNumber;



@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting>

{

    int _freq;

    NSMutableDictionary *_parameters;

}



+ (id)recurrenceRuleFromICSCString:(const char *)arg1 withTokenizer:(id)arg2;

+ (id)recurrenceRuleFromICSString:(id)arg1;

- (id)ICSStringWithOptions:(unsigned long long)arg1;

- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@property(retain) NSArray *byday;

@property(retain) NSArray *byhour;

@property(retain) NSArray *byminute;

@property(retain) NSArray *bymonth;

@property(retain) NSArray *bymonthday;

@property(retain) NSArray *bysecond;

@property(retain) NSArray *bysetpos;

@property(retain) NSArray *byweekno;

@property(retain) NSArray *byyearday;

- (void)cleanUpForStartDate:(id)arg1;

@property NSNumber *count;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property int freq;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrequency:(int)arg1;

@property NSNumber *interval;

- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;

- (id)parameterValueForName:(id)arg1;

- (id)parametersToIncludeForChecksumVersion:(int)arg1;

- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;

- (id)propertiesToIncludeForChecksumVersion:(int)arg1;

- (void)removeParameterValueForName:(id)arg1;

- (void)setParameterValue:(id)arg1 forName:(id)arg2;

@property(retain) ICSDateValue *until;

@property NSNumber *wkst;



@end


