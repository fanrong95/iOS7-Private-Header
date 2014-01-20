/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "StreamingUnzipProtocol.h"



@class NSXPCConnection, StreamingUnzipState;



@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol>

{

    void *_decompressionOutputBuffer;

    NSXPCConnection *_xpcConnection;

    StreamingUnzipState *_currentState;

}



- (void).cxx_destruct;

- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (void)_setErrorState;

- (void)_supplyBytes:(const char *)arg1 length:(unsigned long long)arg2 withReply:(id)arg3;

- (void)dealloc;

- (void)finishStreamWithReply:(id)arg1;

- (id)init;

@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 md5Hashes:(id)arg3 hashedChunkSize:(unsigned long long)arg4 withReply:(id)arg5;

- (void)supplyBytes:(id)arg1 withReply:(id)arg2;

- (void)supplyDispatchData:(id)arg1 withReply:(id)arg2;

- (void)supplyRemappableData:(id)arg1 withReply:(id)arg2;

- (void)supplyXPCData:(id)arg1 withReply:(id)arg2;

- (void)suspendStreamWithReply:(id)arg1;



@end


