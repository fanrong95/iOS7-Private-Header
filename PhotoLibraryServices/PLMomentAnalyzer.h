/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CLLocation, GEOPlace, NSDate, NSDateFormatter, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString, PLMomentAnalyzerWorkThread, PLPhotoLibrary, PLXPCTransaction;



@interface PLMomentAnalyzer : NSObject

{

    NSObject<OS_dispatch_queue> *_workQueue;

    PLMomentAnalyzerWorkThread *_geoWorkThread;

    unsigned long long _mode;

    double _analysisStartTime;

    _Bool _delayedSavePending;

    unsigned long long _objectUpdatesSinceSave;

    PLXPCTransaction *_keepAliveTransaction;

    NSMutableOrderedSet *_pendingGEORequests;

    NSMutableSet *_activeGEORequests;

    NSMutableSet *_processingMomentUuids;

    NSMutableSet *_megaMomentListIdsToProcess;

    NSMutableSet *_yearMomentListIdsToProcess;

    NSDateFormatter *_shortDateFormatter;

    NSDateFormatter *_dayOfTheWeekDateFormatter;

    PLPhotoLibrary *_photoLibrary;

    _Bool _analyzingAllMoments;

    _Bool _skippedMomentsDuringAnalysis;

    _Bool _passSuccess;

    void *_addressBook;

    unsigned long long _errorState;

    int _errorBackoffLevel;

    int _triesAtCurrentBackoffLevel;

    _Bool _networkObservingReachability;

    _Bool _needToUpdateInvalidMomentsWhenPossible;

    NSDictionary *_homeAddressDictionary;

    CLLocation *_homeLocation;

    GEOPlace *_homePlace;

    NSString *_languageAndLocale;

    NSString *_lastGeoProviderId;

    NSOrderedSet *_defaultDominantGeoOrderingForMoment;

    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;

    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;

    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;

    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;

    double _lastNetworkForcedAbortTime;

    double _timeToWaitBeforeNextRequest;

    double _lastRevGeoRequestTime;

    NSDate *_lastGeoVersionFileFetchDate;

    unsigned long long _lastGeoVersionFileVersion;

    NSDictionary *_serverVersionInfo;

    double _lastServerVersionInfoFetchAttemptTime;

    unsigned long long _currentRevGeoServerVersionNum;

    _Bool _pendingServerVersionInfoFetch;

    _Bool _addCountyIfNeeded;

    _Bool _noResultErrorIsSuccess;

    double _revGeoServerVersionInfoFetchNewVersionInterval;

    NSString *_revGeoServerVersionInfoURL;

    NSString *_currentProviderId;

    _Bool _momentAnalysisPaused;

}



+ (_Bool)hasCompletedMomentsAndMomentListAnalysisInLibrary:(id)arg1;

+ (id)sharedInstance;

- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;

- (void)_addRevGeoPlacesFromAssets:(id)arg1 toPlacesArray:(id)arg2;

@property(readonly, nonatomic) void *_addressBook;

- (void)_addressBookChanged;

- (id)_addressDictionaryForABRecord:(void *)arg1 identifier:(int)arg2;

- (void)_analysisComplete;

- (_Bool)_canProcessMoments;

- (void)_checkForNewServerVersionInfoIfNeeded;

- (id)_compactPlaceDescriptionForPlaceResult:(id)arg1;

- (void)_countryCodeChanged:(id)arg1;

- (id)_currentHomeAddressDictionary;

- (id)_currentProviderId;

- (id)_dictionaryFromLocation:(id)arg1;

- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(_Bool)arg4 includeHome:(_Bool)arg5 homeAtEnd:(_Bool)arg6 atLastLevel:(_Bool)arg7 outOtherNonDominantPlaces:(id)arg8;

- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(_Bool)arg2;

- (unsigned long long)_errorTypeForError:(id)arg1;

- (void)_fetchServerVersionInfo;

- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(_Bool)arg3;

- (void)_finalizeInitOnWorkQueue;

- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(_Bool)arg2 errorType:(unsigned long long)arg3;

- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(_Bool)arg2;

- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(id)arg2;

- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(id)arg2;

- (id)_geoLocationForCoordinate:(CDStruct_c3b9c2ee)arg1 date:(id)arg2;

- (unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2;

@property(readonly, nonatomic) CLLocation *_homeLocation;

- (unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2;

- (_Bool)_isNetworkReachable;

- (_Bool)_loadServerVersionInfo;

- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(_Bool)arg3 outAddedHome:(_Bool *)arg4;

- (id)_locationFromDictionary:(id)arg1;

- (_Bool)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2;

- (_Bool)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3;

- (id)_metadataPath;

- (void)_networkReachabilityDidChange:(id)arg1;

@property(readonly, nonatomic) PLPhotoLibrary *_photoLibrary;

- (void)_processGEORequestWithRequestInfo:(id)arg1;

- (unsigned long long)_processMegaMomentList:(id)arg1;

- (void)_processMegaMomentLists;

- (void)_processNextAnalysisTransaction;

- (void)_processNextTransaction;

- (void)_processPendingGEORequests;

- (unsigned long long)_processYearMomentList:(id)arg1;

- (void)_processYearMomentLists;

- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(_Bool)arg1;

- (void)_removeKeepAlive;

- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(_Bool)arg2;

- (void)_resetErrorState;

- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(_Bool)arg2 invalidOnly:(_Bool)arg3;

- (void)_runBlockOnWorkQueue:(id)arg1;

- (void)_runOnWorkQueueAferSeconds:(double)arg1 block:(id)arg2;

- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;

- (void)_saveDataIfReachedObjectChangeThreshold;

- (void)_saveGlobalMetadata;

- (void)_saveNow;

- (id)_serverVersionInfoFilePath;

- (void)_setErrorState:(unsigned long long)arg1;

- (void)_setLocationDataValidForMomentId:(id)arg1;

- (void)_setMomentAnalysisPaused:(_Bool)arg1;

- (_Bool)_shouldProcessMoments:(id)arg1;

- (unsigned long long)_significantPlaceCountInMap:(id)arg1;

- (id)_simpleNamesForNameInfoArray:(id)arg1;

- (void)_startObservingReachabilityChanges;

- (_Bool)_startingToProcessMomentWithUuid:(id)arg1;

- (void)_stopObservingReachabilityChanges;

- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3;

- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2;

- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(_Bool)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;

- (void)_updateCurrentProviderId;

- (void)_updateCurrentProviderIdWithCountryCode:(id)arg1;

- (void)_updateDateFormattersForLocale:(id)arg1;

- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(_Bool)arg4 includeHome:(_Bool)arg5 homeAtEnd:(_Bool)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long *)arg9 outUsedHome:(_Bool *)arg10;

- (void)_updateErrorStateWithSuccess:(_Bool)arg1 errorType:(unsigned long long)arg2;

- (_Bool)_updateHomeAddressIfNeeded;

- (void)_updateHomeLocation;

- (_Bool)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;

- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1;

- (void)_updateInformationForGeoProviderIfNeeded;

- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;

- (void)_updateKeepAlive;

- (_Bool)_updateLanguageIfNeeded;

- (void)_updateLocalServerVersionInfo:(id)arg1;

- (void)_updateRevGeoServerFetchInfoConfig;

- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(_Bool)arg9;

- (void)_waitForReachability;

- (void)dealloc;

- (id)init;

- (void)pauseMomentAnalysis;

- (void)resumeMomentAnalysis;

- (void)updateInfoForAllMoments;

- (void)updateInfoForInvalidMomentsIfNeeded;

- (_Bool)updateInfoForMegaMomentLists:(id)arg1;

- (_Bool)updateInfoForMomentListWithMomentListId:(id)arg1;

- (_Bool)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(_Bool)arg2;

- (_Bool)updateInfoForMoments:(id)arg1 invalidOnly:(_Bool)arg2;

- (_Bool)updateInfoForYearMomentLists:(id)arg1;



@end


