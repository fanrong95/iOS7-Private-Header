/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate;



__attribute__((visibility("hidden")))

@interface TSCESumAccumulator : NSObject

{

    NSDate *mDateAccumulator;

    double mSecondsToAdd;

    struct TSCENumberValue mNumberAccumulator;

    _Bool mMixedDurationsAndNumbers;

    _Bool mFoundANumber;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addValue:(struct TSCEValue)arg1 function:(id)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;

- (id)init;

- (struct TSCEValue)resultForFunction:(id)arg1;



@end


