/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIViewController.h"


#import "SKUIItemListTableDelegate.h"



@class SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, UIBarButtonItem, _UIBackdropView, _UIContentUnavailableView;



@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate>

{

    _UIBackdropView *_backdropView;

    id <SKUIWishlistDelegate> _delegate;

    UIBarButtonItem *_deleteButton;

    _Bool _editing;

    _UIContentUnavailableView *_emptyWishlistView;

    SKUIItemListTableViewController *_itemListViewController;

    _Bool _reloadOnNextAppear;

    SKUISyncWishlistOperation *_syncOperation;

    SKUIWishlist *_wishlist;

    long long _wishlistState;

}



+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;

- (void).cxx_destruct;

- (void)_deleteAction:(id)arg1;

- (void)_deleteItemsAtIndexPaths:(id)arg1;

- (void)_destroyEmptyWishlistView;

- (void)_doneAction:(id)arg1;

- (id)_emptyWishlistView;

- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;

- (void)_finishSyncWithResult:(_Bool)arg1 didChange:(_Bool)arg2 error:(id)arg3;

- (_Bool)_isEditingEnabled;

- (id)_itemListViewController;

- (void)_reloadChildView;

- (void)_reloadForAccountsChanged;

- (void)_reloadNavigationBarAnimated:(_Bool)arg1;

- (void)_reloadWishlist;

- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_signInAction:(id)arg1;

- (void)_syncWishlist;

- (void)_toggleEditAction:(id)arg1;

- (void)_updateDeleteButton;

- (id)_wishlist;

- (void)_wishlistDidChangeNotification:(id)arg1;

- (long long)_wishlistState;

- (id)contentScrollView;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIWishlistDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;

- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;

- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;

- (void)loadView;

- (void)setClientContext:(id)arg1;

- (void)viewDidLayoutSubviews;

- (void)viewWillAppear:(_Bool)arg1;



@end


