/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIAutoRotatingWindow.h"


#import "_UIScreenBasedObject.h"



@class UIScreen;



@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>

{

    unsigned int _activeEffectsCount;

    _Bool _inDealloc;

    _Bool _nonServiceHosted;

    double _defaultWindowLevel;

    struct CGPoint _hostedWindowOffset;

    int _bgCount;

    unsigned long long _activeRemoteViewCount;

    unsigned long long _windowLevelCount;

    double _windowLevelStack[5];

}



+ (void)_releaseSharedInstances;

+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(_Bool)arg2 matchesStatusBarOrientationOnAccess:(_Bool)arg3;

+ (void)lowerTextEffectsWindowsForHideNotificationCenter;

+ (id)preferredTextEffectsWindow;

+ (id)preferredTextEffectsWindowAboveStatusBar;

+ (void)raiseTextEffectsWindowsForShowNotificationCenter;

+ (id)sharedTextEffectsWindow;

+ (id)sharedTextEffectsWindow:(_Bool)arg1;

+ (id)sharedTextEffectsWindowAboveStatusBar;

+ (id)sharedTextEffectsWindowAboveStatusBarForScreen:(id)arg1;

+ (id)sharedTextEffectsWindowForScreen:(id)arg1;

- (struct CGPoint)_adjustPointForHostedDisplay:(struct CGPoint)arg1 hasTarget:(_Bool)arg2 inset:(_Bool)arg3;

- (void)_applicationDidFinishLaunching:(id)arg1;

- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;

- (_Bool)_canAffectStatusBarAppearance;

- (void)_didRemoveSubview:(id)arg1;

- (_Bool)_disableViewScaling;

- (id)_initWithScreen:(id)arg1 options:(id)arg2;

@property(readonly) UIScreen *_intendedScreen;

- (_Bool)_isTextEffectsWindow;

- (_Bool)_isWindowServerHostingManaged;

- (_Bool)_matchingOptions:(id)arg1;

- (void)_restoreWindowLevel;

- (void)_setWindowLevel:(double)arg1;

- (_Bool)_shouldTintStatusBar;

- (void)_updateTransformLayerForClassicPresentation;

- (_Bool)_usesWindowServerHitTesting;

- (id)aboveStatusBar;

- (void)bringSubviewToFront:(id)arg1;

- (struct CGPoint)classicWindowPointForPoint:(struct CGPoint)arg1;

@property(readonly) unsigned int contextID;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;

- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;

- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;

- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;

- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;

- (void)dealloc;

@property(nonatomic) double defaultWindowLevel; // @synthesize defaultWindowLevel=_defaultWindowLevel;

- (void)delayHideWindow;

- (void)didAddSubview:(id)arg1;

- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;

@property(readonly, nonatomic) struct CGRect hostedFrame;

@property(nonatomic) struct CGPoint hostedWindowOffset; // @synthesize hostedWindowOffset=_hostedWindowOffset;

- (id)initWithFrame:(struct CGRect)arg1;

- (long long)interfaceOrientation;

- (_Bool)isInternalWindow;

- (struct CGPoint)magnifierScreenPointForPoint:(struct CGPoint)arg1 targetWindow:(id)arg2;

- (void)matchDeviceOrientation;

@property(nonatomic) _Bool nonServiceHosted; // @synthesize nonServiceHosted=_nonServiceHosted;

- (void)resetTransform;

- (void)sendSubviewToBack:(id)arg1;

- (void)setKeepContextInBackground:(_Bool)arg1;

- (void)setTransform:(struct CGAffineTransform)arg1;

- (void)sortSubviews;

- (void)updateForOrientation:(long long)arg1;

- (void)updateForOrientation:(long long)arg1 forceResetTransform:(_Bool)arg2;

- (void)updateSubviewOrdering;



@end


