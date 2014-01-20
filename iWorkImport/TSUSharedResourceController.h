/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSCondition, NSObject<OS_dispatch_group>, NSString;



__attribute__((visibility("hidden")))

@interface TSUSharedResourceController : NSObject

{

    int _acquirerCount;

    id <TSUSharedResourceControllerDelegate> _delegate;

    NSString *_resourceForThreadKey;

    NSString *_hasResourceForThreadKey;

    NSCondition *_resourceLock;

    id _resource;

    struct {

        unsigned int canWaitOnMainThread:1;

        unsigned int acquiresResourceAsynchronously:1;

        unsigned int hasResource:1;

    } _flags;

    int _threadsAcquiringResourceCount;

    NSCondition *_waitLock;

    int _waitCount;

    NSObject<OS_dispatch_group> *_accessInProgressGroup;

    NSObject<OS_dispatch_group> *_willEndAccessGroup;

    NSString *_UUID;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;

- (void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(id)arg1;

@property(nonatomic) _Bool canWaitOnMainThread;

- (void)dealloc;

- (id)description;

- (void)didBeginAccessToResource:(id)arg1;

- (void)didBeginAccessToResource:(id)arg1 isFromThreadWaitingToAcquireResource:(_Bool)arg2;

- (id)init;

- (id)initWithName:(id)arg1 delegate:(id)arg2;

- (_Bool)performSynchronousAccessIfResourceIsAvailable:(_Bool)arg1 usingBlock:(id)arg2;

- (_Bool)performSynchronousAccessIfResourceIsAvailableUsingBlock:(id)arg1;

- (void)performSynchronousAccessUsingBlock:(id)arg1;

- (void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(id)arg1;

- (void)wakeUpAllThreadsWaitingForResourceWithLock;

- (void)willEndAccessToResource;

- (void)willEndAccessToResourceForcingToWaitForPendingAccesses:(_Bool)arg1;



@end


