/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CPDistributedMessagingCenter;



@interface AFContextManager : NSObject

{

    struct __CFArray *_contextProviders;

    CPDistributedMessagingCenter *_center;

}



+ (id)defaultContextManager;

- (void).cxx_destruct;

- (id)_collateContexts;

- (void)_collateContextsIntoArray:(id)arg1;

- (void)_shutdownServer;

- (_Bool)addContextProvider:(id)arg1;

- (void)dealloc;

- (id)init;

- (void)nothing;

- (void)removeContextProvider:(id)arg1;

- (void)startCenter:(id)arg1;



@end


