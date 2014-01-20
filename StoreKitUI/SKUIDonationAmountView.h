/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray, SKUIGiftAmount, SKUIGiftCharity, UIImage, UIImageView, UILabel, UIScrollView;



@interface SKUIDonationAmountView : UIView

{

    NSArray *_amountButtons;

    UILabel *_amountDisclaimerLabel;

    SKUIGiftCharity *_charity;

    UILabel *_descriptionLabel;

    UILabel *_legalTextLabel;

    UILabel *_legalText2Label;

    UIImageView *_logoImageView;

    long long _selectedAmountIndex;

    UIView *_separatorView;

    UIScrollView *_scrollView;

}



- (void).cxx_destruct;

- (void)_amountButtonDown:(id)arg1;

- (void)_amountButtonUpInside:(id)arg1;

- (void)_amountButtonUpOutside:(id)arg1;

@property(readonly, nonatomic) SKUIGiftCharity *charity; // @synthesize charity=_charity;

- (void)dealloc;

- (id)initWithCharity:(id)arg1;

- (void)layoutSubviews;

@property(retain, nonatomic) UIImage *logoImage;

@property(readonly, nonatomic) SKUIGiftAmount *selectedAmount;



@end


