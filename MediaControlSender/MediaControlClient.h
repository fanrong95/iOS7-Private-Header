/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface MediaControlClient : NSObject

{

    NSObject<OS_dispatch_queue> *_queue;

    struct MediaControlClientImp *_client;

    NSObject<OS_dispatch_queue> *_eventHandlerQueue;

    id _eventHandlerBlock;

}



- (void)activateResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)addResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)addResourceData:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;

- (void)addResourceFile:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;

- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)authorizeWithPICRequest:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;

- (void)checkAuthentication;

- (void)dealloc;

- (void)ensureConnected;

- (void)ensureDisconnected;

- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;

- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (id)init;

- (void)insertItem:(id)arg1 afterItem:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;

- (struct MediaControlClientImp *)internalClient;

- (void)invalidate;

- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;

- (void)playWithParams:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)removeItem:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)removeResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;

- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(id)arg2;

- (void)setHost:(id)arg1;

- (void)setPassword:(id)arg1;

- (void)setPosition:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)setPosition:(float)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;

- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;

- (void)setRate:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)setVolume:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;

- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;



@end


