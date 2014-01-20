/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OCDEncryptedReader.h"


__attribute__((visibility("hidden")))

@interface OCBReader : OCDEncryptedReader

{

    struct OcBinaryReader *mBinaryReader;

    struct __sFILE *mFile;

}



- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;

- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilename:(id)arg2;

@property(nonatomic) struct OcBinaryReader *binaryReader; // @synthesize binaryReader=mBinaryReader;

- (void)closeFile;

- (void)dealloc;

@property(readonly, nonatomic) struct OCCEncryptionInfoReader *encryptionInfoReader;

@property(nonatomic) struct __sFILE *file; // @synthesize file=mFile;

- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

- (_Bool)isBinaryReader;

- (id)read;

- (void)restartReaderToUseDecryptedDocument;

- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;

- (_Bool)start;



@end

