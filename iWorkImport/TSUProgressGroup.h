/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSUProgress.h"


@class NSArray, NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface TSUProgressGroup : TSUProgress

{

    NSArray *mChildren;

    NSArray *mChildrenProgressObservers;

    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;

}



- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;

- (void)dealloc;

- (id)initWithChildren:(id)arg1;

- (_Bool)isIndeterminate;

- (double)maxValue;

- (void)p_updateChildrenProgressObservers;

- (void)removeProgressObserver:(id)arg1;

- (double)value;



@end


