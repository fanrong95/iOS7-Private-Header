/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPopoverBackgroundView.h"


__attribute__((visibility("hidden")))

@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

{

}



+ (double)arrowBase;

+ (double)arrowHeight;

+ (struct UIEdgeInsets)contentViewInsets;

+ (double)cornerRadius;

- (struct UIEdgeInsets)_shadowInsets;

- (struct CGSize)_shadowOffset;

- (double)_shadowOpacity;

- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;

- (double)_shadowRadius;

- (unsigned long long)arrowDirection;

- (double)arrowOffset;

- (void)layoutSubviews;

- (void)setArrowDirection:(unsigned long long)arg1;

- (void)setArrowOffset:(double)arg1;



@end


