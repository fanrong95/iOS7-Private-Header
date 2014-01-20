/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVAudioMixInputParameters.h"


@class AVMutableAudioMixInputParametersInternal, NSString;



@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters

{

    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;

}



+ (id)audioMixInputParameters;

+ (id)audioMixInputParametersWithTrack:(id)arg1;

@property(retain, nonatomic) struct opaqueMTAudioProcessingTap *audioTapProcessor;

@property(nonatomic) int trackID;

- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;

- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;



// Remaining properties

@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;



@end


