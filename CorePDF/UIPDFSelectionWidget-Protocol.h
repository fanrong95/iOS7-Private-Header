/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@class UIPDFPageView;



@protocol UIPDFSelectionWidget

@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;

- (void)endTracking;

- (void)hide;

- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;

@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage;

- (void)layout;

@property(nonatomic) UIPDFPageView *pageView;

- (void)remove;

- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;

- (struct CGRect)selectionRectangle;

- (void)setSelectedGrabber:(unsigned long long)arg1;

- (void)setSelection:(id)arg1;

- (void)track:(struct CGPoint)arg1;

- (struct CGPoint)viewOffset;

@end

