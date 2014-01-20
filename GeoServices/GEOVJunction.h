/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface GEOVJunction : PBCodable

{

    NSMutableArray *_connectingRoads;

    NSMutableArray *_laneConnections;

}



- (void)addConnectingRoad:(id)arg1;

- (void)addLaneConnections:(id)arg1;

- (void)clearConnectingRoads;

- (void)clearLaneConnections;

- (id)connectingRoadAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *connectingRoads; // @synthesize connectingRoads=_connectingRoads;

- (unsigned long long)connectingRoadsCount;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSMutableArray *laneConnections; // @synthesize laneConnections=_laneConnections;

- (id)laneConnectionsAtIndex:(unsigned long long)arg1;

- (unsigned long long)laneConnectionsCount;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end


