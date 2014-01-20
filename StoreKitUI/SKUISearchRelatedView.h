/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray, NSMutableArray, NSString, SKUIClientContext, UIButton, UILabel, UIScrollView;



@interface SKUISearchRelatedView : UIView

{

    SKUIClientContext *_clientContext;

    id <SKUISearchRelatedViewDelegate> _delegate;

    NSArray *_relatedQueries;

    UILabel *_titleLabel;

    NSMutableArray *_relatedButtons;

    UIScrollView *_scrollView;

    UILabel *_noRelatedLabel;

    UIButton *_backButton;

    UIView *_separatorView;

    NSString *_previousRelatedSearchTerm;

}



- (void).cxx_destruct;

- (void)_backAction:(id)arg1;

- (void)_buttonAction:(id)arg1;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (void)dealloc;

@property(nonatomic) __weak id <SKUISearchRelatedViewDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(copy, nonatomic) NSString *previousRelatedSearchTerm; // @synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm;

@property(retain, nonatomic) NSArray *relatedQueries; // @synthesize relatedQueries=_relatedQueries;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


