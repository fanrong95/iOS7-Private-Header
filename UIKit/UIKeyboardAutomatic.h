/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboard.h"


__attribute__((visibility("hidden")))

@interface UIKeyboardAutomatic : UIKeyboard

{

    _Bool showsCandidateBar;

    _Bool showsCandidateInline;

    _Bool receivedCandidatesInCurrentInputMode;

    _Bool caretBlinks;

}



- (_Bool)_isAutomaticKeyboard;

- (void)activate;

@property(nonatomic) _Bool caretBlinks; // @synthesize caretBlinks;

- (void)dealloc;

- (void)didSuspend:(id)arg1;

- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1;

- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isActive;

- (void)maximize;

- (void)minimize;

- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;

@property(nonatomic) _Bool receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode;

@property(nonatomic) _Bool showsCandidateBar; // @synthesize showsCandidateBar;

@property(nonatomic) _Bool showsCandidateInline; // @synthesize showsCandidateInline;

- (void)willResume:(id)arg1;



@end


