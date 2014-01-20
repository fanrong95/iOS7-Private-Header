/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TPBottomDoubleButtonBar.h"


#import "TPBottomGrabberBar.h"



@class NSArray, UIImage, UIView;



@interface TPBottomDoubleButtonGrabberBar : TPBottomDoubleButtonBar <TPBottomGrabberBar>

{

    UIView *_grabberView;

    UIImage *_grabberImage;

    NSArray *_grabberGestureRecognizers;

    _Bool _isAnimatingOutGrabber;

}



+ (id)answerButtonImage;

+ (id)declineButtonImage;

+ (id)videoAnswerButtonImage;

+ (id)videoDeclineButtonImage;

- (void)animateGrabberOutWithCompletion:(id)arg1;

- (void)dealloc;

@property(retain, nonatomic) NSArray *grabberGestureRecognizers; // @synthesize grabberGestureRecognizers=_grabberGestureRecognizers;

@property(retain, nonatomic) UIImage *grabberImage; // @synthesize grabberImage=_grabberImage;

@property(readonly) UIView *grabberView; // @synthesize grabberView=_grabberView;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;



@end


