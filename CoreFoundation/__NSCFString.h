/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "__NSCFType.h"


__attribute__((visibility("hidden")))

@interface __NSCFString : __NSCFType

{

}



+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (const char *)UTF8String;

- (const char *)_fastCStringContents:(_Bool)arg1;

- (const unsigned short *)_fastCharacterContents;

- (_Bool)_isCString;

- (_Bool)_isDeallocating;

- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;

- (_Bool)_tryRetain;

- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

- (void)appendFormat:(id)arg1;

- (void)appendString:(id)arg1;

- (const char *)cString;

- (unsigned long long)cStringLength;

- (const char *)cStringUsingEncoding:(unsigned long long)arg1;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)deleteCharactersInRange:(struct _NSRange)arg1;

- (unsigned long long)fastestEncoding;

- (void)finalize;

- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;

- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;

- (_Bool)hasPrefix:(id)arg1;

- (_Bool)hasSuffix:(id)arg1;

- (unsigned long long)hash;

- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToString:(id)arg1;

- (_Bool)isNSString__;

- (unsigned long long)length;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (oneway void)release;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;

- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setString:(id)arg1;

- (unsigned long long)smallestEncoding;

- (id)substringWithRange:(struct _NSRange)arg1;



@end


