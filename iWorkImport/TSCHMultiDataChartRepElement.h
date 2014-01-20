/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer<TSCHMultiDataElementShapeLayer>, TSCHMultiDataAnimatingFrameLayer;



__attribute__((visibility("hidden")))

@interface TSCHMultiDataChartRepElement : NSObject

{

    CALayer<TSCHMultiDataElementShapeLayer> *mElementLayer;

    TSCHMultiDataAnimatingFrameLayer *mLabelLayer;

    _Bool mElementUndefined;

}



+ (id)elementWithElementLayer:(id)arg1;

- (void)addAnimationForKey:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 toAnimationInfo:(id)arg4;

- (void)dealloc;

- (id)delegate;

@property(readonly, nonatomic) CALayer<TSCHMultiDataElementShapeLayer> *elementLayer; // @synthesize elementLayer=mElementLayer;

@property(nonatomic) _Bool elementUndefined; // @synthesize elementUndefined=mElementUndefined;

- (id)init;

- (id)initWithElementLayer:(id)arg1;

- (id)initWithLayer:(id)arg1;

@property(readonly, nonatomic) TSCHMultiDataAnimatingFrameLayer *labelLayer; // @synthesize labelLayer=mLabelLayer;

- (void)setContentsScale:(double)arg1;

- (void)setDelegate:(id)arg1;

- (void)setOpacity:(double)arg1;



@end


