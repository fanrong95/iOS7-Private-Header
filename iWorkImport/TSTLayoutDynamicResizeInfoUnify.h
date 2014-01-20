/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSTLayoutDynamicResizeInfo.h"


__attribute__((visibility("hidden")))

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo

{

    double mTargetWidth;

    double mTargetHeight;

}



- (void)applyFixedHeight:(double)arg1;

- (void)applyFixedWidth:(double)arg1;

- (double)applyResizeHeightFactor:(double)arg1;

- (double)applyResizeWidthFactor:(double)arg1;

- (void)captureNewMinimumRowHeights:(id)arg1;

- (void)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(int)arg3 count:(unsigned short)arg4 currentArray:(double *)arg5 minimumArray:(double *)arg6;

- (double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(int)arg3 totalOfCaptured:(double)arg4 count:(unsigned short)arg5 capturedArray:(double *)arg6 currentArray:(double *)arg7 minimumArray:(double *)arg8;

@property(readonly, nonatomic) double targetHeight; // @synthesize targetHeight=mTargetHeight;

@property(readonly, nonatomic) double targetWidth; // @synthesize targetWidth=mTargetWidth;



@end


