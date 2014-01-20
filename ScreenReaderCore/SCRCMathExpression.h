/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



@interface SCRCMathExpression : NSObject

{

    SCRCMathExpression *_parent;

    unsigned long long _cachedMaximumDepth;

}



+ (Class)_classForExpressionType:(id)arg1;

+ (id)mathExpressionWithDictionary:(id)arg1;

+ (void)setPathToSegmentOrderingPlist:(id)arg1;

- (void)_applyTreePositionOfOriginalSegment:(id)arg1 toPrefixedOrSuffixedSegment:(id)arg2;

- (id)_scrcBundle;

- (id)arrayWithoutNilsFromFirstChild:(id)arg1 secondChild:(id)arg2 thirdChild:(id)arg3;

@property(readonly, nonatomic) _Bool beginsWithSpace;

@property(readonly, nonatomic) _Bool canBeUsedWithBase;

@property(readonly, nonatomic) _Bool canBeUsedWithRange;

@property(readonly, nonatomic) _Bool canBeWrappedInLatexMathIndicators;

- (_Bool)canFormWordStartingWithExpression:(id)arg1;

@property(readonly, nonatomic) NSArray *children;

- (id)dollarCodeDescription;

- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;

- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;

- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;

- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;

@property(readonly, nonatomic) _Bool endsWithSpace;

- (id)fenceDelimiters;

@property(readonly, nonatomic) unsigned long long fractionLevel;

@property(readonly, nonatomic) _Bool hasSimpleArrayOfChildren;

- (id)initWithDictionary:(id)arg1;

@property(readonly, nonatomic) long long integerValue;

@property(readonly, nonatomic) _Bool isBaseSubSuperscript;

@property(readonly, nonatomic) _Bool isEllipsis;

@property(readonly, nonatomic) _Bool isFenceDelimiter;

@property(readonly, nonatomic) _Bool isFunctionName;

@property(readonly, nonatomic) _Bool isInteger;

@property(readonly, nonatomic) _Bool isMultiRowTable;

@property(readonly, nonatomic) _Bool isNaturalSuperscript;

@property(readonly, nonatomic) _Bool isNumber;

@property(readonly, nonatomic) _Bool isOperationSymbol;

@property(readonly, nonatomic) _Bool isRangeSubSuperscript;

@property(readonly, nonatomic) _Bool isSimpleNumericalFraction;

@property(readonly, nonatomic) _Bool isTermSeparator;

@property(readonly, nonatomic) _Bool isUnlinedFraction;

@property(readonly, nonatomic) _Bool isWordOrAbbreviation;

- (id)latexDescription;

- (id)latexDescriptionForChildrenJoinedByString:(id)arg1;

- (id)latexDescriptionInMathMode:(_Bool)arg1;

@property(readonly, nonatomic) NSString *latexFormatStringAsOver;

@property(readonly, nonatomic) NSString *latexFormatStringAsUnder;

- (id)latexIdentifierForFenceOperator:(id)arg1 isClosingOperator:(_Bool)arg2;

- (id)latexIdentifierForIdentifier:(id)arg1;

- (id)latexMathModeDescription;

- (id)localizedAttributedStringForKey:(id)arg1;

- (id)localizedAttributedStringForKey:(id)arg1 treePosition:(id)arg2;

- (id)localizedSegmentOrderingForKey:(id)arg1;

- (id)localizedStringForKey:(id)arg1;

- (id)localizedStringForNumber:(id)arg1;

- (id)mathMLString;

- (unsigned long long)maximumDepth;

- (unsigned long long)maximumFractionLevelOfSubExpressions;

- (unsigned long long)numberOfTables;

@property(nonatomic) SCRCMathExpression *parent; // @synthesize parent=_parent;

@property(readonly, nonatomic) NSArray *siblings;

- (id)speakableDescription;

- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;

- (id)speakableDescriptionWithSpeakingStyle:(int)arg1;

- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;

- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2 isPartOfWord:(_Bool)arg3;

- (id)speakableSegments:(id)arg1 withLocalizablePrefix:(id)arg2 localizableSuffix:(id)arg3;

- (id)speakableSegments:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;

- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;

- (id)speakableSegmentsUpToDepth:(unsigned long long)arg1;

- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2;

- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;

- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 localizablePrefix:(id)arg4 localizableSuffix:(id)arg5;

- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 prefix:(id)arg4 suffix:(id)arg5;

- (id)speakableSummary;

@property(readonly, nonatomic) NSArray *subExpressions;



@end


