/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol ADInterstitialAdDelegate <NSObject>

- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;

- (void)interstitialAdDidUnload:(id)arg1;



@optional

- (void)interstitialAdActionDidFinish:(id)arg1;

- (_Bool)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;

- (void)interstitialAdDidLoad:(id)arg1;

- (void)interstitialAdWillLoad:(id)arg1;

@end


