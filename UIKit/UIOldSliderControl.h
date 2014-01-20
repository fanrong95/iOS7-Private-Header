/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"


@class UIImage, UIView;



@interface UIOldSliderControl : UIControl

{

    UIImage *_sliderLeftFillCap;

    CDUnion_b710d1cf _sliderLeftFill;

    CDUnion_b710d1cf _sliderRightFill;

    UIImage *_minValueImage;

    UIImage *_maxValueImage;

    int _numberOfTickMarks;

    double _hitOffset;

    UIImage *_sliderRightCap;

    UIImage *_sliderRightFullCap;

    UIImage *_sliderLeftCap;

    struct {

        unsigned int allowsOnlyTickMarks:1;

        unsigned int animating:1;

        unsigned int showValue:1;

        unsigned int layeredFill:1;

        unsigned int continuous:1;

        unsigned int sendActionDuringAnimation:1;

        unsigned int alternateColors:1;

        unsigned int shouldFlipValue:1;

        unsigned int needsNonOpaqueFills:1;

        unsigned int reserved:24;

    } _sliderFlags;

    float _value;

    float _animationEndValue;

    float _minValue;

    float _maxValue;

    UIView *_knob;

    double _lastTrackingTime;

    double _idleTrackingTime;

    struct CGPoint _lastTrackingPoint;

    struct CGPoint _idleTrackingPoint;

}



- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;

- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;

- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;

- (void)_resetFillFrames;

- (id)_scriptingInfo;

- (void)_sendDelayedActions;

- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;

- (void)_sliderBounds:(struct CGRect)arg1 getLeftCapRect:(struct CGRect *)arg2 rightCapRect:(struct CGRect *)arg3 left:(struct CGRect *)arg4 right:(struct CGRect *)arg5;

- (float)_validatedValue:(float)arg1;

- (float)_validatedValueForPoint:(struct CGPoint)arg1 includeTickMarks:(_Bool)arg2;

- (void)animator:(id)arg1 stopAnimation:(id)arg2;

- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (_Bool)cancelMouseTracking;

- (_Bool)cancelTouchTracking;

- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (id)createSliderKnobView;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (void)drawSliderInRect:(struct CGRect)arg1;

- (void)drawSliderInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;

- (void)drawSliderPiece:(int)arg1 inRect:(struct CGRect)arg2;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (struct CGRect)fillBounds;

- (id)imageForSliderPiece:(int)arg1;

- (id)init;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 layeredFill:(_Bool)arg2;

- (_Bool)isAnimatingValueChange;

- (struct CGRect)maxValueImageBounds;

- (struct CGRect)minValueImageBounds;

- (void)refreshImages;

- (void)setAllowsTickMarkValuesOnly:(_Bool)arg1;

- (void)setContinuous:(_Bool)arg1;

- (void)setEnabled:(_Bool)arg1;

- (void)setHighlighted:(_Bool)arg1;

- (void)setMaxValue:(float)arg1;

- (void)setMaxValueImage:(id)arg1;

- (void)setMinValue:(float)arg1;

- (void)setMinValueImage:(id)arg1;

- (void)setNumberOfTickMarks:(int)arg1;

- (void)setSendActionDuringAnimation:(_Bool)arg1;

- (void)setShowValue:(_Bool)arg1;

- (void)setValue:(float)arg1;

- (void)setValue:(float)arg1 animated:(_Bool)arg2;

- (void)setValue:(float)arg1 animated:(_Bool)arg2 animationCurve:(int)arg3;

- (struct CGRect)sliderBounds;

- (void)sliderBoundsChanged;

- (float)value;

- (struct CGRect)valueTextBounds;



@end


