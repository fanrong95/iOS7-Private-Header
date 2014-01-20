/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EDSheet.h"


@class EDCollection, EDColumnInfoCollection, EDMergedCellCollection, EDPane, EDReference, EDRowBlocks, EDWarnings, TSUPointerKeyDictionary;



__attribute__((visibility("hidden")))

@interface EDWorksheet : EDSheet

{

    EDRowBlocks *mRowBlocks;

    EDColumnInfoCollection *mColumnInfos;

    EDCollection *mConditionalFormattings;

    EDCollection *mHyperlinks;

    EDCollection *mTables;

    EDCollection *mPivotTables;

    EDMergedCellCollection *mMergedCells;

    EDPane *mPane;

    EDWarnings *mWorksheetWarnings;

    double mDefaultColumnWidth;

    unsigned short mDefaultRowHeight;

    unsigned long long mMaxRowOutlineLevel;

    unsigned long long mMaxColumnOutlineLevel;

    _Bool mFitToPage;

    EDReference *mMaxCellReferencedInFormulas;

    TSUPointerKeyDictionary *mMergedRows;

    TSUPointerKeyDictionary *mMergedCols;

    EDReference *mImplicitCellArea;

}



- (id)columnInfos;

- (id)conditionalFormattings;

- (double)defaultColumnWidth;

- (unsigned short)defaultRowHeight;

- (_Bool)fitToPage;

- (_Bool)hasMergedCells;

- (_Bool)hasMergedCol;

- (_Bool)hasMergedRow;

- (id)hyperlinks;

- (id)implicitCellArea;

- (_Bool)isColMerged:(unsigned int)arg1;

- (_Bool)isRowMerged:(unsigned int)arg1;

- (id)maxCellReferencedInFormulas;

- (unsigned long long)maxColumnOutlineLevel;

- (unsigned long long)maxRowOutlineLevel;

- (id)mergedCells;

- (id)mergedColRef:(unsigned int)arg1;

- (id)mergedRowRef:(unsigned int)arg1;

- (id)pane;

- (id)pivotTables;

- (void)reduceMemoryIfPossible;

- (id)rowBlocks;

- (void)setDefaultColumnWidth:(double)arg1;

- (void)setDefaultRowHeight:(unsigned short)arg1;

- (void)setFitToPage:(_Bool)arg1;

- (void)setImplicitCellArea:(id)arg1;

- (void)setMaxColumnOutlineLevel:(unsigned long long)arg1;

- (void)setMaxRowOutlineLevel:(unsigned long long)arg1;

- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;

- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;

- (void)setPane:(id)arg1;

- (void)setup;

- (id)tables;

- (void)teardown;

- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1;

- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1;

- (id)worksheetWarnings;



@end


