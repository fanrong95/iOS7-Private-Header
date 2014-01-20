/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSDate, NSString;



__attribute__((visibility("hidden")))

@interface TSTFormulaPredicate : NSObject <NSCopying>

{

    struct TSCEFormula mFormula;

    int mPredicateType;

    int mQualifier1;

    int mQualifier2;

    int mArgIndex0;

    int mArgIndex1;

    int mArgIndex2;

    _Bool mParamsAreDone;

    int mNodeTag0;

    int mNodeTag1;

    int mNodeTag2;

    double mNumberParam1;

    double mNumberParam2;

    NSString *mStringParam1;

    NSDate *mDateTimeParam1;

    NSDate *mDateTimeParam2;

    struct TSCENumberValue *mDurationParam1;

    struct TSCENumberValue *mDurationParam2;

    CDStruct_4ceb3147 mCrossTableRefParam0;

    CDStruct_4ceb3147 mCrossTableRefParam1;

    CDStruct_4ceb3147 mCrossTableRefParam2;

    CDStruct_29631068 mCrossTableRowRefParam0;

    CDStruct_29631068 mCrossTableRowRefParam1;

    CDStruct_29631068 mCrossTableRowRefParam2;

    CDStruct_41fa97f4 mCrossTableColumnRefParam0;

    CDStruct_41fa97f4 mCrossTableColumnRefParam1;

    CDStruct_41fa97f4 mCrossTableColumnRefParam2;

    CDStruct_9527dae1 mPredicateArgs[2];

}



+ (_Bool)isThresholdNeededForType:(int)arg1;

- (id).cxx_construct;

- (void).cxx_destruct;

- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;

- (id)copyByRemappingFormulaIDsWithMap:(struct __CFDictionary *)arg1 calcEngine:(id)arg2 error:(_Bool *)arg3;

- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(CDStruct_0441cfb5)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (const CDStruct_41fa97f4 *)crossTableColumnRefParam0;

- (const CDStruct_41fa97f4 *)crossTableColumnRefParam1;

- (const CDStruct_41fa97f4 *)crossTableColumnRefParam2;

- (const CDStruct_4ceb3147 *)crossTableRefParam0;

- (const CDStruct_4ceb3147 *)crossTableRefParam1;

- (const CDStruct_4ceb3147 *)crossTableRefParam2;

- (const CDStruct_29631068 *)crossTableRowRefParam0;

- (const CDStruct_29631068 *)crossTableRowRefParam1;

- (const CDStruct_29631068 *)crossTableRowRefParam2;

- (id)dateTimeParam1;

- (id)dateTimeParam2;

- (void)dealloc;

- (id)description;

- (struct TSCENumberValue *)durationParam1;

- (struct TSCENumberValue *)durationParam2;

- (void)encodeToArchive:(struct FormulaPredicateArchive *)arg1;

- (_Bool)evaluateAtCellID:(CDStruct_0441cfb5)arg1 inFormulaOwner:(struct __CFUUID *)arg2 calculationEngine:(id)arg3;

- (struct TSCEFormula *)formula;

- (unsigned long long)hash;

- (id)init;

- (id)initFromArchive:(const struct FormulaPredicateArchive *)arg1;

- (id)initWithLiteralCellType:(int)arg1 argumentCellReference:(CDStruct_78b871e1)arg2 hostCell:(CDStruct_0441cfb5)arg3;

- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellReference:(CDStruct_78b871e1)arg8 hostCell:(CDStruct_0441cfb5)arg9;

- (id)initWithLiteralDurationType:(int)arg1 duration1:(struct TSTDurationWrapper)arg2 duration2:(struct TSTDurationWrapper)arg3 qualifier:(int)arg4 argumentCellReference:(CDStruct_78b871e1)arg5 hostCell:(CDStruct_0441cfb5)arg6;

- (id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellReference:(CDStruct_78b871e1)arg5 hostCell:(CDStruct_0441cfb5)arg6;

- (id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellReference:(CDStruct_78b871e1)arg3 hostCell:(CDStruct_0441cfb5)arg4;

- (id)initWithPredicateType:(int)arg1 arg1:(CDStruct_9527dae1)arg2 arg2:(CDStruct_9527dae1)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(CDStruct_78b871e1)arg6 hostCell:(CDStruct_0441cfb5)arg7;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualForInspector:(id)arg1 atHostCoordinate:(CDStruct_0441cfb5)arg2;

- (int)nodeTag0;

- (int)nodeTag1;

- (int)nodeTag2;

- (double)numberParam1;

- (double)numberParam2;

- (void)p_appendASTForPeriodBoundary:(struct TSCEASTNodeArray *)arg1 scale:(int)arg2 direction:(int)arg3 offset:(CDStruct_9527dae1)arg4 offsetParamIndex:(int *)arg5 numNodes:(int *)arg6 earlierBound:(_Bool)arg7 isCalPers:(_Bool)arg8 hostCell:(CDStruct_0441cfb5)arg9;

- (int)p_argTypeForNodeTag:(int)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(CDStruct_0441cfb5)arg4;

- (void)p_clearDerivedVariables;

- (_Bool)p_isEqualForNonFormulaItems:(id)arg1;

- (void)p_populateMembersFromFormula;

- (_Bool)p_predicateArg:(CDStruct_9527dae1 *)arg1 isEqual:(CDStruct_9527dae1 *)arg2;

- (void)p_setParamIndex0:(int)arg1;

- (void)p_setParamIndex1:(int)arg1;

- (void)p_setParamIndex2:(int)arg1;

- (void)p_setPredicateType:(int)arg1;

- (void)p_setQualifier1:(int)arg1;

- (void)p_setQualifier2:(int)arg1;

- (_Bool)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(_Bool *)arg4;

- (CDStruct_9527dae1 *)predicateArg1atHostCoordinate:(CDStruct_0441cfb5)arg1;

- (CDStruct_9527dae1 *)predicateArg2atHostCoordinate:(CDStruct_0441cfb5)arg1;

- (int)predicateType;

- (int)qualifier1;

- (int)qualifier2;

- (void)setFormula:(const struct TSCEFormula *)arg1;

- (id)stringParam1;



@end


