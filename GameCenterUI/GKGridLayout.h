/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewLayout.h"



@class GKCollectionViewDataSource, GKCollectionViewLayoutAttributes, GKDataSourceMetrics, GKSectionMetrics, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet;



@interface GKGridLayout : UICollectionViewLayout

{

    struct __CFDictionary *_sectionToPresentationData;

    struct __CFDictionary *_sectionToMetricData;

    _Bool _hideSearchBarOnAppear;

    _Bool _hideAboveSegmentOnAppear;

    _Bool _noMoreShowMore;

    _Bool _movedItemsInUpdateCarrySections;

    _Bool _displayClipView;

    _Bool _displayingOverlay;

    unsigned long long _portraitInterleavedSectionsCount;

    unsigned long long _landscapeInterleavedSectionsCount;

    NSSet *_visibleIndexPathsFilter;

    GKSectionMetrics *_defaultSectionMetricsInternal;

    GKDataSourceMetrics *_dataSourceMetrics;

    double _hiddenSearchBarOffset;

    double _segmentedHeaderPinningOffset;

    NSMutableArray *_laidOutAttributes;

    NSMutableOrderedSet *_laidOutPinnableAttributes;

    NSMutableDictionary *_indexPathToSupplementary;

    NSMutableDictionary *_indexPathToDecoration;

    NSMutableDictionary *_indexPathToItem;

    NSMutableDictionary *_oldIndexPathToSupplementary;

    NSMutableDictionary *_oldIndexPathToDecoration;

    NSMutableDictionary *_oldIndexPathToItem;

    NSMutableDictionary *_indexPathToMetrics;

    NSMutableSet *_revealedIndexPaths;

    NSIndexPath *_indexPathOfTouchedShowMore;

    NSMutableDictionary *_keyToMetricData;

    NSMutableDictionary *_oldSectionToMetricKeys;

    long long _metricsInvalidationCount;

    NSArray *_currentUpdateItems;

    NSMutableSet *_knownSupplementaryKinds;

    GKCollectionViewDataSource *_dataSourceForUpdate;

    unsigned long long _updateType;

    GKCollectionViewLayoutAttributes *_clipViewAttributes;

    unsigned long long _invalidationFlags;

    struct CGSize _laidOutContentSize;

    struct CGSize _oldLaidOutContentSize;

}



+ (Class)invalidationContextClass;

+ (Class)layoutAttributesClass;

- (id)_animationForReusableView:(SEL)arg1 toLayoutAttributes:(id)arg2 type:(id)arg3;

- (_Bool)_areWePortrait;

- (void)_filterPinnedAttributes;

- (id)_gkDescriptionWithChildren:(int)arg1;

- (unsigned long long)_prepareItemLayoutForSection:(long long)arg1;

- (long long)_prepareOverlayLayoutForSection:(long long)arg1 offset:(long long)arg2;

- (long long)_prepareSupplementaryLayoutForSection:(long long)arg1 atLocation:(unsigned long long)arg2 offset:(long long)arg3 globalOffset:(long long *)arg4;

- (void)_resetState;

- (struct CGSize)_sizeAdjustedForTabBarSettingsBasedOnSize:(struct CGSize)arg1;

- (double)applyBottomPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;

- (double)applyTopPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;

- (void)calculateCollectionViewContentSize;

- (double)calculatedBottomPaddingForSection:(long long)arg1;

@property(retain, nonatomic) GKCollectionViewLayoutAttributes *clipViewAttributes; // @synthesize clipViewAttributes=_clipViewAttributes;

- (struct CGSize)collectionViewContentSize;

- (unsigned long long)currentMaxVisibleItemCountForSection:(long long)arg1;

@property(retain, nonatomic) NSArray *currentUpdateItems; // @synthesize currentUpdateItems=_currentUpdateItems;

@property(retain, nonatomic) GKCollectionViewDataSource *dataSourceForUpdate; // @synthesize dataSourceForUpdate=_dataSourceForUpdate;

@property(retain, nonatomic) GKDataSourceMetrics *dataSourceMetrics; // @synthesize dataSourceMetrics=_dataSourceMetrics;

- (void)dealloc;

@property(retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // @synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal;

- (void)disableClipView;

@property(nonatomic) _Bool displayClipView; // @synthesize displayClipView=_displayClipView;

@property(nonatomic) _Bool displayingOverlay; // @synthesize displayingOverlay=_displayingOverlay;

- (void)enableClipView;

- (unsigned long long)filteredTotalItemCountForSection:(long long)arg1;

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;

- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg1;

- (void)finalizeAnimatedBoundsChange;

- (void)finalizeCollectionViewUpdates;

- (void)finalizeGlobalPresentationDataWithSectionRange:(struct _NSRange)arg1;

- (void)finalizePinnedAttributes:(id)arg1 forSection:(long long)arg2 footer:(_Bool)arg3;

- (id)firstVisibleIndexAtOrAfterItem:(long long)arg1 itemCount:(long long)arg2 inSection:(long long)arg3;

- (void)forceFullInvalidate;

- (void)fullyRebuildLayout;

@property(nonatomic) double hiddenSearchBarOffset; // @synthesize hiddenSearchBarOffset=_hiddenSearchBarOffset;

@property(nonatomic) _Bool hideAboveSegmentOnAppear; // @synthesize hideAboveSegmentOnAppear=_hideAboveSegmentOnAppear;

@property(nonatomic) _Bool hideSearchBarOnAppear; // @synthesize hideSearchBarOnAppear=_hideSearchBarOnAppear;

- (long long)indexOfSupplementaryMetricsOfKind:(id)arg1 inList:(id)arg2;

@property(retain, nonatomic) NSIndexPath *indexPathOfTouchedShowMore; // @synthesize indexPathOfTouchedShowMore=_indexPathOfTouchedShowMore;

@property(retain, nonatomic) NSMutableDictionary *indexPathToDecoration; // @synthesize indexPathToDecoration=_indexPathToDecoration;

@property(retain, nonatomic) NSMutableDictionary *indexPathToItem; // @synthesize indexPathToItem=_indexPathToItem;

@property(retain, nonatomic) NSMutableDictionary *indexPathToMetrics; // @synthesize indexPathToMetrics=_indexPathToMetrics;

@property(retain, nonatomic) NSMutableDictionary *indexPathToSupplementary; // @synthesize indexPathToSupplementary=_indexPathToSupplementary;

- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;

- (id)init;

- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;

- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg1;

- (void)invalidateLayout;

- (void)invalidateLayoutWithContext:(id)arg1;

- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;

@property(nonatomic) unsigned long long invalidationFlags; // @synthesize invalidationFlags=_invalidationFlags;

@property(retain, nonatomic) NSMutableDictionary *keyToMetricData; // @synthesize keyToMetricData=_keyToMetricData;

@property(retain, nonatomic) NSMutableSet *knownSupplementaryKinds; // @synthesize knownSupplementaryKinds=_knownSupplementaryKinds;

@property(retain, nonatomic) NSMutableArray *laidOutAttributes; // @synthesize laidOutAttributes=_laidOutAttributes;

@property(nonatomic) struct CGSize laidOutContentSize; // @synthesize laidOutContentSize=_laidOutContentSize;

@property(retain, nonatomic) NSMutableOrderedSet *laidOutPinnableAttributes; // @synthesize laidOutPinnableAttributes=_laidOutPinnableAttributes;

@property(nonatomic) unsigned long long landscapeInterleavedSectionsCount; // @synthesize landscapeInterleavedSectionsCount=_landscapeInterleavedSectionsCount;

- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

- (id)layoutAttributesForItemAtIndexPath:(id)arg1;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (double)layoutBottomPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;

- (double)layoutTopPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;

- (id)metricDataForKey:(id)arg1;

- (id)metricDataForSection:(long long)arg1;

- (id)metricsForSection:(long long)arg1;

@property(nonatomic) long long metricsInvalidationCount; // @synthesize metricsInvalidationCount=_metricsInvalidationCount;

@property(nonatomic) _Bool movedItemsInUpdateCarrySections; // @synthesize movedItemsInUpdateCarrySections=_movedItemsInUpdateCarrySections;

@property(nonatomic) _Bool noMoreShowMore; // @synthesize noMoreShowMore=_noMoreShowMore;

@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToDecoration; // @synthesize oldIndexPathToDecoration=_oldIndexPathToDecoration;

@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToItem; // @synthesize oldIndexPathToItem=_oldIndexPathToItem;

@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToSupplementary; // @synthesize oldIndexPathToSupplementary=_oldIndexPathToSupplementary;

@property(nonatomic) struct CGSize oldLaidOutContentSize; // @synthesize oldLaidOutContentSize=_oldLaidOutContentSize;

@property(retain, nonatomic) NSMutableDictionary *oldSectionToMetricKeys; // @synthesize oldSectionToMetricKeys=_oldSectionToMetricKeys;

@property(nonatomic) unsigned long long portraitInterleavedSectionsCount; // @synthesize portraitInterleavedSectionsCount=_portraitInterleavedSectionsCount;

- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;

- (void)prepareForCollectionViewUpdates:(id)arg1;

- (void)prepareForMovingItemsCarryingSections;

- (void)prepareForUpdate:(unsigned long long)arg1 inDataSource:(id)arg2;

- (void)prepareLayout;

- (id)presentationDataForSection:(long long)arg1;

- (void)refreshMetrics;

- (void)resetPinnableAttributes;

- (id)revealMoreForSectionIndex:(long long)arg1;

- (id)revealMoreForSectionIndex:(long long)arg1 revealCount:(unsigned long long)arg2 andDeleteItemCount:(unsigned long long)arg3;

@property(retain, nonatomic) NSMutableSet *revealedIndexPaths; // @synthesize revealedIndexPaths=_revealedIndexPaths;

- (id)sectionsOverlappingYOffset:(double)arg1;

- (unsigned long long)sectionsPerRow;

@property(nonatomic) double segmentedHeaderPinningOffset; // @synthesize segmentedHeaderPinningOffset=_segmentedHeaderPinningOffset;

- (void)setMetricData:(id)arg1 forSection:(long long)arg2;

@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;

@property(nonatomic) NSSet *visibleIndexPathsFilter; // @synthesize visibleIndexPathsFilter=_visibleIndexPathsFilter;

- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

- (_Bool)shouldSlideInSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;

- (_Bool)shouldSlideOutSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

- (void)updatePlaceholderVisibility:(_Bool)arg1;

- (void)updatePresentationDataForLastInterleavedSections;

- (void)updatePresentationDataInSection:(long long)arg1 withAttributes:(id)arg2 supplementaryLocation:(unsigned long long)arg3;

- (double)yOffsetForSection:(long long)arg1;

- (double)yOffsetForSlidingUpdate;



@end


