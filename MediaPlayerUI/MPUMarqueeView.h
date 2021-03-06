/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSUUID;



@interface MPUMarqueeView : UIView

{

    NSUUID *_currentAnimationID;

    _Bool _marqueeEnabled;

    double _contentGap;

    UIView *_contentView;

    double _marqueeDelay;

    double _marqueeScrollRate;

    struct CGSize _contentSize;

}



- (void).cxx_destruct;

- (void)_createMarqueeAnimationIfNeeded;

- (void)_tearDownMarqueeAnimation;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@property(nonatomic) double contentGap; // @synthesize contentGap=_contentGap;

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;

- (void)didMoveToSuperview;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;

- (void)layoutSubviews;

@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;

@property(nonatomic) double marqueeScrollRate; // @synthesize marqueeScrollRate=_marqueeScrollRate;

- (void)resetMarqueePosition;

- (void)setBounds:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setMarqueeEnabled:(_Bool)arg1 allowCurrentMarqueeToFinish:(_Bool)arg2;



@end


