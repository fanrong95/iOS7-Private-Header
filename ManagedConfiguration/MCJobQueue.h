/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;



@interface MCJobQueue : NSObject

{

    NSObject<OS_dispatch_queue> *_executionQueue;

    NSObject<OS_dispatch_queue> *_eventQueue;

    id <MCJobQueueObserver> _observer;

    NSObject<OS_dispatch_queue> *_jobQueue;

    NSObject<OS_dispatch_group> *_jobGroup;

    id _executionQueueAbortCompletionBlock;

}



- (void).cxx_destruct;

- (void)abortEnqueuedJobsCompletionBlock:(id)arg1;

- (void)enqueueJob:(id)arg1;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;

@property(copy, nonatomic) id executionQueueAbortCompletionBlock; // @synthesize executionQueueAbortCompletionBlock=_executionQueueAbortCompletionBlock;

- (_Bool)hasJobsEnqueued;

- (id)init;

- (void)jobDidFinish;

@property(retain, nonatomic) NSObject<OS_dispatch_group> *jobGroup; // @synthesize jobGroup=_jobGroup;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue; // @synthesize jobQueue=_jobQueue;

@property(nonatomic) __weak id <MCJobQueueObserver> observer; // @synthesize observer=_observer;

- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)arg1;



@end


