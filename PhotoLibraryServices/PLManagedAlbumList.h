/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_PLManagedAlbumList.h"


#import "PLAlbumContainer.h"

#import "PLDerivedAlbumListOrigin.h"

#import "PLIndexMappersDataOrigin.h"



@class NSMutableOrderedSet, NSObject<PLIndexMappingCache>, NSString;



@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin>

{

    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];

    _Bool isRegisteredForChanges;

    _Bool didRegisteredWithUserInterfaceContext;

}



+ (id)_albumListWithType:(int)arg1 inManagedObjectContext:(id)arg2;

+ (unsigned long long)_priorityForAlbumKind:(int)arg1;

+ (id)_singletonListWithType:(int)arg1 library:(id)arg2;

+ (id)_typeDescriptionForAlbumListType:(int)arg1;

+ (void)addSingletonObjectsToContext:(id)arg1;

+ (id)albumListInManagedObjectContext:(id)arg1;

+ (id)albumListInPhotoLibrary:(id)arg1;

+ (id)allStreamedAlbumsListInManagedObjectContext:(id)arg1;

+ (id)allStreamedAlbumsListInPhotoLibrary:(id)arg1;

+ (id)eventListInManagedObjectContext:(id)arg1;

+ (id)eventListInPhotoLibrary:(id)arg1;

+ (id)facesAlbumListInManagedObjectContext:(id)arg1;

+ (id)facesAlbumListInPhotoLibrary:(id)arg1;

+ (id)importListInManagedObjectContext:(id)arg1;

+ (id)importListInPhotoLibrary:(id)arg1;

+ (void)initialize;

+ (_Bool)isValidPathForPersistence:(id)arg1;

+ (_Bool)isValidTypeForPersistence:(int)arg1;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

+ (void)persistAlbumListUUIDs:(id)arg1 type:(int)arg2 allowsOverwrite:(_Bool)arg3;

+ (id)placesAlbumListInManagedObjectContext:(id)arg1;

+ (id)placesAlbumListInPhotoLibrary:(id)arg1;

+ (void)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2;

+ (id)wallpaperAlbumListInPhotoLibrary:(id)arg1;

- (id)_albumsCountFetchRequest;

@property(readonly, nonatomic) NSString *_prettyDescription;

@property(readonly, nonatomic) NSString *_typeDescription;

- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;

@property(nonatomic) int albumListType;

@property(readonly, nonatomic) NSMutableOrderedSet *albums;

@property(readonly, nonatomic) unsigned long long albumsCount;

@property(readonly, nonatomic) id albumsSortingComparator;

- (void)awakeFromFetch;

- (void)awakeFromInsert;

@property(readonly, nonatomic) _Bool canEditAlbums;

- (_Bool)canEditContainers;

- (id)containers;

@property(readonly, nonatomic) unsigned long long containersCount;

- (id)containersRelationshipName;

- (void)dealloc;

@property(nonatomic) _Bool didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;

- (void)didSave;

- (void)enumerateDerivedAlbumLists:(id)arg1;

- (void)enumerateDerivedIndexMappers:(id)arg1;

@property(readonly, nonatomic) int filter;

@property(readonly, nonatomic) _Bool hasAtLeastOneAlbum;

- (_Bool)hasDerivedIndexMappers;

- (void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1;

- (_Bool)isEmpty;

@property(nonatomic) _Bool isRegisteredForChanges; // @synthesize isRegisteredForChanges;

- (_Bool)needsReordering;

- (void)registerDerivedAlbumList:(struct NSObject *)arg1;

- (void)registerForChanges;

- (void)setNeedsReordering;

@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;

- (void)unregisterAllDerivedAlbums;

- (void)unregisterForChanges;

- (void)updateAlbumsOrderIfNeeded;

- (void)willTurnIntoFault;



@end

