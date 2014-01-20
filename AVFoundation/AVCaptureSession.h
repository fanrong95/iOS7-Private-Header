/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVCaptureSessionInternal, NSArray, NSString;



@interface AVCaptureSession : NSObject

{

    AVCaptureSessionInternal *_internal;

}



+ (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int *)arg4;

+ (id)allSessionPresets;

+ (_Bool)automaticallyNotifiesObserversOfMasterClock;

+ (id)avCaptureSessionPlist;

+ (void)initialize;

+ (id)publicSessionPresets;

- (void)_addConnection:(id)arg1;

- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;

- (void)_addInputWithNoConnections:(id)arg1;

- (void)_addOutputWithNoConnections:(id)arg1;

- (void)_beginConfiguration;

- (_Bool)_buildAndRunGraph;

- (_Bool)_canAddConnection:(id)arg1 failureReason:(id *)arg2;

- (_Bool)_canAddInput:(id)arg1 failureReason:(id *)arg2;

- (_Bool)_canAddOutput:(id)arg1 failureReason:(id *)arg2;

- (void)_commitConfiguration;

- (id)_connectionsForNewInputPort:(id)arg1;

- (id)_connectionsForNewOutput:(id)arg1;

- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;

- (int)_createRecorderIfNeeded;

- (id)_currentDeviceWithMediaType:(id)arg1;

- (void)_determineMasterClock;

- (void)_doDidStart:(_Bool)arg1;

- (void)_doDidStartSources;

- (void)_doDidStop:(id)arg1;

- (void)_doWillStart;

- (id)_errorForFigRecorderNotification:(id)arg1;

- (void)_excludeOutputsForCaptureOptions:(id)arg1;

- (_Bool)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(_Bool *)arg3 frameRatesChanged:(_Bool *)arg4;

- (void)_handleNotification:(id)arg1 payload:(id)arg2;

- (id)_liveConnections;

- (void)_postRuntimeError:(id)arg1;

- (void)_rebuildGraph;

- (void)_rebuildInternalCaptureOptions;

- (void)_rebuildLiveConnections;

- (void)_removeConnection:(id)arg1;

- (void)_removeConnectionsForInputPort:(id)arg1;

- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;

- (id)_resolvedCaptureOptions;

- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2;

- (id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;

- (_Bool)_sessionHasEnabledMovieFileOutput;

- (void)_setInterrupted:(_Bool)arg1;

- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;

- (void)_setRunning:(_Bool)arg1;

- (_Bool)_startPreviewing;

- (int)_startRecording;

- (void)_stopAndTearDownGraph;

- (id)_stopError;

- (_Bool)_stopPreviewing;

- (int)_stopRecording;

- (void)_teardownFigRecorder;

- (void)addConnection:(id)arg1;

- (void)addInput:(id)arg1;

- (void)addInputWithNoConnections:(id)arg1;

- (void)addOutput:(id)arg1;

- (void)addOutputWithNoConnections:(id)arg1;

- (void)addVideoPreviewLayer:(id)arg1;

- (void)addVideoPreviewLayerConnection:(id)arg1;

@property(nonatomic) _Bool automaticallyConfiguresApplicationAudioSession;

- (void)beginConfiguration;

- (_Bool)canAddConnection:(id)arg1;

- (_Bool)canAddInput:(id)arg1;

- (_Bool)canAddOutput:(id)arg1;

- (_Bool)canSetSessionPreset:(id)arg1;

- (id)captureOptions;

- (void)commitConfiguration;

- (void)dealloc;

- (id)description;

- (id)figRecorderOptions;

- (id)init;

- (id)inputWithClass:(Class)arg1;

@property(readonly, nonatomic) NSArray *inputs;

- (_Bool)isBeingConfigured;

@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;

- (_Bool)isPreviewing;

@property(readonly, nonatomic, getter=isRunning) _Bool running;

@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (id)outputWithClass:(Class)arg1;

@property(readonly, nonatomic) NSArray *outputs;

- (struct OpaqueCMBaseObject *)recorder;

- (void)removeConnection:(id)arg1;

- (void)removeInput:(id)arg1;

- (void)removeOutput:(id)arg1;

- (void)removeVideoPreviewLayer;

- (void)removeVideoPreviewLayerConnection:(id)arg1;

@property(copy, nonatomic) NSString *sessionPreset;

@property(nonatomic) _Bool usesApplicationAudioSession;

- (void)setVideoPreviewLayer:(id)arg1;

- (void)startRunning;

- (void)stopRunning;

- (id)valueForUndefinedKey:(id)arg1;

- (id)videoPreviewLayer;



@end


