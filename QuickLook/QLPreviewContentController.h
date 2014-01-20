/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "QLPreviewContentControllerProtocol.h"

#import "QLPreviewItemInteractionDelegate.h"



@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, QLAirPlayController, UIColor, UILongPressGestureRecognizer, UIPageViewController, UISegmentedControl, UITapGestureRecognizer;



@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate>

{

    id <QLPreviewContentDataSource> _dataSource;

    id <QLPreviewContentDelegate> _delegate;

    _Bool _isForeground;

    QLAirPlayController *_airPlayController;

    UITapGestureRecognizer *_tapRecognizer;

    UILongPressGestureRecognizer *_longPressRecognizer;

    UIPageViewController *_pageViewController;

    NSMutableDictionary *_previewViewControllerCache;

    NSMutableSet *_gestureRecognizersForFullScreenDisplay;

    NSMutableArray *_previewViewControllerCacheOrdering;

    int _previewMode;

    long long _numberOfPreviewItems;

    long long _currentPreviewItemIndex;

    NSString *_loadingTextForMissingFiles;

    UISegmentedControl *_customToolbarSegmentedArrowControl;

    UIColor *_backgroundColor;

    _Bool _transitioning;

    _Bool _swiping;

    NSMutableSet *_loadingItems;

    NSMutableOrderedSet *_scheduledLoads;

    double _navigationBarVerticalOffset;

    _Bool _overlayHidden;

    _Bool _blockRemoteImages;

    CDStruct_0109ef53 clientContext;

}



- (void)_activateAirPlayOnRemoteScreen:(id)arg1;

- (void)_cachePreviewViewController:(id)arg1;

- (id)_cachedPreviewControllerForPreviewItem:(id)arg1 withIndex:(long long)arg2;

- (void)_clearPreviewViewControllerCache;

- (id)_copyPreviewControllerForPreview:(id)arg1 withIndex:(long long)arg2;

- (void)_deactivateAirPlay;

- (void)_dequeueScheduledLoad;

- (void)_hideMenuController;

- (void)_leftSwipeRecognized:(id)arg1;

- (void)_longPressGestureRecognized:(id)arg1;

- (id)_previewControllerForPreviewItem:(id)arg1 createIfNeeded:(_Bool)arg2 withIndex:(long long)arg3;

- (id)_previewViewControllerForPreviewItemIndex:(unsigned long long)arg1;

- (void)_removeNonCachedPreviewViewControllers;

- (void)_rightSwipeRecognized:(id)arg1;

- (void)_scheduleAdjacentPreviewItems;

- (void)_schedulePreviewViewControllerIfNeeded:(id)arg1;

- (void)_screenDidConnect:(id)arg1;

- (void)_screenDidDisconnect:(id)arg1;

- (void)_tapGestureRecognized:(id)arg1;

- (void)_updateAirPlay;

- (void)_updateBackgroundWithDuration:(double)arg1;

- (void)_updateContentFrame;

- (void)_updateDisabledScrollingRect;

- (void)_updateScreenConfiguration;

@property(copy) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

- (void)becomeForeground;

- (void)beginScrubbing;

- (_Bool)canBecomeFirstResponder;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

- (void)checkCurrentPreviewItem;

@property CDStruct_0109ef53 clientContext; // @synthesize clientContext;

- (id)clientProcessAlertViewForPreviewItem:(id)arg1;

- (void)configureWithParameters:(id)arg1;

- (void)copy:(id)arg1;

- (id)currentPreviewItem;

- (long long)currentPreviewItemIndex;

- (id)currentPreviewViewController;

@property id <QLPreviewContentDataSource> dataSource; // @synthesize dataSource=_dataSource;

- (void)dealloc;

@property id <QLPreviewContentDelegate> delegate; // @synthesize delegate=_delegate;

- (void)didReceiveMemoryWarning;

- (void)endScrubbing;

- (void)enterBackground;

- (void)forceResignFirstResponder;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

- (id)init;

- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;

- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;

- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;

- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;

- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;

- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;

- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;

- (void)previewItem:(id)arg1 setAVState:(id)arg2;

- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;

- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;

- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;

- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;

- (void)previewItemDidExitFullScreen:(id)arg1;

- (void)previewItemDidLoad:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;

- (void)previewItemWillLoad:(id)arg1;

@property int previewMode; // @synthesize previewMode=_previewMode;

- (id)printPageHelper;

- (id)printPageRenderer;

- (void)refreshCurrentPreviewItem;

- (void)refreshCurrentPreviewItem:(_Bool)arg1;

- (void)scrubToValue:(double)arg1;

- (void)setBlockRemoteImages:(_Bool)arg1;

- (void)setContentFrame:(struct CGRect)arg1;

- (void)setCurrentPreviewItemIndex:(long long)arg1;

- (void)setLoadingTextForMissingFiles:(id)arg1;

- (void)setNavigationBarVerticalOffset:(double)arg1;

- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;

- (void)setTransitioning:(_Bool)arg1 synchronizedWithBlock:(id)arg2;

- (void)showContentsWasTappedForPreviewItem:(id)arg1;

- (id)snapshotView;

- (void)togglePlayState;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidLayoutSubviews;

- (void)viewDidLoad;

- (void)viewDidUpdateForPreviewItem:(id)arg1;

- (void)viewWasTappedOnPreviewItem:(id)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willChangeContentFrame;

- (void)willMoveToParentViewController:(id)arg1;



@end


