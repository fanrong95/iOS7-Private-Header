/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSObject<PLAlbumProtocol>, PLManagedAsset;



@interface PLSlideshowPlugin : NSObject

{

    id <PLSlideshowPluginDelegate> _delegate;

    struct NSObject *_album;

    NSArray *_albumAssets;

    double _secondsPerSlide;

    _Bool _shuffleAlbum;

    _Bool _shouldRepeat;

}



@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album;

@property(retain, nonatomic) NSArray *albumAssets; // @synthesize albumAssets=_albumAssets;

@property(readonly, nonatomic) PLManagedAsset *currentPhoto;

- (void)dealloc;

@property(nonatomic) id <PLSlideshowPluginDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) NSArray *displayedPhotos;

- (id)newSlideshowView;

- (void)pauseSlideshow;

- (void)resumeSlideshow;

@property(nonatomic) double secondsPerSlide; // @synthesize secondsPerSlide=_secondsPerSlide;

@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;

@property(nonatomic) _Bool shuffleAlbum; // @synthesize shuffleAlbum=_shuffleAlbum;

- (void)slideshowViewDidAppear;

- (void)slideshowViewDidDisappear;

- (void)slideshowViewWillAppear;

- (void)stopSlideshow;



@end


