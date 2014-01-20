/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface _PFTask : NSObject

{

    int _cd_rc;

    void *_task;

    void *arguments;

    struct _opaque_pthread_mutex_t lock;

    struct _opaque_pthread_cond_t {

        long long __sig;

        char __opaque[40];

    } condition;

    int isFinishedFlag;

}



+ (int)getNumActiveProcessors;

+ (unsigned long long)getPhysicalMemory;

+ (double)getProcessorSpeed;

- (_Bool)_isDeallocating;

- (_Bool)_tryRetain;

- (void)dealloc;

- (void)finalize;

- (id)initWithFunction:(void *)arg1 withArgument:(void *)arg2 andPriority:(int)arg3;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end


