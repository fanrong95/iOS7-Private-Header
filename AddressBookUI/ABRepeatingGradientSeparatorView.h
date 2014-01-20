/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray, UIColor;



@interface ABRepeatingGradientSeparatorView : UIView

{

    NSArray *_gradientColors;

    UIColor *_startColor;

    UIColor *_endColor;

    double _step;

}



- (void)dealloc;

@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;

@property(readonly, nonatomic) NSArray *gradientColors;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;

@property(nonatomic) double step; // @synthesize step=_step;



@end


