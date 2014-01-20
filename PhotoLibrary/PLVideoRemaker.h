/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAsset, AVAssetExportSession, AVAudioMix, NSString, NSTimer, PLProgressView;



@interface PLVideoRemaker : NSObject

{

    AVAsset *_asset;

    AVAudioMix *_audioMix;

    NSString *_trimmedPath;

    double _duration;

    double _trimStartTime;

    double _trimEndTime;

    int _mode;

    AVAssetExportSession *_exportSession;

    float _percentComplete;

    NSTimer *_progressTimer;

    PLProgressView *_progressView;

    id _delegate;

}



+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;

+ (long long)fileLengthLimitForRemakerMode:(int)arg1;

+ (int)getHDRemakerModeForMode:(int)arg1;

+ (int)getSDRemakerModeForMode:(int)arg1;

+ (double)maximumDurationForTrimMode:(int)arg1;

- (void)_didEndRemakingWithTemporaryPath:(id)arg1;

- (void)_exportCompletedWithSuccess:(_Bool)arg1;

- (id)_fileFormatForURL:(id)arg1;

- (void)_removeProgressTimer;

- (void)_resetProgressTimer;

- (void)_updateProgress;

- (void)cancel;

- (void)dealloc;

- (id)delegate;

- (double)duration;

- (id)initWithAVAsset:(id)arg1;

- (id)initWithManagedAsset:(id)arg1 applySlalomRegions:(_Bool)arg2;

- (id)messageForRemakingProgress;

- (int)mode;

- (id)progressView;

- (void)remake;

- (void)setDelegate:(id)arg1;

- (void)setDuration:(double)arg1;

- (void)setMode:(int)arg1;

- (void)setTrimEndTime:(double)arg1;

- (void)setTrimStartTime:(double)arg1;

- (double)trimEndTime;

- (double)trimStartTime;



@end


