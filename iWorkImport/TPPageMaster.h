/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TPHeaderFooterProvider.h"

#import "TPMasterDrawableProvider.h"

#import "TSKDocumentObject.h"

#import "TSKModel.h"

#import "TSPCopying.h"



@class NSArray, NSMutableArray, TPDocumentRoot, TPSection, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TPPageMaster : TSPObject <TPHeaderFooterProvider, TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying>

{

    TPDocumentRoot *_documentRoot;

    TPSection *_section;

    TSWPStorage *_headerFooters[2][3];

    NSMutableArray *_masterDrawables;

}



- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(_Bool)arg4;

- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(_Bool)arg4;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (id)childEnumerator;

- (id)copyWithContext:(id)arg1;

- (unsigned long long)countOfMasterDrawables;

- (void)dealloc;

- (id)description;

- (double)footerHeight;

- (id)getMergedHeaderFooter:(int)arg1;

- (id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;

- (id)headerFooterFragmentEnumerator;

- (int)headerFooterTypeForModel:(id)arg1;

- (int)headerFragmentIndexForModel:(id)arg1;

- (double)headerHeight;

- (void)i_addMasterDrawable:(id)arg1;

- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2;

- (void)i_createHeadersFooters:(int)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 context:(id)arg4 mayAlreadyExist:(_Bool)arg5;

- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3;

- (void)i_importHeaderFooter:(id)arg1 headerType:(int)arg2 dolcContext:(id)arg3 splitHeaders:(_Bool)arg4;

- (void)i_setDocumentRoot:(id)arg1;

- (void)i_setHeaderFooter:(int)arg1 storage:(id)arg2 fragmentIndex:(int)arg3;

- (void)i_splitHeaderFooter:(id)arg1 storages:(id *)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;

- (unsigned long long)indexOfMasterDrawable:(id)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithSection:(id)arg1;

- (_Bool)isHeaderFooterEmpty:(int)arg1;

- (_Bool)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;

@property(readonly, nonatomic) NSArray *masterDrawables;

- (id)masterDrawablesSortedByZOrder:(id)arg1;

- (_Bool)ownsModelObject:(id)arg1;

- (_Bool)pAppendHeaderFooterFragment:(id)arg1 paragraph:(unsigned long long)arg2 toCompositHeaderFooter:(id)arg3 segment:(unsigned long long)arg4 lastSegmentInserted:(unsigned long long)arg5 themeParStyle:(id)arg6 otherHFStyles:(id)arg7;

- (void)pApplyParagraphStyle:(id)arg1 toHFFragment:(id)arg2;

- (id)pHFParagraphStyleWithPropertiesFromStyle:(id)arg1 baseStyle:(id)arg2 otherHFStyles:(id)arg3;

- (double)pHeightOfHeaderFooter:(int)arg1;

- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg1 index:(int)arg2 stylesheet:(id)arg3;

- (id)p_headerAndFooterStorages;

- (int)p_headerFragmentIndexForTabIndex:(unsigned int)arg1 paragraphStyle:(id)arg2 bodyWidth:(double)arg3;

- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2;

- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;

- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;

- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2;

- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;

- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;

- (void)p_splitHeaderFooterByTabs:(id)arg1 storages:(id *)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;

- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(_Bool)arg2;

- (void)saveToArchiver:(id)arg1;

@property(nonatomic) TPSection *section; // @synthesize section=_section;

- (void)setParentStorage:(id)arg1;

- (_Bool)usesSingleHeaderFooter;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;



@end


