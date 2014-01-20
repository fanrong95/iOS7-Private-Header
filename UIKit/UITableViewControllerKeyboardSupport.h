/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UITableViewController;



__attribute__((visibility("hidden")))

@interface UITableViewControllerKeyboardSupport : NSObject

{

    UITableViewController *_tableViewController;

    double _adjustmentForKeyboard;

    unsigned int _viewIsDisappearing:1;

    unsigned int _registeredForNotifications:1;

}



- (void)_keyboardDidChangeFrame:(id)arg1;

- (void)_keyboardDidHide:(id)arg1;

- (void)_keyboardDidShow:(id)arg1;

- (void)_keyboardWillHide:(id)arg1;

- (void)_keyboardWillShow:(id)arg1;

@property(nonatomic) double adjustmentForKeyboard; // @synthesize adjustmentForKeyboard=_adjustmentForKeyboard;

- (id)initWithTableViewController:(id)arg1;

@property(nonatomic) _Bool registeredForNotifications;

@property(nonatomic) _Bool viewIsDisappearing;



@end


