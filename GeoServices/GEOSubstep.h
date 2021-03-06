/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEONameInfo, NSMutableArray;



@interface GEOSubstep : PBCodable <NSCopying>

{

    int _maneuverType;

    GEONameInfo *_name;

    NSMutableArray *_signposts;

    int _zilchIndex;

    struct {

        unsigned int maneuverType:1;

        unsigned int zilchIndex:1;

    } _has;

}



- (void)addSignpost:(id)arg1;

- (void)clearSignposts;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasManeuverType;

@property(readonly, nonatomic) _Bool hasName;

@property(nonatomic) _Bool hasZilchIndex;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;

@property(retain, nonatomic) GEONameInfo *name; // @synthesize name=_name;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;

@property(nonatomic) int zilchIndex; // @synthesize zilchIndex=_zilchIndex;

- (id)signpostAtIndex:(unsigned long long)arg1;

- (unsigned long long)signpostsCount;

- (void)writeTo:(id)arg1;



@end


