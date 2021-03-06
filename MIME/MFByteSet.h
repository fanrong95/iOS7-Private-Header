/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"



@interface MFByteSet : NSObject <NSCopying, NSMutableCopying>

{

    char mySet[32];

}



+ (id)ASCIIByteSet;

+ (id)asciiWhitespaceSet;

+ (id)nonASCIIByteSet;

+ (id)suspiciousCodepage1252ByteSet;

- (id)_initWithSet:(const char *)arg1;

- (_Bool)byteIsMember:(BOOL)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;

- (id)initWithCString:(const char *)arg1;

- (id)initWithRange:(struct _NSRange)arg1;

- (id)invertedSet;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;



@end


