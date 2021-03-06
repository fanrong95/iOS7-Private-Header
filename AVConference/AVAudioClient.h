/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAudioDeviceList;



@interface AVAudioClient : NSObject

{

    AVAudioDeviceList *deviceList;

}



+ (id)currentInputDevice;

+ (id)defaultInputDevice;

+ (id)defaultOutputDevice;

+ (void)initializeAudioSessionQ;

+ (void)setAudioSessionProperties:(id)arg1;

+ (_Bool)setInputDevice:(id)arg1;

+ (void)startAudioSession;

+ (void)stopAudioSession;

@property(nonatomic) id changeListener;

- (void)dealloc;

@property(retain, nonatomic) AVAudioDeviceList *deviceList; // @synthesize deviceList;

- (id)devices;

- (id)init;

- (id)inputDevices;

- (id)outputDevices;



@end


