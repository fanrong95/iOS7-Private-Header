/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSAttributedString.h"



@interface NSAttributedString (SCRCMathExpression)

+ (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;

+ (id)scrcPauseString;

+ (id)scrcSpaceString;

+ (id)scrcString;

+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;

+ (id)scrcStringWithFormat:(id)arg1;

+ (id)scrcStringWithLiteralString:(id)arg1;

+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;

+ (id)scrcStringWithString:(id)arg1;

+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;

- (_Bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;

- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;

- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;

- (_Bool)scrcContainsPause;

- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;

- (id)scrcStringByAppendingAttributedString:(id)arg1;

- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;

@end


