/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLPhotoStreamsHelper : NSObject

{

    _Bool _appHasPolledOnceThisForegroundSession;

}



+ (id)_acaccountStore;

+ (_Bool)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;

+ (id)iCloudServiceAccount;

+ (_Bool)photoStreamsEnabled;

+ (id)publishBreadcrumbsPath;

+ (id)sharedPhotoStreamsHelper;

+ (_Bool)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;

- (void)_appDidEnterBackground:(id)arg1;

- (long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;

- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;

- (void)clearCachedAccountState;

- (void)dealloc;

- (_Bool)dequeueAssetsForPSPublishing:(id)arg1;

- (double)derivedAssetDimensionLimit;

- (id)derivedAssetForMasterAsset:(id)arg1;

- (struct CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2;

- (_Bool)enqueueAssetForPSPublishing:(id)arg1 assetHash:(id)arg2 fullPath:(id)arg3 fileSize:(id)arg4 type:(id)arg5 reenqueueCount:(id)arg6 publicGlobalUUID:(id *)arg7;

- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(id)arg2;

- (long long)friendsLimit;

- (long long)imageLimitForFriendStream;

- (long long)imageLimitForOwnStream;

- (id)imageLimitsByAssetType;

- (id)init;

- (void)initiateDeletionOfOriginalAssets:(id)arg1;

- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;

- (_Bool)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;

- (id)lastPhotoStreamUpdateDate;

- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(_Bool)arg3;

- (id)pause_mstreamd;

- (id)photoStreamsPublishStreamID;

- (void)pollForNewSubscriptionContent;

- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;

- (id)psHashAsString:(id)arg1;

- (id)psHashForData:(id)arg1;

- (_Bool)removeBreadcrumbsForHashString:(id)arg1;

- (void)resetMstreamdStateForPersonID:(id)arg1;

- (void)resetServerState;

- (void)resume_mstreamd:(id)arg1;

- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;

- (_Bool)shouldPublishScreenShots;

- (_Bool)shouldUploadVideos;

- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;

- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;

- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;

- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;



@end


