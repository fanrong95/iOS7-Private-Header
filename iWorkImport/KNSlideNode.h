/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSCEResolverContainer.h"

#import "TSKDocumentObject.h"

#import "TSKModel.h"

#import "TSKSearchTarget.h"



@class KNAbstractSlide, NSArray, NSDictionary, NSMutableDictionary, NSString, TSPLazyReference;



__attribute__((visibility("hidden")))

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer>

{

    TSPLazyReference *mSlideReference;

    NSArray *mChildren;

    KNSlideNode *mParent;

    NSMutableDictionary *mThumbnails;

    _Bool mThumbnailsAreDirty;

    _Bool mIsHidden;

    _Bool mIsCollapsed;

    _Bool mIsCollapsedInOutlineView;

    _Bool mHasBodyInOutlineView;

    _Bool mHasTransition;

    _Bool mHasNote;

    _Bool mSlideNumberVisible;

    unsigned long long mSlideSpecificHyperlinksCount;

    NSString *mClassicUniqueID;

    NSString *mUniqueIdentifier;

    NSString *mCopiedFromSlideIdentifier;

    unsigned long long mEventCount;

    unsigned int mTableNameCounter;

}



+ (id)lastSlideUnderSlideNode:(id)arg1;

+ (id)nodesAndDescendantsForNodes:(id)arg1;

+ (id)nodesAndDescendantsForNodes:(id)arg1 includeSkippedSlideNodes:(_Bool)arg2 includingCollapsedSlideNodes:(_Bool)arg3;

+ (id)p_nextAfterSlideNode:(id)arg1;

+ (id)p_previousToSlideNode:(id)arg1;

+ (id)parentSlideNodeForInfo:(id)arg1;

+ (id)slideNodeForSelectionModel:(id)arg1 withSelection:(id)arg2;

- (void)addThumbnail:(id)arg1 atSize:(struct CGSize)arg2;

- (id)childEnumerator;

- (id)childSearchTargets;

@property(retain, nonatomic) NSArray *children;

@property(nonatomic) NSString *classicUniqueID;

@property(retain, nonatomic) NSString *copiedFromSlideIdentifier;

- (id)copyForPasteboard:(id)arg1;

- (void)dealloc;

- (unsigned long long)depth;

- (id)descendants;

- (id)descendantsIncludingSkippedSlideNodes:(_Bool)arg1 includingCollapsedSlideNodes:(_Bool)arg2;

- (void)didLoadSlide:(id)arg1;

@property(readonly, nonatomic) unsigned long long eventCount; // @synthesize eventCount=mEventCount;

- (void)generateNewUniqueIdentifier;

@property(nonatomic) _Bool hasBodyInOutlineView;

@property(readonly, nonatomic) _Bool hasBuilds;

@property(readonly, nonatomic) _Bool hasChildren;

@property(nonatomic) _Bool hasNote;

@property(nonatomic) _Bool hasTransition;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=mIsCollapsed;

@property(nonatomic, getter=isCollapsedInOutlineView) _Bool collapsedInOutlineView;

@property(nonatomic, getter=isHidden) _Bool hidden;

@property(nonatomic) _Bool isSlideNumberVisible;

- (void)loadFromArchive:(const struct SlideNodeArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) KNSlideNode *next;

@property(readonly, nonatomic) KNSlideNode *nextSkippingCollapsed;

@property(readonly, nonatomic) KNSlideNode *nextSkippingHidden;

- (unsigned int)nextUntitledResolverIndex;

- (void)p_addDescendantsToArray:(id)arg1 includeSkippedSlideNodes:(_Bool)arg2 includeCollapsedSlideNodes:(_Bool)arg3;

- (void)p_commonInit;

- (void)p_setEventCount:(unsigned long long)arg1;

@property(nonatomic) KNSlideNode *parent; // @synthesize parent=mParent;

@property(readonly, nonatomic) KNSlideNode *previous;

@property(readonly, nonatomic) KNSlideNode *previousSkippingCollapsed;

@property(readonly, nonatomic) KNSlideNode *previousSkippingHidden;

- (void)removeAllThumbnails;

- (void)removeThumbnailAtSize:(struct CGSize)arg1;

- (id)resolverMatchingName:(id)arg1;

- (_Bool)resolverNameIsUsed:(id)arg1;

- (id)resolversMatchingPrefix:(id)arg1;

- (void)revert;

- (void)saveToArchive:(struct SlideNodeArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(retain, nonatomic) KNAbstractSlide *slide;

@property(nonatomic) unsigned long long slideSpecificHyperlinksCount;

@property(nonatomic) _Bool thumbnailsAreDirty;

@property(readonly, nonatomic) NSDictionary *thumbnails; // @synthesize thumbnails=mThumbnails;

@property(readonly, nonatomic) NSString *uniqueIdentifier;

- (void)uniquifyTableNamesForUpgradeOrImport;

- (void)updateEventCount;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;



@end


