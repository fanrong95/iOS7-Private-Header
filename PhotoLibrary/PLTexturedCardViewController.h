/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "PLModalDimmingContained.h"



@class UIImageView, UINavigationBar, UINavigationController, UIView;



@interface PLTexturedCardViewController : UIViewController <PLModalDimmingContained>

{

    UIImageView *_decorationView;

    UIImageView *_innerShadowView;

    UIView *_wrapperView;

    UINavigationBar *_navigationBar;

    UINavigationController *_navigationController;

}



- (void)_updateNavigationBarToOrientation:(long long)arg1;

- (void)_updateWrapperViewToOrientation:(long long)arg1;

- (void)dealloc;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadView;

- (void)popViewControllerAnimated:(_Bool)arg1;

- (struct CGPoint)preferredOffsetInParentViewController;

- (struct CGSize)preferredSizeInParentViewController;

- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)viewWillLayoutSubviews;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


