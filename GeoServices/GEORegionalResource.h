/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface GEORegionalResource : PBCodable <NSCopying>

{

    CDStruct_d66e66b9 *_tileRanges;

    unsigned long long _tileRangesCount;

    unsigned long long _tileRangesSpace;

    CDStruct_9f2792e4 _validSubManifestVersions;

    NSMutableArray *_attributions;

    NSMutableArray *_iconChecksums;

    NSMutableArray *_icons;

    unsigned int _x;

    unsigned int _y;

    unsigned int _z;

    struct {

        unsigned int x:1;

        unsigned int y:1;

        unsigned int z:1;

    } _has;

}



- (void)addAttribution:(id)arg1;

- (void)addIcon:(id)arg1;

- (void)addIconChecksum:(id)arg1;

- (void)addTileRange:(CDStruct_d66e66b9)arg1;

- (void)addValidSubManifestVersion:(unsigned int)arg1;

- (id)attributionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;

- (unsigned long long)attributionsCount;

- (void)clearAttributions;

- (void)clearIconChecksums;

- (void)clearIcons;

- (void)clearTileRanges;

- (void)clearValidSubManifestVersions;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasX;

@property(nonatomic) _Bool hasY;

@property(nonatomic) _Bool hasZ;

- (unsigned long long)hash;

- (id)iconAtIndex:(unsigned long long)arg1;

- (id)iconChecksumAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;

- (unsigned long long)iconChecksumsCount;

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;

- (unsigned long long)iconsCount;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (void)setTileRanges:(CDStruct_d66e66b9 *)arg1 count:(unsigned long long)arg2;

- (void)setValidSubManifestVersions:(unsigned int *)arg1 count:(unsigned long long)arg2;

@property(nonatomic) unsigned int x; // @synthesize x=_x;

@property(nonatomic) unsigned int y; // @synthesize y=_y;

@property(nonatomic) unsigned int z; // @synthesize z=_z;

- (CDStruct_d66e66b9)tileRangeAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) CDStruct_d66e66b9 *tileRanges;

@property(readonly, nonatomic) unsigned long long tileRangesCount;

- (unsigned int)validSubManifestVersionAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned int *validSubManifestVersions;

@property(readonly, nonatomic) unsigned long long validSubManifestVersionsCount;

- (void)writeTo:(id)arg1;



@end


