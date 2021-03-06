/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIGestureRecognizerDelegate.h"



@class NSArray, NSMutableArray, UIControl, UITapGestureRecognizer;



@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate>

{

    UIControl *_backstopView;

    _Bool _isAdjustingViewsForDismiss;

    long long _selectedViewControllerIndex;

    UITapGestureRecognizer *_tapGestureRecognizer;

    NSMutableArray *_viewControllers;

}



- (void).cxx_destruct;

- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(id)arg2;

- (void)_frameAction:(id)arg1;

- (struct CGRect)_frameToCenterViewController:(id)arg1;

- (long long)_indexOfViewControllerForPoint:(struct CGPoint)arg1;

- (double)_overlaySpacingForOrientation:(long long)arg1;

- (void)_popViewControllers;

- (void)_positionViewControllersForOrientation:(long long)arg1;

- (void)_pushViewController:(id)arg1;

- (void)_removeChildren;

- (id)_selectedViewController;

- (void)_slideInViewController:(id)arg1 withCompletionBlock:(id)arg2;

- (void)_tapAction:(id)arg1;

- (id)_viewControllerForPoint:(struct CGPoint)arg1;

@property(readonly, nonatomic) UIControl *backstopControl;

- (void)dealloc;

- (void)dismissWithFadeTransitionCompletionBlock:(id)arg1;

- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(id)arg2;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadView;

- (_Bool)shouldAutomaticallyForwardAppearanceMethods;

- (void)showViewController:(id)arg1 withCompletionBlock:(id)arg2;

- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(id)arg3;

- (void)showViewControllers:(id)arg1;

- (unsigned long long)supportedInterfaceOrientations;

@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;

- (void)viewWillAppear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


