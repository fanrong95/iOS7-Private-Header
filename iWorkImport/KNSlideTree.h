/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPContainedObject.h"


@class KNSlideNode, NSArray, NSMutableArray, NSMutableDictionary, TSUPointerKeyDictionary;



__attribute__((visibility("hidden")))

@interface KNSlideTree : TSPContainedObject

{

    KNSlideNode *mRootSlideNode;

    NSMutableArray *mSlideNodeCache;

    NSMutableArray *mDisplayedSlideNodeCache;

    NSMutableDictionary *mSlideNodesForUniqueIdentifiersCache;

    NSMutableDictionary *mSlideNodesForFormulaReferenceNamesCache;

    TSUPointerKeyDictionary *mFormulaReferenceNamesForSlideNodesCache;

}



- (void)addSlideNode:(id)arg1 atDepth:(int)arg2 dolcContext:(id)arg3;

- (unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)arg1 andEventIndex:(unsigned long long)arg2;

- (void)dealloc;

@property(retain, nonatomic) NSArray *displayedSlideNodes; // @synthesize displayedSlideNodes=mDisplayedSlideNodeCache;

- (id)formulaReferenceNameForSlideNode:(id)arg1;

- (unsigned long long)indexOfSlideNode:(id)arg1;

- (id)initWithArchive:(const struct SlideTreeArchive *)arg1 unarchiver:(id)arg2 owner:(id)arg3;

- (id)initWithOwner:(id)arg1;

- (void)insertSlideNode:(id)arg1 intoSlideNode:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4;

- (void)invalidateSlideNameCache;

- (void)moveSlideNode:(id)arg1 inSlideNode:(id)arg2 toIndex:(unsigned long long)arg3;

- (unsigned long long)numberOfSlidesUsingMasterSlide:(id)arg1;

- (id)orderedSlideNodesInSelection:(id)arg1;

- (void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5;

- (void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5 visibleSlidesSoFar:(unsigned long long *)arg6 hiddenSlidesSoFar:(unsigned long long *)arg7;

- (void)p_cacheSlideNodes;

- (void)p_clearSlideNodeCache;

- (void)reloadDisplayedNodes;

- (void)removeAll;

- (void)removeSlideNode:(id)arg1 fromSlideNode:(id)arg2;

@property(retain, nonatomic) KNSlideNode *rootSlideNode;

- (void)saveToArchive:(struct SlideTreeArchive *)arg1 archiver:(id)arg2;

- (void)slideIndex:(unsigned long long *)arg1 andEventIndex:(unsigned long long *)arg2 forByBuildPageIndex:(unsigned long long)arg3;

- (id)slideNamesMatchingPrefix:(id)arg1;

- (id)slideNodeAtIndex:(unsigned long long)arg1 ignoreHiddenNodes:(_Bool)arg2;

- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(_Bool)arg2;

- (id)slideNodeWithUniqueIdentifier:(id)arg1;

@property(readonly, nonatomic) NSArray *slideNodes;

- (unsigned long long)slideNumberForSlideNode:(id)arg1;

- (id)slidesUsingMasterSlide:(id)arg1;

- (id)unhiddenSlideNodeAtIndex:(unsigned long long)arg1;

- (unsigned long long)visiblePageCountIsSeparatedByBuilds:(_Bool)arg1;

@property(readonly, nonatomic) NSArray *visibleSlideNodes;



@end


