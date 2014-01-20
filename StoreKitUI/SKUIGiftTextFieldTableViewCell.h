/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class NSAttributedString, NSString, UIControl, UILabel, UITextField, UIView;



@interface SKUIGiftTextFieldTableViewCell : UITableViewCell

{

    UILabel *_label;

    UITextField *_textField;

    UIView *_topBorderView;

}



- (void).cxx_destruct;

@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(nonatomic, getter=isEnabled) _Bool enabled;

@property(nonatomic) long long keyboardType;

@property(copy, nonatomic) NSString *label;

- (void)layoutSubviews;

@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate;

@property(copy, nonatomic) NSString *value;

@property(readonly, nonatomic) UIControl *textField; // @synthesize textField=_textField;



@end

