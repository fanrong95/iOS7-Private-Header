/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLAssetChangeObserver.h"

#import "PLCloudCommentsChangeObserver.h"

#import "PLCloudFeedEntriesObserver.h"

#import "PLPhotoLibraryShouldReloadObserver.h"



@class NSDate, NSMapTable, NSMutableArray, PLPhotoLibrary;



@interface PUFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>

{

    PLPhotoLibrary *_photoLibrary;

    NSMutableArray *_sectionInfos;

    NSMapTable *_sectionInfosByCloudFeedEntry;

    NSDate *_earliestDate;

    NSMutableArray *_pendingFeedEntriesChangeNotifications;

    NSMutableArray *_pendingCommentsChangeNotifications;

    NSMutableArray *_pendingAssetsChangeNotifications;

    id <PUFeedSectionInfosManagerDelegate> _delegate;

}



- (void).cxx_destruct;

- (void)_didFinishPostingNotifications:(id)arg1;

- (void)_getEarliestDate:(out id *)arg1 mostRecentEntries:(out id *)arg2 forBatchWithLatestDate:(id)arg3;

- (void)_rebuildSectionInfos;

- (id)_sectionInfoSortingComparator;

- (_Bool)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;

- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;

- (void)assetsDidChange:(id)arg1;

- (void)cloudCommentsDidChange:(id)arg1;

- (void)cloudFeedEntriesDidChange:(id)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <PUFeedSectionInfosManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (_Bool)hasEnoughCloudFeedAssetEntriesToDisplay;

- (long long)indexOfSectionInfo:(id)arg1;

- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;

- (id)indexesOfInvitationsReceivedSectionInfos;

- (id)initWithPhotoLibrary:(id)arg1;

- (void)loadSectionInfosAtIndexes:(id)arg1;

- (long long)numberOfInvitationsReceived;

- (long long)numberOfSectionInfos;

- (id)sectionInfoAtIndex:(long long)arg1;

- (id)sectionInfosAtIndexes:(id)arg1;

- (void)shouldReload:(id)arg1;



@end


