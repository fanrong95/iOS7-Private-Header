/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface NSBinaryObjectStoreFile : NSObject

{

    int _databaseVersion;

    NSDictionary *_fullMetadata;

    unsigned long long _primaryKeyGeneration;

    NSMutableDictionary *_mapData;

    NSDictionary *_storeOptions;

}



- (_Bool)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id *)arg4;

- (void)clearCurrentValues;

- (int)databaseVersion;

- (void)dealloc;

- (id)fullMetadata;

- (id)mapData;

- (unsigned long long)primaryKeyGeneration;

- (_Bool)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id *)arg3;

- (_Bool)readFromFile:(id)arg1 error:(id *)arg2;

- (_Bool)readMetadataFromFile:(id)arg1 error:(id *)arg2;

- (void)setDatabaseVersion:(int)arg1;

- (void)setFullMetadata:(id)arg1;

- (void)setMapData:(id)arg1;

- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;

- (_Bool)writeMetadataToFile:(id)arg1 error:(id *)arg2;

- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;



@end


