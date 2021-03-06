/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSError.h"



@class NSString, SBKTransaction;



__attribute__((visibility("hidden")))

@interface SBKStoreError : NSError

{

    SBKTransaction *_transaction;

}



+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;

+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;

+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;

+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;

+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;

+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;

+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly) NSString *currentStoreAccountName;

- (id)description;

@property(readonly) _Bool isAccountsChangedError;

@property(readonly) _Bool isAuthenticationError;

@property(readonly) _Bool isClampError;

@property(readonly) _Bool isRecoverableError;

@property(readonly) _Bool isTransactionCancelledError;

@property(readonly) _Bool isTransactionMissingInformationError;

@property(readonly) NSString *previousStoreAccountName;

@property(readonly) double retrySeconds;

@property(retain) SBKTransaction *transaction; // @synthesize transaction=_transaction;



@end


