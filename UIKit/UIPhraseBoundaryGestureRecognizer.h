/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UILongPressGestureRecognizer.h"


@class UIDelayedAction, UIResponder<UITextInput>;



__attribute__((visibility("hidden")))

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer

{

    UIResponder<UITextInput> *_textInput;

    UIDelayedAction *_secondDelayTimer;

    double _secondDelay;

    _Bool _secondDelayElapsed;

    id _userData;

}



- (void)_resetGestureRecognizer;

- (void)clearTimer;

@property(nonatomic) double secondDelay; // @synthesize secondDelay=_secondDelay;

@property(readonly, nonatomic) _Bool secondDelayElapsed; // @synthesize secondDelayElapsed=_secondDelayElapsed;

- (void)secondDelayElapsed:(id)arg1;

- (void)setState:(long long)arg1;

@property(nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;

@property(nonatomic) id userData; // @synthesize userData=_userData;

- (void)startTimer;



@end


