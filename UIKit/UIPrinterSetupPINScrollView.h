/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIScrollView.h"


@class UIView;



__attribute__((visibility("hidden")))

@interface UIPrinterSetupPINScrollView : UIScrollView

{

    UIView *_contentView;

    double _visibleHeight;

}



- (_Bool)_scrollsToMakeFirstResponderVisible;

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;

- (void)dealloc;

- (id)initWithContentView:(id)arg1;

- (void)keyboardDidChangeFrame:(id)arg1;

- (void)layoutSubviews;

- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;

@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;



@end


