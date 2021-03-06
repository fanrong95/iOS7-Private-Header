/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@class GEOWaypoint, NSMutableArray;



@interface GEOETARequest : PBRequest <NSCopying>

{

    CDStruct_4db06779 _timepoint;

    NSMutableArray *_destinations;

    GEOWaypoint *_origin;

    NSMutableArray *_serviceTags;

    int _transportType;

    _Bool _allowPartialResults;

    _Bool _includeHistoricTravelTime;

    struct {

        unsigned int timepoint:1;

        unsigned int transportType:1;

        unsigned int allowPartialResults:1;

        unsigned int includeHistoricTravelTime:1;

    } _has;

}



- (void)addDestination:(id)arg1;

- (void)addServiceTag:(id)arg1;

@property(nonatomic) _Bool allowPartialResults; // @synthesize allowPartialResults=_allowPartialResults;

- (void)clearDestinations;

- (void)clearServiceTags;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)destinationAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;

- (unsigned long long)destinationsCount;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasAllowPartialResults;

@property(nonatomic) _Bool hasIncludeHistoricTravelTime;

@property(readonly, nonatomic) _Bool hasOrigin;

@property(nonatomic) _Bool hasTimepoint;

@property(nonatomic) _Bool hasTransportType;

- (unsigned long long)hash;

@property(nonatomic) _Bool includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) GEOWaypoint *origin; // @synthesize origin=_origin;

- (_Bool)readFrom:(id)arg1;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

- (id)serviceTagAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;

- (unsigned long long)serviceTagsCount;

@property(nonatomic) CDStruct_4db06779 timepoint; // @synthesize timepoint=_timepoint;

@property(nonatomic) int transportType; // @synthesize transportType=_transportType;

- (void)writeTo:(id)arg1;



@end


