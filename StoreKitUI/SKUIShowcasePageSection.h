/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


#import "SKUIMissingItemDelegate.h"

#import "SKUIShowcaseDelegate.h"



@class SKUIMissingItemLoader, SKUIShowcasePageComponent, SKUIShowcaseViewController;



@interface SKUIShowcasePageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIShowcaseDelegate>

{

    SKUIMissingItemLoader *_missingItemLoader;

    _Bool _pinned;

    SKUIShowcaseViewController *_showcaseViewController;

}



- (void).cxx_destruct;

- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;

- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;

- (id)_missingItemLoader;

- (id)_showcaseViewController;

- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;

- (double)contentInsetAdjustmentForCollectionView:(id)arg1;

- (void)dealloc;

- (id)initWithPageComponent:(id)arg1;

- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;

- (long long)numberOfCells;

- (id)popPinnedHeaderView;

- (void)prefetchResourcesWithReason:(long long)arg1;

- (void)restorePinnedHeaderView:(id)arg1;

- (void)showcase:(id)arg1 didDisplayItemAtIndex:(long long)arg2;

- (void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;

- (void)willAppearInContext:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) SKUIShowcasePageComponent *pageComponent; // @dynamic pageComponent;



@end

