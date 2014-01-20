/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;



__attribute__((visibility("hidden")))

@interface TSUProgress : NSObject

{

    NSMutableSet *mProgressObservers;

    NSObject<OS_dispatch_queue> *mProgressObserversQueue;

    NSString *mMessage;

}



- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;

- (void)dealloc;

- (id)init;

@property(readonly, getter=isIndeterminate) _Bool indeterminate;

@property(readonly) double maxValue;

@property(copy) NSString *message; // @synthesize message=mMessage;

- (_Bool)protected_hasProgressObservers;

- (double)protected_minProgressObserverValueInterval;

- (void)protected_progressDidChange;

- (void)removeProgressObserver:(id)arg1;

@property(readonly) double value;



@end


