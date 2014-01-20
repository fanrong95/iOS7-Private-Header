/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBHandwritingPointFIFO.h"


@class NSMutableArray, UIBezierPath, UIKBHandwritingStrokeView;



__attribute__((visibility("hidden")))

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO

{

    NSMutableArray *_prevPoints;

    UIBezierPath *_path;

    UIKBHandwritingStrokeView *_strokeView;

}



- (void)addPoint:(struct CGPoint)arg1;

- (void)clear;

- (void)dealloc;

- (void)flush;

- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;

@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;

@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;

@property(retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // @synthesize strokeView=_strokeView;



@end


