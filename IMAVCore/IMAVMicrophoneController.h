/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMAVMicrophone, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;



@interface IMAVMicrophoneController : NSObject

{

    id _internal;

    NSMutableArray *_microphones;

    NSObject<OS_dispatch_queue> *_queue;

}



+ (id)sharedInstance;

- (void)_loadSavedMicrophone;

- (void)_rebuildMicrophoneList;

@property(retain, nonatomic) IMAVMicrophone *currentMicrophone;

- (void)dealloc;

- (id)init;

@property(readonly, nonatomic) NSArray *microphones;



@end


