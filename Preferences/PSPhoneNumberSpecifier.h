/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSTextFieldSpecifier.h"


#import "UITextFieldDelegate.h"



@class NSString;



@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate>

{

    NSString *_countryCode;

}



@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

- (void)dealloc;

- (void)setProperty:(id)arg1 forKey:(id)arg2;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (void)textFieldDidEndEditing:(id)arg1;



@end


