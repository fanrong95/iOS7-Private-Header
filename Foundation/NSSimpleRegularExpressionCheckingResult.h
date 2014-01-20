/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSRegularExpressionCheckingResult.h"


@class NSRegularExpression;



@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult

{

    NSRegularExpression *_regularExpression;

    struct _NSRange _ranges[3];

}



- (_Bool)_adjustRangesWithOffset:(long long)arg1;

- (void)dealloc;

- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;

- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;

- (unsigned long long)numberOfRanges;

- (struct _NSRange)range;

- (id)rangeArray;

- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;

- (id)regularExpression;



@end


