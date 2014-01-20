/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AirPlayControllerAsync.h"

#import "AirPlayControllerSync.h"



@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;



@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync>

{

    NSObject<OS_dispatch_queue> *_queue;

    NSString *_xpcName;

    NSXPCConnection *_cnx;

}



- (id)_setupConnection;

- (void)dealloc;

- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(id)arg3;

- (id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int *)arg3;

- (id)init;

- (void)invalidate;

- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;

- (int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id *)arg4;

- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;

- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;

- (int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;

- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(id)arg4;

@property(copy, nonatomic) NSString *xpcName; // @synthesize xpcName=_xpcName;



@end


