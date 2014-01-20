/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface SFUZipOutputEntry : NSObject

{

    NSString *name;

    unsigned long long utf8NameLength;

    _Bool isCompressed;

    _Bool isEncrypted;

    unsigned int time;

    unsigned long long compressedSize;

    unsigned long long uncompressedSize;

    unsigned long long offset;

    unsigned long long compressedDataOffset;

    unsigned int crc;

    _Bool isWrittenDirectlyToFile;

    _Bool is64Bit;

}



- (long long)compareByOffset:(id)arg1;

- (void)dealloc;

- (id)description;



@end


