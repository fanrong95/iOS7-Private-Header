/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableDictionary, WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle;



__attribute__((visibility("hidden")))

@interface WDStyleSheet : NSObject

{

    NSMutableDictionary *mStyleDictionary;

    WDDocument *mDocument;

    WDCharacterProperties *mDefaultCharacterProperties;

    WDParagraphProperties *mDefaultParagraphProperties;

    WDStyle *mDefaultParagraphStyle;

    WDStyle *mDefaultCharacterStyle;

    WDStyle *mDefaultTableStyle;

    WDStyle *mDefaultListStyle;

    NSMutableArray *mStylesInOrder;

    NSMutableDictionary *mIdDictionaryForName;

}



- (void)addStyle:(id)arg1 name:(id)arg2;

- (void)createDefaultStyles;

- (id)createStyleWithId:(id)arg1 type:(int)arg2;

- (id)createStyleWithName:(id)arg1 type:(int)arg2;

- (void)dealloc;

- (id)defaultCharacterProperties;

- (id)defaultCharacterStyle;

- (id)defaultListStyle;

- (id)defaultParagraphProperties;

- (id)defaultParagraphStyle;

- (id)defaultTableStyle;

- (id)document;

- (id)initWithDocument:(id)arg1;

- (void)initializeDefaultProperties;

- (id)paragraphStyleWithStartingName:(id)arg1;

- (void)removeStyleWithId:(id)arg1;

- (void)setDefaultCharacterStyle:(id)arg1;

- (void)setDefaultListStyle:(id)arg1;

- (void)setDefaultParagraphStyle:(id)arg1;

- (void)setDefaultTableStyle:(id)arg1;

- (void)setName:(id)arg1 forId:(id)arg2;

- (unsigned long long)styleCount;

- (id)styleIdForName:(id)arg1;

- (id)styleNameToId:(id)arg1;

- (id)styleWithId:(id)arg1;

- (id)styleWithName:(id)arg1;

- (id)styles;



@end


