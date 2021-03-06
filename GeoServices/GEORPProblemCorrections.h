/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPMapLocation, NSMutableArray, NSString;



@interface GEORPProblemCorrections : PBCodable <NSCopying>

{

    NSString *_comments;

    GEORPCorrectedCoordinate *_correctedCoordinate;

    NSMutableArray *_correctedFields;

    GEORPCorrectedLabel *_correctedLabel;

    GEORPMapLocation *_correctedMapLocation;

    GEORPCorrectedSearch *_correctedSearch;

}



- (void)addCorrectedFields:(id)arg1;

- (void)clearCorrectedFields;

@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;

@property(retain, nonatomic) NSMutableArray *correctedFields; // @synthesize correctedFields=_correctedFields;

- (id)correctedFieldsAtIndex:(unsigned long long)arg1;

- (unsigned long long)correctedFieldsCount;

@property(retain, nonatomic) GEORPCorrectedLabel *correctedLabel; // @synthesize correctedLabel=_correctedLabel;

@property(retain, nonatomic) GEORPMapLocation *correctedMapLocation; // @synthesize correctedMapLocation=_correctedMapLocation;

@property(retain, nonatomic) GEORPCorrectedSearch *correctedSearch; // @synthesize correctedSearch=_correctedSearch;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasComments;

@property(readonly, nonatomic) _Bool hasCorrectedCoordinate;

@property(readonly, nonatomic) _Bool hasCorrectedLabel;

@property(readonly, nonatomic) _Bool hasCorrectedMapLocation;

@property(readonly, nonatomic) _Bool hasCorrectedSearch;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end


