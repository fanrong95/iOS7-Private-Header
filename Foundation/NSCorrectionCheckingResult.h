/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSubstitutionCheckingResult.h"


@class NSArray;



@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult

{

    NSArray *_alternativeStrings;

}



- (id)alternativeStrings;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;

- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

- (unsigned long long)resultType;



@end


