/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIScrollView.h"


#import "NSLayoutManagerDelegate.h"

#import "NSUITextViewCommonMethods.h"

#import "UIAutoscrollContainer.h"

#import "UIKeyboardInput.h"

#import "UITextAutoscrolling.h"

#import "UITextInput.h"

#import "UITextInputControllerDelegate.h"



@class NSDictionary, NSTextContainer, NSTimer, UIAutoscroll, UITextField, UITextInputController, UITextPosition, UITextRange, UIView, _UICascadingTextStorage, _UIFieldEditorContentView, _UIFieldEditorLayoutManager;



@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextAutoscrolling, UIKeyboardInput>

{

    UITextInputController *_inputController;

    UITextField *_proxiedView;

    UIAutoscroll *_autoscroll;

    NSTextContainer *_textContainer;

    _UIFieldEditorLayoutManager *_layoutManager;

    _UICascadingTextStorage *_textStorage;

    struct {

        unsigned int delegateRespondsToFieldEditorDidChange:1;

        unsigned int delegateRespondsToShouldInsertText:1;

        unsigned int delegateRespondsToShouldReplaceWithText:1;

        unsigned int suppressScrollToSelection:1;

        unsigned int clearOnNextEdit:1;

    } _feFlags;

    struct UIEdgeInsets _padding;

    _UIFieldEditorContentView *_contentView;

    struct _NSRange _unobscuredSecureRange;

    NSTimer *_obscureLastCharacterTimer;

    struct CGPoint _textContainerOrigin;

    double _contentWidth;

    _UIFieldEditorContentView *_passcodeStyleCutoutView;

    struct CGPoint _autoscrollContentOffset;

}



+ (id)activeFieldEditor;

+ (id)excludedElementsForHTML;

+ (void)releaseSharedInstance;

+ (id)sharedFieldEditor;

- (void)_cancelObscureLastCharacterTimer;

- (_Bool)_clearOnEditIfNeeded;

- (void)_deleteBackwardAndNotify:(_Bool)arg1;

- (_Bool)_hasDictationPlaceholder;

- (id)_inputController;

- (_Bool)_isPasscodeStyle;

- (id)_layoutManager;

- (void)_obscureLastCharacter;

- (id)_responderForBecomeFirstResponder;

- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;

- (struct CGRect)_selectionClipRect;

- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;

- (_Bool)_shouldObscureInput;

- (id)_textContainer;

- (struct CGPoint)_textContainerOrigin;

- (id)_textInputTraits;

- (id)_textSelectingContainer;

- (id)_textStorage;

- (void)_textStorageDidProcessEditing:(id)arg1;

- (struct _NSRange)_unobscuredSecureRange;

- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange)arg1;

- (int)atomStyle;

- (id)attributedText;

@property(nonatomic) struct CGPoint autoscrollContentOffset; // @synthesize autoscrollContentOffset=_autoscrollContentOffset;

- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

- (void)becomeFieldEditorForView:(id)arg1;

- (void)beginSelectionChange;

@property(readonly, nonatomic) UITextPosition *beginningOfDocument;

- (void)cancelAutoscroll;

- (struct CGRect)caretRectForPosition:(id)arg1;

- (unsigned long long)characterOffsetAtPoint:(struct CGPoint)arg1;

- (id)characterRangeAtPoint:(struct CGPoint)arg1;

- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;

- (void)clearText;

- (id)closestPositionToPoint:(struct CGPoint)arg1;

- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;

- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;

- (struct CGRect)contentFrameForView:(id)arg1;

- (void)dealloc;

- (void)deleteBackward;

- (void)drawTextInRect:(struct CGRect)arg1 forContentView:(id)arg2;

- (_Bool)drawsAsAtom;

@property(readonly, nonatomic) UITextPosition *endOfDocument;

- (void)endSelectionChange;

- (struct CGRect)firstRectForRange:(id)arg1;

- (id)font;

- (id)forwardingTargetForSelector:(SEL)arg1;

- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;

- (_Bool)hasMarkedText;

- (_Bool)hasText;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) id <UITextInputDelegate> inputDelegate;

- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;

- (id)insertDictationResultPlaceholder;

- (void)insertText:(id)arg1;

- (id)interactionAssistant;

- (void)invalidateTextContainerOrigin;

- (_Bool)isEditing;

- (_Bool)isFirstResponder;

- (_Bool)isHorizontallyResizable;

- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;

- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

- (_Bool)keyboardInputChanged:(id)arg1;

- (void)keyboardInputChangedSelection:(id)arg1;

- (_Bool)keyboardInputShouldDelete:(id)arg1;

- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;

- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;

- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;

- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;

@property(nonatomic) long long layoutOrientation;

- (void)layoutSubviews;

- (id)linkTextAttributes;

@property(nonatomic) struct _NSRange markedRange;

@property(readonly, nonatomic) UITextRange *markedTextRange;

@property(copy, nonatomic) NSDictionary *markedTextStyle;

- (id)metadataDictionariesForDictationResults;

- (id)methodSignatureForSelector:(SEL)arg1;

- (struct CGSize)minSize;

- (_Bool)notificationsDisabled;

- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;

@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;

- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;

- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;

- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;

- (id)proxiedView;

- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;

- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;

- (void)replaceRange:(id)arg1 withText:(id)arg2;

- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)revealSelection;

- (void)scrollSelectionToVisible:(_Bool)arg1;

- (int)scrollXOffset;

- (int)scrollYOffset;

- (void)selectAll;

@property(copy) UITextRange *selectedTextRange;

- (struct _NSRange)selectionRange;

- (id)selectionRectsForRange:(id)arg1;

- (void)setAttributedText:(id)arg1;

- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(_Bool)arg2;

- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;

- (void)setConstrainedFrameSize:(struct CGSize)arg1;

- (void)setFont:(id)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;

- (void)setNotificationsDisabled:(_Bool)arg1;

- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;

- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(_Bool)arg3;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;

- (void)setSelection:(struct _NSRange)arg1;

- (void)setStyle:(id)arg1;

- (void)setText:(id)arg1;

- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(_Bool)arg2;

- (void)setTextColor:(id)arg1;

@property(nonatomic) NSTextContainer *textContainer;

@property(copy, nonatomic) NSDictionary *typingAttributes;

- (void)startAutoscroll:(struct CGPoint)arg1;

- (id)style;

- (id)text;

- (id)textColor;

- (id)textColorForCaretSelection;

- (struct UIEdgeInsets)textContainerInset;

- (struct CGPoint)textContainerOrigin;

- (id)textInRange:(id)arg1;

- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;

- (_Bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

- (struct _NSRange)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;

- (void)textInputDidChange:(id)arg1;

- (void)textInputDidChangeSelection:(id)arg1;

- (id)textInputTraits;

@property(readonly, nonatomic) UIView *textInputView;

- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;

@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

- (id)undoManager;

- (void)unmarkText;

- (void)updateAutoscroll:(id)arg1;

- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;

- (struct CGRect)visibleRect;



// Remaining properties

@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;

@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;

@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;

@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;

@property(nonatomic) long long keyboardType; // @dynamic keyboardType;

@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;

@property(nonatomic) long long selectionAffinity;

@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;



@end


