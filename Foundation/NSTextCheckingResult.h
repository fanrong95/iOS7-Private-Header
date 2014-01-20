/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding>

{

}



+ (id)addressCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;

+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;

+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;

+ (id)dashCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;

+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2;

+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;

+ (id)grammarCheckingResultWithRange:(struct _NSRange)arg1 details:(id)arg2;

+ (void)initialize;

+ (id)linkCheckingResultWithRange:(struct _NSRange)arg1 URL:(id)arg2;

+ (id)orthographyCheckingResultWithRange:(struct _NSRange)arg1 orthography:(id)arg2;

+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;

+ (id)quoteCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;

+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;

+ (id)replacementCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;

+ (id)spellCheckingResultWithRange:(struct _NSRange)arg1;

+ (id)transitInformationCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;

- (id)URL;

- (_Bool)_adjustRangesWithOffset:(long long)arg1;

- (id)addressComponents;

- (id)alternativeStrings;

- (id)components;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)date;

- (struct _NSRange)decodeRangeWithCoder:(id)arg1;

- (id)description;

- (double)duration;

- (void)encodeRangeWithCoder:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)grammarDetails;

- (id)initWithCoder:(id)arg1;

- (unsigned long long)numberOfRanges;

- (id)orthography;

- (id)phoneNumber;

@property(readonly) struct _NSRange range;

- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;

- (id)regularExpression;

- (id)replacementString;

- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

@property(readonly) unsigned long long resultType;

- (id)timeZone;

- (void *)underlyingResult;



@end


