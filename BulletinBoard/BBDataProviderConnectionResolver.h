/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "BBXPCConnectionDelegate.h"

#import "XPCProxyTarget.h"



@class BBXPCIncomingConnection;



@interface BBDataProviderConnectionResolver : NSObject <BBXPCConnectionDelegate, XPCProxyTarget>

{

    BBXPCIncomingConnection *_connection;

    id _establishedBlock;

}



- (void)connection:(id)arg1 connectionStateDidChange:(_Bool)arg2;

- (void)dealloc;

- (void)establishSectionID:(id)arg1 completion:(id)arg2;

- (id)initWithConnection:(id)arg1 queue:(id)arg2 completion:(id)arg3;

- (void)invalidate;

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;



@end


