/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SBKTaskAssertion;



__attribute__((visibility("hidden")))

@interface SBKAsynchronousTask : NSObject

{

    NSObject<OS_dispatch_queue> *_handlerQueue;

    NSObject<OS_dispatch_queue> *_queue;

    NSObject<OS_dispatch_source> *_timeoutTimer;

    _Bool _taskInvalidationDisabled;

    double _timeout;

    int _cancelType;

    id _result;

    NSError *_error;

    id _expirationHandler;

    id _finishedHandler;

    NSString *_debugDescription;

    SBKTaskAssertion *_taskAssertion;

    NSMutableArray *_completions;

}



- (void).cxx_destruct;

- (void)_invalidateAssertion:(_Bool)arg1;

- (void)_invalidateTimer;

- (void)_onQueueFireExpirationHandlerIfNecesary;

- (void)addTaskCompletionBlock:(id)arg1;

- (void)beginTaskOperation;

@property int cancelType; // @synthesize cancelType=_cancelType;

@property(retain) NSMutableArray *completions; // @synthesize completions=_completions;

- (void)dealloc;

@property(copy) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;

- (id)description;

- (void)endTaskOperation;

@property(retain) NSError *error; // @synthesize error=_error;

@property(copy) id expirationHandler; // @synthesize expirationHandler=_expirationHandler;

- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;

@property(copy) id finishedHandler; // @synthesize finishedHandler=_finishedHandler;

- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;

- (void)invalidate;

- (void)invokeTaskCompletionBlocksWithBlock:(id)arg1;

@property(retain) id result; // @synthesize result=_result;

@property(retain) SBKTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;



@end


