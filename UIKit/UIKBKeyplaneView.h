/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBSplitImageView.h"


#import "UIKBCacheableView.h"



@class NSMutableDictionary, NSString, NSTimer, UIKBCacheToken, UIKBKeyView, UIKBRenderConfig, UIKBTree;



__attribute__((visibility("hidden")))

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView>

{

    UIKBTree *_keyplane;

    UIKBTree *_defaultKeyplane;

    UIKBCacheToken *_cacheToken;

    UIKBKeyView *_candidateGapView;

    NSMutableDictionary *_subviewIndex;

    NSMutableDictionary *_activeViewIndex;

    NSMutableDictionary *_renderedKeyViews;

    NSMutableDictionary *_delayedDeactivationKeys;

    NSTimer *_activatedTimer;

    _Bool _performingDeactivation;

    _Bool _shouldDrawRect;

    UIKBRenderConfig *_renderConfig;

    UIKBSplitImageView *_keyBorders;

    UIKBSplitImageView *_keyBackgrounds;

    UIKBSplitImageView *_keyCaps;

}



- (_Bool)_shouldDrawLowResBackground;

- (void)activateKeys;

- (void)addKeyToDelayedDeactivationSet:(id)arg1;

@property(readonly, nonatomic) _Bool cacheDeferable;

- (id)cacheIdentifierForKey:(id)arg1;

- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;

@property(readonly, nonatomic) NSString *cacheKey;

- (id)cacheKeysForRenderFlags:(id)arg1;

@property(retain, nonatomic) UIKBCacheToken *cacheToken; // @synthesize cacheToken=_cacheToken;

@property(readonly, nonatomic) double cachedWidth;

- (void)cancelDelayedDeactivation;

- (Class)classForKey:(id)arg1;

- (id)containingViewForKey:(id)arg1 withState:(int)arg2;

- (int)cornerMaskForKey:(id)arg1 recursive:(_Bool)arg2;

- (void)deactivateAdaptiveKey:(id)arg1;

- (void)deactivateKey:(id)arg1 previousState:(int)arg2;

- (void)deactivateKeys;

- (void)dealloc;

@property(retain, nonatomic) UIKBTree *defaultKeyplane; // @synthesize defaultKeyplane=_defaultKeyplane;

- (void)dimKeyCaps:(double)arg1 duration:(double)arg2;

- (void)displayLayer:(id)arg1;

- (void)drawContentsOfRenderers:(id)arg1;

- (void)drawRect:(struct CGRect)arg1;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;

@property(readonly, nonatomic) _Bool keepNonPersistent;

@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;

- (void)layoutSubviews;

- (void)performDelayedDeactivation:(id)arg1;

- (void)purgeKeyViews;

- (void)purgeSubviews;

- (void)removeFromSuperview;

- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;

@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;

- (void)scheduleDelayedDeactivation;

- (void)setState:(int)arg1 forKey:(id)arg2;

- (int)stateForKey:(id)arg1;

- (void)updateDecorationViewsIfNeeded;

- (_Bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;

- (id)viewForKey:(id)arg1;

- (id)viewForKey:(id)arg1 state:(int)arg2;



@end


