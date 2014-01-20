/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ACAccountStore.h"



@interface ACAccountStore (AppleAccount)

- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id)arg2;

- (id)aa_accountsEnabledForDataclass:(id)arg1;

- (id)aa_appleAccountType;

- (id)aa_appleAccountWithPersonID:(id)arg1;

- (id)aa_appleAccountWithUsername:(id)arg1;

- (id)aa_appleAccounts;

- (void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(id)arg3;

- (id)aa_primaryAppleAccount;

- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id)arg2;

- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id)arg2;

- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id)arg2;

@end


