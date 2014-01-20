/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSMutableArray, UIResponder;



@interface SKUIComposeTextFieldListView : UIView

{

    id <SKUIComposeTextFieldListViewDelegate> _delegate;

    NSMutableArray *_fields;

    _Bool _isValid;

    long long _style;

}



- (void).cxx_destruct;

- (void)_updateValidity;

@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;

- (void)composeTextFieldValidityChanged:(id)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIComposeTextFieldListViewDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) double height;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@property(readonly, nonatomic) UIResponder *initialFirstResponder;

- (_Bool)isValid;

- (void)layoutSubviews;

- (void)reloadData;

- (id)textForFieldAtIndex:(unsigned long long)arg1;



@end


