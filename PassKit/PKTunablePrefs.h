/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, UIView, UIWindow;



@interface PKTunablePrefs : NSObject

{

    NSMutableDictionary *_prefs;

    UIView *_prefsContainerView;

    UIWindow *_window;

}



+ (id)sharedPrefs;

- (void)addObserver:(id)arg1 forPref:(id)arg2 handler:(id)arg3;

- (_Bool)canShowUI;

- (void)dealloc;

- (void)didChangeOrientation:(id)arg1;

- (id)init;

- (void)layoutWindow;

@property(retain) NSMutableDictionary *prefs; // @synthesize prefs=_prefs;

@property(retain) UIView *prefsContainerView; // @synthesize prefsContainerView=_prefsContainerView;

- (void)registerSliderPref:(id)arg1 default:(double)arg2 minimumValue:(double)arg3 maximumValue:(double)arg4;

- (void)registerSwitchPref:(id)arg1 default:(_Bool)arg2;

- (void)restore:(id)arg1;

- (void)save:(id)arg1;

@property(nonatomic) _Bool shouldShowUI;

@property(retain) UIWindow *window; // @synthesize window=_window;

- (void)toggleShouldShowUI:(id)arg1;

- (id)tripleTouchTapRecognizer;

- (id)valueForPref:(id)arg1;



@end


