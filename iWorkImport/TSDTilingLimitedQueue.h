/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface TSDTilingLimitedQueue : NSObject

{

    NSObject<OS_dispatch_queue> *mManagerQueue;

    NSObject<OS_dispatch_queue> *mTargetQueue;

    int mLimit;

    int mReaderCount;

    int mSpinLock;

}



- (void)dealloc;

- (id)init;

- (id)initWithLimit:(int)arg1;

- (void)performAsync:(id)arg1;



@end


