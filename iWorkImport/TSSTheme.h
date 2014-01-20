/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSKModel.h"

#import "TSSPresetSource.h"



@class NSMutableDictionary, NSString, TSSStylesheet;



__attribute__((visibility("hidden")))

@interface TSSTheme : TSPObject <TSSPresetSource, TSKModel>

{

    NSString *mThemeIdentifier;

    TSSStylesheet *mStylesheet;

    NSMutableDictionary *mPresetsByKind;

}



+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;

+ (id)presetBootstrapOrder;

+ (id)presetKinds;

+ (id)presetSources;

+ (void)registerPresetSourceClass:(Class)arg1;

+ (void)registerPresetSourceClasses;

+ (id)themeWithContext:(id)arg1 alternate:(int)arg2;

+ (void)tschRegisterPresetSourceClasses;

+ (void)tsdRegisterPresetSourceClasses;

+ (void)tstRegisterPresetSourceClasses;

- (void)addPreset:(id)arg1 ofKind:(id)arg2;

- (void)bootstrapThemeAlternate:(int)arg1;

- (void)checkThemeStylesheetConsistency;

- (id)childEnumerator;

- (id)colors;

- (_Bool)containsCGColor:(struct CGColor *)arg1;

- (void)createCommentInfoStyleIfNeeded;

- (void)createDefaultParagraphStyleIfNeeded;

- (void)dealloc;

- (id)defaultCharacterStyle;

- (id)defaultColumnStyle;

- (id)defaultListStyle;

- (id)defaultParagraphStyle;

- (void)disablePresetValidation;

- (void)enablePresetValidation;

- (_Bool)hasPresetsOfKind:(id)arg1;

- (id)hyperlinkStyle;

- (unsigned long long)indexOfPreset:(id)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;

- (void)installContactCurvedShadowPresets;

- (void)installMoviePresets;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool isLocked;

- (void)loadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

- (id)modelPathComponentForChild:(id)arg1;

- (void)modifyHyperlinkStyleToMatchSage;

- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

- (id)p_identifierForBootstrapTheme:(int)arg1;

- (id)paragraphPresetStyles;

- (id)paragraphStyleWithContentTag:(id)arg1;

- (id)paragraphStylesWithContentTag:(id)arg1;

- (id)paragraphStylesWithPartialContentTag:(id)arg1;

- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;

- (id)presetsOfKind:(id)arg1;

- (void)removePreset:(id)arg1;

- (void)removeTextStylesOfPresetKinds:(id)arg1 notReferencedInDocumentRoot:(id)arg2;

- (void)saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;

- (void)setPresets:(id)arg1 ofKind:(id)arg2;

@property(retain, nonatomic) NSString *themeIdentifier;

@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;

- (void)tschLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

- (void)tschSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;

- (void)tsdLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

- (void)tsdSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;

- (void)tstLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

- (void)tstSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;

- (void)tswpLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

- (void)tswpSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;

- (id)undeletableStyles;

- (id)unmodifiableStyles;



@end


