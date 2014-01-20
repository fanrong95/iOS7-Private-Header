/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UISlider.h"



#import "MPVolumeControllerDelegate.h"



@class MPAVController, MPAudioDeviceController, MPVolumeController, NSString, NSTimer, UIImage, UIImageView, UILabel, UIView;



@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate>

{

    MPVolumeController *_volumeController;

    NSTimer *_commitTimer;

    UILabel *_routeNameLabel;

    long long _style;

    UIImageView *_thumbImageView;

    UIImageView *_thumbMaskImageView;

    _Bool _isOffScreen;

    _Bool _thumbIsDefault;

    UIView *_volumeWarningView;

    _Bool _volumeWarningBlinking;

    UIImage *_volumeWarningTrackImage;

    MPAudioDeviceController *_audioDeviceController;

}



- (void).cxx_destruct;

- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

- (void)_applicationWillEnterForegroundNotification:(id)arg1;

- (void)_availableRoutesDidChangeNotification:(id)arg1;

- (void)_beginBlinkingWarningView;

- (void)_blinkWarningView;

- (void)_commitVolumeChange;

- (void)_endBlinkingWarningView;

- (void)_endTracking;

- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;

@property(nonatomic, setter=_setIsOffScreen:) _Bool _isOffScreen; // @synthesize _isOffScreen;

- (void)_layoutForAvailableRoutes;

- (void)_layoutMaskForThumb;

- (void)_layoutVolumeWarningView;

- (id)_maxTrackImageForStyle:(long long)arg1;

- (id)_minTrackImageForStyle:(long long)arg1;

@property(readonly, nonatomic) UIView *_newVolumeWarningView;

- (void)_resetThumbImageForState:(unsigned long long)arg1;

- (void)_routeNameLabelAnimationDidEnd;

- (id)_thumbImageForStyle:(long long)arg1;

- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (void)cancelTrackingWithEvent:(id)arg1;

- (id)createThumbView;

- (void)dealloc;

- (void)didMoveToSuperview;

- (void)didMoveToWindow;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

- (void)layoutSubviews;

- (float)maximumValue;

- (float)minimumValue;

@property(retain, nonatomic) MPAVController *player;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

- (void)setAlpha:(double)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setHidden:(_Bool)arg1;

- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;

- (void)setUserInteractionEnabled:(_Bool)arg1;

- (void)setValue:(float)arg1 animated:(_Bool)arg2;

@property(copy, nonatomic) NSString *volumeAudioCategory;

@property(retain, nonatomic) UIImage *volumeWarningTrackImage; // @synthesize volumeWarningTrackImage=_volumeWarningTrackImage;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) long long style; // @synthesize style=_style;

- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;

- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;

- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;

- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;



@end


