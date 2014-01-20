/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSString, SBDeviceLockEntryField, SBDeviceLockTitle;



@interface SBDeviceLockView : UIView

{

    int _style;

    long long _interfaceOrientation;

    SBDeviceLockTitle *_statusView;

    SBDeviceLockEntryField *_entryView;

    id _delegate;

}



+ (int)defaultStyle;

+ (int)defaultStyleForSiri;

+ (int)defaultStyleForSiri:(_Bool)arg1;

+ (double)deviceLockAnimationDuration;

+ (id)newWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 showsEmergencyCall:(_Bool)arg3;

- (id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 showsEmergencyCall:(_Bool)arg3;

- (void)animateToInterfaceInterfaceOrientation:(long long)arg1;

- (_Bool)becomeFirstResponder;

- (void)blinkStatusView;

- (_Bool)canBecomeFirstResponder;

- (void)dealloc;

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

- (_Bool)deviceLockEntryField:(id)arg1 shouldInsertText:(id)arg2;

- (void)deviceLockEntryFieldDidAcceptEntry:(id)arg1;

- (void)deviceLockEntryFieldDidCancelEntry:(id)arg1;

- (void)deviceLockEntryFieldTextDidChange:(id)arg1;

- (void)didAnimateToInterfaceOrientation:(long long)arg1;

@property(readonly, nonatomic) UIView *entryView;

@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;

- (_Bool)isFirstResponder;

@property(readonly, nonatomic, getter=isKeypadMinimized) _Bool keypadMinimized;

@property(nonatomic, getter=isShowingEntryStatusWarning) _Bool showingEntryStatusWarning;

@property(nonatomic, getter=isShowingStatusWarning) _Bool showingStatusWarning;

@property(readonly, nonatomic) UIView *keypadView;

- (void)notifyDelegateThatCancelButtonWasPressed;

- (void)notifyDelegateThatEmergencyCallButtonWasPressed;

- (void)notifyDelegateThatPasscodeDidChange;

- (void)notifyDelegateThatPasscodeWasEntered;

@property(retain, nonatomic) NSString *passcode;

@property(nonatomic) _Bool playsKeyboardClicks;

- (_Bool)resignFirstResponder;

@property(nonatomic) _Bool showsEmergencyCallButton;

@property(retain, nonatomic) NSString *statusSubtitle;

@property(retain, nonatomic) NSString *statusTitle;

- (void)setUserInteractionEnabled:(_Bool)arg1;

@property(readonly, nonatomic) UIView *statusView;

@property(readonly, nonatomic) int style; // @synthesize style=_style;

- (void)willAnimateToInterfaceOrientation:(long long)arg1;



@end


