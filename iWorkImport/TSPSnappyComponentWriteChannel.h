/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSPComponentWriteChannel.h"



__attribute__((visibility("hidden")))

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel>

{

    char *_uncompressedBuffer;

    unsigned long long _uncompressedLength;

    id <TSPComponentWriteChannel> _writeChannel;

}



- (void).cxx_destruct;

- (void)close;

- (void)dealloc;

- (id)initWithWriteChannel:(id)arg1;

- (void)writeBlock;

- (void)writeData:(id)arg1;



@end

