/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSCalendar, NSMutableArray, NSMutableDictionary, NSObject<PLAlbumProtocol>, NSSet, PLFetchingAlbum, PLGenericAlbum, PLInFlightAssetsAlbum, PLManagedAlbum, PLManagedObjectContext, PLThumbnailManager;



@interface PLPhotoLibrary : NSObject

{

    _Bool _listeningForITunesSyncing;

    _Bool _isTransient;

    unsigned long long _pendingTransactions;

    struct __CFDictionary *_allPhotos;

    int _databaseMigrationKind;

    NSMutableArray *_transactionCompletionHandlers;

    PLThumbnailManager *_thumbnailManager;

    PLGenericAlbum *_allImportedPhotosAlbum;

    PLGenericAlbum *_lastImportedPhotosAlbum;

    NSCalendar *_exifConversionCalendar;

    NSMutableDictionary *_photoStreamAlbumsByStreamID;

    NSMutableArray *_photoStreamAlbums;

    NSSet *_imageFileExtensions;

    NSSet *_rawImageFileExtensions;

    NSSet *_audioFileExtensions;

    NSSet *_extraVideoExtensions;

    unsigned long long _lastFetchedGPSCount;

    unsigned long long _insertedCountSinceLastFetchedGPSCount;

    unsigned long long _deletedCountSinceLastFetchedGPSCount;

    unsigned long long _newlyCompleteWithGPS;

    PLManagedAlbum *_cameraRollAlbum;

    PLFetchingAlbum *_cameraSessionAlbum;

    PLInFlightAssetsAlbum *_inFlightAssetsAlbum;

    PLManagedObjectContext *managedObjectContext;

}



+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;

+ (_Bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;

+ (void)_doFilesystemImportIfNeeded;

+ (_Bool)areOpportunisticTasksDisabled;

+ (id)assetsDataDirectory;

+ (id)calculatedDisplayableIndexesForAlbum:(struct NSObject *)arg1 count:(unsigned long long)arg2;

+ (_Bool)canSaveVideoToCameraRoll:(id)arg1;

+ (id)crashRecoveryIndicatorFilePaths;

+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;

+ (int)createSqliteErrorIndicatorFile;

+ (id)dcimDirectory;

+ (id)dcimDirectoryURL;

+ (void)disableOpportunisticTasks:(_Bool)arg1;

+ (id)dupeAnalysisNeededFilePath;

+ (void)enqeueRecoveryJob:(id)arg1;

+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(_Bool)arg2;

+ (void)handlePossibleCoreDataError:(id)arg1;

+ (id)iTunesPhotosDirectory;

+ (id)iTunesSyncedAssetMetadataThumbnailsDirectory;

+ (id)iTunesSyncedAssetSmallThumbnailsDirectory;

+ (id)iTunesSyncedAssetsDirectory;

+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;

+ (id)iTunesSyncedFaceDataDirectory;

+ (id)imageWriterIndicatorFilePath;

+ (void)initializeGraphicsServices;

+ (_Bool)isAlbumSynced:(id)arg1;

+ (_Bool)isApplicationWildcat;

+ (_Bool)isDupeAnalysisNeeded;

+ (_Bool)isMomentAnalysisNeeded;

+ (_Bool)isRunningInStoreDemoMode;

+ (_Bool)isStreamsLibraryUpdatingExpired;

+ (id)libraryAvailableIndicatorFilePath;

+ (_Bool)libraryAvailableIndicatorState;

+ (id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;

+ (id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2;

+ (id)lightweightReimportPhotoCloudSharingDataDirectory;

+ (id)mediaFilesDirectoryURL;

+ (id)migrationIndicatorFilePath;

+ (id)momentAnalysisNeededFilePath;

+ (id)opportunisticTaskIsolationQueue;

+ (id)pathToAssetsToAlbumsMapping;

+ (id)persistedAlbumDataDirectoryURL;

+ (id)photoCloudSharingCacheDataDirectory;

+ (id)photoCloudSharingDataDirectory;

+ (id)photoCloudSharingMetadataDirectory;

+ (id)photoDataCachesDirectory;

+ (id)photoDataDirectory;

+ (id)photoDataDirectoryURL;

+ (id)photoDataMiscDirectory;

+ (id)photoMetadataDirectoryURL;

+ (id)photoStreamsDataDirectory;

+ (_Bool)processCanReadSandboxForPath:(id)arg1;

+ (_Bool)processCanWriteSandboxForPath:(id)arg1;

+ (void)recoverFromCrashIfNeeded;

+ (void)repairSingletonObjects;

+ (void)resetSyncedAssetsDCIMDirectory;

+ (struct NSObject *)savedPhotosAlbum;

+ (void)setApplicationIsWildcat:(_Bool)arg1;

+ (void)setCloudAlbumSharingEnabled:(_Bool)arg1;

+ (void)setDupeAnalysisNeeded:(_Bool)arg1;

+ (void)setImageWriterIsBusy:(_Bool)arg1;

+ (void)setLibraryAvailableIndicatorState:(_Bool)arg1;

+ (void)setMigratorIsBusy:(_Bool)arg1;

+ (void)setMomentAnalysisNeeded:(_Bool)arg1;

+ (void)setPhotoStreamEnabled:(_Bool)arg1;

+ (void)setSqliteErrorAndExitIfNecessary;

+ (void)setStreamsLibraryUpdatingExpired:(_Bool)arg1;

+ (void)setTakingPhotoIsBusy:(_Bool)arg1;

+ (void)setVideoCaptureIsBusy:(_Bool)arg1;

+ (id)sharedPhotoLibrary;

+ (id)simpleDCIMDirectory;

+ (id)sqliteErrorIndicatorFilePath;

+ (id)streamsLibraryUpdatingExpiredIndicatorFilePath;

+ (id)syncInfoPath;

+ (id)syncedAlbumSubtitleStringFormat;

+ (id)takingPhotoIndicatorFilePath;

+ (id)takingVideoIndicatorFilePath;

+ (id)videosPath;

- (id)_allAssetsForDeletion:(id)arg1;

- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;

- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;

- (void)_deleteObsoleteMetadataFiles;

- (_Bool)_hasAtLeastOneItem:(_Bool)arg1;

- (_Bool)_hasPendingAssets;

- (id)_init;

- (void)_linkAsideAlbumMetadataForOTARestore;

- (void)_loadFileExtensionInformation;

- (void)_migrationDidFinish;

- (void)_releaseThumbnailManager;

- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;

- (void)_safeSave:(id)arg1;

- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;

- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;

- (void)_withDispatchGroup:(id)arg1 synchronously:(_Bool)arg2 performBlock:(id)arg3 completionHandler:(void)arg4;

- (void)_withDispatchGroup:(id)arg1 synchronously:(_Bool)arg2 performTransaction:(id)arg3 completionHandler:(void)arg4;

- (void)addCompletionHandlerToCurrentTransaction:(id)arg1;

- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(_Bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(long long)arg9 replacementUUID:(id)arg10 extendedInfo:(id)arg11 thumbnailsData:(struct __CFDictionary *)arg12 withUUID:(id)arg13;

- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(_Bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(long long)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(struct __CFDictionary *)arg13 withUUID:(id)arg14;

- (void)addInflightAsset:(id)arg1;

- (void)addToKnownPhotoStreamAlbums:(id)arg1;

- (struct NSObject *)albumFromGroupURL:(id)arg1;

- (id)albumListForAlbumOfKind:(int)arg1;

- (id)albumListForContentMode:(int)arg1;

- (struct NSObject *)albumWithUuid:(id)arg1;

@property(readonly, nonatomic) NSArray *albums;

- (id)albumsForContentMode:(int)arg1;

- (id)allImportedPhotosAlbum;

- (id)allImportedPhotosAlbumCreateIfNeeded:(_Bool)arg1;

- (struct NSObject *)allPhotoStreamPhotosAlbum;

- (struct NSObject *)allPhotosAlbum;

- (struct NSObject *)allPhotosAlbumIfExists;

- (id)assetURLForManagedPhoto:(id)arg1;

- (id)assetURLForPhoto:(id)arg1;

- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;

- (id)assetWithUUID:(id)arg1;

- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;

- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;

- (void)cleanupForStoreDemoMode;

- (void)cleanupModelAfterRestoreFromiTunesBackup;

- (void)clientApplicationWillEnterForeground;

- (unsigned long long)concurrencyType;

- (void)copyAssetToCameraRoll:(id)arg1;

- (id)countOfAllPhotosAndVideos;

- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long *)arg2;

- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;

- (void)dealloc;

- (void)deleteAllImages;

- (void)deleteImages:(id)arg1;

- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;

- (unsigned long long)editableAlbumCount;

- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;

@property(readonly, nonatomic) NSArray *eventAlbums;

- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;

- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;

@property(readonly, nonatomic) NSArray *faceAlbums;

- (struct NSObject *)filesystemImportProgressAlbum;

- (void)flushAlbums;

- (void)flushDCIMAlbums;

- (void)flushPhotoStreamAlbums;

- (_Bool)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2;

- (id)globalValueForKey:(id)arg1;

- (id)handleAssetsLibraryGetGlobalMessage:(id)arg1 userInfo:(id)arg2;

- (id)handleAssetsLibrarySetGlobalMessage:(id)arg1 userInfo:(id)arg2;

- (_Bool)hasAtLeastOneItem;

- (_Bool)hasAtLeastOnePhoto;

- (_Bool)hasAtLeastOnePhotoWithGPS;

- (_Bool)hasCompletedMomentAnalysis;

- (_Bool)hasCompletedRestorePostProcessing;

- (_Bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;

- (struct NSObject *)iPadAllPhotosAlbum;

- (struct NSObject *)iPadAllPhotosAlbumIfExists;

- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;

@property(readonly, nonatomic) NSArray *imagePickerAlbums;

@property(readonly, nonatomic) NSArray *importAlbums;

@property(readonly, nonatomic) NSObject<PLAlbumProtocol> *inFlightAssetsAlbum;

- (struct NSObject *)inFlightAssetsAlbumIfAvailable;

- (id)init;

- (id)initWithTransientContext:(_Bool)arg1;

- (_Bool)isAudioFileExtension:(id)arg1;

- (_Bool)isImageFileExtension:(id)arg1;

- (_Bool)isNonRawImageFileExtension:(id)arg1;

- (_Bool)isPhotoInSavedPhotosAlbum:(id)arg1;

- (_Bool)isRawImageFileExtension:(id)arg1;

- (_Bool)isTransient;

- (_Bool)isVideoFileExtension:(id)arg1;

- (id)lastImportSessionUUID;

- (id)lastImportedPhotosAlbum;

- (id)lastImportedPhotosAlbumCreateIfNeeded:(_Bool)arg1;

- (id)librarySizes;

- (void)loadDatabase;

@property(retain, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;

- (id)managedObjectWithObjectID:(id)arg1;

- (id)masterFilenameFromSidecarFileInfo:(id)arg1;

- (id)masterURLFromSidecarURLs:(id)arg1;

- (void)modifyDCIMEntryForPhoto:(id)arg1;

- (_Bool)needsMigration;

- (id)newImageForPhoto:(id)arg1 format:(int)arg2;

- (id)newImageForPhoto:(id)arg1 format:(int)arg2 outImageProperties:(const struct __CFDictionary **)arg3;

- (id)objectWithObjectID:(id)arg1;

- (struct NSObject *)otaRestoreProgressAlbum;

- (void)performBlock:(id)arg1;

- (void)performBlock:(id)arg1 completionHandler:(void)arg2;

- (void)performBlockAndWait:(id)arg1 completionHandler:(void)arg2;

- (void)performTransaction:(id)arg1;

- (void)performTransaction:(id)arg1 completionHandler:(void)arg2;

- (void)performTransactionAndWait:(id)arg1;

- (void)performTransactionAndWait:(id)arg1 completionHandler:(void)arg2;

- (id)photoFromAssetURL:(id)arg1;

- (void)photoLibraryCorruptNotification;

@property(readonly, nonatomic) NSArray *photoStreamAlbums;

@property(readonly, nonatomic) NSArray *photoStreamAlbumsForPreferences;

@property(readonly, nonatomic) NSArray *placeAlbums;

- (void)prepareDatabaseForOTAAssetsPhase;

- (int)priorityForFileExtension:(id)arg1;

- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;

- (void)recreateAlbumsFromMetadata;

- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;

- (void)removeInflightAssets:(id)arg1;

- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;

@property(readonly, nonatomic) NSObject<PLAlbumProtocol> *savedPhotosAlbum;

- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;

- (void)setLastImportSessionUUID:(id)arg1;

- (struct NSObject *)syncProgressAlbum;

- (id)syncProgressAlbums;

- (id)syncedAlbums;

- (void)testForRecoveryInBackground;

@property(readonly, nonatomic) PLThumbnailManager *thumbnailManager;

@property(readonly, nonatomic) NSArray *userAlbums;

- (void)userDeleteAlbums:(id)arg1;

- (void)userDeleteAssets:(id)arg1;

@property(readonly, nonatomic) NSArray *wallpaperAlbums;

- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;

- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2;

- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2 completionHandler:(void)arg3;



@end


