/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBKeyView.h"


#import "UIGestureRecognizerDelegate.h"



@class NSMutableArray, UIBezierPath, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView;



__attribute__((visibility("hidden")))

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate>

{

    UIKBHandwritingStrokeView *_strokeView;

    double _inkWidth;

    struct CGColor *_inkColor;

    struct CGImage *_inkMask;

    NSMutableArray *_interpolatedPaths;

    UIBezierPath *_currentPath;

    UIKBHandwritingStrokePointFIFO *_strokeFIFO;

    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;

    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;

}



- (void)addInkPoint:(struct CGPoint)arg1;

- (_Bool)cancelTouchTracking;

- (void)clearAndNotify:(_Bool)arg1;

@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;

- (void)dealloc;

- (void)deleteStrokesAtIndexes:(id)arg1;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@property(nonatomic) struct CGColor *inkColor; // @synthesize inkColor=_inkColor;

@property(nonatomic) struct CGImage *inkMask; // @synthesize inkMask=_inkMask;

@property(nonatomic) double inkWidth; // @synthesize inkWidth=_inkWidth;

@property(retain, nonatomic) NSMutableArray *interpolatedPaths; // @synthesize interpolatedPaths=_interpolatedPaths;

@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;

- (void)log;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

- (void)send;

- (void)setRenderConfig:(id)arg1;

@property(retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;

@property(retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;

@property(retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // @synthesize strokeView=_strokeView;

- (_Bool)shouldCache;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

- (void)updateInkColor;



@end


