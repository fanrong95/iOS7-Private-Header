/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "QLPreviewContentDataSource.h"

#import "QLPreviewContentDelegate.h"

#import "QLRemotePreviewContentControllerProtocol.h"



@class NSMutableDictionary, QLPreviewContentController, QLRemotePrintPageHelper, _UIHostedWindow;



@interface QLServicePreviewContentController : UIViewController <QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate>

{

    NSMutableDictionary *_previewItemCache;

    long long _sourceUUID;

    QLPreviewContentController *_previewContentController;

    long long _numberOfPreviewItems;

    int _previewMode;

    _Bool _remoteInstantiationFinished;

    _Bool _blockRemoteImages;

    QLRemotePrintPageHelper *_printPageHelper;

    long long _clientInterfaceOrientation;

    _UIHostedWindow *_hostedWindow;

}



+ (id)_exportedInterface;

+ (id)_remoteViewControllerInterface;

- (void)_getNumberOfPagesForSize:(struct CGSize)arg1 withHandler:(id)arg2;

- (void)_getPDFPageAtIndex:(long long)arg1 size:(struct CGSize)arg2 handler:(id)arg3;

- (void)_prepareForDrawingPages:(struct _NSRange)arg1;

- (id)_remotePreviewItemAtIndex:(long long)arg1;

- (void)_setNavigationBarVerticalOffset:(double)arg1;

- (void)_setNumberOfPreviewItems:(long long)arg1;

- (void)_setTransitioning:(_Bool)arg1;

- (void)_updateHostedWindowFrame;

- (void)_willAnimateRotationTo:(long long)arg1;

- (void)_willAppearInRemoteViewController;

- (void)becomeForeground;

- (void)beginScrubbing;

- (void)checkCurrentPreviewItem;

- (id)clientProcessAlertViewForPreviewContentController:(id)arg1;

- (void)configureWithParameters:(id)arg1;

- (void)contentWasTappedInPreviewContentController:(id)arg1;

- (long long)currentPreviewItemIndex;

- (long long)currentSourceUUIDForPreviewContentController:(id)arg1;

@property id <QLPreviewContentDataSource> dataSource;

- (void)dealloc;

@property id <QLPreviewContentDelegate> delegate;

- (void)endScrubbing;

- (void)enterBackground;

- (void)forceResignFirstResponder;

- (id)init;

- (long long)numberOfPreviewItems;

- (long long)numberOfPreviewItemsInPreviewContentController:(id)arg1;

- (void)overlayWasTappedInPreviewContentController:(id)arg1;

- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;

- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4;

- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(long long)arg3;

- (id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2;

- (void)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 completionBlock:(id)arg3;

- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;

- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;

- (void)previewContentController:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;

- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;

- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(long long)arg2;

- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;

- (void)previewContentControllerDidExitFullScreen:(id)arg1;

@property int previewMode;

- (id)printPageHelper;

- (id)printPageRenderer;

- (void)purgeCache;

- (void)refreshCurrentPreviewItem;

- (void)scrubToValue:(double)arg1;

- (void)setBlockRemoteImages:(_Bool)arg1;

- (void)setContentFrame:(struct CGRect)arg1;

- (void)setCurrentPreviewItemIndex:(long long)arg1;

- (void)setLoadingTextForMissingFiles:(id)arg1;

- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;

- (void)setTransitioning:(_Bool)arg1 synchronizedWithBlock:(id)arg2;

- (void)showContentsWasTappedInPreviewContentController:(id)arg1;

@property(readonly) long long sourceUUID; // @synthesize sourceUUID=_sourceUUID;

- (void)togglePlayState;

- (void)willChangeContentFrame;



@end


