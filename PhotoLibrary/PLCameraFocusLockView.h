/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLCameraFocusView.h"


@class CAKeyframeAnimation;



@interface PLCameraFocusLockView : PLCameraFocusView

{

    CAKeyframeAnimation *_lockBoundsAnimation;

    _Bool _scalingDown;

    _Bool _shouldEndFocus;

    struct CGAffineTransform _defaultTransform;

}



- (id)_createLockBoundsAnimation;

- (void)animateLock;

- (void)animateScaleDown;

- (void)dealloc;

- (void)finishedScalingDown;

- (void)focusDidEnd;

- (id)init;

- (void)startAnimating;



@end


