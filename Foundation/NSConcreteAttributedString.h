/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSAttributedString.h"


@class NSRLEArray, NSString;



@interface NSConcreteAttributedString : NSAttributedString

{

    NSString *string;

    NSRLEArray *attributes;

}



- (id)_runArrayHoldingAttributes;

- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (id)initWithAttributedString:(id)arg1;

- (id)initWithString:(id)arg1;

- (id)initWithString:(id)arg1 attributes:(id)arg2;

- (unsigned long long)length;

- (id)string;



@end


