/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class NSString, UIImageView, UILabel, UIView;



@interface SKUIGiftDateTableViewCell : UITableViewCell

{

    UIView *_bottomBorderView;

    _Bool _checked;

    UIImageView *_checkmarkView;

    UILabel *_dateLabel;

    UILabel *_labelLabel;

    UILabel *_placeholderLabel;

    UIView *_topBorderView;

}



- (void).cxx_destruct;

- (id)_labelColor;

- (id)_newLabel;

@property(copy, nonatomic) NSString *dateString;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;

@property(copy, nonatomic) NSString *label;

- (void)layoutSubviews;

@property(copy, nonatomic) NSString *placeholder;



@end

