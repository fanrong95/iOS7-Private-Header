/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray;



@interface GEOVoltaireRasterTileTrafficData : NSObject

{

    CDStruct_912cb5d2 *_vertices;

    NSMutableArray *_trafficSegments;

    NSArray *_trafficIncidents;

    double _expirationTime;

}



+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;

+ (double)expirationTimeInterval;

- (void)dealloc;

@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;

- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;

@property(retain, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;

@property(nonatomic) CDStruct_912cb5d2 *vertices; // @synthesize vertices=_vertices;

@property(readonly, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;



@end


