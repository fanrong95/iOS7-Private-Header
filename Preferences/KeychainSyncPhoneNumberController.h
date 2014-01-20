/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSKeychainSyncViewController.h"


#import "KeychainSyncPhoneSettingsFragmentDelegate.h"

#import "KeychainSyncViewController.h"

#import "UIAlertViewDelegate.h"



@class KeychainSyncPhoneSettingsFragment, UIAlertView;



@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController>

{

    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;

    UIAlertView *_invalidPhoneNumberAlert;

}



- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)controllerDone;

- (void)dealloc;

- (void)loadView;

- (void)nextPressed;

- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;

- (void)reloadSpecifiers;

- (id)specifiers;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



// Remaining properties

@property(nonatomic) id <KeychainSyncViewControllerDelegate> delegate;



@end


