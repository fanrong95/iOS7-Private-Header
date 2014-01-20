/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DAnimationTimeSlice.h"


@class NSDictionary, TSCH3DCascadeAnimationTimeSlice;



__attribute__((visibility("hidden")))

@interface TSCH3DSetAnimationTimeSlice : TSCH3DAnimationTimeSlice

{

    NSDictionary *mSetDictionary;

    NSDictionary *mNegativeSetDictionary;

    TSCH3DAnimationTimeSlice *mSetInterpolation;

    TSCH3DCascadeAnimationTimeSlice *mCascadeInterpolator;

}



+ (void)addInterpolatorsToSets:(const map_aa49fa74 *)arg1 dictionary:(id)arg2 values:(const vector_ec52ae8c *)arg3 size:(tvec2_3b141483 *)arg4;

+ (id)timeSliceWithIndexSet:(id)arg1 elementValues:(const vector_ec52ae8c *)arg2 setInterpolation:(id)arg3 size:(tvec2_3b141483 *)arg4 cascadeSets:(_Bool)arg5;

- (void)dealloc;

- (id)initWithSetDictionary:(id)arg1 negativeSetDictionary:(id)arg2 setInterpolation:(id)arg3 cascadeInterpolator:(id)arg4;

- (id)p_orderedTimeSliceForIndex:(tvec2_3b141483 *)arg1;

- (box_e9f23397)rangeForIndex:(const tvec2_3b141483 *)arg1;



@end


