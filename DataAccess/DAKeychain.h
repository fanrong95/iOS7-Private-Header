/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface DAKeychain : NSObject

{

}



+ (id)sharedKeychain;

- (struct __CFDictionary *)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2;

- (struct __CFDictionary *)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1;

- (int)_daKeychainAccessibilityForSecAccessibility:(void *)arg1;

- (void *)_secAccessibilityForDAKeychainAccessibility:(int)arg1;

- (_Bool)canAccessCredentialsWithAccessibility:(int)arg1;

- (id)guessPasswordForURL:(id)arg1;

- (id)loadKeychainInformationsForURL:(id)arg1;

- (void)migratePasswordForAccount:(id)arg1;

- (id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(_Bool)arg3 passwordExpected:(_Bool)arg4;

- (void)removeKeychainInformationsForURL:(id)arg1;

- (_Bool)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2;

- (void)removePersistentCredentials;

- (_Bool)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3;

- (_Bool)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4;



@end


