/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class CADisplayLink, UIColor, UIImage, UIImageView;



@interface SKUICircleProgressIndicator : UIView

{

    double _animatedValue;

    double _animationEndTime;

    double _animationStartTime;

    double _animationStartValue;

    UIImage *_borderImage;

    UIImage *_centerImage;

    struct UIEdgeInsets _centerImageInsets;

    CADisplayLink *_displayLink;

    UIImage *_fillImage;

    _Bool _highlighted;

    UIImageView *_indeterminateView;

    _Bool _isAnimating;

    double _progress;

    UIColor *_unhighlightedBackgroundColor;

}



+ (id)_borderImage;

+ (id)_fillImage;

+ (id)_indeterminateImage;

- (void).cxx_destruct;

- (void)_animateValueOnDisplayLink:(id)arg1;

- (void)_setHidesBorderView:(_Bool)arg1;

- (void)_startIndeterminateAnimation;

- (void)dealloc;

- (void)didMoveToWindow;

- (void)drawRect:(struct CGRect)arg1;

@property(retain, nonatomic) UIImage *image; // @synthesize image=_centerImage;

@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_centerImageInsets;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;

@property(nonatomic, getter=isIndeterminate) _Bool indeterminate;

- (void)layoutSubviews;

@property(nonatomic) double progress; // @synthesize progress=_progress;

- (void)setProgress:(double)arg1 animated:(_Bool)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)tintColorDidChange;



@end


