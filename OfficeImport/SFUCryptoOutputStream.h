/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SFUOutputStream.h"



@class OISFUCryptor;



__attribute__((visibility("hidden")))

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>

{

    id <SFUOutputStream> mBaseStream;

    OISFUCryptor *mCryptor;

    _Bool mIsClosed;

    _Bool mComputeCrc32;

    unsigned int mCrc32;

}



+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;

- (_Bool)canCreateInputStream;

- (_Bool)canSeek;

- (void)close;

- (id)closeLocalStream;

- (unsigned int)crc32;

- (void)dealloc;

- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;

- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(_Bool)arg3;

- (id)inputStream;

- (long long)offset;

- (void)seekToOffset:(long long)arg1 whence:(int)arg2;

- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;



@end


