/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIView;



@interface SBAwayViewPluginController : NSObject

{

    UIView *_view;

    _Bool _viewCanBeDisplayed;

    _Bool _fullscreen;

    _Bool _alwaysFullscreen;

    long long _orientation;

    id _disableTransitionBlock;

    unsigned long long _effectivePresentationStyle;

    NSString *_enablingApplicationBundleIdentifier;

}



+ (id)_serializedDataForContext:(id)arg1;

+ (void)disableBundleNamed:(id)arg1;

+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;

+ (void)enableBundleNamed:(id)arg1;

+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;

- (id)_disableTransitionBlock;

@property(nonatomic, getter=_effectivePresentationStyle, setter=_setEffectivePresentationStyle:) unsigned long long effectivePresentationStyle; // @synthesize effectivePresentationStyle=_effectivePresentationStyle;

- (void)_setDisableTransitionBlock:(id)arg1;

- (_Bool)allowsControlCenter;

- (_Bool)allowsLockScreenCamera;

- (_Bool)allowsLockScreenMediaControls;

- (_Bool)allowsNotificationCenter;

- (_Bool)allowsPhotoSlideshow;

- (_Bool)allowsSiri;

- (_Bool)allowsTimer;

- (void)alwaysFullscreenValueHasChanged;

- (_Bool)animateResumingToApplicationWithIdentifier:(id)arg1;

- (id)backgroundView;

- (id)bundleIDForUnlock;

- (_Bool)canBeAlwaysFullscreen;

- (_Bool)canScreenDim;

- (id)customHeaderView;

- (void)dealloc;

- (void)deviceLockViewDidHide;

- (void)deviceLockViewWillShow;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)disable;

- (void)disableWithTransitionBlock:(id)arg1;

- (_Bool)disablesAwayItemsCompletely;

- (id)enableTransitionBlock;

@property(copy, nonatomic) NSString *enablingApplicationBundleIdentifier; // @synthesize enablingApplicationBundleIdentifier=_enablingApplicationBundleIdentifier;

- (_Bool)handleGesture:(int)arg1 fingerCount:(unsigned long long)arg2;

- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;

- (_Bool)handleLockButtonPressed;

- (_Bool)handleMenuButtonDoubleTap;

- (_Bool)handleMenuButtonHeld;

- (_Bool)handleMenuButtonTap;

- (_Bool)handleVolumeDownButtonPressed;

- (_Bool)handleVolumeUpButtonPressed;

- (id)init;

@property(nonatomic, getter=isAlwaysFullscreen) _Bool alwaysFullscreen;

- (_Bool)isFullscreen;

- (id)legibilitySettings;

- (void)loadView;

- (void)lockScreenMediaControlsShown:(_Bool)arg1;

- (unsigned long long)notificationBehavior;

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;

- (unsigned long long)overlayStyle;

- (long long)pluginPriority;

- (unsigned long long)presentationStyle;

- (void)purgeView;

- (_Bool)retainsPriorityWhileInactive;

- (void)setActivationContext:(id)arg1;

- (void)setDeactivationContext:(id)arg1;

- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setFullscreen:(_Bool)arg1 duration:(double)arg2;

@property(retain, nonatomic) UIView *view;

@property(nonatomic) _Bool viewCanBeDisplayed; // @synthesize viewCanBeDisplayed=_viewCanBeDisplayed;

- (_Bool)shouldAutoHideNotifications;

- (_Bool)shouldDisableOnRelock;

- (_Bool)shouldDisableOnUnlock;

- (_Bool)shouldShowLockStatusBarTime;

- (_Bool)showAwayItems;

- (_Bool)showDate;

- (_Bool)showDateView;

- (_Bool)showHeaderView;

- (_Bool)showStatusBar;

- (_Bool)showsDuringCall;

- (double)transitionDuration;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (double)viewFadeInDuration;

- (_Bool)viewWantsFullscreenLayout;

- (_Bool)viewWantsOverlayLayout;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (_Bool)wantsAutomaticFullscreenTimer;

- (_Bool)wantsHardwareEventsWhenScreenDimmed;

- (_Bool)wantsMenuButtonHeldEvent;

- (_Bool)wantsMesaAutoUnlock;

- (_Bool)wantsSwipeGestureRecognizer;

- (_Bool)wantsToOpenURLsWhilePasscodeLocked;

- (_Bool)wantsUserWallpaper;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


