/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UICollectionViewDataSource.h"

#import "UIKeyboardCandidateBarLayoutDelegate.h"

#import "UIKeyboardCandidateList.h"

#import "UIKeyboardCandidateListDelegate.h"



@class NSArray, NSIndexPath, NSString, TIKeyboardCandidateResultSet, UIImageView, UIKBCandidateCollectionView, UIKBThemedView;



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource>

{

    _Bool _canExtend;

    _Bool _shouldSkipLayoutUntilScrollViewAnimationEnds;

    _Bool _didSkipLayout;

    NSString *_inlineText;

    UIImageView *_candidateMaskView;

    id <UIKeyboardCandidateBarDelegate> _delegate;

    double _upArrowWidth;

    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;

    NSArray *_candidateViews;

    unsigned long long _currentCandidateViewIndex;

    UIKBThemedView *_secondaryCandidatesViewEdgeGradient;

    TIKeyboardCandidateResultSet *_candidateResultSet;

    NSArray *_filteredCandidates;

    NSIndexPath *_dragStartNextPageIndexPath;

    NSIndexPath *_dragStartPreviousPageIndexPath;

    id _skippedSetCandidatesBlock;

    struct CGPoint _dragStartOffset;

}



+ (double)defaultCandidateWidth;

+ (double)height;

+ (double)heightForInterfaceOrientation:(long long)arg1;

+ (double)heightForLastRow;

+ (double)heightForRowAtIndex:(unsigned long long)arg1;

+ (double)heightForRowAtIndex:(unsigned long long)arg1 interfaceOrientation:(long long)arg2;

+ (unsigned long long)numberOfRows;

+ (unsigned long long)numberOfRowsForInterfaceOrientation:(long long)arg1;

+ (void)setScreenTraits:(id)arg1;

- (Class)_barCellClassForSection:(long long)arg1;

- (id)_candidateViewForSection:(long long)arg1;

- (void)_clearData;

- (unsigned long long)_countOfItemsInSection:(long long)arg1;

- (double)_emptySpaceForItemsToIndex:(unsigned long long)arg1 inSection:(long long)arg2;

- (id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2;

- (id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1;

- (id)_indexPathForFirstVisibleItem;

- (id)_indexPathForLastVisibleItem;

- (id)_itemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2;

- (id)_nextPageIndexPath;

- (void)_performSkippedLayoutIfNeeded;

- (id)_previousPageIndexPath;

- (void)_reloadData;

- (void)_reloadDataByAppendingAtEnd:(_Bool)arg1 initiallyHiddenCandidatesChanged:(_Bool)arg2;

- (void)_scrollToFirstCandidateInSection:(long long)arg1 withAnimation:(_Bool)arg2;

- (long long)_sectionForSectionIndex:(unsigned long long)arg1 candidateView:(id)arg2;

- (unsigned long long)_sectionIndexForSection:(long long)arg1;

- (void)_showCandidateAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 scrollCellToVisible:(_Bool)arg3 animated:(_Bool)arg4;

- (void)_showPageAtIndexPath:(id)arg1;

- (_Bool)_showingInitiallyHiddenCandidates;

- (void)_stepSelectedCandidateInDirection:(_Bool)arg1;

- (void)_stepSelectedCandidateInDirection:(_Bool)arg1 candidateView:(id)arg2 section:(long long)arg3;

- (void)_updateCanExtendState;

- (void)_updateCandidateViews;

- (double)_widthOfItemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2;

@property(nonatomic) _Bool canExtend; // @synthesize canExtend=_canExtend;

- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;

- (void)candidateBarLayoutDidFinishPreparingLayout;

- (void)candidateListAcceptCandidate:(id)arg1;

@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;

- (void)candidateListSelectionDidChange:(id)arg1;

- (void)candidateListShouldBeDismissed:(id)arg1;

@property(retain, nonatomic) UIImageView *candidateMaskView; // @synthesize candidateMaskView=_candidateMaskView;

@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;

@property(retain, nonatomic) NSArray *candidateViews; // @synthesize candidateViews=_candidateViews;

@property(readonly, nonatomic) TIKeyboardCandidateResultSet *candidates;

- (void)candidatesDidChange;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;

- (unsigned long long)count;

- (id)currentCandidate;

@property(readonly, nonatomic) UIKBCandidateCollectionView *currentCandidateView;

@property(nonatomic) unsigned long long currentCandidateViewIndex; // @synthesize currentCandidateViewIndex=_currentCandidateViewIndex;

- (unsigned long long)currentIndex;

- (void)dealloc;

@property(nonatomic) id <UIKeyboardCandidateBarDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) _Bool didSkipLayout; // @synthesize didSkipLayout=_didSkipLayout;

@property(copy, nonatomic) NSIndexPath *dragStartNextPageIndexPath; // @synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath;

@property(nonatomic) struct CGPoint dragStartOffset; // @synthesize dragStartOffset=_dragStartOffset;

@property(copy, nonatomic) NSIndexPath *dragStartPreviousPageIndexPath; // @synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath;

@property(retain, nonatomic) NSArray *filteredCandidates; // @synthesize filteredCandidates=_filteredCandidates;

- (_Bool)hasCandidates;

- (_Bool)hasNextPage;

- (_Bool)hasPreviousPage;

- (id)initWithFrame:(struct CGRect)arg1;

@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;

- (_Bool)isExtendedList;

- (_Bool)isHiddenCandidatesList;

- (id)keyboardBehaviors;

- (long long)numberOfSectionsInCollectionView:(id)arg1;

- (void)revealHiddenCandidates;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (void)scrollViewDidScroll:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

@property(retain, nonatomic) UIKBThemedView *secondaryCandidatesViewEdgeGradient; // @synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient;

- (unsigned long long)selectedSortIndex;

- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;

- (void)setFrame:(struct CGRect)arg1;

@property(nonatomic) _Bool shouldSkipLayoutUntilScrollViewAnimationEnds; // @synthesize shouldSkipLayoutUntilScrollViewAnimationEnds=_shouldSkipLayoutUntilScrollViewAnimationEnds;

@property(copy, nonatomic) id skippedSetCandidatesBlock; // @synthesize skippedSetCandidatesBlock=_skippedSetCandidatesBlock;

- (void)setUIKeyboardCandidateListDelegate:(id)arg1;

@property(nonatomic) double upArrowWidth; // @synthesize upArrowWidth=_upArrowWidth;

- (void)showCandidate:(id)arg1;

- (void)showCandidateAtIndex:(unsigned long long)arg1;

- (void)showNextCandidate;

- (void)showNextPage;

- (void)showNextRow;

- (void)showPreviousCandidate;

- (void)showPreviousPage;

- (void)showPreviousRow;

- (struct CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;

- (id)statisticsIdentifier;



@end

