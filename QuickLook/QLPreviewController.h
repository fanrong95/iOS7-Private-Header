/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class QLPreviewControllerReserved;



@interface QLPreviewController : UIViewController

{

    QLPreviewControllerReserved *_reserved;

}



+ (id)_passThroughDocumentTypes;

+ (_Bool)_shouldPassThroughDocumentType:(id)arg1;

+ (_Bool)canPreviewDocumentType:(id)arg1;

+ (_Bool)canPreviewItem:(id)arg1;

+ (_Bool)canPreviewMIMEType:(id)arg1;

+ (id)contentTypeForPreviewItem:(id)arg1;

+ (_Bool)copyPreviewItemToPasteboard:(id)arg1;

+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(_Bool)arg4;

+ (id)titleForPreviewItem:(id)arg1;

- (void)_addPreviewContentController;

- (void)_applicationDidEnterBackground:(id)arg1;

- (void)_applicationWillEnterForeground:(id)arg1;

- (_Bool)_canPrint;

- (void)_commonInit;

- (void)_configurePreviewContentController;

- (struct CGRect)_contentFrameForRemoteView;

- (void)_contentWasTapped;

- (void)_createControls;

- (id)_currentInteractionController;

- (id)_currentNavigationController;

- (id)_displayedInteractionController;

- (id)_documentProxyForPreviewItem:(id)arg1;

- (id)_fixedSpaceItemWithWidth:(double)arg1;

- (id)_flexibleSpaceItem;

- (void)_hideOverlayWithStatusBar:(_Bool)arg1 duration:(double)arg2;

- (id)_indexFormatter;

- (id)_listDescriptionStringWithTitle:(id)arg1;

- (void)_loadInternalViews;

- (_Bool)_needsAVControls;

- (_Bool)_needsToolbar;

- (_Bool)_overlayVisible;

- (id)_pdfPreviewDataAtURL:(id)arg1 loadIfNeeded:(_Bool)arg2;

- (void)_prepareDelayedAppearance;

- (void)_removeChildPreviewContentControllerIfNeeded;

- (void)_setControlsOverlayVisible:(_Bool)arg1 withStatusBar:(_Bool)arg2 duration:(double)arg3;

- (void)_setCurrentPreviewItemIndex:(long long)arg1 fromClient:(_Bool)arg2 showContentsIfPossible:(_Bool)arg3;

- (void)_setupWithMode:(int)arg1 parentViewController:(id)arg2;

- (void)_showContentsIfPossibleAnimated:(_Bool)arg1;

- (void)_showGenericDisplayBundle;

- (void)_showOverlayWithStatusBar:(_Bool)arg1 duration:(double)arg2;

- (void)_startWaiting;

- (void)_stopWaiting;

- (void)_unloadInternalViews;

- (_Bool)_updateAVState;

- (_Bool)_updateActionItem;

- (void)_updateNavigationBar:(_Bool)arg1;

- (void)_updateRouteImages;

- (void)_updateToolbar:(_Bool)arg1;

- (void)_updateToolbarVisibility:(_Bool)arg1;

- (id)_updatedArchiveButton;

- (void)_waitingTimedOut;

- (void)actionButtonTapped:(id)arg1;

- (id)activityItemForDocumentInteractionController:(id)arg1;

- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;

- (id)activityViewControllerPlaceholderItems:(id)arg1;

- (void)animateWhenReadyWithBlock:(id)arg1;

- (void)arrowsAction:(id)arg1;

- (_Bool)blockRemoteImages;

- (_Bool)canPrint;

- (void)contentWasTappedInPreviewContentController:(id)arg1;

@property(readonly) id <QLPreviewItem> currentPreviewItem;

@property long long currentPreviewItemIndex;

- (long long)currentSourceUUIDForPreviewContentController:(id)arg1;

- (void)customActionButtonTapped:(id)arg1;

@property id <QLPreviewControllerDataSource> dataSource;

- (void)dealloc;

@property id <QLPreviewControllerDelegate> delegate;

- (void)didReceiveMemoryWarning;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;

- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;

- (void)doneButtonTapped:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (id)itemsSource;

- (void)leftArrowAction:(id)arg1;

- (void)loadView;

- (int)mode;

- (void)navigationGoBackAction:(id)arg1;

- (long long)numberOfPreviewItems;

- (long long)numberOfPreviewItemsInPreviewContentController:(id)arg1;

- (void)overlayWasTappedInPreviewContentController:(id)arg1;

- (id)passThroughViewsForIndexSheet;

- (void)playButtonAction:(id)arg1;

- (long long)preferredStatusBarStyle;

- (_Bool)prefersStatusBarHidden;

- (void)prepareForPrinting;

- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(_Bool)arg4;

- (id)previewContentController;

- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;

- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4;

- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(long long)arg3;

- (id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2;

- (void)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 completionBlock:(id)arg3;

- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;

- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;

- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;

- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(long long)arg2;

- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;

- (id)previewItemAtIndex:(long long)arg1;

- (id)printInfoForDocumentInteractionController:(id)arg1;

- (void)refreshCurrentPreviewItem;

- (void)reloadData;

- (void)rightArrowAction:(id)arg1;

- (void)setBlockRemoteImages:(_Bool)arg1;

- (void)setLoadingTextForMissingFiles:(id)arg1;

- (void)setShowActionAsDefaultButton:(_Bool)arg1;

- (void)setSourceIsManaged:(_Bool)arg1;

- (void)setTransitioning:(_Bool)arg1 synchronizedWithBlock:(id)arg2;

- (void)setUseCustomActionButton:(_Bool)arg1;

- (_Bool)shouldAutomaticallyForwardAppearanceMethods;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (_Bool)showActionAsDefaultButton;

- (void)showArchiveContent:(id)arg1;

- (void)showArchiveContentAnimated:(_Bool)arg1;

- (void)showContentsWasTappedInPreviewContentController:(id)arg1;

- (_Bool)sourceIsManaged;

- (_Bool)useCustomActionButton;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willMoveToParentViewController:(id)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)wirelessRoutesDidChange:(id)arg1;



@end


