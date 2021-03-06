/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAsset, AVAudioMix, AVPlayer, AVPlayerItem, NSString, PLMoviePlayerView, PLTVOutWindow, UIAlertView;



@interface PLMoviePlayerController : NSObject

{

    AVAsset *_asset;

    AVAudioMix *_audioMix;

    AVPlayerItem *_playerItem;

    AVPlayer *_player;

    PLMoviePlayerView *_view;

    UIAlertView *_alertView;

    PLTVOutWindow *_tvOutWindow;

    _Bool _hasPendingTime;

    double _pendingTime;

    unsigned long long _pendingTimeSnapOption;

    _Bool _forceUpdateCurrentTime;

    _Bool _isExternalPlayback;

    _Bool _exited;

    double _lastSetCurrentTimeTime;

    _Bool _isSeeking;

    unsigned long long _backgroundTaskId;

    _Bool _audioSessionActive;

    NSString *_originalAudioCategory;

    _Bool _TVOutEnabled;

    _Bool _forceDisableTVOut;

    _Bool _isPreparedForPlayback;

    _Bool _isActiveController;

    id <PLMoviePlayerControllerDelegate> _delegate;

    unsigned long long _bufferingState;

    unsigned long long _playbackState;

    NSString *_audioTimePitchAlgorithm;

}



+ (_Bool)_isNetworkSupportedPath:(id)arg1;

+ (_Bool)_isStreamableAsset:(id)arg1;

@property(nonatomic) _Bool TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;

- (_Bool)_allowsExternalPlayback;

- (void)_delayedUpdateFromPendingTime;

- (void)_didEnterBackgroundNotification:(id)arg1;

- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;

- (void)_dispatchOnMainThreadWithBlock:(id)arg1;

- (void)_displayVideoView;

- (void)_exitPlayer:(int)arg1;

- (void)_loadAsset:(id)arg1;

- (void)_pausePlaybackForNotification;

- (void)_playbackFailedWithError:(id)arg1;

- (void)_playerItemDidReachEndNotification:(id)arg1;

- (void)_playerItemFailedToPlayToEnd:(id)arg1;

- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;

- (id)_playerKeysToObserve;

- (void)_playerRateDidChange:(id)arg1;

- (void)_registerForNotifications;

- (void)_restoreTVOutVideoIfNecessary;

- (void)_screenDidConnect:(id)arg1;

- (void)_screenDidDisconnect:(id)arg1;

- (void)_serverConnectionDidDie:(id)arg1;

- (void)_setBufferingState:(unsigned long long)arg1;

@property(nonatomic, setter=_setForceDisableTVOut:) _Bool forceDisableTVOut; // @synthesize forceDisableTVOut=_forceDisableTVOut;

- (void)_setPlaybackState:(unsigned long long)arg1;

- (void)_setPlayerAudioSessionActive:(_Bool)arg1;

- (void)_setPlayerItem:(id)arg1;

- (void)_setupPlayer;

- (void)_setupTVOutWindow;

- (void)_simpleRemoteNotification:(id)arg1;

- (void)_streamBufferFull;

- (void)_streamLikelyToKeepUp;

- (void)_streamRanDry;

- (void)_streamUnlikelyToKeepUp;

- (void)_tearDownPlayer;

- (void)_tearDownTVOutWindow;

- (void)_unregisterForNotifications;

- (void)_updateAudioSession;

- (void)_updateBackgroundViewInformation;

- (void)_updateDisableAirPlayMirroringDuringPlayback;

- (void)_updateFromPendingTime;

- (void)_updateTVOutEnabled;

- (void)_willBeginSuspendAnimationNotification:(id)arg1;

- (void)_willEnterForegroundNotification:(id)arg1;

- (void)_willResignNotification:(id)arg1;

- (void)_willSuspendNotification:(id)arg1;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (id)assetForMovieWithPath:(id)arg1 options:(id)arg2;

@property(copy, nonatomic) NSString *audioTimePitchAlgorithm; // @synthesize audioTimePitchAlgorithm=_audioTimePitchAlgorithm;

@property(readonly, nonatomic) unsigned long long bufferingState; // @synthesize bufferingState=_bufferingState;

@property(nonatomic) double currentTime;

- (void)dealloc;

@property(nonatomic) id <PLMoviePlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)didBecomeActiveController;

@property(readonly, nonatomic) double duration;

- (id)init;

@property(nonatomic) _Bool isActiveController; // @synthesize isActiveController=_isActiveController;

- (_Bool)isExternalPlayback;

@property(readonly, nonatomic) _Bool isPreparedForPlayback; // @synthesize isPreparedForPlayback=_isPreparedForPlayback;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (void)pause;

- (void)pauseDueToInsufficientData;

- (void)play;

- (void)playDueToEnoughData;

- (void)playFromBeginning;

@property(readonly, nonatomic) float playbackRate;

@property(readonly, nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;

@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;

- (void)requestToBecomeActiveController;

- (void)requestToResignAsActiveController;

- (void)setAsset:(id)arg1;

- (void)setAsset:(id)arg1 audioMix:(id)arg2 startTime:(double)arg3;

- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2;

- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 forceUpdate:(_Bool)arg3;

- (void)stop;

- (void)tearDownTVOutWindow;

- (_Bool)videoOutActive;

@property(readonly, nonatomic) PLMoviePlayerView *view; // @synthesize view=_view;

- (void)willResignAsActiveController;



@end


