/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SKUIItemCollectionDelegate.h"

#import "SKUIMetricsViewController.h"

#import "SKUISearchRelatedViewDelegate.h"

#import "SKUISearchResultGroupControllerDelegate.h"

#import "UICollectionViewDataSource.h"

#import "UICollectionViewDelegate.h"



@class NSMutableDictionary, NSString, SKUIClientContext, SKUIGiftThemeCollectionView, SKUIItemCollectionController, SKUIMetricsController, SKUISearchPage, SKUISearchRelatedView, SKUISearchResultGroupController;



@interface SKUIIPhoneSearchViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SKUISearchResultGroupControllerDelegate, SKUIItemCollectionDelegate, SKUISearchRelatedViewDelegate, SKUIMetricsViewController>

{

    SKUIClientContext *_clientContext;

    SKUIGiftThemeCollectionView *_collectionView;

    id <SKUISearchChildViewControllerDelegate> _delegate;

    SKUIItemCollectionController *_itemCollectionController;

    NSMutableDictionary *_indexesByItemIndex;

    NSMutableDictionary *_itemIndexesByIndex;

    SKUIMetricsController *_metricsController;

    NSString *_previousRelatedSearchTerm;

    SKUISearchRelatedView *_relatedView;

    SKUISearchPage *_searchPage;

    SKUISearchResultGroupController *_searchResultGroupController;

}



- (void).cxx_destruct;

- (void)_addImpressionWithItemID:(long long)arg1 type:(id)arg2 index:(long long)arg3;

- (long long)_indexForItemIndex:(long long)arg1;

- (id)_itemCollectionController;

- (long long)_itemIndexForIndex:(long long)arg1;

- (void)_noResultsAction:(id)arg1;

- (void)_recordClickEvent:(id)arg1 withCell:(id)arg2;

- (void)_recordClickEventForEditorial:(id)arg1 atIndexPath:(id)arg2;

- (void)_recordClickEventForItem:(id)arg1 atIndexPath:(id)arg2;

- (void)_recordClickEventForItemOffer:(id)arg1 atIndexPath:(id)arg2;

- (void)_recordImpressionEventWithContentOffset:(struct CGPoint)arg1;

- (void)_recordImpressionEventWithIndex:(long long)arg1;

- (void)_reloadScreenshotHeight;

- (void)_reloadView;

- (id)_visibleMetricsImpressionsString;

- (id)activeMetricsController;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;

- (id)contentScrollView;

- (void)dealloc;

@property(nonatomic) __weak id <SKUISearchChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;

- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;

- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;

- (id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;

- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;

- (void)loadView;

@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;

- (long long)numberOfSectionsInCollectionView:(id)arg1;

@property(readonly, nonatomic) NSString *previousRelatedSearchTerm; // @synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm;

- (void)scrollToTop;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

@property(readonly, nonatomic) SKUISearchPage *searchPage; // @synthesize searchPage=_searchPage;

- (void)searchRelatedView:(id)arg1 didSelectRelatedQueryAtIndex:(long long)arg2;

- (void)searchRelatedViewDidSelectBackButton:(id)arg1;

- (void)searchResultGroupController:(id)arg1 didLoadArtworkAtIndex:(unsigned long long)arg2;

- (void)searchResultGroupController:(id)arg1 didLoadEntityAtIndexes:(id)arg2;

- (void)setSearchPage:(id)arg1 previousRelatedSearchTerm:(id)arg2;

- (_Bool)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;



@end


