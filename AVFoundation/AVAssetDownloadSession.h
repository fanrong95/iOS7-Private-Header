/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAssetDownloadSessionInternal, NSError, NSURL;



@interface AVAssetDownloadSession : NSObject

{

    AVAssetDownloadSessionInternal *_internal;

}



+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;

+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

@property(readonly, nonatomic) NSURL *URL;

- (void)_addFigAssetListeners;

- (void)_addFigPlaybackItemListeners;

- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;

- (struct OpaqueFigAsset *)_figAsset;

- (id)_figAssetNotificationNames;

- (id)_figPlaybackItemNotificationNames;

- (struct OpaqueFigPlaybackItem *)_playbackItem;

- (int)_primeCache;

- (void)_primeCacheOnDispatchQueue;

- (int)_readyForInspection;

- (void)_removeFigAssetListeners;

- (void)_removeFigPlaybackItemListeners;

- (_Bool)_setFigAsset:(struct OpaqueFigAsset *)arg1;

- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;

- (id)_weakReference;

@property(readonly, nonatomic) unsigned long long availableFileSize;

- (void)dealloc;

@property(readonly, nonatomic) NSURL *destinationURL;

@property(readonly, nonatomic) unsigned long long downloadToken;

@property(readonly, nonatomic) NSError *error;

@property(readonly, nonatomic) unsigned long long fileSize;

- (void)finalize;

- (id)init;

- (id)initWithDownloadToken:(unsigned long long)arg1;

- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (void)pause;

@property(readonly, nonatomic) long long priority;

- (void)start;

@property(readonly, nonatomic) long long status;

- (void)stop;



@end


