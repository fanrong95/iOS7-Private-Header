/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFAccount, MFActivityMonitor, MFError, MFMonitoredInvocation, NSArray;



@interface MFAccountValidator : NSObject

{

    MFAccount *_account;

    id _delegate;

    MFActivityMonitor *_accountValidationActivity;

    MFMonitoredInvocation *_validationInvocation;

    id _completionBlock;

    struct {

        unsigned int useSSL:1;

        unsigned int incomingServerSupportsSSL:1;

        unsigned int smtpServerSupportsSSL:1;

        unsigned int canceled:1;

        unsigned int performsValidationInBackground:1;

        unsigned int unused:27;

    } _flags;

    MFError *_incomingServerValidationError;

    MFError *_smtpServerValidationError;

    NSArray *_incomingServerAuthSchemes;

    NSArray *_smtpServerAuthSchemes;

}



- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;

- (_Bool)_incomingServerValid;

- (id)_ispAccountInfo;

- (_Bool)_outgoingServerValid;

- (void)_validateAccount:(id)arg1;

- (void)_validateAccount:(id)arg1 withFallbacks:(_Bool)arg2;

- (void)_validateAccountWithoutFallbacks:(id)arg1;

@property(readonly, nonatomic) MFAccount *account;

@property(readonly, nonatomic) _Bool accountIsValid;

@property(readonly, nonatomic) _Bool accountSupportsSSL;

- (_Bool)accountValidationCanceled;

- (void)cancelValidation;

- (void)dealloc;

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) MFError *error;

- (id)init;

- (id)initWithPerformsValidationInBackground:(_Bool)arg1;

@property(readonly, nonatomic) _Bool performsValidationInBackground;

- (void)stop;

- (void)validateAccount:(id)arg1 useSSL:(_Bool)arg2;

- (void)validateAccount:(id)arg1 useSSL:(_Bool)arg2 withCompletion:(id)arg3;

- (void)validateAccountWithoutFallbacks:(id)arg1;

- (void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(id)arg2;

@property(readonly, nonatomic) MFMonitoredInvocation *validationInvocation;



@end


