/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3Entity.h"


@interface ML3Track : ML3Entity

{

}



+ (id)TVShowEpisodesDefaultOrderingProperties;

+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;

+ (id)albumAllArtistsDefaultOrderingProperties;

+ (id)albumAndArtistDefaultOrderingProperties;

+ (id)albumsDefaultOrderingProperties;

+ (id)allProperties;

+ (id)artistAllAlbumsDefaultOrderingProperties;

+ (id)artistsDefaultOrderingProperties;

+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;

+ (id)collectionClassesToUpdateBeforeDelete;

+ (id)composersDefaultOrderingProperties;

+ (id)containerQueryWithContainer:(id)arg1;

+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;

+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;

+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;

+ (id)databaseTable;

+ (id)defaultOrderingProperties;

+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;

+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(id)arg3;

+ (id)extraTablesToDelete;

+ (id)extraTablesToInsert;

+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;

+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;

+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;

+ (id)foreignColumnForProperty:(id)arg1;

+ (id)foreignDatabaseTableForProperty:(id)arg1;

+ (id)genresDefaultOrderingProperties;

+ (id)importChaptersByParsingAsset:(id)arg1;

+ (void)initialize;

+ (id)joinClausesForProperty:(id)arg1;

+ (_Bool)libraryContentsChangeForProperty:(id)arg1;

+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;

+ (id)orderingTermsForITTGTrackOrder:(unsigned int)arg1 descending:(_Bool)arg2;

+ (id)persistentIDColumnForTable:(id)arg1;

+ (id)podcastsDefaultOrderingProperties;

+ (id)podcastsEpisodesDefaultOrderingProperties;

+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;

+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;

+ (id)predisambiguatedProperties;

+ (_Bool)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;

+ (long long)revisionTrackingCode;

+ (id)sectionPropertyForProperty:(id)arg1;

+ (id)subselectPropertyForProperty:(id)arg1;

+ (id)subselectStatementForProperty:(id)arg1;

+ (_Bool)trackValueAreInTheCloud:(id)arg1;

+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;

+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;

+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;

+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long *)arg3;

+ (id)unsettableProperties;

+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;

- (void)_createVideoSnapshotAtTime:(double)arg1 withCompletionBlock:(id)arg2;

- (id)_screenshotArtworkDataStoredAsItemArtwork;

- (id)absoluteFilePath;

- (id)artworkCacheIDAtPlaybackTime:(double)arg1;

- (id)chapterTOC;

- (void)createVideoSnapshotAtTime:(double)arg1;

- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;

- (_Bool)needsVideoSnapshot;

- (_Bool)populateArtworkCacheWithArtworkData:(id)arg1;

- (void)populateChapterDataWithImportChapters:(id)arg1;

- (void)populateLocationPropertiesWithPath:(id)arg1;

- (id)rawIntegrity;

- (void)updateCollectionCloudStatus;

- (_Bool)updateIntegrity;

- (void)updateStoreBookmarkMetadataIdentifier;



@end


