/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class GKPlayer, GKSpeechBalloonBackgroundView, NSArray, NSString, UITextView, UIView<GKPlayerPhotoContainer>;



@interface GKPlayerWithSpeechBalloonView : UIView

{

    UITextView *_speechTextView;

    UIView<GKPlayerPhotoContainer> *_photoView;

    GKSpeechBalloonBackgroundView *_balloonView;

    NSArray *_replaceableConstraints;

}



+ (id)instantiatePhotoContainer;

+ (_Bool)requiresConstraintBasedLayout;

- (void)_updateSpeechText:(id)arg1;

@property(retain, nonatomic) GKSpeechBalloonBackgroundView *balloonView; // @synthesize balloonView=_balloonView;

- (void)dealloc;

@property(nonatomic) unsigned char drawStyle;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

- (id)metrics;

@property(retain, nonatomic) UIView<GKPlayerPhotoContainer> *photoView; // @synthesize photoView=_photoView;

@property(retain, nonatomic) GKPlayer *player;

@property(nonatomic) double preferredMaxLayoutWidth;

@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;

@property(retain, nonatomic) NSString *speechText;

@property(retain, nonatomic) UITextView *speechTextView; // @synthesize speechTextView=_speechTextView;

@property(nonatomic) unsigned char tipDirection;

- (void)updateConstraints;



@end


