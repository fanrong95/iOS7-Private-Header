/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSLocking.h"



@class NSArray, NSManagedObjectModel, NSMutableArray;



@interface NSPersistentStoreCoordinator : NSObject <NSLocking>

{

    struct _persistentStoreCoordinatorFlags {

        unsigned int _isRegistered:1;

        unsigned int _reservedFlags:31;

    } _flags;

    unsigned int _reserved32;

    long long _miniLock;

    NSMutableArray *_extendedStoreURLs;

    id _externalRecordsHelper;

    NSManagedObjectModel *_managedObjectModel;

    id _coreLock;

    NSArray *_persistentStores;

}



+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;

+ (Class)_classForPersistentStoreAtURL:(id)arg1;

+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;

+ (void)_registerDefaultStoreClassesAndTypes;

+ (Class)_storeClassForStoreType:(id)arg1;

+ (id)_storeTypeForStore:(id)arg1;

+ (_Bool)accessInstanceVariablesDirectly;

+ (void)initialize;

+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id *)arg3;

+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;

+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;

+ (id)registeredStoreTypes;

+ (_Bool)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;

+ (_Bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id *)arg4;

+ (_Bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;

+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 localPeerID:(id)arg3 ubiquityName:(id)arg4;

+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3;

- (id)URLForPersistentStore:(id)arg1;

- (void)_addPersistentStore:(id)arg1 identifier:(id)arg2;

- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2;

- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3;

- (void)_assignObjects:(id)arg1 toStore:(id)arg2;

- (_Bool)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(struct __CFSet *)arg3 withAcceptableEntities:(struct __CFSet *)arg4;

- (_Bool)_checkForPostLionWriter:(id)arg1;

- (_Bool)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2;

- (id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;

- (id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3;

- (void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3;

- (_Bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id *)arg3;

- (_Bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id *)arg4;

- (void)_doPreSaveAssignmentsForObjects:(id)arg1;

- (id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id *)arg3;

- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)arg1 withSelector:(SEL)arg2;

- (_Bool)_isRegisteredWithUbiquity;

- (id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3;

- (id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3;

- (id)_persistentStoreForIdentifier:(id)arg1;

- (void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3;

- (id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 error:(id *)arg3;

- (_Bool)_removePersistentStore:(id)arg1;

- (_Bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id *)arg6;

- (id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2;

- (id)_retainedPersistentStores;

- (id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;

- (void)_setIsRegisteredWithUbiquity:(_Bool)arg1;

- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;

- (void)dealloc;

- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (void)finalize;

- (id)initWithManagedObjectModel:(id)arg1;

- (id *)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;

- (void)lock;

- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;

- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;

- (id)managedObjectIDForURIRepresentation:(id)arg1;

- (id)managedObjectIDForURIRepresentation:(id)arg1 error:(id *)arg2;

- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;

- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;

- (id)managedObjectModel;

- (id)metadataForPersistentStore:(id)arg1;

- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id *)arg5;

- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;

- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (_Bool)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;

- (id)persistentStoreCoordinator;

- (id)persistentStoreForIdentifier:(id)arg1;

- (id)persistentStoreForURL:(id)arg1;

- (id)persistentStores;

- (_Bool)removePersistentStore:(id)arg1 error:(id *)arg2;

- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;

- (_Bool)setURL:(id)arg1 forPersistentStore:(id)arg2;

- (_Bool)tryLock;

- (void)unlock;



@end

