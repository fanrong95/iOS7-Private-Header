/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"


@interface NSPlaceholderString : NSString

{

}



- (_Bool)_isDeallocating;

- (_Bool)_tryRetain;

- (id)autorelease;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;

- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;

- (id)initWithCString:(const char *)arg1;

- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;

- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;

- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;

- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;

- (id)initWithString:(id)arg1;

- (unsigned long long)length;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end


