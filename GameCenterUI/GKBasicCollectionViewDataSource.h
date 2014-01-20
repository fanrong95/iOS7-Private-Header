/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKCollectionViewDataSource.h"


#import "NSCopying.h"



@class NSArray, NSPredicate;



@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying>

{

    NSArray *_items;

    SEL _showAllAction;

    unsigned long long _pageSize;

    NSPredicate *_filterPredicate;

    struct _NSRange _preloadedRange;

}



- (id)_gkDescriptionWithChildren:(int)arg1;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;

- (void)collectionViewDidBecomeInactive:(id)arg1;

- (void)configureCollectionView:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)countOfItems;

- (void)dealloc;

@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;

- (void)getItems:(id **)arg1 range:(struct _NSRange)arg2;

- (id)indexPathsForItem:(id)arg1;

- (id)init;

- (void)insertItems:(id)arg1 atIndexes:(id)arg2;

- (id)itemAtIndexPath:(id)arg1;

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;

- (id)itemsAtIndexes:(id)arg1;

- (long long)numberOfSectionsInCollectionView:(id)arg1;

@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;

- (void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 loadBlock:(id)arg3;

@property(nonatomic) struct _NSRange preloadedRange; // @synthesize preloadedRange=_preloadedRange;

- (void)removeItemAtIndexPath:(id)arg1;

- (void)removeItemsAtIndexes:(id)arg1;

- (void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2;

- (id)sectionTitle;

- (void)setItems:(id)arg1 animated:(_Bool)arg2 complete:(id)arg3;

- (void)setItemsNoNotify:(id)arg1;

@property(nonatomic) SEL showAllAction; // @synthesize showAllAction=_showAllAction;



@end


