/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSMetadataQuery, NSMutableSet, NSObject<OS_dispatch_queue>, NSURL, _UIDocumentStorage;



@interface UIDocumentStorageManager : NSObject

{

    NSObject<OS_dispatch_queue> *_ivarQueue;

    _UIDocumentStorage *_storage;

    NSMutableSet *_observers;

    NSMetadataQuery *_query;

    NSDictionary *_identifiersToURLMap;

    NSURL *_defaultURL;

}



+ (void)requestSharedManager:(id)arg1;

- (void)_appActivated:(id)arg1;

- (void)_finishSetupWithDecision:(_Bool)arg1 completionHandler:(id)arg2;

- (id)_identifierToURLMap;

- (id)_initWithCompletionHandler:(id)arg1;

- (void)_initialGatherFinished;

- (void)_loadUserICloudChoiceWithCompletionHandler:(id)arg1;

- (id)_observeContentsOfDirectories:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(id)arg3;

- (id)_queryResults;

- (void)_queryUpdated;

- (void)_resetQuery;

- (void)_setStorage:(id)arg1;

- (void)_storeUserICloudChoice:(_Bool)arg1 forIdentityToken:(id)arg2;

- (void)_ubiquityIdentityTokenChanged;

- (void)_updateObservers;

- (id)_userICloudChoiceArray;

- (id)_userICloudChoiceForIdentityToken:(id)arg1;

@property(readonly) NSURL *dataStorageURL;

@property(readonly) NSURL *documentStorageURL;

- (id)init;

- (id)observeContentsOfDirectory:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(id)arg3;

- (id)observeContentsOfUbiquitousContainersWithIdentifiers:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(id)arg3;

- (void)removeObserver:(id)arg1;

- (void)runSetupProcessWithCompletionHandler:(id)arg1;

- (void)updateObserver:(id)arg1 withSortDescriptors:(id)arg2;

@property(readonly) _Bool usesUbiquitousStorage;

- (void)willAddURL:(id)arg1;

- (void)willMoveURL:(id)arg1 toURL:(id)arg2;

- (void)willRemoveURL:(id)arg1;



@end


