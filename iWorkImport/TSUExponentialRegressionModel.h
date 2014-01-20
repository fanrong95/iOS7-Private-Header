/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSURegressionModel.h"


@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TSUExponentialRegressionModel : TSURegressionModel

{

    double *mCoefficients;

    int mNumCoefficients;

    _Bool mAffine;

    double mIntercept;

    double mRSquared;

    int mNumSuperscriptRanges;

    NSMutableArray *mSuperscriptRangesArray;

}



- (double)coefficientAtIndex:(int)arg1;

- (void)dealloc;

- (double)estimateForX:(double *)arg1;

- (id)getEquationStringAndBuildSuperscriptRangesArray;

- (id)initAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4;

- (id)initNonAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;

- (id)initWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 makeAffine:(_Bool)arg5 desiredIntercept:(double)arg6;

- (int)numCoefficients;

- (int)numSuperscriptRanges;

- (double)rSquared;

- (int)regressionType;

- (struct _NSRange)superscriptRangeAtIndex:(int)arg1;



@end


