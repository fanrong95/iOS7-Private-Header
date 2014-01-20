/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSOperationQueue, SKUIClientContext;



@interface SKUIResourceLoader : NSObject

{

    SKUIClientContext *_clientContext;

    id <SKUIResourceLoaderDelegate> _delegate;

    NSOperationQueue *_operationQueue;

    NSMutableDictionary *_operationsByRequestID;

    NSMutableDictionary *_resourcesByRequestID;

}



- (void).cxx_destruct;

- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;

- (void)_sendDidIdleIfNecessary;

- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2;

- (id)cachedResourceForRequestIdentifier:(unsigned long long)arg1;

- (void)cancelAllRequests;

- (void)cancelRequestWithIdentifier:(unsigned long long)arg1;

@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(nonatomic) __weak id <SKUIResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

- (id)initWithOperationQueue:(id)arg1;

- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;

@property(readonly, nonatomic, getter=isIdle) _Bool idle;

- (_Bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;

@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;

- (void)removeAllCachedResources;

- (void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;



@end


