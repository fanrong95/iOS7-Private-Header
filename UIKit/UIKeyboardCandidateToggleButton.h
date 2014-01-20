/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"


@class NSString, UIKBThemedView;



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateToggleButton : UIButton

{

    NSString *_arrowDirection;

    UIKBThemedView *_themedView;

}



- (void)_setRenderConfig:(id)arg1;

- (id)arrowColorForState:(unsigned long long)arg1;

@property(copy, nonatomic) NSString *arrowDirection; // @synthesize arrowDirection=_arrowDirection;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGRect)labelFrameFromFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setArrowColor:(id)arg1 forState:(unsigned long long)arg2;

@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;

- (void)updateArrow;



@end


