/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, PLImageCache;



@interface PLImageLoadingQueue : NSObject

{

    id <PLImageLoadingQueueDelegate> _delegate;

    PLImageCache *_cache;

    NSLock *_lock;

}



- (void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2;

- (void)dealloc;

@property(nonatomic) id <PLImageLoadingQueueDelegate> delegate; // @synthesize delegate=_delegate;

- (void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4;

- (id)initWithImageCache:(id)arg1;

- (void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2;

- (id)loadImageSynchronously:(_Bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3;

- (id)loadImageSynchronously:(_Bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(id)arg4;

- (id)loadImageSynchronously:(_Bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(_Bool)arg4;

- (id)loadImageSynchronously:(_Bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4;

- (id)loadImageSynchronously:(_Bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(id)arg5;

- (void)pauseLoading;

- (void)resumeLoading;

- (void)stopLoading;



@end


