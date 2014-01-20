/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@class GEOClientCapabilities, GEOLocation, GEOMapRegion, GEORouteAttributes, NSData, NSMutableArray;



@interface GEODirectionsRequest : PBRequest <NSCopying>

{

    GEOClientCapabilities *_clientCapabilities;

    GEOMapRegion *_currentMapRegion;

    GEOLocation *_currentUserLocation;

    int _departureTime;

    unsigned int _mainTransportTypeMaxRouteCount;

    NSData *_originalDirectionsResponseID;

    NSData *_originalRouteID;

    NSData *_originalRouteZilchPoints;

    GEORouteAttributes *_routeAttributes;

    NSMutableArray *_serviceTags;

    unsigned int _timeSinceLastRerouteRequest;

    NSMutableArray *_waypoints;

    _Bool _getRouteForZilchPoints;

    struct {

        unsigned int departureTime:1;

        unsigned int mainTransportTypeMaxRouteCount:1;

        unsigned int timeSinceLastRerouteRequest:1;

        unsigned int getRouteForZilchPoints:1;

    } _has;

}



- (void)addServiceTag:(id)arg1;

- (void)addWaypoint:(id)arg1;

- (void)clearServiceTags;

- (void)clearWaypoints;

@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;

@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;

- (void)dealloc;

@property(nonatomic) int departureTime; // @synthesize departureTime=_departureTime;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool getRouteForZilchPoints; // @synthesize getRouteForZilchPoints=_getRouteForZilchPoints;

@property(readonly, nonatomic) _Bool hasClientCapabilities;

@property(readonly, nonatomic) _Bool hasCurrentMapRegion;

@property(readonly, nonatomic) _Bool hasCurrentUserLocation;

@property(nonatomic) _Bool hasDepartureTime;

@property(nonatomic) _Bool hasGetRouteForZilchPoints;

@property(nonatomic) _Bool hasMainTransportTypeMaxRouteCount;

@property(readonly, nonatomic) _Bool hasOriginalDirectionsResponseID;

@property(readonly, nonatomic) _Bool hasOriginalRouteID;

@property(readonly, nonatomic) _Bool hasOriginalRouteZilchPoints;

@property(readonly, nonatomic) _Bool hasRouteAttributes;

@property(nonatomic) _Bool hasTimeSinceLastRerouteRequest;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) unsigned int mainTransportTypeMaxRouteCount; // @synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount;

@property(retain, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;

@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;

@property(retain, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;

- (_Bool)readFrom:(id)arg1;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;

- (id)serviceTagAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;

- (unsigned long long)serviceTagsCount;

@property(nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;

@property(retain, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;

- (id)waypointAtIndex:(unsigned long long)arg1;

- (unsigned long long)waypointsCount;

- (void)writeTo:(id)arg1;



@end


