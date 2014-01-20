/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@interface GEOVisibleTileSet : PBCodable <NSCopying>

{

    CDStruct_32a7f38a *_tileKeys;

    unsigned long long _tileKeysCount;

    unsigned long long _tileKeysSpace;

    unsigned int _identifier;

    int _style;

}



- (void)addTileKey:(CDStruct_32a7f38a)arg1;

- (void)clearTileKeys;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int style; // @synthesize style=_style;

- (void)setTileKeys:(CDStruct_32a7f38a *)arg1 count:(unsigned long long)arg2;

- (CDStruct_32a7f38a)tileKeyAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) CDStruct_32a7f38a *tileKeys;

@property(readonly, nonatomic) unsigned long long tileKeysCount;

- (void)writeTo:(id)arg1;



@end


