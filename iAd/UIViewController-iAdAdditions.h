/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class UIView;



@interface UIViewController (iAdAdditions)

+ (void)prepareInterstitialAds;

@property(nonatomic) _Bool canDisplayBannerAds;

@property(nonatomic) long long interstitialPresentationPolicy;

@property(readonly, nonatomic, getter=isDisplayingBannerAd) _Bool displayingBannerAd;

@property(readonly, nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd;

@property(readonly, nonatomic) UIView *originalContentView;

- (_Bool)requestInterstitialAdPresentation;

- (_Bool)shouldPresentInterstitialAd;

@end


