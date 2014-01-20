/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"



@class NSString, SKUIColorScheme, UIColor, UILabel, UIView;



@interface SKUIProductPageTableExpandableHeaderView : UIControl

{

    UILabel *_actionLabel;

    UIView *_bottomBorderView;

    UILabel *_titleLabel;

    UIView *_topBorderView;

    SKUIColorScheme *_colorScheme;

}



- (void).cxx_destruct;

@property(copy, nonatomic) NSString *actionString;

@property(copy, nonatomic) UIColor *bottomBorderColor;

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;

- (void)layoutSubviews;

- (void)setBackgroundColor:(id)arg1;

@property(copy, nonatomic) NSString *title;

@property(copy, nonatomic) UIColor *topBorderColor;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


