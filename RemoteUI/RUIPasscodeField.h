/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "UIKeyInput.h"



@class NSMutableArray, NSMutableString;



@interface RUIPasscodeField : UIView <UIKeyInput>

{

    NSMutableArray *_dashViews;

    NSMutableArray *_dotViews;

    NSMutableArray *_digitViews;

    NSMutableString *_stringValue;

    _Bool _securePasscodeEntry;

    id <RUIPasscodeFieldDelegate> _delegate;

    unsigned long long _numberOfEntryFields;

}



- (_Bool)becomeFirstResponder;

- (_Bool)canBecomeFirstResponder;

- (void)dealloc;

@property(nonatomic) id <RUIPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;

- (void)deleteBackward;

- (_Bool)hasText;

- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;

- (void)insertText:(id)arg1;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;

@property(nonatomic) long long keyboardType;

- (void)layoutSubviews;

@property(readonly, nonatomic) unsigned long long numberOfEntryFields; // @synthesize numberOfEntryFields=_numberOfEntryFields;

@property(nonatomic) _Bool securePasscodeEntry; // @synthesize securePasscodeEntry=_securePasscodeEntry;

- (void)setStringValue:(id)arg1;

- (id)stringValue;



// Remaining properties

@property(nonatomic) long long autocapitalizationType;

@property(nonatomic) long long autocorrectionType;

@property(nonatomic) _Bool enablesReturnKeyAutomatically;

@property(nonatomic) long long keyboardAppearance;

@property(nonatomic) long long returnKeyType;

@property(nonatomic) long long spellCheckingType;



@end


