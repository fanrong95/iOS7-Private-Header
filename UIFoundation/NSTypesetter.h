/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSTypesetter : NSObject

{

    void *_reserved;

}



+ (_Bool)_usesATSTypesetter;

+ (long long)defaultStringDrawingTypesetterBehavior;

+ (long long)defaultTypesetterBehavior;

+ (void)initialize;

+ (id)sharedSystemTypesetter;

+ (id)sharedSystemTypesetterForBehavior:(long long)arg1;

- (CDStruct_9b8416ed *)_allocateAuxData;

- (_Bool)_allowsEllipsisGlyphSubstitution;

- (long long)_baseWritingDirection;

- (id)_ellipsisFontForFont:(id)arg1;

- (_Bool)_forceOriginalFontBaseline;

- (CDStruct_9b8416ed *)_getAuxData;

- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;

- (_Bool)_isLineBreakModeOverridden;

- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long *)arg5 nextCharacterIndex:(unsigned long long *)arg6;

- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;

- (void)_setForceOriginalFontBaseline:(_Bool)arg1;

- (void)_setLineBreakModeOverridden:(_Bool)arg1;

- (void)_updateParagraphStyleCache:(id)arg1;

- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;

- (id)attributedString;

- (id)attributesForExtraLineFragment;

- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;

- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;

- (void)beginParagraph;

- (_Bool)bidiProcessingEnabled;

- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;

- (id)currentParagraphStyle;

- (id)currentTextContainer;

- (void)dealloc;

- (void)deleteGlyphsInRange:(struct _NSRange)arg1;

- (void)endLineWithGlyphRange:(struct _NSRange)arg1;

- (void)endParagraph;

- (void)finalize;

- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(_Bool *)arg5 bidiLevels:(char *)arg6;

- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;

- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange)arg3 atProposedOrigin:(struct CGPoint)arg4;

- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;

- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;

- (float)hyphenationFactor;

- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;

- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;

- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;

- (id)layoutManager;

- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;

- (double)lineFragmentPadding;

- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;

- (struct _NSRange)paragraphCharacterRange;

- (struct _NSRange)paragraphGlyphRange;

- (struct _NSRange)paragraphSeparatorCharacterRange;

- (struct _NSRange)paragraphSeparatorGlyphRange;

- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;

- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;

- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;

- (void)setAttributedString:(id)arg1;

- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;

- (void)setBidiProcessingEnabled:(_Bool)arg1;

- (void)setDrawsOutsideLineFragment:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;

- (void)setHardInvalidation:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;

- (void)setHyphenationFactor:(float)arg1;

- (void)setLineFragmentPadding:(double)arg1;

- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;

- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;

- (void)setNotShownAttribute:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;

- (void)setParagraphGlyphRange:(struct _NSRange)arg1 separatorGlyphRange:(struct _NSRange)arg2;

- (void)setTightenThresholdForTruncation:(float)arg1;

- (void)setTypesetterBehavior:(long long)arg1;

- (void)setUsesFontLeading:(_Bool)arg1;

- (id)substituteFontForFont:(id)arg1;

- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;

- (id)textContainers;

- (id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3;

- (float)tightenThresholdForTruncation;

- (long long)typesetterBehavior;

- (_Bool)usesFontLeading;



@end

