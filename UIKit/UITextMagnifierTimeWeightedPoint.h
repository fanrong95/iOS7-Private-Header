/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface UITextMagnifierTimeWeightedPoint : NSObject

{

    int m_index;

    struct {

        struct CGPoint point;

        double time;

    } m_points[16];

}



- (void)addPoint:(struct CGPoint)arg1;

- (void)clearHistory;

- (struct CGSize)displacementInInterval:(double)arg1;

- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;

- (float)distanceCoveredInInterval:(double)arg1;

- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;

- (_Bool)historyCovers:(double)arg1;

@property(readonly, nonatomic) struct CGPoint weightedPoint;



@end


