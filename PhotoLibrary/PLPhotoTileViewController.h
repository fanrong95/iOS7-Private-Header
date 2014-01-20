/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "PLCommentsViewControllerDelegate.h"

#import "UIGestureRecognizerDelegate.h"

#import "UIScrollViewDelegate.h"



@class NSObject<OS_dispatch_source>, PLCommentsViewController, PLExpandableImageView, PLImageScrollView, PLManagedAsset, PLPhotoTileBadgeView, PLPhotoTilePlaceholderView, PLTileContainerView, PLVideoView, UIGestureRecognizer, UIImage, UIImageView;



@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLCommentsViewControllerDelegate>

{

    UIImage *_image;

    UIImage *_pendingImage;

    UIImage *_unscaledImage;

    PLManagedAsset *_modelPhoto;

    PLImageScrollView *_scrollView;

    PLExpandableImageView *_imageView;

    PLVideoView *_videoView;

    UIImageView *_gradientView;

    PLPhotoTileBadgeView *_badgeView;

    UIImageView *_reviewCheckmarkImageView;

    PLPhotoTilePlaceholderView *_placeholderView;

    PLCommentsViewController *_commentsViewController;

    UIGestureRecognizer *_singleTapGestureRecognizer;

    UIGestureRecognizer *_doubleTapGestureRecognizer;

    id <PLPhotoTileViewControllerDelegate> _tileDelegate;

    int _imageOrientation;

    struct CGSize _imageSize;

    struct CGRect _tileFrame;

    _Bool _zoomToFillInsteadOfToFit;

    _Bool _useLessThanMinZoomForZoomedOutTest;

    _Bool _allowZoomToFill;

    id _orientationDelegate;

    float _cropRectZoomScale;

    struct CGRect _cropOverlayRect;

    struct CGRect _cropRect;

    double _doubleTapZoomScale;

    double _minZoomScale;

    double _zoomToFillScale;

    int _mode;

    long long _lastDisplayedOrientation;

    _Bool _clientIsTemporarilyWallpaper;

    _Bool _userDidAdjustWallpaper;

    float _wallpaperPortraitZoomScale;

    float _wallpaperLandscapeZoomScale;

    float _zoomScaleBeforeZooming;

    struct CGRect _cropRectBeforeDragging;

    _Bool _force1XCroppedImage;

    _Bool _forceNativeScreenScale;

    _Bool _centerContentVertically;

    id _didEndZoomingBlock;

    NSObject<OS_dispatch_source> *_dispatchTimer;

    double _dispatchStartTime;

    double _dispatchTimeElapsed;

    _Bool _hasNotedZoom;

    unsigned int _imageIsThumbnail:1;

    unsigned int _isTVOut:1;

    unsigned int _zooming:1;

    unsigned int _autoZooming:1;

    unsigned int _zoomGesturesEnabled:1;

    unsigned int _userDidZoom:1;

    unsigned int _ignoreZoomChange:1;

    unsigned int _tileParentIsPageController:1;

    unsigned int _lockedUnderCropOverlay:1;

    unsigned int _viewDidAppear:1;

    unsigned int _viewWillAppear:1;

    unsigned int _didRequestFullSizeImage:1;

    unsigned int _useZoomScaleForCropRect:1;

    unsigned int _photoShouldBeHDRBadged:1;

    unsigned int _HDRBadgeShouldBeHidden:1;

    unsigned int _avalancheBadgeShouldBeHidden:1;

    unsigned int _photoShouldBeAvalancheBadged:1;

    unsigned int _badgeShouldBeVisible:1;

    unsigned int _didSetHDRForModelPhoto:1;

    unsigned int _commentsTableVisible:1;

    PLTileContainerView *_containerView;

    _Bool _reviewing;

    _Bool _picked;

    struct UIEdgeInsets _overlayInsets;

}



+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 image:(id)arg2 allowZoomToFill:(_Bool)arg3 mode:(int)arg4;

+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 imageRef:(struct CGImage *)arg2 imageOrientation:(long long)arg3 allowZoomToFill:(_Bool)arg4 mode:(int)arg5;

+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 modelPhoto:(id)arg2 mode:(int)arg3;

+ (_Bool)shouldShowPlaceholderForAsset:(id)arg1 useOpaquePlaceholder:(_Bool *)arg2;

+ (struct CGSize)tileSize;

+ (struct CGSize)tvOutTileSize;

- (void)_adjustScrollViewContentOffsetForInsets;

- (void)_adjustZoomForEnteringMode:(_Bool)arg1;

- (float)_calculateZoomScale:(_Bool)arg1 inView:(id)arg2;

- (void)_centerImageInScrollView;

- (_Bool)_clientIsWallpaper;

- (void)_configureViews;

- (void)_handleDoubleTap:(id)arg1;

- (void)_handleSingleTap:(id)arg1;

- (long long)_imageOrientation;

- (void)_installSubview:(id)arg1;

- (id)_newOriginalImageForPickerFromCachedData;

- (void)_performDidEndZoomBlock;

- (void)_repositionBadgeView;

- (void)_requestFullSizeImage;

- (void)_resetZoomCommon;

- (void)_setDefaultZoomScale;

- (void)_setDidEndZoomingBlock:(id)arg1;

- (void)_setImage:(id)arg1 isThumbnail:(_Bool)arg2 preserveFrame:(_Bool)arg3;

- (void)_setPhoto:(id)arg1;

- (void)_setupBadgeView;

- (void)_setupReviewCheckmark;

- (void)_showBadgeViewIfAppropriate;

- (void)_teardownDispatchTimer;

- (void)_updateAggdKeys;

- (void)_updateContentInset;

- (void)_updateModelPhotoWithImage:(id)arg1;

- (void)_updatePlaceholderViewAnimated:(_Bool)arg1;

- (void)_updateReviewCheckmark;

- (void)_viewWillMoveToSuperView:(id)arg1;

- (_Bool)allowsEditing;

- (void)applicationDidBecomeActive:(id)arg1;

- (void)applicationWillResignActive:(id)arg1;

@property(nonatomic) _Bool centerContentVertically; // @synthesize centerContentVertically=_centerContentVertically;

- (void)commentsControllerDidDisplayUnreadComment:(id)arg1;

- (void)commentsControllerDidExitEditMode:(id)arg1;

- (void)commentsControllerInactiveAreaWasTapped:(id)arg1;

- (void)commentsControllerWillBeginScrolling:(id)arg1;

- (void)commentsControllerWillEnterEditMode:(id)arg1;

@property(readonly, nonatomic) _Bool commentsTableIsVisible;

- (id)commentsView;

@property(readonly, nonatomic) PLCommentsViewController *commentsViewController; // @synthesize commentsViewController=_commentsViewController;

- (double)currentToDefaultZoomRatio;

- (double)currentToMinZoomRatio;

- (void)dealloc;

- (double)defaultZoomScale;

- (id)description;

- (id)dictionaryWithCroppedImageForRect:(struct CGRect)arg1 minimalCropDimension:(double)arg2 withOptions:(int)arg3;

- (_Bool)didRequestFullSizeImage;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)ensureFullSizeImageLoaded;

- (id)expandableImageView;

@property(nonatomic) _Bool force1XCroppedImage; // @synthesize force1XCroppedImage=_force1XCroppedImage;

@property(nonatomic) _Bool forceNativeScreenScale; // @synthesize forceNativeScreenScale=_forceNativeScreenScale;

- (void)forceZoomingGesturesEnabled;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

- (_Bool)gesturesEnabled;

- (_Bool)hasFullSizeImage;

- (void)hideContentView;

- (id)image;

- (int)imageOrientation;

- (id)imageView;

- (id)init;

- (id)initForPageController;

- (id)initWithPhoto:(id)arg1 image:(id)arg2 frame:(struct CGRect)arg3 isThumbnail:(_Bool)arg4 imageOrientation:(int)arg5 allowZoomToFill:(_Bool)arg6 mode:(int)arg7;

- (id)initWithPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(struct CGSize)arg3;

- (void)initializeCommentsTable;

- (void)installVideoOverlay:(id)arg1;

- (_Bool)isTVOut;

- (_Bool)isZoomedOut;

- (void)loadView;

- (double)minRotatedScale;

- (double)minZoomScale;

- (id)newCGImageBackedUIImage;

- (id)newImageWithCropRect:(struct CGRect)arg1 minimalCropDimension:(double)arg2 croppedImageData:(id *)arg3 fullScreenImageData:(id *)arg4 fullScreenImage:(struct CGImage **)arg5 imageCropRect:(struct CGRect *)arg6 intersectCropWithFullRect:(_Bool)arg7;

- (void)noteParentViewControllerDidDisappear;

@property(nonatomic) struct UIEdgeInsets overlayInsets; // @synthesize overlayInsets=_overlayInsets;

@property(readonly, nonatomic) PLManagedAsset *photo;

- (_Bool)photoShouldHaveAvalancheBadge;

- (_Bool)photoShouldHaveHDRBadge;

@property(nonatomic) _Bool picked; // @synthesize picked=_picked;

- (void)refreshTileWithFullScreenImage:(id)arg1;

- (void)resetZoom;

@property(nonatomic) _Bool reviewing; // @synthesize reviewing=_reviewing;

- (id)scrollView;

- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;

- (void)scrollViewDidZoom:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;

- (void)setAllowsZoomToFill:(_Bool)arg1;

- (void)setAvalancheBadgesHidden:(_Bool)arg1;

- (void)setBadgeVisible:(_Bool)arg1;

- (void)setBadgeVisible:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setClientIsWallpaper:(_Bool)arg1;

- (void)setCommentsTableVisibility:(_Bool)arg1 duration:(double)arg2;

- (void)setCropOverlayRect:(struct CGRect)arg1 forCropRect:(struct CGRect)arg2;

- (void)setFullSizeImage:(id)arg1;

- (void)setGesturesEnabled:(_Bool)arg1;

- (void)setHDRBadgesHidden:(_Bool)arg1;

- (void)setLockedUnderCropOverlay:(_Bool)arg1;

- (void)setOrientationDelegate:(id)arg1;

- (void)setReviewing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setTVOut:(_Bool)arg1;

@property(retain, nonatomic) UIImage *thumbnailImage;

- (void)setTileDelegate:(id)arg1;

@property(nonatomic) struct CGRect tileFrame;

@property(retain, nonatomic) UIImage *unscaledImage; // @synthesize unscaledImage=_unscaledImage;

- (void)setVideoView:(id)arg1;

- (void)setZoomScale:(float)arg1;

- (void)setZoomingGesturesEnabled:(_Bool)arg1;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)showContentView;

- (id)tileDelegate;

- (_Bool)tileIsOnScreen;

- (void)updateAfterCollapse;

- (void)updateAfterZoomTransitionWithImage:(id)arg1;

- (void)updateForVisibleOverlays:(_Bool)arg1;

- (void)updateZoomScales;

- (_Bool)userDidAdjustWallpaper;

- (id)videoView;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewDidLayoutSubviews;

- (id)viewForZoomingInScrollView:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (double)zoomToFillScale;

- (double)zoomToFitScale;

- (void)zoomToScale:(double)arg1 completionBlock:(id)arg2;



@end


