/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIActivity.h"



@class GKGame, GKPlayer;



@interface GKPlayGameActivity : UIActivity

{

    GKGame *_game;

    GKPlayer *_player;

}



+ (id)playGameActivityWithPlayer:(id)arg1;

- (id)_activityImage;

- (_Bool)_canPerformWithSuppliedActivityItems:(id)arg1;

- (id)activityTitle;

- (id)activityType;

- (void)dealloc;

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;

- (id)initWithPlayer:(id)arg1;

- (void)performActivity;

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;

- (void)prepareWithActivityItems:(id)arg1;



@end

