/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface GKAsyncSocket : NSObject

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

@property(copy, nonatomic) id connectedHandler;

- (void)invalidate;

@property(copy, nonatomic) id receiveDataHandler;

- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;

@property(retain, nonatomic) id socketName;

- (void)setSyncQueue:(id)arg1;

@property(nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (id)syncQueue;

- (void)tcpAttachSocketDescriptor:(int)arg1;

- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;



@end


