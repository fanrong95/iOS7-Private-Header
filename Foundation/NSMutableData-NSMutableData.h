/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableData.h"



@interface NSMutableData (NSMutableData)

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)dataWithCapacity:(unsigned long long)arg1;

+ (id)dataWithLength:(unsigned long long)arg1;

- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (void)appendData:(id)arg1;

- (Class)classForCoder;

- (void)increaseLengthBy:(unsigned long long)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithLength:(unsigned long long)arg1;

- (void *)mutableBytes;

- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;

- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;

- (void)resetBytesInRange:(struct _NSRange)arg1;

- (void)setData:(id)arg1;

- (void)setLength:(unsigned long long)arg1;

@end


