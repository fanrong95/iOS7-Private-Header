/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol PUSectionedGridLayoutDelegate <NSObject>



@optional

- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;

- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(_Bool)arg2;

- (void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;

- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(_Bool)arg2;

- (long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2;

- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;

- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;

- (id)sectionedGridLayoutName:(id)arg1;

- (_Bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;

@end


