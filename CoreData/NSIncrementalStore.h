/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPersistentStore.h"


@class NSDictionary;



@interface NSIncrementalStore : NSPersistentStore

{

    NSDictionary *_storeMetadata;

    unsigned long long _lastIdentifier;

    void *_reserveda;

    void *_reservedb;

}



+ (id)identifierForNewStoreAtURL:(id)arg1;

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;

+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;

- (void)_preflightCrossCheck;

- (_Bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (id)_rawMetadata__;

- (void)_setMetadata:(id)arg1 includeVersioning:(_Bool)arg2;

- (void)dealloc;

- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (_Bool)load:(id *)arg1;

- (_Bool)loadMetadata:(id *)arg1;

- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;

- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;

- (id)metadata;

- (id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;

- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;

- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;

- (id)referenceObjectForObjectID:(id)arg1;

- (void)setMetadata:(id)arg1;



@end


