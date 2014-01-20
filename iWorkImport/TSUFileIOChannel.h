/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSURandomWriteChannel.h"

#import "TSUReadChannel.h"

#import "TSUStreamReadChannel.h"

#import "TSUStreamWriteChannel.h"



@class NSObject<OS_dispatch_io>;



__attribute__((visibility("hidden")))

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel>

{

    NSObject<OS_dispatch_io> *_channel;

    _Bool _isClosed;

}



- (void).cxx_destruct;

- (void)addBarrier:(id)arg1;

- (void)close;

- (id)createRandomAccessChannel;

- (id)initForRandomWritingURL:(id)arg1;

- (id)initForReadingURL:(id)arg1;

- (id)initForStreamWritingURL:(id)arg1;

- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4;

- (id)initWithType:(unsigned long long)arg1 channel:(id)arg2;

- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id)arg4;

- (void)readWithQueue:(id)arg1 handler:(id)arg2;

- (void)setLowWater:(unsigned long long)arg1;

- (void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(id)arg4;

- (void)writeData:(id)arg1 queue:(id)arg2 handler:(id)arg3;



@end


