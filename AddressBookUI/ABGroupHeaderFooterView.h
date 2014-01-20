/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewHeaderFooterView.h"



@class NSLayoutConstraint, UILabel, UIView;



@interface ABGroupHeaderFooterView : UITableViewHeaderFooterView

{

    _Bool _editing;

    UILabel *_titleLabel;

    UIView *_topSeparatorView;

    UIView *_bottomSeparatorView;

    NSLayoutConstraint *_leftMarginConstraint;

}



+ (_Bool)requiresConstraintBasedLayout;

@property(readonly, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;

- (id)contentConstraints;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;

@property(nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@property(readonly, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;

- (void)updateConstraints;



@end


