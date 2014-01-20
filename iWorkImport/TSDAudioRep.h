/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDMediaRep.h"


#import "TSDAudioHUDControllerDelegate.h"

#import "TSKAVPlayerControllerDelegate.h"



@class CALayer, TSDMovieInfo, TSKAVPlayerController;



__attribute__((visibility("hidden")))

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate>

{

    TSKAVPlayerController *mPlayerController;

    CALayer *mPlayPauseButtonLayer;

    CALayer *mAudioImageLayer;

    float mDynamicVolume;

    _Bool mIsChangingDynamicVolume;

    id <TSDAudioHUDController> mAudioHUDController;

}



- (void)addKnobsToArray:(id)arg1;

@property(readonly, nonatomic) id <TSDAudioHUDController> audioHUDController; // @synthesize audioHUDController=mAudioHUDController;

- (void)becameNotSelected;

- (void)becameSelected;

- (struct CGRect)boundsForStandardKnobs;

- (_Bool)canResetMediaSize;

- (_Bool)containsPoint:(struct CGPoint)arg1;

- (void)dealloc;

- (void)didEndZooming;

- (_Bool)directlyManagesLayerContent;

- (void)drawInContext:(struct CGContext *)arg1;

- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;

- (void)dynamicVolumeChangeDidBegin;

- (void)dynamicVolumeChangeDidEnd;

- (void)dynamicVolumeUpdateToValue:(float)arg1;

- (_Bool)exclusivelyProvidesGuidesWhileAligning;

- (_Bool)hitPlayPauseButtonWithPoint:(struct CGPoint)arg1;

- (id)hitRepChrome:(struct CGPoint)arg1;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (_Bool)isDraggable;

- (Class)layerClass;

@property(readonly, nonatomic) TSDMovieInfo *movieInfo;

- (id)newTrackerForKnob:(id)arg1;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (_Bool)p_isEditingAnimations;

- (_Bool)p_isPlaying;

- (void)p_setupPlayerControllerIfNecessary;

- (_Bool)p_shouldPlayerControllerExistThroughoutSelection;

- (_Bool)p_shouldShowPlayPauseLayers;

- (void)p_teardownAudioHUD;

- (void)p_teardownPlayerController;

- (void)p_updateAudioHUDWithFrame:(struct CGRect)arg1;

- (void)p_updateButtonForPlaying:(_Bool)arg1 pressed:(_Bool)arg2;

- (void)p_updateEndTime;

- (void)p_updateRepeatMode;

- (void)p_updateStartTime;

- (void)p_updateVolume;

- (void)playbackDidStopForPlayerController:(id)arg1;

@property(readonly, nonatomic) TSKAVPlayerController *playerController;

- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;

- (void)processChangedProperty:(int)arg1;

- (_Bool)providesGuidesWhileAligning;

- (void)setupPlayerControllerForAudioHUDController:(id)arg1;

- (_Bool)shouldAllowReplacementFromDrop;

- (_Bool)shouldAllowReplacementFromPaste;

- (_Bool)shouldCreateSelectionKnobs;

- (_Bool)shouldShowDragHUD;

- (_Bool)shouldShowKnobs;

- (_Bool)shouldShowMediaReplaceUI;

- (_Bool)shouldShowSelectionHighlight;

- (_Bool)shouldShowSizesInRulers;

- (id)textureWithContext:(id)arg1;

- (void)updateLayerGeometryFromLayout:(id)arg1;

- (void)updatePlayButtonForPoint:(struct CGPoint)arg1;

- (void)updatePositionsOfKnobs:(id)arg1;

@property(readonly, nonatomic) float volume;

- (void)willBeRemoved;

- (void)willBeginReadMode;

- (void)willBeginZooming;

- (void)willUpdateLayer:(id)arg1;



@end

