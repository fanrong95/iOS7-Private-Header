/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SBFObservable.h"


#import "SBFObserver.h"



@class NSMutableArray;



@interface SBFSubject : SBFObservable <SBFObserver>

{

    NSMutableArray *_observers;

}



- (id)_observers;

- (void)dealloc;

- (id)init;

- (void)observerDidComplete;

- (void)observerDidFailWithError:(id)arg1;

- (void)observerDidReceiveResult:(id)arg1;

- (id)subscribe:(id)arg1;



@end


