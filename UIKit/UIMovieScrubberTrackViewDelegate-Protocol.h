/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol UIMovieScrubberTrackViewDelegate <NSObject>



@optional

- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;

- (void)movieScrubberTrackViewDidCollapse:(id)arg1;

- (void)movieScrubberTrackViewDidExpand:(id)arg1;

- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;

- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;

- (double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;

- (double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;

@end


