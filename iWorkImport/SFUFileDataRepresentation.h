/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SFUDataRepresentation.h"


@class NSString, SFUCryptoKey;



__attribute__((visibility("hidden")))

@interface SFUFileDataRepresentation : SFUDataRepresentation

{

    NSString *mPath;

    int mSharedFd;

    long long mFileLength;

    unsigned int mFileType;

    _Bool mHasFileAttributes;

    long long mPlaintextDataLength;

    SFUCryptoKey *mCryptoKey;

    id <SFUInputStream> mInputStream;

    _Bool mDeleteFileWhenDone;

}



- (long long)dataLength;

- (void)dealloc;

- (void)deleteFileWhenDone;

- (id)description;

- (long long)encodedLength;

- (unsigned int)fileType;

- (_Bool)hasSameLocationAs:(id)arg1;

- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;

- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;

- (id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;

- (id)initWithPath:(id)arg1;

- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;

- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;

- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;

- (id)inputStream;

- (_Bool)isCryptoKeyIdenticalToKey:(id)arg1;

- (_Bool)isEncrypted;

- (_Bool)isReadable;

- (id)path;

- (void)readFileAttributes;

- (void)setFileType:(unsigned int)arg1;



@end


