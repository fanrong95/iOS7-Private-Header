/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray;



@interface GEORPProblemStatusResponse : PBCodable <NSCopying>

{

    NSMutableArray *_problemStatus;

    int _statusCode;

    CDStruct_bcb1eac0 _has;

}



- (void)addProblemStatus:(id)arg1;

- (void)clearProblemStatus;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasStatusCode;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSMutableArray *problemStatus; // @synthesize problemStatus=_problemStatus;

- (id)problemStatusAtIndex:(unsigned long long)arg1;

- (unsigned long long)problemStatusCount;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

- (void)writeTo:(id)arg1;



@end


