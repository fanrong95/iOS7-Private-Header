/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MPViewController, NSMutableSet, UIView, UIViewController;



@interface MPTransitionController : NSObject

{

    struct __CFDictionary *_observers;

    float _duration;

    UIView *_rootView;

    NSMutableSet *_persistentViewsToFadeOut;

    NSMutableSet *_viewsToFadeOut;

    NSMutableSet *_persistentViewsToFadeIn;

    NSMutableSet *_viewsToFadeIn;

    MPViewController *_fromViewController;

    long long _fromInterfaceOrientation;

    MPViewController *_toViewController;

    long long _toInterfaceOrientation;

    UIViewController *_toContainerViewController;

}



- (void).cxx_destruct;

- (void)addObserver:(id)arg1 didEndSelector:(SEL)arg2;

- (void)addViewToFadeIn:(id)arg1 restoreOnPop:(_Bool)arg2;

- (void)addViewToFadeOut:(id)arg1 restoreOnPop:(_Bool)arg2;

- (void)dealloc;

- (void)didFinishTransition:(_Bool)arg1;

@property(nonatomic) float duration; // @synthesize duration=_duration;

- (void)fadeViewsForRestore:(_Bool)arg1;

@property(nonatomic) long long fromInterfaceOrientation; // @synthesize fromInterfaceOrientation=_fromInterfaceOrientation;

@property(retain, nonatomic) MPViewController *fromViewController; // @synthesize fromViewController=_fromViewController;

- (id)init;

- (void)messageObserversWithSuccess:(_Bool)arg1;

- (void)performTransition:(unsigned long long)arg1;

- (void)removeObserver:(id)arg1;

@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;

@property(retain, nonatomic) UIViewController *toContainerViewController; // @synthesize toContainerViewController=_toContainerViewController;

@property(nonatomic) long long toInterfaceOrientation; // @synthesize toInterfaceOrientation=_toInterfaceOrientation;

@property(retain, nonatomic) MPViewController *toViewController; // @synthesize toViewController=_toViewController;

- (void)transition:(unsigned long long)arg1;

- (void)willBeginTransition:(unsigned long long)arg1;



@end


