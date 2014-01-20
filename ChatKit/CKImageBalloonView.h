/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CKBalloonView.h"


#import "CKAnimationTimerObserver.h"



@class CKAnimatedImage, NSArray, UIImageView;



@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver>

{

    CKAnimatedImage *_animatedImage;

    NSArray *_frames;

    UIImageView *_tailMask;

}



@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;

- (void)animationTimerFired:(unsigned long long)arg1;

- (void)configureForMessagePart:(id)arg1;

- (void)dealloc;

- (id)description;

- (void)didMoveToWindow;

@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (id)overlayColor;

- (void)prepareForDisplay;

- (void)prepareForReuse;

- (void)setCanUseOpaqueMask:(_Bool)arg1;

- (void)setHasTail:(_Bool)arg1;

@property(retain, nonatomic) UIImageView *tailMask; // @synthesize tailMask=_tailMask;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;

- (void)updateAnimationTimerObserving;



@end


