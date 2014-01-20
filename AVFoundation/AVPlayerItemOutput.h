/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVPlayerItemOutputInternal;



@interface AVPlayerItemOutput : NSObject

{

    AVPlayerItemOutputInternal *_outputInternal;

}



- (void)_attachToPlayerItem:(id)arg1;

- (struct OpaqueCMTimebase *)_copyTimebase;

- (void)_detachFromPlayerItem;

- (CDStruct_1b6d18a9)_itemTimeForHostTimeAsCMTime:(CDStruct_1b6d18a9)arg1;

- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;

- (id)_weakReference;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;

- (CDStruct_1b6d18a9)itemTimeForMachAbsoluteTime:(long long)arg1;

@property(nonatomic) _Bool suppressesPlayerRendering;



@end


