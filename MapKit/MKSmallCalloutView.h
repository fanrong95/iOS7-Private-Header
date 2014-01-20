/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "CalloutViewControllerProtocol.h"



@class MKCalloutBackgroundView, NSString, UILabel, UIView<_MKCalloutDetailView>, _MKSmallCalloutPassthroughButton;



__attribute__((visibility("hidden")))

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol>

{

    UILabel *_titleLabel;

    UILabel *_subtitleLabel;

    UIView *_leftView;

    UIView *_rightView;

    UIView<_MKCalloutDetailView> *_detailView;

    struct CGSize _preferredContentSize;

    double _maxWidth;

    _Bool _shouldPositionTitleForMapsTransitionMovingSideways;

    _MKSmallCalloutPassthroughButton *_maskedContainerView;

    UIView *_unmaskedContainerView;

    MKCalloutBackgroundView *_calloutBackgroundView;

    long long _mapDisplayStyle;

}



- (struct CGRect)_centerRect;

- (double)_leftTextMargin;

- (void)_preLayoutCenterSubviews;

@property(readonly, nonatomic) struct CGSize _preferredContentSize; // @synthesize _preferredContentSize;

- (double)_rightTextMargin;

- (id)_subtitleLabel;

- (void)_updatePreferredContentSize;

- (double)_widthWithoutTruncation;

- (void)beginMapsTransitionMovingSideways;

@property(retain, nonatomic) MKCalloutBackgroundView *calloutBackgroundView; // @synthesize calloutBackgroundView=_calloutBackgroundView;

@property(copy, nonatomic) NSString *calloutSubtitle;

@property(copy, nonatomic) NSString *calloutTitle;

- (_Bool)canDisplayCompleteTitleWhenExpanded;

- (void)dealloc;

@property(retain, nonatomic) UIView *detailView;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(retain, nonatomic) UIView *leftView;

@property(nonatomic) long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;

- (double)maxCenterTextWidth;

- (void)reset;

@property(retain, nonatomic) UIView *rightView;

- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;

- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;

- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;

- (void)setRightView:(id)arg1 animated:(_Bool)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


