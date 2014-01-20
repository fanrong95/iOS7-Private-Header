/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"



#import "_MPRadioOperationProtocol.h"



@class AVAssetCache, NSLock, NSObject<OS_dispatch_queue>, NSString, RadioRequestContext;



@interface MPLoadRadioAssetOperation : NSOperation <_MPRadioOperationProtocol>

{

    _Bool _applyPreloadDuration;

    id _assetBlock;

    AVAssetCache *_assetCache;

    NSObject<OS_dispatch_queue> *_heartbeatTokenQueue;

    NSLock *_lock;

    RadioRequestContext *_requestContext;

    NSString *_stationHash;

    long long _stationID;

    long long _storeItemID;

}



- (void).cxx_destruct;

- (id)_URLOperationWithURL:(id)arg1 storeBag:(id)arg2 allowingHeartbeatDelay:(_Bool)arg3 heartbeatToken:(id *)arg4 error:(id *)arg5;

- (id)_assetDictionaryForPurchaseResponse:(id)arg1;

- (id)_assetWithPurchaseResponse:(id)arg1 heartbeatToken:(id)arg2 error:(id *)arg3;

- (id)_bodyData:(id *)arg1;

- (id)_errorForInvalidPurchaseResponse:(id)arg1 heartbeatToken:(id)arg2;

- (id)_heartbeatTokenDataAllowingDelay:(_Bool)arg1 error:(id *)arg2;

- (id)_initMPLoadRadioAssetOperation;

- (void)_saveDownloadKeyCookieForAssetDictionary:(id)arg1 URL:(id)arg2;

- (id)_sinfsForAssetDictionary:(id)arg1;

@property(copy) id assetBlock;

@property(retain) AVAssetCache *assetCache;

- (id)initWithRadioAVItem:(id)arg1;

- (id)initWithStoreIdentifier:(long long)arg1 station:(id)arg2;

- (void)main;

- (id)requestContext;

- (void)setRequestContext:(id)arg1;



@end


