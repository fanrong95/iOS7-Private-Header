/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UIButton, UIImageView, UILabel;



@interface SKUISearchNoResultsView : UIView

{

    UIImageView *_imageView;

    UILabel *_label;

    UIButton *_button;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setMessageWithSearchTerm:(id)arg1 spellCorrectedTerm:(id)arg2 clientContext:(id)arg3;



@end


