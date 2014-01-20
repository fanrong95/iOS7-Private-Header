/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIStatusBarForegroundView, UIStatusBarItemView;



__attribute__((visibility("hidden")))

@interface UIStatusBarLayoutManager : NSObject

{

    UIStatusBarForegroundView *_foregroundView;

    int _region;

    UIStatusBarItemView *_itemViews[32];

    _Bool _persistentAnimationsEnabled;

}



- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;

- (struct CGRect)_frameForItemView:(id)arg1 startPosition:(double)arg2;

- (SEL)_itemSortSelector;

- (id)_itemViews;

- (id)_itemViewsSortedForLayout;

- (double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2;

- (void)_positionNewItemViewsWithEnabledItems:(_Bool *)arg1;

- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(_Bool *)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(_Bool *)arg5 itemDisappearing:(_Bool *)arg6;

- (_Bool)_processDelta:(double)arg1 forView:(id)arg2;

- (struct CGRect)_repositionedNewFrame:(struct CGRect)arg1 widthDelta:(double)arg2;

- (double)_startPosition;

- (_Bool)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(_Bool)arg4;

- (id)_viewForItem:(id)arg1;

- (double)_widthNeededForItemView:(id)arg1;

- (void)clearOverlapFromItems:(id)arg1;

- (void)dealloc;

- (double)distributeOverlap:(double)arg1 amongItems:(id)arg2;

@property(nonatomic) UIStatusBarForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;

- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2;

- (_Bool)itemIsVisible:(id)arg1;

- (void)itemView:(id)arg1 widthChangedBy:(double)arg2;

- (void)makeVisibleItemsPerformPendedActions;

@property(nonatomic) _Bool persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;

- (void)positionInvisibleItems;

- (_Bool)prepareDoubleHeightItemWithEnabledItems:(_Bool *)arg1;

- (_Bool)prepareEnabledItems:(_Bool *)arg1 withData:(id)arg2 actions:(int)arg3;

- (struct CGRect)rectForItems:(id)arg1;

- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;

- (void)removeDisabledItems:(_Bool *)arg1;

- (double)removeOverlap:(double)arg1 fromItems:(id)arg2;

- (void)setVisibilityOfAllItems:(_Bool)arg1;

- (void)setVisibilityOfItem:(id)arg1 visible:(_Bool)arg2;

- (_Bool)updateDoubleHeightItem;

- (_Bool)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;

- (double)widthNeededForItem:(id)arg1;

- (double)widthNeededForItems:(id)arg1;



@end


