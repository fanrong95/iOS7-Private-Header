/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUViewController.h"


#import "SUScalingFlipViewDelegate.h"

#import "UIGestureRecognizerDelegate.h"



@class NSArray, NSMutableArray, SUOverlayViewController, SUScalingFlipView, SUTouchCaptureView, UISwipeGestureRecognizer;



@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate>

{

    NSMutableArray *_actionQueue;

    SUScalingFlipView *_activeFlipView;

    _Bool _askingToDismissEverything;

    _Bool _askingToDismissSelection;

    SUTouchCaptureView *_captureView;

    id <SUOverlayBackgroundDelegate> _delegate;

    struct CGRect _keyboardFrame;

    long long _selectedViewControllerIndex;

    UISwipeGestureRecognizer *_swipeGestureRecognizer;

    NSMutableArray *_viewControllers;

}



- (void)_addViewController:(id)arg1;

- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;

- (void)_captureViewAction:(id)arg1;

- (struct CGRect)_centeredFrameForViewController:(id)arg1;

- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;

- (void)_enqueueAction:(id)arg1;

- (void)_finishDismissAction:(id)arg1;

- (void)_finishDismissEverythingAction:(id)arg1;

- (void)_finishDismissOfViewController:(id)arg1 animated:(_Bool)arg2;

- (void)_finishPresentAction:(id)arg1;

- (struct CGRect)_frameForSlideFromBottomForViewController:(id)arg1;

- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;

- (void)_overlayActionDidFinish;

- (void)_overlayAnimationDidFinish;

- (void)_performDismissAction:(id)arg1;

- (void)_performDismissEverythingAction:(id)arg1;

- (void)_performFlipForAction:(id)arg1;

- (void)_performNextAction;

- (void)_performPresentAction:(id)arg1;

- (void)_reloadGestureRecognizers;

- (void)_removeViewController:(id)arg1;

- (id)_selectedViewController;

- (void)_sendDidDismiss;

- (void)_shouldDismissFinishedWithValue:(id)arg1;

- (void)_swipe:(id)arg1;

- (void)_tearDownFlipView;

- (double)_viewControllerHorizontalPadding;

- (double)_viewControllerKeyboardOffset;

- (id)copyArchivableContext;

- (id)copyArchivableJetsamContext;

- (id)copyChildViewControllersForReason:(long long)arg1;

- (void)dealloc;

@property(nonatomic) id <SUOverlayBackgroundDelegate> delegate; // @synthesize delegate=_delegate;

- (void)dismissAnimated:(_Bool)arg1;

- (void)dismissOverlay:(id)arg1 animated:(_Bool)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

- (id)init;

- (void)keyboardWillHideWithInfo:(id)arg1;

- (void)keyboardWillShowWithInfo:(id)arg1;

- (void)layoutViewControllers;

- (void)loadView;

- (void)overlayPageViewTapped:(id)arg1;

- (void)populateNavigationHistoryWithItems:(id)arg1;

- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;

- (void)restoreArchivableContext:(id)arg1;

- (void)scalingFlipViewDidFinish:(id)arg1;

@property(readonly, nonatomic) SUOverlayViewController *selectedViewController;

- (_Bool)shouldExcludeFromNavigationHistory;

- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;

- (id)viewControllerForScriptWindowContext:(id)arg1;

@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;

- (void)viewDidAppear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


