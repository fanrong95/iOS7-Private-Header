/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UISegmentedControl.h"



#import "SUDeferredUIView.h"



@class NSMutableArray;



@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView>

{

    struct CGRect _deferredFrame;

    double _deferredMaxTotalWidth;

    double _deferredMinSegmentWidth;

    NSMutableArray *_deferredSegments;

    long long _deferredSegmentedControlStyle;

    unsigned long long _deferredSelectedSegmentIndex;

    _Bool _deferredSizeToFit;

    _Bool _isDeferringInterfaceUpdates;

}



- (void)_commitDeferredInterfaceUpdates;

- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)_saveCurrentStateAsDeferred;

- (void)_saveSegmentsAsDeferred;

- (void)dealloc;

- (struct CGRect)frame;

- (id)imageForSegmentAtIndex:(unsigned long long)arg1;

- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;

- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;

@property(nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;

- (unsigned long long)numberOfSegments;

- (void)removeAllSegments;

- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;

- (long long)segmentedControlStyle;

- (long long)selectedSegmentIndex;

- (void)setFrame:(struct CGRect)arg1;

- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;

- (void)setSegmentedControlStyle:(long long)arg1;

- (void)setSelectedSegmentIndex:(long long)arg1;

- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;

- (void)sizeToFit;

- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;

- (id)titleForSegmentAtIndex:(unsigned long long)arg1;



@end


