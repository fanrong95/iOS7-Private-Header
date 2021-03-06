/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSString;



@interface ACDDatabase : NSObject

{

    NSString *_path;

    NSManagedObjectContext *_context;

    NSManagedObjectModel *_model;

    NSPersistentStore *_store;

    id _contextDidSaveNotificationObserver;

}



+ (_Bool)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

+ (struct __CFString *)_copyRootPath;

+ (_Bool)_isUnrecoverableDatabaseError:(id)arg1;

+ (id)_managedObjectModel;

+ (id)_optionsForOpeningPersistentStore;

+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;

+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;

+ (void)_resetPeristentStoreCoordinator;

+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;

+ (id)defaultPath;

- (void).cxx_destruct;

- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;

- (_Bool)_databaseFileExists;

- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;

- (void)_setupManagedObjectContext;

- (id)_store;

- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;

- (void)dealloc;

- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;

- (id)existingObjectWithURI:(id)arg1;

- (id)fetchObjectsForEntityNamed:(id)arg1;

- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;

- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;

- (id)initWithDefaultPath;

- (id)initWithPath:(id)arg1;

@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @dynamic managedObjectContext;

- (id)managedObjectIDForURI:(id)arg1;

- (id)objectForObjectURI:(id)arg1;

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;

- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;

@property(nonatomic) long long version; // @dynamic version;



@end


