/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UILabel;



@interface SKUIDeveloperInfoLineItemView : UIView

{

    struct UIEdgeInsets _contentInset;

    UILabel *_labelLabel;

    UIView *_separatorView;

    UILabel *_valueLabel;

}



- (void).cxx_destruct;

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;

- (id)initWithLabel:(id)arg1 value:(id)arg2;

- (void)layoutSubviews;

- (void)setBackgroundColor:(id)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


