/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVAssetInspectorLoader.h"


@class AVAssetCache, AVAssetInspector, AVWeakReference, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSURL;



@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader

{

    AVWeakReference *_weakReferenceToAsset;

    NSDictionary *_initializationOptions;

    struct OpaqueFigAsset *_figAsset;

    int _figAssetCreationStatus;

    long long _figAssetOnce;

    AVAssetInspector *_assetInspector;

    long long _assetInspectorOnce;

    NSObject<OS_dispatch_queue> *_completionHandlerQueue;

    struct OpaqueFigSimpleMutex *_loadingMutex;

    struct OpaqueFigSimpleMutex *_playabilityMutex;

    struct OpaqueFigSimpleMutex *_savedPhotosAlbumValidationMutex;

    struct OpaqueFigSemaphore *_playabilityValidationSemaphore;

    long long _playableStatus;

    int _playableResult;

    _Bool _playable;

    struct OpaqueFigSemaphore *_cameraRollValidationSemaphore;

    long long _compatibleWithSavedPhotosAlbumStatus;

    int _compatibleWithSavedPhotosAlbumResult;

    _Bool _compatibleWithSavedPhotosAlbum;

    NSMutableArray *_loadingBatches;

    _Bool _loadingCanceled;

    AVAssetCache *_assetCache;

    _Bool _shouldMatchDataInCacheByURLPathComponentOnly;

    _Bool _shouldMatchDataInCacheByURLWithoutQueryComponent;

    NSURL *_downloadDestinationURL;

    NSDictionary *_validationPlist;

    unsigned long long _referenceRestrictions;

    NSURL *_URL;

    _Bool _shouldOptimizeAccessForLinearMoviePlayback;

}



+ (id)_figAssetPropertiesForKeys;

+ (id)_figAssetTrackPropertiesForKeys;

+ (void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4;

- (id)URL;

- (void)_addFigAssetNotifications;

- (struct OpaqueFigSemaphore *)_cameraRollValidationSemaphore;

- (id)_completionHandlerQueue;

- (void)_createFigAsset;

- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;

- (struct OpaqueFigAsset *)_figAsset;

- (struct OpaqueFigFormatReader *)_formatReader;

- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;

- (_Bool)_isStreaming;

- (long long)_loadStatusForProperty:(id)arg1 figAsset:(struct OpaqueFigAsset *)arg2 returningError:(int *)arg3;

- (_Bool)_loadValueOfCompatibleWithSavedPhotosAlbumlByWaitingForAsyncValidationIfNeeded:(_Bool)arg1;

- (_Bool)_loadValueOfPlayableByWaitingForAsyncValidationIfNeeded:(_Bool)arg1;

- (id)_loadingBatches;

- (struct OpaqueFigSimpleMutex *)_loadingMutex;

- (struct OpaqueFigSemaphore *)_playabilityValidationSemaphore;

- (void)_removeFigAssetNotifications;

- (_Bool)_shouldOptimizeAccessForLinearMoviePlayback;

- (id)assetCache;

- (id)assetInspector;

- (void)cancelLoading;

- (id)chapterGroupInfo;

- (void)dealloc;

- (id)downloadDestinationURL;

- (unsigned long long)downloadToken;

- (CDStruct_1b6d18a9)duration;

- (void)finalize;

- (_Bool)hasProtectedContent;

- (id)initWithURL:(id)arg1 options:(id)arg2;

- (id)initWithURL:(id)arg1 options:(id)arg2 forAsset:(id)arg3;

- (_Bool)isCompatibleWithSavedPhotosAlbum;

- (_Bool)isComposable;

- (_Bool)isExportable;

- (_Bool)isPlayable;

- (_Bool)isReadable;

- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;

- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;

- (id)lyrics;

- (unsigned long long)referenceRestrictions;

- (id)resolvedURL;

- (_Bool)shouldMatchDataInCacheByURLPathComponentOnly;

- (_Bool)shouldMatchDataInCacheByURLWithoutQueryComponent;

- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;

@property(readonly, nonatomic) NSDictionary *validationPlist; // @synthesize validationPlist=_validationPlist;



@end


