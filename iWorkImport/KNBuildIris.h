/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNIrisBase.h"


#import "KNFrameBuildAnimator.h"



__attribute__((visibility("hidden")))

@interface KNBuildIris : KNIrisBase <KNFrameBuildAnimator>

{

}



+ (_Bool)isTransition;

+ (_Bool)requiresSingleTexturePerStage;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

- (void)renderFrameWithContext:(id)arg1;



@end


