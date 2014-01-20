/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIImageView, UIStatusBarCorners, UIStatusBarStyleAttributes;



__attribute__((visibility("hidden")))

@interface UIStatusBarBackgroundView : UIView

{

    UIStatusBarStyleAttributes *_style;

    UIStatusBarCorners *_topCorners;

    UIImageView *_glowView;

    _Bool _glowEnabled;

    _Bool _suppressGlow;

}



- (id)_backgroundImageName;

- (id)_baseImage;

- (id)_glowImage;

- (void)_setGlowAnimationEnabled:(_Bool)arg1 waitForNextCycle:(_Bool)arg2;

- (void)_startGlowAnimationWaitForNextCycle:(_Bool)arg1;

- (void)_stopGlowAnimation;

- (_Bool)_styleCanGlow;

- (_Bool)_topCornersAreRounded;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;

- (void)setGlowAnimationEnabled:(_Bool)arg1;

- (void)setSuppressesGlow:(_Bool)arg1;

- (id)style;



@end


