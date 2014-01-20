/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIViewController.h"


#import "SKUICategoryControllerDelegate.h"

#import "SKUIMetricsViewController.h"



@class NSURL, SKUICategoryController, SKUIStorePageViewController;



@interface SKUIChartsViewController : SKUIViewController <SKUICategoryControllerDelegate, SKUIMetricsViewController>

{

    SKUICategoryController *_categoryController;

    _Bool _hasCategoryButton;

    SKUIStorePageViewController *_storePageViewController;

    NSURL *_url;

}



+ (id)_defaultURL;

- (void).cxx_destruct;

- (id)_categoryController;

- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;

- (void)_loadCategoriesWithURL:(id)arg1;

- (void)_loadStorePage;

- (void)_reloadNavigationItem;

- (id)_storePageViewController;

- (id)activeMetricsController;

- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;

- (void)dealloc;

- (void)decodeRestorableStateWithCoder:(id)arg1;

- (void)encodeRestorableStateWithCoder:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadView;

- (void)reloadData;

- (void)setClientContext:(id)arg1;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewWillAppear:(_Bool)arg1;



@end


