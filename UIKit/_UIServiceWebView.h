/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIWebView.h"


@class _UIServiceWebViewController;



__attribute__((visibility("hidden")))

@interface _UIServiceWebView : UIWebView

{

    _Bool _shouldDecidePolicyRemotely;

    _UIServiceWebViewController *_serviceWebViewController;

}



- (id)_makeAlertView;

- (void)_webView:(id)arg1 dismissViewControllerAnimated:(_Bool)arg2 completion:(id)arg3;

- (_Bool)_webView:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(id)arg4;

@property(nonatomic) _UIServiceWebViewController *serviceWebViewController; // @synthesize serviceWebViewController=_serviceWebViewController;

@property(nonatomic) _Bool shouldDecidePolicyRemotely; // @synthesize shouldDecidePolicyRemotely=_shouldDecidePolicyRemotely;

- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;



@end


