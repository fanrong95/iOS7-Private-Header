/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"


@class NSString, UIBarButtonItem, _UIAsyncInvocation, _UIQueueingServiceWebViewControllerProxy, _UIRemoteWebViewController;



@interface _UIWebViewController : UIViewController

{

    _UIAsyncInvocation *_cancelViewServiceRequest;

    _UIRemoteWebViewController *_remoteViewController;

    _UIQueueingServiceWebViewControllerProxy *_serviceProxy;

    _Bool _hasCalledBeginAppearanceTransition;

    _Bool _hasCalledEndAppearanceTransition;

    _Bool _canGoBack;

    _Bool _canGoForward;

    _Bool _loading;

    float _estimatedProgress;

    id <_UIWebViewControllerDelegate> _delegate;

    UIBarButtonItem *_backBarButtonItem;

    UIBarButtonItem *_forwardBarButtonItem;

    NSString *_pageTitle;

    NSString *_URLString;

}



@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;

- (void)_addRemoteView;

- (void)_connectToService;

- (void)_decidePolicyForEncodedRequest:(id)arg1 inMainFrame:(_Bool)arg2 navigationType:(id)arg3 replyHandler:(id)arg4;

- (void)_dispatchDidDismissViewController;

- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;

- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(_Bool)arg1;

- (void)_sendEndAppearanceTransitionIfReady;

- (void)_setCanGoBack:(_Bool)arg1 canGoForward:(_Bool)arg2;

- (void)_setEstimatedProgress:(float)arg1;

- (void)_setLoading:(_Bool)arg1 error:(id)arg2;

- (void)_setTitle:(id)arg1;

- (void)_setURLString:(id)arg1;

- (void)_updateBarButtonItems;

- (void)_webContentSizeWithReplyHandler:(id)arg1;

@property(readonly, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;

@property(readonly, nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;

@property(readonly, nonatomic) _Bool canGoForward; // @synthesize canGoForward=_canGoForward;

- (void)configureWithSettings:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <_UIWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) float estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;

@property(readonly, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;

- (void)goBack;

- (void)goForward;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;

- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;

- (void)loadRequest:(id)arg1;

- (void)loadView;

@property(readonly, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;

- (void)queueingServiceProxy:(id)arg1 willQueueInvocation:(id)arg2;

- (void)reload;

- (_Bool)shouldAutomaticallyForwardAppearanceMethods;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)stopLoading;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


