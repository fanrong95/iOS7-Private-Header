/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSString;



@interface MPRadioPerformanceSession : NSObject

{

    NSMutableArray *_events;

    NSString *_label;

    double _startTime;

}



- (void).cxx_destruct;

- (void)addEventWithName:(id)arg1;

- (id)initWithLabel:(id)arg1;

@property(readonly, nonatomic) NSString *logLine;



@end


