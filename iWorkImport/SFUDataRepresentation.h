/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData;



__attribute__((visibility("hidden")))

@interface SFUDataRepresentation : NSObject

{

    _Bool mHasHash;

    unsigned int mHash;

    _Bool mHasSha1Hash;

    NSData *mSha1Hash;

}



- (id)bufferedInputStream;

- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;

- (struct CGDataProvider *)cgDataProvider;

- (long long)compare:(id)arg1;

- (long long)dataLength;

- (long long)encodedLength;

- (_Bool)hasSameLocationAs:(id)arg1;

- (unsigned long long)hash;

- (id)inputStream;

- (_Bool)isEncrypted;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isReadable;

- (unsigned long long)readIntoData:(id)arg1;

- (id)sha1Hash;

- (unsigned int)uint32Hash;

- (struct _xmlDoc *)xmlDocument;

- (struct _xmlTextReader *)xmlReader;

- (struct _xmlTextReader *)xmlReaderForGzippedData;

- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg1;



@end


