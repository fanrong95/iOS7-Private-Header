/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSData;



@interface GEOMapMatchResponse : PBCodable <NSCopying>

{

    int _matchingStatus;

    int _status;

    NSData *_zilchPoints;

    struct {

        unsigned int matchingStatus:1;

        unsigned int status:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasMatchingStatus;

@property(nonatomic) _Bool hasStatus;

@property(readonly, nonatomic) _Bool hasZilchPoints;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int matchingStatus; // @synthesize matchingStatus=_matchingStatus;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int status; // @synthesize status=_status;

@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

- (void)writeTo:(id)arg1;



@end


