/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class NSAttributedString, UIColor, UIRefreshControl;



__attribute__((visibility("hidden")))

@interface _UIRefreshControlContentView : UIView

{

    UIRefreshControl *_refreshControl;

    UIColor *_tintColor;

}



- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;

@property(retain, nonatomic) NSAttributedString *attributedTitle;

- (void)dealloc;

- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;

@property(readonly, nonatomic) double maximumSnappingHeight;

@property(readonly, nonatomic) double minimumSnappingHeight;

@property(nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;

- (void)refreshControlInvalidatedSnappingHeight;

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

@property(readonly, nonatomic) long long style;

- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;



@end


