/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITextInputTraits.h"



@class UIColor, UIImage;



@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>

- (void)takeTraitsFrom:(id)arg1;



@optional

@property(nonatomic) _Bool acceptsEmoji;

@property(nonatomic) _Bool acceptsFloatingKeyboard;

@property(nonatomic) _Bool acceptsSplitKeyboard;

@property(nonatomic) _Bool contentsIsSingleValue;

@property(nonatomic) _Bool deferBecomingResponder;

@property(nonatomic) _Bool displaySecureTextUsingPlainText;

@property(nonatomic) int emptyContentReturnKeyType;

@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;

@property(nonatomic) _Bool forceEnableDictation;

@property(retain, nonatomic) UIColor *insertionPointColor;

@property(nonatomic) unsigned long long insertionPointWidth;

@property(nonatomic) _Bool isSingleLineDocument;

@property(nonatomic) _Bool learnsCorrections;

@property(nonatomic) _Bool returnKeyGoesToNextResponder;

@property(retain, nonatomic) UIColor *selectionBarColor;

@property(retain, nonatomic) UIImage *selectionDragDotImage;

@property(retain, nonatomic) UIColor *selectionHighlightColor;

@property(nonatomic) int shortcutConversionType;

@property(nonatomic) _Bool suppressReturnKeyStyling;

@property(nonatomic) int textLoupeVisibility;

@property(nonatomic) int textSelectionBehavior;

@property(nonatomic) id textSuggestionDelegate;

@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;

@property(nonatomic) _Bool useInterfaceLanguageForLocalization;

@end


