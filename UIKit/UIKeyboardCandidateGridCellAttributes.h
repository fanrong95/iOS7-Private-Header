/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewLayoutAttributes.h"


@class NSIndexPath;



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes

{

    _Bool _dummy;

    _Bool _groupHeader;

    _Bool _needsPaddingForIndexScrubber;

    _Bool _groupShowsAlternativeText;

    _Bool _secondaryCandidateAppearance;

    int _candidatesVisualStyle;

    NSIndexPath *_candidateIndexPath;

    CDStruct_961fb75c _visualStyling;

    unsigned long long _candidateNumber;

    unsigned long long _rowIndex;

    unsigned long long _edges;

    struct CGSize _rowSize;

}



@property(retain, nonatomic) NSIndexPath *candidateIndexPath; // @synthesize candidateIndexPath=_candidateIndexPath;

@property(nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;

@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(nonatomic) _Bool dummy; // @synthesize dummy=_dummy;

@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;

@property(nonatomic) _Bool groupHeader; // @synthesize groupHeader=_groupHeader;

@property(nonatomic) _Bool groupShowsAlternativeText; // @synthesize groupShowsAlternativeText=_groupShowsAlternativeText;

- (id)init;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool needsPaddingForIndexScrubber; // @synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber;

- (unsigned long long)representedElementCategory;

@property(nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;

@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;

@property(nonatomic) _Bool secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;

@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;



@end

