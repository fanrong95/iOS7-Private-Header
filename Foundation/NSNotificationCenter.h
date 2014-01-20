/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSNotificationCenter : NSObject

{

    void *_impl;

    void *_callback;

    void *_pad[11];

}



+ (id)defaultCenter;

- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;

- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (id)init;

- (_Bool)isEmpty;

- (void)postNotification:(id)arg1;

- (void)postNotificationName:(id)arg1 object:(id)arg2;

- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)removeObserver:(id)arg1;

- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;



@end


