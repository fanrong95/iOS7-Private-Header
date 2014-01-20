/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


#import "SKUIMissingItemDelegate.h"

#import "SKUIProductPageOverlayDelegate.h"

#import "SKUISwooshViewControllerDelegate.h"



@class SKUILockupSwooshArtworkLoader, SKUILockupSwooshViewController, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUISwooshPageComponent;



@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate>

{

    SKUILockupSwooshArtworkLoader *_artworkLoader;

    SKUIMissingItemLoader *_missingItemLoader;

    SKUIProductPageOverlayController *_overlayController;

    long long _overlaySourceIndex;

    SKUILockupSwooshViewController *_swooshViewController;

}



- (void).cxx_destruct;

- (void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2;

- (id)_artworkLoader;

- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;

- (id)_missingItemLoader;

- (id)_popSourceViewForOverlayController:(id)arg1;

- (id)_swooshViewController;

- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;

- (void)dealloc;

- (id)initWithPageComponent:(id)arg1;

- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;

- (long long)numberOfCells;

- (void)prefetchResourcesWithReason:(long long)arg1;

- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;

- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;

- (void)productPageOverlayDidDismiss:(id)arg1;

- (void)setImage:(id)arg1 forRequest:(id)arg2;

- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;

- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;

- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;

- (void)swooshDidSelectSeeAll:(id)arg1;

- (void)willAppearInContext:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;



@end


