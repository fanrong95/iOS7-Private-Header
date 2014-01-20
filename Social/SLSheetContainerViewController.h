/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSMutableArray, SLComposeServiceViewController, UIView;



@interface SLSheetContainerViewController : UIViewController

{

    SLComposeServiceViewController *_sheetViewController;

    NSMutableArray *_constraints;

    double _topOffset;

    double _sheetHeight;

    UIView *_keyboardTrackingView;

    struct CGSize _keyboardSize;

    long long _currentOrientation;

}



- (void).cxx_destruct;

- (void)addImage:(id)arg1;

- (void)didReceiveMemoryWarning;

- (id)init;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)keyboardDidChange:(id)arg1;

- (_Bool)shouldAutorotate;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)updateViewConstraints;

- (void)viewDidLoad;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


