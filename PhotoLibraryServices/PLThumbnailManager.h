/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDictionary, NSIndexSet, NSLock, NSMutableDictionary, NSMutableSet, PLLargeImageLoader, PLPhotoLibrary;



@interface PLThumbnailManager : NSObject

{

    PLPhotoLibrary *_photoLibrary;

    NSLock *_lock;

    NSIndexSet *_occupiedIndexes;

    NSDictionary *_changedPhotosMap;

    NSArray *_changedPhotos;

    NSMutableDictionary *_thumbManagersByFormat;

    id <PLThumbPersistenceManager> _lastUsedThumbManager;

    int _lastUsedThumbManagerFormat;

    PLLargeImageLoader *_largeImageLoaderFullSize;

    PLLargeImageLoader *_largeImageLoaderFullScreen;

    PLLargeImageLoader *_largeImageLoaderFilledScreen;

    PLLargeImageLoader *_largeImageLoaderFilledHalfScreen;

    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;

    NSMutableSet *_requestedThumbnailFixAssets;

    id _observerToken;

}



+ (id)_allPossibleThumbnailFormats;

+ (void)addRebuildThumbnailsRequest;

+ (id)cameraPreviewWellAssetUUID;

+ (id)cameraPreviewWellImage;

+ (id)cameraPreviewWellImageFileURL;

+ (id)cameraPreviewWellImageQueue;

+ (id)defaultThumbnailsDirectory;

+ (id)defaultThumbnailsDirectoryV2;

+ (void)handleRebuildThumbnailRequestPersistentFailure;

+ (_Bool)hasExceededRebuildThumbnailRequestLimit;

+ (_Bool)hasObsoleteThumbnailTables;

+ (_Bool)hasRebuildThumbnailsRequest;

+ (_Bool)isMissingThumbnailTables;

+ (_Bool)isRebuildingThumbnails;

+ (void)rebuildAllMissingThumbnails;

+ (void)removeObsoleteMetadata;

+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;

+ (void)resetThumbnails;

+ (void)saveCameraPreviewWellImage:(struct CGImage *)arg1 uuid:(id)arg2;

+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;

+ (id)supportedThumbnailFormats;

+ (int)thumbnailFormat;

+ (int)thumbnailVersion;

+ (_Bool)useImageTableForFormat:(int)arg1;

- (id)_anyImageTable;

- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(int *)arg9;

- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(int *)arg9;

- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;

- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id *)arg2;

- (id)_tableDescriptions;

- (id)_thumbManagerForFormat:(int *)arg1;

- (void)clearPhotoLibrary;

- (id)compactImageTables;

- (_Bool)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;

- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 allowPlaceholder:(_Bool)arg9;

- (void)dealloc;

- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;

- (id)initWithWeakPhotoLibrary:(id)arg1;

- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 outImageProperties:(const struct __CFDictionary **)arg3 allowPlaceholder:(_Bool)arg4;

@property(retain, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;

@property(nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;

- (struct __CFDictionary *)placeholderThumbnailDataByFormatID;

- (id)preflightImageTableCompactionForPhotos:(id)arg1;

- (id)preheatItemSourceForFormat:(int)arg1;

- (void)setThumbnails:(struct __CFDictionary *)arg1 forPhoto:(id)arg2;

- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;

@property(readonly, nonatomic) NSMutableDictionary *thumbManagersByFormat; // @synthesize thumbManagersByFormat=_thumbManagersByFormat;

- (id)thumbnailJPEGPathForPhoto:(id)arg1;



@end


