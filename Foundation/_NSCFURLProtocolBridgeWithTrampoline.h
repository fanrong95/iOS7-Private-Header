/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_NSCFURLProtocolBridge.h"


@class NSCountedSet, NSMutableArray, NSThread;



@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge

{

    NSMutableArray *_workQueue;

    NSCountedSet *_runloops;

    _Bool _canSignalDirectly;

    NSThread *_processThread;

}



- (void)dealloc;

- (void)finalize;

- (id)initWithCFURLProtocol:(struct _CFURLProtocol *)arg1 request:(id)arg2 protocolClass:(Class)arg3;

- (void)processEventQ;

- (void)pushEvent:(id)arg1 from:(void)arg2;

- (void)releaseWorkQueue;

- (void)schedule:(struct __CFRunLoop *)arg1 mode:(struct __CFString *)arg2;

- (_Bool)shouldSignalDirectly;

- (void)unschedule:(struct __CFRunLoop *)arg1 mode:(struct __CFString *)arg2;



@end


