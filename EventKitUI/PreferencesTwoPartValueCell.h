/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class TwoPartTextLabel, UIColor;



@interface PreferencesTwoPartValueCell : UITableViewCell

{

    TwoPartTextLabel *_twoPartLabel;

    unsigned int _notifiedShort;

    id <EKCellShortener> _shortener;

}



- (void).cxx_destruct;

- (void)_layoutSubviewsCore;

- (void)checkValueWidths;

- (void)layoutSubviews;

- (void)layoutText:(id)arg1 andValue:(id)arg2;

@property(nonatomic) __weak id <EKCellShortener> shortener; // @synthesize shortener=_shortener;

- (void)shorten;

@property(readonly, nonatomic) TwoPartTextLabel *twoPartTextLabel;

@property(readonly, nonatomic) UIColor *valueColor;



@end


