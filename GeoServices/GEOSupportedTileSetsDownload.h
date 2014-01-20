/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEODownloadMetadata, GEOSupportedTileSets;



@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying>

{

    GEODownloadMetadata *_metadata;

    GEOSupportedTileSets *_tileSets;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) GEODownloadMetadata *metadata; // @synthesize metadata=_metadata;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) GEOSupportedTileSets *tileSets; // @synthesize tileSets=_tileSets;

- (void)writeTo:(id)arg1;



@end


