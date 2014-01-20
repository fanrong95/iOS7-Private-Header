/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUViewController.h"


#import "SKStoreProductViewControllerDelegatePrivate.h"

#import "SKUIIPhoneProductPageDelegate.h"



@class SKStoreProductViewController, SKUIIPhoneProductPageViewController, SKUIStorePageViewController, UIViewController;



@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate>

{

    UIViewController *_activeChildViewController;

    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;

    SKStoreProductViewController *_remoteProductViewController;

    SKUIStorePageViewController *_storePageViewController;

}



- (void)_loadClientContextWithCompletionBlock:(id)arg1;

- (void)_setActiveChildViewController:(id)arg1;

- (void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2;

- (void)_showProductPageWithPageDictionary:(id)arg1;

- (void)_showRemoteViewControllerWithPageDictionary:(id)arg1;

- (void)_showStorePageWithPageDictionary:(id)arg1;

- (void)dealloc;

- (void)dismissAnimated:(_Bool)arg1;

- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;

- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;

- (id)initWithSection:(id)arg1;

- (void)loadView;

- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;

- (void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(_Bool)arg3;

- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;



@end


