/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSConditionLock, NSDate, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, TSCENamedReferenceManager, TSKAccessController, TSKChangeGroup, TSKChangeNotifier;



__attribute__((visibility("hidden")))

@interface TSCECalculationEngine : TSPObject

{

    TSKAccessController *mAccessController;

    TSKChangeNotifier *mChangeNotifier;

    struct TSCEDependencyTracker *mDependencyTracker;

    int mXLImportDateMode;

    NSString *mPreviousLocaleIdentifier;

    NSDate *mCurrentDate;

    int mRecalculationThreadState;

    struct _opaque_pthread_t *mRecalculationThread;

    _Bool mShouldCancelRecalculationThread;

    unsigned int mCalculationPauseCount;

    NSObject<OS_dispatch_group> *mRecalcDispatchGroup;

    int mRecalcDispatchGroupSize;

    NSObject<OS_dispatch_semaphore> *mModifiedOwnersSem;

    struct __CFSet *mModifiedOwnersInThisRecalcCycle;

    _Bool mShouldRefillRecalcQueue;

    struct __CFDictionary *mReferenceResolvers;

    struct __CFDictionary *mLegacyGlobalIDStringToOwnerIDDictionary;

    struct hash_set<TSCECellReference, TSCECellReferenceHash, TSCECellReferenceEqual, std::__1::allocator<TSCECellReference>> mPendingDirtyCells;

    unsigned int mBatchingDirtyCellMarkingLevel;

    NSMutableArray *mCalculationStateObservers;

    unsigned long long mSuppressWillModifyCallsLevel;

    NSConditionLock *mRecalculationInProgressConditionLock;

    unsigned long long mNumberOfFormulas;

    TSCENamedReferenceManager *mNamedReferenceManager;

    TSKChangeGroup *mPendingChangesForAsyncNotification;

    NSObject<OS_dispatch_queue> *mWriteMutualExclusionQueue;

    _Bool mDirtyAllFormulasInDocumentDidLoad;

}



+ (id)allLocalizedFunctions;

+ (id)functionLocalizationDictionary;

+ (id)functionNameForLocalizedString:(id)arg1;

+ (void)loadLocalizedStrings;

+ (id)localizedCategoryArray;

+ (id)localizedCategoryForFunction:(id)arg1;

+ (id)localizedFalseString;

+ (id)localizedFalseStrings;

+ (id)localizedFunctionCategoryDictionary;

+ (id)localizedFunctionNameForMenuTag:(int)arg1;

+ (id)localizedModeNameForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;

+ (id)localizedModeToolTipForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;

+ (id)localizedNameForArgument:(short)arg1 ofFunction:(id)arg2;

+ (id)localizedNameForFunction:(id)arg1;

+ (id)localizedNamesForFunctions:(id)arg1;

+ (_Bool)localizedStringIsFalse:(id)arg1;

+ (_Bool)localizedStringIsTrue:(id)arg1;

+ (id)localizedToolTipForArgument:(short)arg1 ofFunction:(id)arg2;

+ (id)localizedToolTipForFunction:(id)arg1;

+ (id)localizedTrueString;

+ (id)localizedTrueStrings;

+ (id)localizedTypeStringForArgumentType:(int)arg1;

+ (void)setTableReferenceInterfaceObject:(struct TSCETableReferenceInterface *)arg1;

+ (id)supportedFunctions;

- (id).cxx_construct;

- (void).cxx_destruct;

- (id)accessController;

- (void)addCalculationStateObserver:(id)arg1;

- (void)addFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2 precedentIterator:(void *)arg3 userData:(void *)arg4 hasRandomVolatileFunctions:(_Bool *)arg5;

- (id)allCellDependenciesAsString;

- (_Bool)allCellsAreClean;

- (void)allFunctionsAreDirty;

- (id)allOwnerIDs;

- (_Bool)allOwnersRegistered;

- (id)allSpanningDependenciesAsString;

- (id)allWholeOwnerDependenciesAsString;

- (void)applicationDidBecomeActive:(id)arg1;

- (void)applicationWillResignActive:(id)arg1;

- (void)assertAllDirtyCellsAreOnLeafStack;

- (void)assertDirtyPrecedentsCountConsistency;

- (void)beginBatchingDirtyCellMarking;

- (void)beginSuppressingWillModifyCalls;

- (void)blockUntilRecalcIsCompleteOnNewThreadUntilDate:(id)arg1;

- (void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1;

- (_Bool)cellContainsAFormula:(CDStruct_78b871e1 *)arg1;

- (CDStruct_0441cfb5)cellCoordForCellHandle:(CDStruct_0441cfb5)arg1 inTable:(struct __CFUUID *)arg2;

- (hash_set_d1f8f196)cellCoordinatesNeedingExcelImportForTable:(struct __CFUUID *)arg1;

- (CDStruct_0441cfb5)cellHandleForCellCoord:(CDStruct_0441cfb5)arg1 inTable:(struct __CFUUID *)arg2;

- (struct)cellHandleRangeForRangeCoord:(struct)arg1 inTable:(struct __CFUUID *)arg2;

- (_Bool)cellIsInACycle:(CDStruct_78b871e1 *)arg1;

- (void)cellReferenceIsDirty:(const CDStruct_78b871e1 *)arg1;

- (id)changeNotifier;

- (void)clearLegacyGlobalIDs;

- (void)compassVolatileFunctionsAreDirty;

- (id)currentDate;

- (void)dealloc;

- (unsigned int)delayedArchivingPriority;

- (void)detectAndRepairConsistencyViolations;

- (int)dirtyCellCount;

- (int)dirtyCellCountInOwner:(struct __CFUUID *)arg1;

- (void)documentDidLoad;

- (id)documentRoot;

- (void)endBatchingDirtyCellMarking;

- (void)endSuppressingWillModifyCalls;

- (id)escapedStringForRangeReference:(CDStruct_5744d895)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4 forceEscaping:(_Bool)arg5;

- (id)escapedStringForRangeReference:(CDStruct_5744d895)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4 forceEscaping:(_Bool)arg5;

- (void)evaluateNextFormula;

- (void)executeBlockWhileCalculationEngineIsNotWriting:(id)arg1;

- (int)forwardRegisterOwnerWithOwnerID:(struct __CFUUID *)arg1 legacyGlobalID:(id)arg2;

- (void)geometryVolatileFunctionsAreDirtyInOwner:(struct __CFUUID *)arg1;

- (void)headerStateOfTableChanged:(struct __CFUUID *)arg1 changeIsForColumns:(_Bool)arg2;

- (void)indirectCallsAreDirty;

- (id)init;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (void)invalidateAfterRecalc;

- (_Bool)isCellReferenceDirty:(CDStruct_78b871e1 *)arg1;

- (void)localeVolatileFunctionsAreDirty;

- (void)locationVolatileFunctionsAreDirty;

- (id)namedReferenceManager;

- (unsigned long long)numberOfCellsWithFormulas;

- (struct __CFUUID *)ownerIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(_Bool)arg2;

- (void)ownerIsDirty:(struct __CFUUID *)arg1;

- (_Bool)ownerIsRegistered:(struct __CFUUID *)arg1;

- (void)p_addApplicationNotification;

- (void)p_enqueueTaskForCell:(CDStruct_78b871e1)arg1;

- (void)p_recalcOneCellHoldingReadLock:(CDStruct_78b871e1)arg1 formulaOwner:(id)arg2 hasExistingCalculatedPrecedents:(_Bool)arg3 isInACycle:(_Bool)arg4;

- (CDStruct_78b871e1)p_refillRecalcQueue;

- (void)p_removeApplicationNotification;

- (id)p_stringForRangeReference:(CDStruct_5744d895)arg1 hostTableID:(struct __CFUUID *)arg2 contextSheetName:(id)arg3 stickyBits:(unsigned char)arg4 isRangeWithFunction:(_Bool)arg5 quoteComponents:(_Bool)arg6 forceEscaping:(_Bool)arg7;

- (id)packageLocator;

- (CDStruct_0441cfb5)parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(id)arg2 outStickyBits:(char *)arg3 gettingReferencesMatchingInputAsPrefix:(id *)arg4;

- (CDStruct_5744d895)parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id *)arg4 gettingSpecifiedTableName:(id *)arg5 gettingRest:(id *)arg6 gettingReferencesMatchingInputAsPrefix:(id *)arg7 gettingStickyBits:(char *)arg8 filterColons:(_Bool)arg9 referenceIsComplete:(_Bool)arg10;

- (CDStruct_5744d895)parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id *)arg6 gettingStickyBits:(char *)arg7 filterColons:(_Bool)arg8 referenceIsComplete:(_Bool)arg9;

- (CDStruct_5744d895)parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(id)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(id)arg4 defaultResolver:(id)arg5 outStickyBits:(char *)arg6 gettingReferencesMatchingInputAsPrefix:(id *)arg7 requireFullMatches:(_Bool)arg8 filterColons:(_Bool)arg9;

- (void)pauseRecalculation;

- (hash_set_946ba02d)precedentsOfCell:(CDStruct_78b871e1)arg1;

- (int)preferredDispatchQueueSize;

- (id)previousLocaleIdentifier;

- (void)randomVolatileFunctionsAreDirty;

- (struct)rangeCoordForCellHandleRange:(struct)arg1 inTable:(struct __CFUUID *)arg2;

- (_Bool)rangeIsWithinTable:(CDStruct_5744d895)arg1;

- (void)rangeReferenceIsDirty:(CDStruct_5744d895 *)arg1;

- (_Bool)recalcHoldingReadLock;

- (void)recalcHoldingWriteLock;

- (void)recalculateWithTimeout:(double)arg1;

- (_Bool)recalculationIsPaused;

- (_Bool)referenceIsValid:(CDStruct_5744d895)arg1;

- (_Bool)referenceWasGuaranteedCleanAtRecalcCycleStart:(CDStruct_39788696)arg1;

- (int)registerOwnerWithOwnerID:(struct __CFUUID *)arg1 owner:(id)arg2 referenceResolver:(id)arg3;

- (void)removeAllFormulasFromOwner:(struct __CFUUID *)arg1;

- (void)removeCalculationStateObserver:(id)arg1;

- (void)removeFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2;

- (void)removeFormulasFromRange:(CDStruct_5744d895)arg1;

- (void)replaceFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2 precedentIterator:(void *)arg3 userData:(void *)arg4 hasRandomVolatileFunctions:(_Bool *)arg5;

- (id)resolverForTableID:(struct __CFUUID *)arg1;

- (void)resumeRecalculation;

- (id)retain;

- (id)rewriteFormulasWithSpec:(id)arg1;

- (void)saveToArchiver:(id)arg1;

- (void)setAccessController:(id)arg1;

- (void)setChangeNotifier:(id)arg1;

- (void)setOwnerIDForLegacyGlobalID:(id)arg1 ownerID:(struct __CFUUID *)arg2;

- (void)setXLImportDateMode:(int)arg1;

- (_Bool)shouldCancelRecalculationThread;

- (_Bool)shouldDelayArchiving;

- (void)startRecalculationThread;

- (void)stopRecalculationThread;

- (id)stringForRangeReference:(CDStruct_5744d895)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4;

- (id)stringForRangeReference:(CDStruct_5744d895)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4;

- (void)timeVolatileFunctionsAreDirty;

- (void)unregisterOwner:(struct __CFUUID *)arg1;

- (void)updateCurrentDate;

- (void)updateDirtyPrecedentCountsForRemovedIndex:(int)arg1 inTable:(struct __CFUUID *)arg2 forColumns:(_Bool)arg3;

- (int)xlImportDateMode;



@end


