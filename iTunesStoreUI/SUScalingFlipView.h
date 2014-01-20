/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@interface SUScalingFlipView : UIView

{

    UIView *_backView;

    id <SUScalingFlipViewDelegate> _delegate;

    long long _direction;

    double _duration;

    struct CGRect _fromFrame;

    UIView *_frontView;

    struct CGRect _toFrame;

}



- (id)_backLayerAnimation;

- (id)_fixedAnimationForAnimation:(id)arg1;

- (id)_frontLayerAnimation;

- (id)_inputColorAnimation;

- (id)_positionAnimation;

- (id)_transformAnimationWithStart:(struct CATransform3D)arg1 middle:(struct CATransform3D)arg2 end:(struct CATransform3D)arg3;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

- (void)dealloc;

@property(nonatomic) id <SUScalingFlipViewDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) long long direction; // @synthesize direction=_direction;

@property(nonatomic) double duration; // @synthesize duration=_duration;

- (id)initWithFrontView:(id)arg1 backView:(id)arg2;

- (void)performFlip;



@end


