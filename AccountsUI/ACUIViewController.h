/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSListController.h"



#import "ACUIAccountOperationsDelegate.h"



@class ACAccountStore, ACUIAccountOperationsHelper, NSTimer, UIBarButtonItem, UIProgressHUD;



@interface ACUIViewController : PSListController <ACUIAccountOperationsDelegate>

{

    NSTimer *_idleJiggleTimer;

    void *_powerAssertion;

    _Bool _addedToTaskList;

    _Bool _activityInProgress;

    id _confirmationViewCompletion;

    UIProgressHUD *_hud;

    _Bool _validationInProgress;

    UIBarButtonItem *_doneButton;

    UIBarButtonItem *_cancelButton;

    ACAccountStore *_accountStore;

    ACUIAccountOperationsHelper *_accountOperationsHelper;

}



+ (id)acuiAccountStore;

+ (_Bool)shouldPresentAsModalSheet;

- (void).cxx_destruct;

- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(_Bool)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;

- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;

- (id)_effectiveParentController;

- (void)_jiggleIdleTimerFired;

- (void)_preventSleepAndDimming:(_Bool)arg1;

@property(retain, nonatomic) ACUIAccountOperationsHelper *accountOperationsHelper; // @synthesize accountOperationsHelper=_accountOperationsHelper;

@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;

- (void)cancelButtonTapped:(id)arg1;

- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (void)dealloc;

- (void)dismissAnimated:(_Bool)arg1;

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;

- (void)doneButtonTapped:(id)arg1;

- (void)hideActivityInProgressUI;

- (void)hideActivityInProgressUIWithDelay:(double)arg1;

- (id)init;

- (_Bool)isPresentedAsModalSheet;

- (_Bool)isShowingActivityInProgressUI;

- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;

- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;

- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;

- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;

- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;

- (void)reloadAllParentSpecifiers;

- (void)reloadAllParentSpecifiersAnimated:(_Bool)arg1;

- (void)reloadParentSpecifier;

- (void)removeParentSpecifier;

- (void)setCellsChecked:(_Bool)arg1;

- (void)setTaskCompletionAssertionEnabled:(_Bool)arg1;

@property(nonatomic) _Bool validationInProgress; // @synthesize validationInProgress=_validationInProgress;

- (_Bool)shouldReloadSpecifiersOnResume;

- (void)showActivityInProgressUIWithMessage:(id)arg1;

- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(id)arg7;

- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 context:(id)arg5 completion:(id)arg6;

- (id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(id)arg3;

- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(id)arg7;

- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 forceAlert:(_Bool)arg7 completion:(id)arg8;

- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 context:(id)arg5 completion:(id)arg6;

- (id)specifiers;

- (void)startValidationWithPrompt:(id)arg1;

- (void)startValidationWithPrompt:(id)arg1 userInteraction:(_Bool)arg2;

- (void)stopValidationWithPrompt:(id)arg1 showButtons:(_Bool)arg2;

- (void)updateValidationPrompt:(id)arg1;

- (void)viewDidLoad;



@end


