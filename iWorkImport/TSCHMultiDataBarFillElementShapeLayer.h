/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHMultiDataAnimatingFrameLayer.h"


#import "TSCHMultiDataElementShapeLayer.h"



@class CALayer, TSCHMultiDataBarElementShapeLayer, TSDFill;



__attribute__((visibility("hidden")))

@interface TSCHMultiDataBarFillElementShapeLayer : TSCHMultiDataAnimatingFrameLayer <TSCHMultiDataElementShapeLayer>

{

    TSCHMultiDataBarElementShapeLayer *mShapeLayer;

    CALayer *mFillLayer;

    TSDFill *mFill;

    _Bool mAboveIntercept;

    TSDFill *_p_fill;

}



@property(nonatomic) _Bool aboveIntercept; // @synthesize aboveIntercept=mAboveIntercept;

- (id)chartRep;

- (id)currentValueLayer;

- (void)dealloc;

@property(retain, nonatomic) TSDFill *fill; // @synthesize fill=mFill;

- (id)init;

- (id)initWithLayer:(id)arg1;

- (void)p_addAnimationsForLayer:(id)arg1 updatingFrame:(struct CGRect)arg2 toAnimationInfo:(id)arg3;

- (void)p_addAnimationsForUpdatingFillLayerFrame:(struct CGRect)arg1 image:(struct CGImage *)arg2 toAnimationInfo:(id)arg3;

@property(retain, nonatomic) TSDFill *p_fill; // @synthesize p_fill=_p_fill;

- (struct CGRect)p_fillFrameFromFrame:(struct CGRect)arg1 aboveIntercept:(_Bool)arg2 animationInfo:(id)arg3;

- (_Bool)p_hasNoFill;

- (id)p_imageWithFrame:(struct CGRect)arg1;

- (_Bool)p_isColorFill;

- (_Bool)p_revealsFillLayer;

- (_Bool)p_usesFillLayer;

- (void)setContentsScale:(double)arg1;

- (void)setDelegate:(id)arg1;

- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3;

- (void)updateElementFrame:(struct CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;

- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;



@end


