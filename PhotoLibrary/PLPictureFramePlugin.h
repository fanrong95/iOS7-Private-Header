/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLSlideshowPlugin.h"


#import "PLImageLoadingQueueDelegate.h"



@class PLCachedImage, PLCroppedImageView, PLImageCache, PLImageLoadingQueue, PLImageSource, PLManagedAsset;



@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate>

{

    PLImageCache *_imageCache;

    PLImageLoadingQueue *_imageLoadingQueue;

    PLImageSource *_imageSource;

    struct __CFArray *_imageIndexes;

    unsigned long long _currentIndex;

    PLManagedAsset *_requestedImage;

    PLCachedImage *_nextImage;

    PLCroppedImageView *_currentImageView;

    PLCroppedImageView *_nextImageView;

    unsigned int _didLoadFirstImage:1;

    unsigned int _slideshowTimerDidFire:1;

    unsigned int _slideshowTimerIsScheduled:1;

    unsigned int _paused:1;

}



- (long long)_albumImageIndexForSlideIndex:(long long)arg1;

- (struct CGRect)_contentBounds;

- (void)_crossFadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;

- (void)_didLoadImage:(id)arg1;

- (void)_displayFirstImage;

- (id)_nextImage;

- (void)_requestNextImageSynchronously:(_Bool)arg1;

- (void)_scheduleSlideshowTimer;

- (void)_slideshowTimerFired;

- (void)_transitionToNextImage;

- (void)dealloc;

- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4;

- (id)init;

- (id)newSlideshowView;

- (void)pauseSlideshow;

- (void)resumeSlideshow;

- (void)setAlbumAssets:(id)arg1;

- (void)slideshowViewDidAppear;

- (void)slideshowViewDidDisappear;

- (void)slideshowViewWillAppear;

- (void)stopSlideshow;



@end


