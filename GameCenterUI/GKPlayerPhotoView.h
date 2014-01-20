/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"



#import "GKPlayerPhotoContainer.h"



@class GKPlayer;



@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer>

{

    GKPlayer *_player;

    long long _onAdaptiveBackground;

}



+ (void)initialize;

- (void)dealloc;

- (void)invalidateIntrinsicContentSize;

@property(nonatomic, getter=isOnAdaptiveBackground) long long onAdaptiveBackground; // @synthesize onAdaptiveBackground=_onAdaptiveBackground;

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;

- (void)refreshPhoto;

- (void)refreshPhotoWithCompletionHandler:(id)arg1;



@end


