/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABPropertySimpleCell.h"


#import "UITextFieldDelegate.h"



@class UIDatePicker, UIViewController;



@interface ABPropertyDateCell : ABPropertySimpleCell <UITextFieldDelegate>

{

    UIDatePicker *_datePicker;

    UIViewController *_contentViewController;

}



- (_Bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;

@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;

- (void)dateChanged:(id)arg1;

@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;

- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

- (void)localeUpdated:(id)arg1;

- (void)prepareForReuse;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (_Bool)textFieldShouldBeginEditing:(id)arg1;



@end


