/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDEditor.h"



@class TSKSelection<TSDTextSelection>, UIView;



@protocol TSDTextInput <TSDEditor>

- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;

- (void)clearMarkedRange;

- (void)deleteBackward;

- (void)deleteForward;

- (struct _NSRange)editRange;

- (void)endEditing;

- (void)extendSelectionLeft;

- (void)extendSelectionRight;

- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;

@property(readonly) UIView *inputAccessoryView;

@property(readonly) UIView *inputView;

- (void)insertText:(id)arg1;

- (_Bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;

- (_Bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;

@property(readonly, nonatomic) struct _NSRange markedRange;

- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;

- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;

- (long long)returnKeyType;

- (id)selectionRectsForRange:(struct _NSRange)arg1;

- (id)selectionWithRange:(struct _NSRange)arg1;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;

- (id)textColorAtCharIndex:(unsigned long long)arg1;

- (id)textFontAtCharIndex:(unsigned long long)arg1;

- (id)textInRange:(struct _NSRange)arg1;

@property(readonly, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;

- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;

- (unsigned long long)textLength;

- (_Bool)wantsKeyboard;



@optional

- (_Bool)acceptsColumnBreaks;

- (_Bool)acceptsHyperlink;

- (_Bool)acceptsLineBreaks;

- (_Bool)acceptsPageBreaks;

- (_Bool)acceptsSectionBreaks;

- (_Bool)acceptsTabs;

- (void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2;

- (long long)autocorrectionType;

- (_Bool)canResignFirstResponder;

- (unsigned long long)closestCharIndexToPoint:(struct CGPoint)arg1 isAtEndOfLine:(_Bool *)arg2;

- (void)endEditingAndSelectParent:(id)arg1;

- (void)insertColumnBreak:(id)arg1;

- (void)insertDictationResult:(id)arg1;

- (void)insertHyperlink:(id)arg1;

- (void)insertLineBreak:(id)arg1;

- (void)insertNewlineIgnoringFieldEditor:(id)arg1;

- (void)insertPageBreak:(id)arg1;

- (void)insertSectionBreak:(id)arg1;

- (void)insertTab:(id)arg1;

- (void)insertTabIgnoringFieldEditor:(id)arg1;

- (_Bool)isSecureTextEntry;

- (id)keyCommands;

@property(retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;

- (void)setBaseWritingDirection:(long long)arg1 forParagraphsWithRange:(struct _NSRange)arg2;

- (id)textInputView;

- (id)unfilteredText;

@property(readonly) _Bool wantsRawArrowKeyEvents;

- (long long)writingDirectionForCharIndex:(unsigned long long)arg1;

@end


