/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol PLCameraControllerDelegate <NSObject>



@optional

- (void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;

- (void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;

- (void)cameraController:(id)arg1 cleanApertureDidChange:(struct CGRect)arg2;

- (void)cameraController:(id)arg1 didChangeCaptureAbility:(_Bool)arg2;

- (void)cameraController:(id)arg1 didFinishTransitionToShowEffectsGrid:(_Bool)arg2;

- (void)cameraController:(id)arg1 didReceivePanoramaIssue:(int)arg2;

- (void)cameraController:(id)arg1 didStartTransitionToShowEffectsGrid:(_Bool)arg2 animated:(_Bool)arg3;

- (void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;

- (void)cameraController:(id)arg1 faceMetadataDidChange:(id)arg2;

- (void)cameraController:(id)arg1 videoZoomFactorDidChange:(double)arg2;

- (void)cameraController:(id)arg1 willChangeToMode:(long long)arg2 device:(long long)arg3;

- (void)cameraController:(id)arg1 willTransitionToShowEffectsGrid:(_Bool)arg2;

- (void)cameraControllerDidChangeEffectFilterIndex:(id)arg1;

- (void)cameraControllerDidChangeHDRSuggestion:(id)arg1;

- (void)cameraControllerDidChangePanoramaConfiguration:(id)arg1;

- (void)cameraControllerDidSetupSession:(id)arg1;

- (void)cameraControllerDidStartPanoramaCapture:(id)arg1;

- (void)cameraControllerDidStartSession:(id)arg1;

- (void)cameraControllerDidStopSession:(id)arg1;

- (void)cameraControllerDidStopVideoCapture:(id)arg1;

- (void)cameraControllerDidTakePhoto:(id)arg1;

- (void)cameraControllerFocusDidEnd:(id)arg1;

- (void)cameraControllerFocusDidStart:(id)arg1;

- (void)cameraControllerModeDidChange:(id)arg1;

- (void)cameraControllerPanoramaDidStopProcessing:(id)arg1;

- (void)cameraControllerPanoramaWillStartProcessing:(id)arg1;

- (void)cameraControllerPreviewDidStart:(id)arg1;

- (void)cameraControllerServerDied:(id)arg1;

- (void)cameraControllerSessionDidStart:(id)arg1;

- (void)cameraControllerSessionDidStop:(id)arg1;

- (void)cameraControllerSessionInterruptionEnded:(id)arg1;

- (void)cameraControllerSessionWasInterrupted:(id)arg1;

- (void)cameraControllerTorchAvailabilityChanged:(id)arg1;

- (void)cameraControllerVideoCaptureDidStart:(id)arg1;

- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;

- (void)cameraControllerWillStartAutofocus:(id)arg1;

- (void)cameraControllerWillStartPreview:(id)arg1;

- (void)cameraControllerWillStopPanoramaCapture:(id)arg1;

- (void)cameraControllerWillStopSession:(id)arg1;

- (void)cameraControllerWillTakePhoto:(id)arg1;

@end


