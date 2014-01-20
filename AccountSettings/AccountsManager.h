/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray, NSMutableDictionary;



@interface AccountsManager : NSObject

{

    NSMutableDictionary *_topLevelAccountsByID;

    NSMutableArray *_orderedTopLevelAccounts;

    NSMutableDictionary *_childAccountsByID;

    NSMutableDictionary *_childAccountIDToParentAccountID;

    NSMutableDictionary *_originalAccountsByID;

    unsigned long long _dataVersion;

    NSArray *_runtimeFixers;

}



+ (void)_migrateAccountsIfNeeded;

+ (id)_notifierClassNamesForAccountType:(id)arg1 dataclass:(id)arg2;

+ (_Bool)_oldDAAccountsInformationFound;

+ (_Bool)_oldMailAccountsInformationFound;

+ (void)_setShouldSkipNotifications:(_Bool)arg1;

+ (void)accountDidChange:(id)arg1 forDataclass:(id)arg2;

+ (_Bool)accountSettingsNeedsToBeMigrated;

+ (void)accountWillChange:(id)arg1 forDataclass:(id)arg2;

+ (id)createAndLockMigrationLock;

+ (unsigned long long)currentVersion;

+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(_Bool)arg2;

+ (id)fullPathToAccountSettingsPlist;

+ (void)killDataAccessIfNecessary;

+ (void)releaseMigrationLock:(id)arg1;

+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;

+ (void)shouldMigrateOldMailAccounts:(_Bool *)arg1 oldDAAccounts:(_Bool *)arg2 newAccountSettings:(_Bool *)arg3;

+ (void)waitForMigrationToFinish;

- (void)_addNotificationToDictionary:(id)arg1 forChangeType:(int)arg2 originalProperties:(id)arg3 currentProperties:(id)arg4;

- (id)_createRuntimeFixers;

- (id)_initWithAccountsInfo:(id)arg1;

- (void)_loadChildrenFromAccount:(id)arg1;

- (void)_removeChildrenForAccountWithIdentifier:(id)arg1;

- (void)_sendNotificationsForChangedAccounts;

- (void)_setOriginalAccountDictionaries;

- (id)accountWithIdentifier:(id)arg1;

- (id)accountsWithTypes:(id)arg1;

- (id)accountsWithTypes:(id)arg1 withLoader:(id)arg2;

- (void)addChild:(id)arg1 toAccount:(id)arg2;

- (id)allBasicAccounts;

- (id)allBasicSyncableAccounts;

- (id)allMailAccounts;

- (id)basicAccountsWithTypes:(id)arg1;

- (unsigned long long)count;

- (unsigned long long)countOfBasicAccountsWithTypes:(id)arg1;

- (unsigned long long)dataVersion;

- (void)dealloc;

- (void)deleteAccount:(id)arg1;

- (void)deleteAccountWithIdentifier:(id)arg1;

- (id)displayAccountWithSyncIdentifier:(id)arg1;

- (id)fullAccountWithIdentifier:(id)arg1 loader:(id)arg2;

- (id)fullDeviceLocalAccount;

- (id)init;

- (id)initInsideOfMigration;

- (id)initWithAccounsInfoArray:(id)arg1;

- (void)insertAccount:(id)arg1;

- (id)mergeInMemoryProperties:(id)arg1 originalProperties:(id)arg2 onDiskProperties:(id)arg3;

- (void)removeChildWithIdentifier:(id)arg1 fromAccount:(id)arg2;

- (void)replaceAccount:(id)arg1 withAccount:(id)arg2;

- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;

- (void)saveAllAccounts;

- (void)setDataVersion:(unsigned long long)arg1;

- (id)syncableAccountWithSyncIdentifier:(id)arg1;

- (void)updateAccount:(id)arg1;



@end


