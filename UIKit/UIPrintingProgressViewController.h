/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"


@class UINavigationController, UIPrintingMessageView, UIPrintingProgress, UIWindow;



__attribute__((visibility("hidden")))

@interface UIPrintingProgressViewController : UITableViewController

{

    UIPrintingProgress *_printingProgress;

    UIPrintingMessageView *_messageView;

    UINavigationController *_navController;

    UIWindow *_window;

    double _rotationDelay;

}



- (void)cancelProgress;

- (void)cleanupAfterDismiss;

- (void)dealloc;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)dismissAnimated:(_Bool)arg1;

- (void)doneProgress;

- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;

- (double)rotationDelay;

- (void)setDonePrinting:(_Bool)arg1;

- (void)setMessage:(id)arg1;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)show;

- (unsigned long long)supportedInterfaceOrientations;

- (_Bool)visible;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


