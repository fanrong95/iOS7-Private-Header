/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBKeyView.h"


@class UIKBBackdropView;



__attribute__((visibility("hidden")))

@interface UIKBBlurredKeyView : UIKBKeyView

{

    UIKBKeyView *_keyView;

    UIKBBackdropView *_backdropView;

}



- (void)dealloc;

- (void)dimKeyCaps:(double)arg1 duration:(double)arg2;

- (void)displayLayer:(id)arg1;

- (struct CGRect)drawFrame;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

- (id)key;

- (id)keyplane;

- (id)renderConfig;

- (void)setDrawFrame:(struct CGRect)arg1;

- (void)setNeedsDisplay;

- (void)setRenderConfig:(id)arg1;

- (void)updateForKeyplane:(id)arg1 key:(id)arg2;



@end


