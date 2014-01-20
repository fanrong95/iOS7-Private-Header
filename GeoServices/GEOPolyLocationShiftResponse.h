/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>

{

    struct {

        double *list;

        unsigned long long count;

        unsigned long long size;

    } _parameters;

    double _radius;

    int _status;

}



- (void)addParameters:(double)arg1;

- (void)clearParameters;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) double *parameters;

- (double)parametersAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long parametersCount;

@property(nonatomic) double radius; // @synthesize radius=_radius;

- (_Bool)readFrom:(id)arg1;

- (void)setParameters:(double *)arg1 count:(unsigned long long)arg2;

@property(nonatomic) int status; // @synthesize status=_status;

- (void)writeTo:(id)arg1;



@end


