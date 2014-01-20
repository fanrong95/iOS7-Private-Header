/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableAttributedString.h"


@class NSMutableRLEArray, NSMutableString;



@interface NSConcreteMutableAttributedString : NSMutableAttributedString

{

    NSMutableString *mutableString;

    NSMutableRLEArray *mutableAttributes;

    struct {

        unsigned int attributeFixingDisabled:8;

        unsigned int :24;

    } fields;

}



+ (Class)_mutableStringClass;

- (id)_runArrayHoldingAttributes;

- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;

- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;

- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (Class)classForCoder;

- (void)dealloc;

- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;

- (void)finalize;

- (id)init;

- (id)initWithAttributedString:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithString:(id)arg1;

- (id)initWithString:(id)arg1 attributes:(id)arg2;

- (unsigned long long)length;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;

- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;

- (id)string;



@end


