/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSWPStorageBroadcaster : NSObject

{

    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver>>, std::__1::allocator<id<TSWPStorageObserver>>> _observers;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addObserver:(id)arg1;

- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;

- (void)dealloc;

- (void)removeAllObservers;

- (void)removeObserver:(id)arg1;



@end


