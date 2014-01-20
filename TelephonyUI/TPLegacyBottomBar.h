/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UIImageView;



@interface TPLegacyBottomBar : UIView

{

    long long _orientation;

    long long _style;

    _Bool _suppressDrawingBackground;

    UIImageView *_shadowView;

}



+ (id)_backgroundImage;

+ (double)defaultHeight;

+ (double)defaultHeightForOrientation:(long long)arg1;

+ (double)defaultHeightForStyle:(long long)arg1;

+ (double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2;

+ (long long)fullscreenStyle;

+ (long long)overlayStyle;

+ (id)upsideDownShadowImage;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (id)init;

- (id)initWithDefaultSize;

- (id)initWithDefaultSizeForOrientation:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

- (void)layoutSubviews;

- (long long)orientation;

- (void)setOrientation:(long long)arg1;

- (void)setOrientation:(long long)arg1 updateFrame:(_Bool)arg2;

@property(nonatomic) _Bool suppressDrawingBackground; // @synthesize suppressDrawingBackground=_suppressDrawingBackground;

- (void)setWellAlpha:(double)arg1;

@property(readonly) UIImageView *shadowView; // @synthesize shadowView=_shadowView;



@end

