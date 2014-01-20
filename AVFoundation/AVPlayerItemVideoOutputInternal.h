/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVWeakReference, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;



@interface AVPlayerItemVideoOutputInternal : NSObject

{

    struct OpaqueCMTimebase *timebase;

    double currentRate;

    struct OpaqueFigVisualContext *vc;

    AVWeakReference *playerItemWeakReference;

    struct OpaqueVTPixelBufferConformer *pixelBufferConformer;

    id <AVPlayerItemOutputPullDelegate> delegate;

    NSObject<OS_dispatch_queue> *stateQueue;

    NSObject<OS_dispatch_queue> *delegateQueue;

    NSObject<OS_dispatch_source> *delegateWakeupSource;

    double advanceWakeUpInterval;

    _Bool advanceWakeUpIntervalIsValid;

    CDStruct_1b6d18a9 wakeUpImageTime;

    _Bool suppressesPlayerRendering;

    _Bool shouldTagBuffersWithInfo;

}



@end


