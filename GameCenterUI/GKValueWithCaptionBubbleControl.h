/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBubbleWithStackedContent.h"


@class GKLabel, GKTextStyle, NSAttributedString, NSString;



@interface GKValueWithCaptionBubbleControl : GKBubbleWithStackedContent

{

    NSString *_valueText;

    _Bool _smallText;

    NSString *_captionText;

    GKLabel *_captionLabel;

    GKLabel *_valueLabel;

    GKTextStyle *_overrideValueStyle;

    GKTextStyle *_overrideCaptionStyle;

    double _referenceZPosition;

    GKTextStyle *_smallValueStyle;

    GKTextStyle *_normalValueStyle;

    id _blockToken;

}



- (id)_scaledTextStyle:(id)arg1;

- (void)_updateCaptionTextLabel;

- (void)_updateValueTextLabel;

@property(retain, nonatomic) NSAttributedString *attributedCaptionText;

@property(retain, nonatomic) NSAttributedString *attributedValueText;

- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;

@property(retain, nonatomic) id blockToken; // @synthesize blockToken=_blockToken;

@property(retain, nonatomic) GKLabel *captionLabel; // @synthesize captionLabel=_captionLabel;

@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;

- (id)captionTextStyle;

- (void)dealloc;

- (id)description;

- (void)didMoveToSuperview;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)labelDidApplyStyle:(id)arg1;

@property(retain, nonatomic) GKTextStyle *normalValueStyle; // @synthesize normalValueStyle=_normalValueStyle;

@property(retain, nonatomic) GKTextStyle *overrideCaptionStyle; // @synthesize overrideCaptionStyle=_overrideCaptionStyle;

@property(retain, nonatomic) GKTextStyle *overrideValueStyle; // @synthesize overrideValueStyle=_overrideValueStyle;

@property(nonatomic) double referenceZPosition; // @synthesize referenceZPosition=_referenceZPosition;

- (void)setAlpha:(double)arg1;

@property(nonatomic) _Bool smallText; // @synthesize smallText=_smallText;

@property(retain, nonatomic) GKTextStyle *smallValueStyle; // @synthesize smallValueStyle=_smallValueStyle;

@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;

@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;

- (void)updateLabelRasterizationScaleForLabels;

- (void)updateTextFieldsFor3DScaling;

- (id)valueTextStyle;



@end


