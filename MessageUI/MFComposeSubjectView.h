/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFComposeHeaderView.h"


#import "UITextFieldDelegate.h"



@class UITextField;



@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate>

{

    UITextField *_textField;

    unsigned int _delegateRespondsToTextChange:1;

}



- (_Bool)_canBecomeFirstResponder;

- (_Bool)becomeFirstResponder;

- (void)dealloc;

- (_Bool)endEditing:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;

- (void)refreshPreferredContentSize;

- (void)setDelegate:(id)arg1;

- (void)setText:(id)arg1;

- (id)text;

- (void)textChanged:(id)arg1;

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;

- (void)textFieldDidBecomeFirstResponder:(id)arg1;

- (void)textFieldDidResignFirstResponder:(id)arg1;



@end


