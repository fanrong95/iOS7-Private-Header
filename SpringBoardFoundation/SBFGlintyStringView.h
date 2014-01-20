/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "_UISettingsKeyPathObserver.h"



@class NSString, NSTimer, SBFGlintyStringSettings, UIColor, UIFont, UIImage, UILabel, _SBFVibrantSettings, _UILegibilitySettings;



@interface SBFGlintyStringView : UIView <_UISettingsKeyPathObserver>

{

    _Bool _animationRepeats;

    _Bool _adjustsFontSizeToFitWidth;

    _Bool _hasCustomBackgroundColor;

    _Bool _highlight;

    _Bool _needsTextUpdate;

    _Bool _chevronGlimmerAnimatesBackgroundColor;

    _Bool _hidden;

    int _textIndex;

    id <SBFGlintyStringViewDelegate> _delegate;

    SBFGlintyStringSettings *_settings;

    NSString *_text;

    UIFont *_font;

    NSString *_textLanguage;

    _UILegibilitySettings *_legibilitySettings;

    _SBFVibrantSettings *_vibrantSettings;

    UIView *_backgroundView;

    UIColor *_backgroundColor;

    UIColor *_chevronBackgroundColor;

    long long _chevronStyle;

    double _horizontalPadding;

    NSTimer *_timer;

    UILabel *_label;

    UIView *_lightTintView;

    UIView *_colorCompositingView;

    UIView *_darkTintView;

    UIView *_chevronGlimmer1;

    UIView *_chevronGlimmer2;

    UIColor *_chevronGlimmerColor;

    UIView *_spotlightView1;

    UIView *_spotlightView2;

    double _spotlightPointTraversalTime;

    long long _animationCounter;

    UIImage *_chevron;

    UIColor *_effectiveChevronBackgroundColor;

    UIView *_highlightView;

    UIImage *_textMaskImage;

    UIImage *_clearMaskImage;

    struct CGSize _labelSize;

    struct CGRect _chevronFrame;

    struct CGRect _spotlightAnimationStartFrame;

    struct CGRect _spotlightAnimationEndFrame;

}



- (id)_backgroundDodgeColorWithFactor:(double)arg1;

- (double)_chevronHeightWithMaxOffset;

- (id)_chevronImageForStyle:(long long)arg1;

- (double)_chevronPadding;

- (double)_chevronVerticalOffset;

- (double)_chevronWidthWithPadding;

- (double)_chevronWidthWithPaddingCompression:(double)arg1;

- (id)_highlightColor;

- (id)_highlightCompositingFilter;

- (_Bool)_shouldUseLightStyle;

- (id)_spotlightColor;

- (id)_spotlightImage;

- (void)_updateChevronGlimmer;

- (void)_updateClearMaskWithFrame:(struct CGRect)arg1;

- (void)_updateHightlight;

- (void)_updateLabelSpotlight;

- (void)_updateLabelWithFrame:(struct CGRect)arg1;

- (void)_updateMaskWithFrame:(struct CGRect)arg1;

- (void)_updateTintViews;

@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;

- (void)animate;

- (void)animateChevronGlimmer;

- (void)animateSpotlight;

@property(nonatomic) long long animationCounter; // @synthesize animationCounter=_animationCounter;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@property(nonatomic) _Bool animationRepeats; // @synthesize animationRepeats=_animationRepeats;

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;

- (double)baselineOffsetFromBottom;

@property(retain, nonatomic) UIImage *chevron; // @synthesize chevron=_chevron;

@property(retain, nonatomic) UIColor *chevronBackgroundColor; // @synthesize chevronBackgroundColor=_chevronBackgroundColor;

@property(nonatomic) struct CGRect chevronFrame; // @synthesize chevronFrame=_chevronFrame;

@property(retain, nonatomic) UIView *chevronGlimmer1; // @synthesize chevronGlimmer1=_chevronGlimmer1;

@property(retain, nonatomic) UIView *chevronGlimmer2; // @synthesize chevronGlimmer2=_chevronGlimmer2;

@property(nonatomic) _Bool chevronGlimmerAnimatesBackgroundColor; // @synthesize chevronGlimmerAnimatesBackgroundColor=_chevronGlimmerAnimatesBackgroundColor;

@property(retain, nonatomic) UIColor *chevronGlimmerColor; // @synthesize chevronGlimmerColor=_chevronGlimmerColor;

@property(nonatomic) long long chevronStyle; // @synthesize chevronStyle=_chevronStyle;

@property(retain, nonatomic) UIImage *clearMaskImage; // @synthesize clearMaskImage=_clearMaskImage;

@property(retain, nonatomic) UIView *colorCompositingView; // @synthesize colorCompositingView=_colorCompositingView;

@property(retain, nonatomic) UIView *darkTintView; // @synthesize darkTintView=_darkTintView;

- (void)dealloc;

@property(nonatomic) id <SBFGlintyStringViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void)didMoveToWindow;

@property(retain, nonatomic) UIColor *effectiveChevronBackgroundColor; // @synthesize effectiveChevronBackgroundColor=_effectiveChevronBackgroundColor;

- (id)fadeAnimation;

- (void)fadeIn;

- (id)fadeInAnimation;

- (void)fadeOut;

- (id)fadeOutAnimation;

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;

@property(nonatomic) _Bool hasCustomBackgroundColor; // @synthesize hasCustomBackgroundColor=_hasCustomBackgroundColor;

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;

- (void)hide;

@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;

@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;

@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;

- (id)initWithText:(id)arg1 andFont:(id)arg2;

- (_Bool)isAnimating;

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;

@property(readonly, nonatomic) struct CGRect labelFrame;

@property(nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;

- (void)layoutSubviews;

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;

@property(retain, nonatomic) UIView *lightTintView; // @synthesize lightTintView=_lightTintView;

@property(nonatomic) _Bool needsTextUpdate; // @synthesize needsTextUpdate=_needsTextUpdate;

- (void)setMaskImage:(id)arg1;

@property(retain, nonatomic) SBFGlintyStringSettings *settings; // @synthesize settings=_settings;

@property(nonatomic) struct CGRect spotlightAnimationEndFrame; // @synthesize spotlightAnimationEndFrame=_spotlightAnimationEndFrame;

@property(nonatomic) struct CGRect spotlightAnimationStartFrame; // @synthesize spotlightAnimationStartFrame=_spotlightAnimationStartFrame;

@property(nonatomic) double spotlightPointTraversalTime; // @synthesize spotlightPointTraversalTime=_spotlightPointTraversalTime;

@property(retain, nonatomic) UIView *spotlightView1; // @synthesize spotlightView1=_spotlightView1;

@property(retain, nonatomic) UIView *spotlightView2; // @synthesize spotlightView2=_spotlightView2;

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@property(nonatomic) int textIndex; // @synthesize textIndex=_textIndex;

@property(copy, nonatomic) NSString *textLanguage; // @synthesize textLanguage=_textLanguage;

@property(retain, nonatomic) UIImage *textMaskImage; // @synthesize textMaskImage=_textMaskImage;

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;

- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)startAnimating;

- (void)stopAnimating;

- (void)updateText;



@end

