/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


#import "SKUIFlowcaseDelegate.h"

#import "SKUIMissingItemDelegate.h"



@class SKUIFlowcaseArtworkLoader, SKUIFlowcaseComponent, SKUIFlowcaseViewController, SKUIMissingItemLoader;



@interface SKUIFlowcasePageSection : SKUIStorePageSection <SKUIFlowcaseDelegate, SKUIMissingItemDelegate>

{

    SKUIFlowcaseArtworkLoader *_artworkLoader;

    SKUIFlowcaseViewController *_flowCaseViewController;

    SKUIMissingItemLoader *_missingItemLoader;

    _Bool _pinned;

    long long _rotationInterfaceOrientation;

}



- (void).cxx_destruct;

- (void)_addVisibleImpressionsToSession:(id)arg1;

- (id)_artworkLoader;

- (id)_flowCaseViewController;

- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;

- (id)_missingItemLoader;

- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (void)dealloc;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)flowcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;

- (id)flowcase:(id)arg1 imageForItem:(id)arg2 index:(long long)arg3 orientation:(long long)arg4;

- (void)flowcaseDidChangeVisibleViews:(id)arg1;

- (id)initWithPageComponent:(id)arg1;

- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;

- (long long)numberOfCells;

- (id)popPinnedHeaderView;

- (void)prefetchResourcesWithReason:(long long)arg1;

- (void)restorePinnedHeaderView:(id)arg1;

- (void)willAppearInContext:(id)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



// Remaining properties

@property(readonly, nonatomic) SKUIFlowcaseComponent *pageComponent; // @dynamic pageComponent;



@end


