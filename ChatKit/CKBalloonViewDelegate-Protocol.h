/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol CKBalloonViewDelegate <NSObject>

- (_Bool)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;

- (void)balloonViewDidFinishDataDetectorAction:(id)arg1;

- (void)balloonViewTapped:(id)arg1 withEvent:(id)arg2;

- (void)balloonViewTouchedDown:(id)arg1 withEvent:(id)arg2;

- (void)balloonViewWillResignFirstResponder:(id)arg1;

- (struct CGRect)calloutTargetRectForBalloonView:(id)arg1;

- (id)menuItemsForBalloonView:(id)arg1;

@end


