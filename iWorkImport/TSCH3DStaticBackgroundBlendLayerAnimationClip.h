/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartAnimationClip.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface TSCH3DStaticBackgroundBlendLayerAnimationClip : TSCH3DChartAnimationClip

{

    NSArray *mNames;

}



+ (id)clip;

+ (id)clipWithTimerName:(id)arg1;

+ (id)clipWithTimerNames:(id)arg1;

- (void)dealloc;

- (id)initWithTimerName:(id)arg1;

- (id)initWithTimerNames:(id)arg1;

- (void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3;



@end


