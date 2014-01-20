/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSEditableTableCell.h"



@class CNFRegShadowView, UIImage;



@interface CNFRegEditableTableCell : PSEditableTableCell

{

    SEL _emptyStateSelector;

    SEL _didBeginEditingSelector;

    SEL _didEndEditingSelector;

    id _textChangeObserver;

    _Bool _textFieldIsEmpty;

    _Bool _skipDelegateCallback;

    UIImage *_shadowImage;

    CNFRegShadowView *_shadowView;

    UIImage *_customCheckmarkImage;

    UIImage *_customCheckmarkImageSelected;

}



- (void)_handleTextChanged;

- (void)_startListeningForTextChanges;

- (void)_stopListeningForTextChanges;

- (_Bool)_textFieldIsCurrentlyEmpty;

- (void)_updateTextFieldOffsetWithDict:(id)arg1;

@property(retain, nonatomic) UIImage *customCheckmarkImage; // @synthesize customCheckmarkImage=_customCheckmarkImage;

@property(retain, nonatomic) UIImage *customCheckmarkImageSelected; // @synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected;

- (void)dealloc;

- (void)layoutSubviews;

- (void)notifyTextFieldDidBeginEditing;

- (void)notifyTextFieldDidEndEditing;

- (void)notifyTextFieldEmptyStateChanged:(_Bool)arg1;

- (void)setChecked:(_Bool)arg1;

@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;

@property(retain, nonatomic) CNFRegShadowView *shadowView; // @synthesize shadowView=_shadowView;

@property(nonatomic) _Bool skipDelegateCallback; // @synthesize skipDelegateCallback=_skipDelegateCallback;

- (void)setTitle:(id)arg1;

- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;

- (void)textFieldChangedExternally;

- (void)textFieldDidBeginEditing:(id)arg1;

- (void)textFieldDidEndEditing:(id)arg1;



@end


