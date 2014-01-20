/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ML3DatabaseConnection, ML3MusicLibrary;



__attribute__((visibility("hidden")))

@interface ITDBGeniusDatabase : NSObject

{

    ML3MusicLibrary *_musicLibrary;

    ML3DatabaseConnection *_geniusDBConnection;

    double _connectionFailedTime;

    struct __CFDictionary *_statementCache;

    _Bool _isInTransaction;

}



+ (id)sharedGeniusDatabase;

- (void).cxx_destruct;

- (void)_connect;

- (_Bool)_copyBlobData:(id *)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;

- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;

- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;

- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;

- (_Bool)_hasAnySongs;

- (_Bool)_hasRowsInTable:(id)arg1;

- (void)_invalidateDatabase;

- (_Bool)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;

- (_Bool)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;

- (id)copyGeniusConfigrationDataAndBytes;

- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;

- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;

- (id)databaseConnection;

- (unsigned long long)defaultMinTrackCount;

- (unsigned long long)defaultTrackCount;

- (unsigned int)geniusConfigurationVersion;

- (_Bool)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;

- (_Bool)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;

- (_Bool)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;

- (_Bool)hasDatabase;

- (_Bool)hasGeniusDataAvailable;

- (_Bool)hasGeniusFeatureEnabled;

- (id)init;

@property(nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;

@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;



@end


