/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableData.h"



#import "NSCopying.h"

#import "NSMutableCopying.h"



@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying>

{

    void *_bytes;

    unsigned long long _length;

    unsigned long long _mappedLength;

    unsigned long long _capacity;

    unsigned long long _threshold;

    char *_path;

    int _fd;

    unsigned long long _flushFrom;

    _Bool _flush;

    _Bool _immutable;

    _Bool _vm;

}



- (void)_flushToDisk:(unsigned long long)arg1 capacity:(unsigned long long)arg2;

- (id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(_Bool)arg3;

- (void)_mapMutableData:(_Bool)arg1;

- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (void)appendData:(id)arg1;

- (const void *)bytes;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;

- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithContentsOfMappedFile:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithData:(id)arg1;

- (id)initWithLength:(unsigned long long)arg1;

- (unsigned long long)length;

- (_Bool)mf_immutable;

- (void)mf_makeImmutable;

- (void *)mutableBytes;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (void)setLength:(unsigned long long)arg1;

- (void)setMappingThreshold:(unsigned int)arg1;

- (id)subdataWithRange:(struct _NSRange)arg1;

- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;

- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;

- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;



@end


