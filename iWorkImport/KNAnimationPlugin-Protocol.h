/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol KNAnimationPlugin <NSObject>

+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (id)localizedMenuString:(int)arg1;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

- (id)initWithAnimationContext:(id)arg1;



@optional

+ (id)customAttributes;

+ (int)rendererTypeForCapabilities:(id)arg1;

- (void)animationDidEndWithContext:(id)arg1;

- (id)animationInfoForAnimatedBuild:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

@end


