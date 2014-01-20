/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableString, WDCharacterProperties, WDOfficeArt, WDParagraphProperties;



__attribute__((visibility("hidden")))

@interface WDListLevel : NSObject

{

    WDParagraphProperties *mParagraphProperties;

    WDCharacterProperties *mCharacterProperties;

    WDOfficeArt *mImage;

    long long mStartNumber;

    int mNumberFormat;

    _Bool mRestartNumbering;

    _Bool mLegal;

    int mSuffix;

    NSMutableString *mText;

    _Bool mLegacy;

    long long mLegacySpace;

    long long mLegacyIndent;

    int mJustification;

}



- (id)characterProperties;

- (void)dealloc;

- (id)image;

- (_Bool)imageBullet;

- (_Bool)imageBulletOverridden;

- (id)initWithDocument:(id)arg1;

- (int)justification;

- (_Bool)justificationOverridden;

- (_Bool)legacy;

- (long long)legacyIndent;

- (long long)legacySpace;

- (_Bool)legal;

- (_Bool)legalOverridden;

- (int)numberFormat;

- (_Bool)numberFormatOverridden;

- (id)paragraphProperties;

- (_Bool)restartNumbering;

- (_Bool)restartNumberingOverridden;

- (void)setImage:(id)arg1;

- (void)setJustification:(int)arg1;

- (void)setLegacy:(_Bool)arg1;

- (void)setLegacyIndent:(long long)arg1;

- (void)setLegacySpace:(long long)arg1;

- (void)setLegal:(_Bool)arg1;

- (void)setNumberFormat:(int)arg1;

- (void)setRestartNumbering:(_Bool)arg1;

- (void)setStartNumber:(long long)arg1;

- (void)setSuffix:(int)arg1;

- (void)setText:(id)arg1;

- (long long)startNumber;

- (_Bool)startNumberOverridden;

- (int)suffix;

- (_Bool)suffixOverridden;

- (id)text;

- (_Bool)textOverridden;



@end


