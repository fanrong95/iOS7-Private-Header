/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSThread.h"



@class NSDate, NSTimer;



@interface _CPPowerAssertionThread : NSThread

{

    NSTimer *_timer;

    NSDate *_earliest;

}



- (void)addAssertion:(id)arg1;

- (void)didTimeOut:(id)arg1;

- (void)main;



@end


