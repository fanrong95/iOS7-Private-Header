/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIPageControl, UIPageViewController, _UIQueuingScrollView;



__attribute__((visibility("hidden")))

@interface _UIPageViewControllerContentView : UIView

{

    UIPageViewController *_pageViewController;

    _UIQueuingScrollView *_scrollView;

    UIPageControl *_pageControl;

}



- (double)_pageSpacing;

- (struct CGRect)_scrollViewFrame;

- (void)_setupPageControl:(id)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 andPageViewController:(id)arg2;

- (void)invalidatePageViewController;

- (void)layoutSubviews;

@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;

@property(readonly, nonatomic) _UIQueuingScrollView *scrollView; // @synthesize scrollView=_scrollView;

- (void)setBounds:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;



@end


