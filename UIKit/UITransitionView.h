/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "NSCoding.h"



@class NSMutableArray, UIResponder, UIWindow;



@interface UITransitionView : UIView <NSCoding>

{

    UIView *_fromView;

    UIView *_toView;

    NSMutableArray *_frozenSubviews;

    UIResponder *_firstResponderToRemember;

    id _delegate;

    UIWindow *_originalWindow;

    struct {

        unsigned int animationInProgress:1;

        unsigned int ignoresInteractionEvents:1;

        unsigned int shouldNotifyDidCompleteImmediately:1;

        unsigned int useViewControllerAppearanceCallbacks:1;

        unsigned int shouldRestoreFromViewAlpha:1;

        unsigned int shouldRasterize:1;

        unsigned int enableRotationAfterTransition:1;

        unsigned int removeFromView:1;

    } _transitionViewFlags;

    double _curlUpRevealedHeight;

}



+ (double)defaultDurationForTransition:(int)arg1;

- (double)_curlUpRevealedHeight;

- (void)_didCompleteTransition:(_Bool)arg1;

- (void)_didStartTransition;

- (_Bool)_isTransitioningFromFromView:(id)arg1;

- (void)_startTransition:(int)arg1 withDuration:(double)arg2;

- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;

- (void)dealloc;

- (id)delegate;

- (double)durationForTransition:(int)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)fromView;

- (_Bool)ignoresInteractionEvents;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isTransitioning;

- (void)notifyDidCompleteTransition:(id)arg1;

- (_Bool)rasterizesOnTransition;

- (void)setDelegate:(id)arg1;

- (void)setIgnoresInteractionEvents:(_Bool)arg1;

- (void)setRasterizesOnTransition:(_Bool)arg1;

@property(nonatomic) _Bool shouldNotifyDidCompleteImmediately;

- (id)toView;

- (_Bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;

- (_Bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;

- (_Bool)transition:(int)arg1 toView:(id)arg2;



@end


