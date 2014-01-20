/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNChunkableBuildAnimator.h"



@class NSArray, NSMutableArray;



__attribute__((visibility("hidden")))

@interface KNChartMultiDataBuild : KNAnimationEffect <KNChunkableBuildAnimator>

{

    NSMutableArray *mLayersToRestore;

    NSArray *mChartAnimatedLayers;

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)defaultAttributes;

+ (id)localizedMenuString:(int)arg1;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;

- (id)animationInfoForAnimatedBuild:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (id)animationsWithContext:(id)arg1;

- (void)dealloc;



@end


