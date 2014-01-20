/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSDictionary, NSString, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, SKRemoteProductViewController, _UIAsyncInvocation;



@interface SKStoreProductViewController : UIViewController

{

    NSString *_additionalBuyParameters;

    NSString *_affiliateIdentifier;

    _Bool _automaticallyDismisses;

    _UIAsyncInvocation *_cancelRequest;

    NSString *_clientIdentifier;

    id <SKStoreProductViewControllerDelegatePrivate> _delegate;

    id _loadBlock;

    long long _originalStatusBarStyle;

    long long _productPageStyle;

    SKRemoteProductViewController *_remoteViewController;

    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;

    NSDictionary *_scriptContextDictionary;

    _Bool _showsStoreButton;

}



+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id)arg3;

+ (void)getCanLoadURL:(id)arg1 completionBlock:(id)arg2;

+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id)arg3;

- (void)_addRemoteView;

- (void)_didFinish;

- (void)_didFinishWithResult:(long long)arg1;

- (void)_loadDidFinishWithResult:(_Bool)arg1 error:(id)arg2;

- (void)_presentPageWithRequest:(id)arg1 animated:(_Bool)arg2;

- (void)_requestRemoteViewController;

- (void)_resetRemoteViewController;

- (void)_setLoadBlock:(id)arg1;

- (void)_throwUnsupportedPresentationException;

- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;

@property(copy, nonatomic) NSString *additionalBuyParameters; // @synthesize additionalBuyParameters=_additionalBuyParameters;

@property(copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;

@property(nonatomic) _Bool automaticallyDismisses; // @synthesize automaticallyDismisses=_automaticallyDismisses;

@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;

- (void)dealloc;

@property(nonatomic) id <SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(id)arg2;

- (void)loadProductWithParameters:(id)arg1 completionBlock:(id)arg2;

- (void)loadProductWithRequest:(id)arg1 completionBlock:(id)arg2;

- (void)loadProductWithURL:(id)arg1 completionBlock:(id)arg2;

- (void)loadView;

@property(nonatomic) long long productPageStyle; // @synthesize productPageStyle=_productPageStyle;

@property(copy, nonatomic) NSDictionary *scriptContextDictionary; // @synthesize scriptContextDictionary=_scriptContextDictionary;

@property(nonatomic) _Bool showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


