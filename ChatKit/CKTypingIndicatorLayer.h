/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@class CAReplicatorLayer;



@interface CKTypingIndicatorLayer : CALayer

{

    CALayer *_smallBubble;

    CALayer *_mediumBubble;

    CALayer *_largeBubble;

    CALayer *_thinkingDot;

    CAReplicatorLayer *_thinkingDots;

    struct CGPoint _smallBubbleOffset;

    struct CGPoint _mediumBubbleOffset;

    struct CGPoint _largeBubbleOffset;

}



+ (struct CGSize)defaultSize;

- (void)_buildThinkingDots;

- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;

- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;

- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;

- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;

- (void)_setup;

- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;

- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;

- (void)dealloc;

- (id)init;

@property(retain, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;

@property(nonatomic) struct CGPoint largeBubbleOffset; // @synthesize largeBubbleOffset=_largeBubbleOffset;

@property(retain, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;

@property(nonatomic) struct CGPoint mediumBubbleOffset; // @synthesize mediumBubbleOffset=_mediumBubbleOffset;

@property(retain, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;

@property(nonatomic) struct CGPoint smallBubbleOffset; // @synthesize smallBubbleOffset=_smallBubbleOffset;

@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;

@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;

- (void)startGrowAnimation;

- (void)startPulseAnimation;

- (void)startShrinkAnimation;

- (void)stopAnimation;

- (void)stopPulseAnimation;



@end


