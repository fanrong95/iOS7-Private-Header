/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSData.h"



#import "NSCopying.h"

#import "NSMutableCopying.h"



@class NSString;



@interface MFData : NSData <NSCopying, NSMutableCopying>

{

    NSData *_internal;

    NSString *_path;

    NSData *_parent;

    _Bool _subdata;

}



+ (void)setDefaultMappingThresholdInBytes:(unsigned long long)arg1;

- (id)_initWithData:(id)arg1 maybeMutable:(_Bool)arg2;

- (id)_initWithFile:(id)arg1;

- (id)_initWithRange:(struct _NSRange)arg1 from:(id)arg2 retainingParent:(_Bool)arg3;

- (const void *)bytes;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)data;

- (void)dealloc;

- (id)init;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;

- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithContentsOfMappedFile:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithData:(id)arg1;

- (id)initWithImmutableData:(id)arg1;

- (unsigned long long)length;

- (_Bool)mf_immutable;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)subdataWithRange:(struct _NSRange)arg1;

- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;

- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;

- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;



@end


