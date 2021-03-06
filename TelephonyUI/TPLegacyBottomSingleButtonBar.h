/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TPLegacyBottomBar.h"


@class TPLegacyButton, UIImageView, UIView;



@interface TPLegacyBottomSingleButtonBar : TPLegacyBottomBar

{

    id _delegate;

    UIImageView *_backgroundView;

    UIView *_well;

    TPLegacyButton *_button;

    _Bool _allowsDroppingIcons;

}



+ (id)_backgroundImage;

- (id)button;

- (double)buttonWidth;

- (void)dealloc;

- (id)initForEndCallWithFrame:(struct CGRect)arg1;

- (id)initForEndVideoWithFrame:(struct CGRect)arg1;

- (id)initForIncomingCallWaitingWithFrame:(struct CGRect)arg1;

- (id)initForTTYWithFrame:(struct CGRect)arg1;

- (id)initForVoiceControlWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

- (void)layoutSubviews;

- (void)setButton:(id)arg1 andStyle:(_Bool)arg2;

- (void)setSuppressDrawingBackground:(_Bool)arg1;

- (void)setWellAlpha:(double)arg1;



@end


