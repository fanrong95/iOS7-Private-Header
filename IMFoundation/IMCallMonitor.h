/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate;



@interface IMCallMonitor : NSObject

{

    id _callCenter;

    _Bool _wasOnCall;

    NSDate *_lastCallDate;

}



+ (id)sharedInstance;

@property(readonly, nonatomic) NSDate *dateLastCallEnded; // @synthesize dateLastCallEnded=_lastCallDate;

- (void)dealloc;

- (id)init;

@property(readonly, nonatomic) _Bool isOnCall;



@end


