/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (NSStringDrawing)

+ (double)defaultBaselineOffsetForFont:(id)arg1;

+ (double)defaultLineHeightForFont:(id)arg1;

+ (float)hyphenationFactor;

+ (void)setHyphenationFactor:(float)arg1;

+ (void)setShowsControlCharacters:(_Bool)arg1;

+ (void)setShowsInvisibleCharacters:(_Bool)arg1;

+ (void)setTypesetterBehavior:(long long)arg1;

+ (void)setUsesFontLeading:(_Bool)arg1;

+ (void)setUsesScreenFonts:(_Bool)arg1;

+ (_Bool)showsControlCharacters;

+ (_Bool)showsInvisibleCharacters;

+ (long long)typesetterBehavior;

+ (_Bool)usesFontLeading;

+ (_Bool)usesScreenFonts;

- (void)drawAtPoint:(struct CGPoint)arg1 withAttributes:(id)arg2;

- (void)drawInRect:(struct CGRect)arg1 withAttributes:(id)arg2;

- (struct CGSize)sizeWithAttributes:(id)arg1;

@end


