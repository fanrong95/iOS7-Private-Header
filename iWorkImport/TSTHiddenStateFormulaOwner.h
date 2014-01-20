/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSCEFormulaOwning.h"



@class NSMutableArray, NSObject<OS_dispatch_queue>, TSCECalculationEngine, TSTTableFilterSet, TSTTableInfo;



__attribute__((visibility("hidden")))

@interface TSTHiddenStateFormulaOwner : TSPObject <TSCEFormulaOwning>

{

    struct __CFUUID *mOwnerID;

    TSTTableInfo *mTableInfo;

    TSCECalculationEngine *mCalculationEngine;

    struct vector<std::__1::pair<unsigned short, bool>, std::__1::allocator<std::__1::pair<unsigned short, bool>>> mPendingComputedShowRowResults;

    NSObject<OS_dispatch_queue> *mPendingComputedShowRowResultsQueue;

    vector_764b4ef2 mCellRangesToInvalidate;

    vector_eef16772 mHiddenRowIndices;

    TSTTableFilterSet *mRewrittenFilterSet;

    NSMutableArray *mThresholdCellValues;

    _Bool mNeedsToUpdateFilterSetForImport;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;

- (id)calculationEngine;

- (CDStruct_78b871e1)cellReferenceForIndex:(unsigned short)arg1;

- (void)dealloc;

- (void)dirtyFilterState;

- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;

- (void)filterSetUpdated;

- (void)hiddenStateChangedForIndex:(unsigned short)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;

- (void)invalidateForCalculationEngine:(id)arg1;

- (struct __CFUUID *)ownerID;

- (void)p_registerAllFormulaToCalculationEngine;

- (void)p_removeAllFormulaFromCalculationEngine;

- (CDStruct_5744d895)rangeReferenceFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2;

- (CDStruct_365fa376)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;

- (int)registerWithCalculationEngineChoosingUniqueID:(id)arg1;

- (void)releaseForCalculationEngine:(id)arg1;

- (void)retainForCalculationEngine:(id)arg1;

- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;

- (void)saveToArchiver:(id)arg1;

- (void)setOwnerID:(struct __CFUUID *)arg1;

- (void)setTableInfo:(id)arg1;

- (id)tableInfo;

- (void)writeResultsForCalculationEngine:(id)arg1;



@end


