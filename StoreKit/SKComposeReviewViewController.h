/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSURL, SKInvocationQueueProxy<SKUIServiceComposeReviewViewController>, SKRemoteComposeReviewViewController, _UIAsyncInvocation;



@interface SKComposeReviewViewController : UIViewController

{

    _UIAsyncInvocation *_cancelRequest;

    NSURL *_compositionURL;

    id <SKComposeReviewDelegate> _delegate;

    id _prepareBlock;

    SKRemoteComposeReviewViewController *_remoteViewController;

    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> *_serviceProxy;

}



- (void)_addRemoteView;

- (void)_didFinishWithResult:(_Bool)arg1 error:(id)arg2;

- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;

- (void)_requestRemoteViewController;

- (void)_tearDownAfterError:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <SKComposeReviewDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithCompositionURL:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadView;

- (void)prepareWithCompletionBlock:(id)arg1;

- (void)viewDidAppear:(_Bool)arg1;



@end


