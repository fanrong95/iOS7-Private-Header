/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"


@class NSMutableDictionary, NSTimer, UIButton, UIColor, UIImageView;



@interface UIStepper : UIControl

{

    _Bool _isRtoL;

    UIImageView *_middleView;

    UIButton *_plusButton;

    UIButton *_minusButton;

    NSTimer *_repeatTimer;

    long long _repeatCount;

    NSMutableDictionary *_dividerImages;

    _Bool _continuous;

    _Bool _autorepeat;

    _Bool _wraps;

    double _value;

    double _minimumValue;

    double _maximumValue;

    double _stepValue;

}



- (void)_commonStepperInit;

- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;

- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;

- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;

- (void)_populateArchivedSubviews:(id)arg1;

- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;

- (void)_setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;

- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;

- (void)_setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;

- (void)_startTimer;

- (void)_stopTimer;

- (void)_updateButtonEnabled;

- (void)_updateCount:(id)arg1;

- (void)_updateDividerImageForButtonState;

- (void)_updateHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;

- (void)_updateImages;

@property(nonatomic) _Bool autorepeat; // @synthesize autorepeat=_autorepeat;

- (id)backgroundImageForState:(unsigned long long)arg1;

- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (void)cancelTrackingWithEvent:(id)arg1;

- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (void)dealloc;

- (id)decrementImageForState:(unsigned long long)arg1;

- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;

- (void)encodeWithCoder:(id)arg1;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)incrementImageForState:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;

- (void)layoutSubviews;

@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;

@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;

- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;

- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;

- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;

- (void)setFrame:(struct CGRect)arg1;

- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;

@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;

@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@property(nonatomic) double value; // @synthesize value=_value;

@property(nonatomic) _Bool wraps; // @synthesize wraps=_wraps;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


