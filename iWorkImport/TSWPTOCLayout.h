/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPShapeLayout.h"


@class TSWPTOCLayoutHint;



__attribute__((visibility("hidden")))

@interface TSWPTOCLayout : TSWPShapeLayout

{

    TSWPTOCLayoutHint *_hint;

    unsigned long long _initialCharIndex;

    struct CGSize _maxSize;

}



- (id).cxx_construct;

- (struct CGSize)adjustedInsets;

- (_Bool)alwaysStartsNewTarget;

- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;

- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;

- (struct CGRect)boundsForStandardKnobs;

- (id)childSearchTargets;

- (unsigned long long)columnCount;

- (id)computeLayoutGeometry;

- (void)dealloc;

- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@property(readonly, nonatomic) TSWPTOCLayoutHint *hint;

- (id)initWithInfo:(id)arg1;

- (id)initWithInfo:(id)arg1 initialCharIndex:(unsigned long long)arg2 maxSize:(struct CGSize)arg3;

@property(readonly, nonatomic) unsigned long long initialCharIndex; // @synthesize initialCharIndex=_initialCharIndex;

- (void)invalidateForAutosizingTextLayout:(id)arg1;

@property(readonly, nonatomic, getter=isLastLayoutInTOC) _Bool lastLayoutInTOC;

- (id)layoutMargins;

- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id)arg3;

- (double)maxAutoGrowHeightForTextLayout:(id)arg1;

@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;

- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;

- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;

- (Class)repClassForTextLayout:(id)arg1;

- (_Bool)shrinkTextToFit;

- (int)verticalAlignmentForTextLayout:(id)arg1;

- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;



@end


