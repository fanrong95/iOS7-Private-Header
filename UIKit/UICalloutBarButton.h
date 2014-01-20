/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"


@class UITextReplacement;



__attribute__((visibility("hidden")))

@interface UICalloutBarButton : UIButton

{

    SEL m_action;

    int m_position;

    int m_type;

    UITextReplacement *m_textReplacement;

    double m_contentWidth;

    double m_contentScale;

    double m_additionalContentHeight;

    double m_dividerOffset;

    double m_imageVerticalAdjust;

    long long m_page;

    _Bool m_isText;

    _Bool m_configured;

    _Bool m_single;

    _Bool m_padLeft;

    _Bool m_padRight;

    _Bool m_dontDismiss;

    _Bool forceFlash;

}



+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;

+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;

+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6;

- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;

@property(readonly, nonatomic) SEL action; // @synthesize action=m_action;

@property(readonly, nonatomic) double additionalContentHeight; // @synthesize additionalContentHeight=m_additionalContentHeight;

- (struct CGRect)adjustRectForPosition:(struct CGRect)arg1 scaleRect:(_Bool)arg2;

- (void)cancelFlash;

- (void)configureForLeftPosition:(int)arg1;

- (void)configureForMiddlePosition;

- (void)configureForRightPosition:(int)arg1;

- (void)configureForSingle:(int)arg1;

- (void)configureLabel;

@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=m_contentScale;

@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=m_contentWidth;

- (void)dealloc;

@property(nonatomic) double dividerOffset; // @synthesize dividerOffset=m_dividerOffset;

@property(nonatomic) _Bool dontDismiss; // @synthesize dontDismiss=m_dontDismiss;

- (void)fadeAndSendAction;

- (void)flash;

@property(nonatomic) _Bool forceFlash; // @synthesize forceFlash;

- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@property(nonatomic) double imageVerticalAdjust; // @synthesize imageVerticalAdjust=m_imageVerticalAdjust;

- (void)layoutSubviews;

@property(nonatomic) long long page; // @synthesize page=m_page;

- (void)removeFromSuperview;

- (void)setContentScale:(double)arg1;

- (void)setHighlighted:(_Bool)arg1;

@property(retain, nonatomic) UITextReplacement *textReplacement; // @synthesize textReplacement=m_textReplacement;

- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;

- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;

- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5;

- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@property(readonly, nonatomic) int type; // @synthesize type=m_type;



@end


