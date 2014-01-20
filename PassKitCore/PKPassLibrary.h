/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PKPassLibraryExportedInterface.h"



@class NSXPCConnection, PKImageSetCache, PKPassLibraryExportedProxy;



@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface>

{

    NSXPCConnection *_connection;

    PKImageSetCache *_imageSetCache;

    PKPassLibraryExportedProxy *_exportedProxy;

    id <PKPassLibraryDelegate> _delegate;

}



+ (_Bool)isPassLibraryAvailable;

- (id)_errorHandlerWithCompletion:(SEL)arg1;

- (id)_errorHandlerWithSemaphore:(SEL)arg1;

- (void)_establishPassLibraryConnection;

- (void)_getArchivedPassWithUniqueID:(id)arg1 completion:(id)arg2;

- (void)_getPassWithUniqueID:(id)arg1 completion:(id)arg2;

- (id)_passesWithRetries:(unsigned long long)arg1;

- (void)_postLibraryChangeWithUserInfo:(id)arg1;

- (void)_registerForApplicationLifeCycleNotifications;

- (void)_registerPass:(id)arg1;

- (void)_registerPasses:(id)arg1;

- (void)_sendResumed;

- (void)_sendSuspended;

- (void)_tearDownPassLibraryConnection;

- (void)_unregisterForApplicationLifeCycleNotifications;

- (void)addFakeBulletin;

- (void)addPasses:(id)arg1 withCompletionHandler:(id)arg2;

- (id)archivedPassForUniqueID:(id)arg1;

- (id)bulletinDictWithRecordID:(id)arg1;

- (id)bulletinDictsForPassTypeID:(id)arg1 count:(unsigned long long)arg2 sinceDate:(id)arg3;

- (id)bulletinSectionInfoForRecordID:(id)arg1;

- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;

- (void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2;

- (_Bool)containsPass:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <PKPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;

- (id)diffForBulletinRecordID:(id)arg1;

- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id)arg2;

- (void)fetchImageSet:(long long)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 withCompletion:(id)arg4;

- (void)flushReferencedUniqueID:(id)arg1 forCachedImageSet:(long long)arg2 withDisplayProfile:(id)arg3;

- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id)arg2;

- (void)getPassesAndCatalog:(_Bool)arg1 withHandler:(id)arg2;

- (void)getPassesAndCatalog:(_Bool)arg1 withRetries:(unsigned long long)arg2 withHandler:(id)arg3;

- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id)arg2;

- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(id)arg3;

- (id)init;

- (void)introduceDatabaseIntegrityProblem;

- (void)logDelayExitReasons;

- (_Bool)migrateData;

- (void)noteAccountChanged;

- (void)notePassShared:(id)arg1;

- (void)nukeDatabaseAndExit;

- (void)passAdded:(id)arg1;

- (void)passRemoved:(id)arg1;

- (void)passUpdated:(id)arg1;

- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;

- (id)passWithUniqueID:(id)arg1;

- (id)passes;

- (void)removePass:(id)arg1;

- (void)removePassWithUniqueID:(id)arg1;

- (_Bool)replacePassWithPass:(id)arg1;

- (void)sendUserEditedCatalog:(id)arg1;

- (void)shuffleGroups:(int)arg1;

- (void)updatePassWithUniqueID:(id)arg1 completion:(id)arg2;

- (void)updateSettings:(long long)arg1 forPassWithUniqueID:(id)arg2;



@end


