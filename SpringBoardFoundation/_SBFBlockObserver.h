/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SBFObserver.h"



@interface _SBFBlockObserver : NSObject <SBFObserver>

{

    id _resultBlock;

    id _completionBlock;

    id _failureBlock;

}



- (void)dealloc;

- (id)initWithResultBlock:(id)arg1 completionBlock:(void)arg2 failureBlock:(id)arg3;

- (void)observerDidComplete;

- (void)observerDidFailWithError:(id)arg1;

- (void)observerDidReceiveResult:(id)arg1;



@end


