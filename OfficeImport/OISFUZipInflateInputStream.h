/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SFUInputStream.h"



__attribute__((visibility("hidden")))

@interface OISFUZipInflateInputStream : NSObject <SFUInputStream>

{

    struct z_stream_s mStream;

    long long mOffset;

    id <OISFUBufferedInputStream> mInput;

    char *mOutBuffer;

    unsigned long long mOutBufferSize;

    _Bool mReachedEnd;

    _Bool mIsFromZip;

    unsigned long long mCalculatedCrc;

    unsigned long long mCheckCrc;

}



- (_Bool)canSeek;

- (void)close;

- (id)closeLocalStream;

- (void)dealloc;

- (void)disableSystemCaching;

- (void)enableSystemCaching;

- (id)initWithInput:(id)arg1;

- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;

- (long long)offset;

- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;

- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;

- (void)seekToOffset:(long long)arg1;

- (void)setupInflateStream;

- (long long)totalCompressedBytesConsumed;



@end


