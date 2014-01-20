/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSArray, NSString, SKUIClientContext, SKUIReviewList, SKUIReviewsHistogramView, UIControl;



@interface SKUIReviewsHistogramViewController : UIViewController

{

    SKUIClientContext *_clientContext;

    SKUIReviewsHistogramView *_histogramView;

    SKUIReviewList *_reviewList;

}



- (void).cxx_destruct;

- (id)_histogramView;

- (void)_reloadHistogram;

@property(readonly, nonatomic) UIControl *appSupportButton;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (void)loadView;

@property(nonatomic) long long personalStarRating;

@property(retain, nonatomic) SKUIReviewList *reviewList; // @synthesize reviewList=_reviewList;

@property(readonly, nonatomic) UIControl *segmentedControl;

@property(copy, nonatomic) NSArray *segmentedControlTitles;

@property(nonatomic) long long selectedSegmentIndex;

@property(copy, nonatomic) NSString *versionString;

@property(readonly, nonatomic) UIControl *starRatingControl;

@property(readonly, nonatomic) UIControl *writeAReviewButton;



@end


