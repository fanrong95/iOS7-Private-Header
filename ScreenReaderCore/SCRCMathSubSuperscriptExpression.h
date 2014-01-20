/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SCRCMathExpression.h"


__attribute__((visibility("hidden")))

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression

{

    SCRCMathExpression *_base;

    SCRCMathExpression *_subscript;

    SCRCMathExpression *_superscript;

}



- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id *)arg3;

@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;

- (void)dealloc;

- (id)description;

- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;

- (unsigned long long)fractionLevel;

- (id)initWithDictionary:(id)arg1;

- (_Bool)isBaseSubSuperscript;

- (_Bool)isNumber;

- (_Bool)isRangeSubSuperscript;

- (id)latexMathModeDescription;

- (id)mathMLString;

@property(retain, nonatomic) SCRCMathExpression *subscript; // @synthesize subscript=_subscript;

@property(retain, nonatomic) SCRCMathExpression *superscript; // @synthesize superscript=_superscript;

- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;

- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;

- (id)subExpressions;



@end


