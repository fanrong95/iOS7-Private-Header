/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UIColor;



@interface _MPUBorderView : UIView

{

    UIColor *_borderColor;

    double _borderWidth;

    double _borderAlpha;

    UIColor *_fillColor;

    double _fillAlpha;

    double _dropShadowAlpha;

    unsigned long long _dropShadowEdges;

    double _dropShadowWidth;

    UIColor *_dropShadowColor;

}



- (void).cxx_destruct;

@property(nonatomic) double borderAlpha; // @synthesize borderAlpha=_borderAlpha;

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic) double dropShadowAlpha; // @synthesize dropShadowAlpha=_dropShadowAlpha;

@property(retain, nonatomic) UIColor *dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;

@property(nonatomic) unsigned long long dropShadowEdges; // @synthesize dropShadowEdges=_dropShadowEdges;

@property(nonatomic) double dropShadowWidth; // @synthesize dropShadowWidth=_dropShadowWidth;

@property(nonatomic) double fillAlpha; // @synthesize fillAlpha=_fillAlpha;

@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;

- (id)initWithFrame:(struct CGRect)arg1;



@end


