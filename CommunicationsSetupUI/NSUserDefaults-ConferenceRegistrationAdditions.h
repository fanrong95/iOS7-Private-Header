/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSUserDefaults.h"



@interface NSUserDefaults (ConferenceRegistrationAdditions)

+ (id)CNFObjectForKey:(id)arg1;

+ (unsigned long long)CNFRegEmailValidationTimeout;

+ (id)CNFRegSavedAccountName;

+ (id)CNFRegServerURLOverride;

+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;

+ (void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1;

+ (void)setCNFRegSavedAccountName:(id)arg1;

+ (void)setCNFRegServerURLOverride:(id)arg1;

+ (void)setShouldShowCNFRegistrationServerLogs:(_Bool)arg1;

+ (void)setShouldShowCNFRegistrationSettingsUI:(_Bool)arg1;

+ (_Bool)shouldShowCNFRegistrationServerLogs;

+ (_Bool)shouldShowCNFRegistrationSettingsUI;

@end


