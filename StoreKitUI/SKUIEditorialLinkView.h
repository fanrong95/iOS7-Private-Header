/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSMutableArray, SKUIEditorialLinkLayout, UIColor;



@interface SKUIEditorialLinkView : UIView

{

    NSMutableArray *_buttons;

    id <SKUIEditorialLinkViewDelegate> _delegate;

    UIColor *_highlightedTextColor;

    long long _horizontalAlignment;

    SKUIEditorialLinkLayout *_layout;

    UIColor *_textColor;

}



- (void).cxx_destruct;

- (void)_linkButtonAction:(id)arg1;

- (id)_newButton;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIEditorialLinkViewDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(retain, nonatomic) SKUIEditorialLinkLayout *linkLayout; // @synthesize linkLayout=_layout;

- (void)setBackgroundColor:(id)arg1;

- (void)setColoringWithColorScheme:(id)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)tintColorDidChange;



@end


