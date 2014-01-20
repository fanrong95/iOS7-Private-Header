/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABUILabelWithPlaceholder.h"


@class NSDate, UIButton, UIDatePicker;



@interface ABDateField : ABUILabelWithPlaceholder

{

    UIButton *_clearButton;

    _Bool _isClearButtonEnabled;

    NSDate *_date;

    UIDatePicker *_datePicker;

    struct CGSize _datePickerSize;

    _Bool _usesDatePickerAsInputView;

    _Bool _isFirstResponder;

    _Bool _inBecomeFirstResponder;

    _Bool _editable;

    id <ABDateFieldDelegate> _delegate;

    id <ABDatePickerPresentationDelegate> _presentationDelegate;

}



- (void)_attachToDatePicker:(id)arg1;

- (id)_clearButton;

- (void)_clearButtonPressed:(id)arg1;

- (struct CGRect)_clearButtonRectForBounds:(struct CGRect)arg1;

- (struct CGSize)_clearButtonSize;

- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;

- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1 isClearButtonPresent:(_Bool)arg2;

- (void)_dettachFromDatePicker:(id)arg1;

- (double)_extraWidthForClearButton;

- (void)_setClearButtonEnabled:(_Bool)arg1;

- (void)_setDate:(id)arg1 andInformDelegate:(_Bool)arg2;

- (_Bool)_shouldEnableClearButton;

- (void)_updateClearButton;

- (void)_updateLabelText;

- (_Bool)becomeFirstResponder;

- (_Bool)canBecomeFirstResponder;

- (_Bool)canResignFirstResponder;

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;

- (void)datePickerDateDidChange:(id)arg1;

@property(nonatomic) struct CGSize datePickerSize; // @synthesize datePickerSize=_datePickerSize;

- (void)dealloc;

@property(nonatomic) id <ABDateFieldDelegate> delegate; // @synthesize delegate=_delegate;

- (void)endEditing;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)inputView;

@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;

- (void)layoutSubviews;

@property(nonatomic) id <ABDatePickerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;

- (_Bool)resignFirstResponder;

- (void)setFrame:(struct CGRect)arg1;

- (void)setUserInteractionEnabled:(_Bool)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


