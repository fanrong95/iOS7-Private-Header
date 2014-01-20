/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MPMediaPlayback.h"



@class MPMusicPlayerControllerInternal;



@interface MPMusicPlayerController : NSObject <MPMediaPlayback>

{

    MPMusicPlayerControllerInternal *_internal;

}



+ (id)applicationMusicPlayer;

+ (id)iPodMusicPlayer;

+ (void)initialize;

+ (id)runLoopForNotifications;

+ (void)setRunLoopForNotifications:(id)arg1;

- (void).cxx_destruct;

- (void)_clientCheckInUsingExistencePort:(_Bool)arg1;

- (void)_isQueuePreparedDidChange:(_Bool)arg1;

- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;

- (void)_musicPlayerDidLaunch;

- (_Bool)_musicPlayerExistencePortIsValid;

- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;

- (void)_playbackStateDidChange:(long long)arg1;

- (void)_registerForLaunchNotifications;

- (void)_repeatModeDidChange:(long long)arg1;

- (void)_runMigServerOnPort:(unsigned int)arg1;

- (void)_serverDied:(id)arg1;

- (void)_setUseApplicationSpecificQueue:(_Bool)arg1;

- (void)_shuffleModeDidChange:(long long)arg1;

- (void)_stopMigServer;

- (void)_systemVolumeDidChange:(id)arg1;

- (void)_unregisterForLaunchNotifications;

- (_Bool)allowsBackgroundVideo;

- (void)beginGeneratingPlaybackNotifications;

- (void)beginSeekingBackward;

- (void)beginSeekingForward;

- (unsigned long long)currentChapterIndex;

@property(nonatomic) float currentPlaybackRate;

@property(nonatomic) double currentPlaybackTime;

- (void)dealloc;

- (void)endGeneratingPlaybackNotifications;

- (void)endSeeking;

- (void)forwardInvocation:(id)arg1;

- (unsigned long long)indexOfNowPlayingItem;

- (id)init;

- (_Bool)isGeniusAvailable;

- (_Bool)isGeniusAvailableForSeedItems:(id)arg1;

- (_Bool)isNowPlayingItemFromGeniusMix;

@property(readonly, nonatomic) _Bool isPreparedToPlay;

- (id)methodSignatureForSelector:(SEL)arg1;

- (id)nowPlayingItem;

- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;

- (long long)nowPlayingRadioTrackID;

- (unsigned long long)numberOfItems;

- (void)pause;

- (void)pauseWithFadeoutDuration:(double)arg1;

- (void)play;

- (long long)playbackSpeed;

- (long long)playbackState;

- (void)prepareToPlay;

- (long long)repeatMode;

- (_Bool)serverIsAlive;

- (void)setAllowsBackgroundVideo:(_Bool)arg1;

- (void)setCurrentChapterIndex:(unsigned long long)arg1;

- (void)setPlaybackSpeed:(long long)arg1;

- (void)setQueueWithGeniusMixPlaylist:(id)arg1;

- (void)setQueueWithItemCollection:(id)arg1;

- (void)setQueueWithQuery:(id)arg1;

- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;

- (void)setQueueWithRadioStation:(id)arg1;

- (_Bool)setQueueWithSeedItems:(id)arg1;

- (void)setRepeatMode:(long long)arg1;

- (void)setShuffleMode:(long long)arg1;

- (void)setUseCachedPlaybackState:(_Bool)arg1;

- (void)setVolume:(float)arg1;

- (void)setVolumePrivate:(float)arg1;

- (long long)shuffleMode;

- (_Bool)skipInDirection:(long long)arg1 error:(id *)arg2;

- (void)stop;

- (unsigned long long)unshuffledIndexOfNowPlayingItem;

- (float)volume;



@end


