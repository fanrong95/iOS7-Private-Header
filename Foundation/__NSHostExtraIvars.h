/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSString;



__attribute__((visibility("hidden")))

@interface __NSHostExtraIvars : NSObject

{

    NSString *thingToResolve;

    int resolveType;

    NSObject<OS_dispatch_queue> *resolveQueue;

    NSObject<OS_dispatch_queue> *cacheAccessQueue;

    NSObject<OS_dispatch_queue> *callbackQueue;

    _Bool startedResolving;

}



@property(readonly) NSObject<OS_dispatch_queue> *cacheAccessQueue; // @synthesize cacheAccessQueue;

@property(readonly) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue;

- (void)cleanup;

- (void)dealloc;

- (void)finalize;

- (id)init;

@property(readonly) NSObject<OS_dispatch_queue> *resolveQueue; // @synthesize resolveQueue;

@property(nonatomic) int resolveType; // @synthesize resolveType;

@property _Bool startedResolving; // @synthesize startedResolving;

@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;



@end


