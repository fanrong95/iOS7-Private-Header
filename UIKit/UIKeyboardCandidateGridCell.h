/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewCell.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateGridCell : UICollectionViewCell

{

    _Bool _dummy;

    _Bool _usesGroupHeaderAppearance;

    _Bool _shouldShowCandidateNumber;

    _Bool _secondaryCandidateAppearance;

    int _candidatesVisualStyle;

    NSString *_text;

    NSString *_alternativeText;

    unsigned long long _candidateNumber;

    unsigned long long _edges;

    double _rowHeight;

    double _rightPadding;

    CDStruct_961fb75c _visualStyling;

    long long _textAlignment;

    double _cellPadding;

    double _minimumWidth;

    struct CGSize _size;

    struct CGSize _candidateNumberSize;

    struct CGRect _visibleBounds;

}



+ (struct CGColor *)legacy_outlineColorForVisualStyling:(CDStruct_961fb75c)arg1 candidatesVisualStyle:(int)arg2;

+ (struct CGColor *)legacy_outlineShadowColorForVisualStyling:(CDStruct_961fb75c)arg1 candidatesVisualStyle:(int)arg2;

+ (id)reuseIdentifier;

+ (double)rightPaddingForIndex;

+ (struct CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;

+ (double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3;

@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;

- (void)applyLayoutAttributes:(id)arg1;

@property(readonly, nonatomic) _Bool canShowCandidateNumber;

@property(nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;

@property(nonatomic) struct CGSize candidateNumberSize; // @synthesize candidateNumberSize=_candidateNumberSize;

@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;

@property(nonatomic) double cellPadding; // @synthesize cellPadding=_cellPadding;

- (void)dealloc;

- (void)drawBackgroundAndBorders;

- (void)drawRect:(struct CGRect)arg1;

- (void)drawText;

- (void)drawTextWithCandidateNumber;

@property(nonatomic) _Bool dummy; // @synthesize dummy=_dummy;

@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;

- (void)prepareForReuse;

@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;

@property(nonatomic) _Bool secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;

- (void)setHighlighted:(_Bool)arg1;

- (void)setSelected:(_Bool)arg1;

@property(nonatomic) _Bool shouldShowCandidateNumber; // @synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber;

@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;

@property(nonatomic) _Bool usesGroupHeaderAppearance; // @synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance;

@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;

@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;



@end


