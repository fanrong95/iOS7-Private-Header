/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3Collection.h"


@interface ML3AlbumArtist : ML3Collection

{

}



+ (id)allProperties;

+ (id)artworkCacheIDProperty;

+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;

+ (id)databaseTable;

+ (id)defaultOrderingProperties;

+ (id)effectiveAlbumArtistNameForAlbumArtistName:(id)arg1 artistName:(id)arg2 seriesName:(id)arg3 compilation:(_Bool)arg4;

+ (id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)arg1 albumArtistName:(id)arg2 artistSortName:(id)arg3 artistName:(id)arg4 compilation:(_Bool)arg5;

+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;

+ (void)initialize;

+ (id)joinClausesForProperty:(id)arg1;

+ (id)predisambiguatedProperties;

+ (id)propertiesForGroupingKey;

+ (_Bool)propertyIsCountProperty:(id)arg1;

+ (id)sectionPropertyForProperty:(id)arg1;

+ (id)trackForeignPersistentID;

- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3;

- (void)updateTrackValues:(id)arg1;



@end


