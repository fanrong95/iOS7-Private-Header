/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VKOverlay.h"



@class GEOMapRegion;



__attribute__((visibility("hidden")))

@interface VKMultiPointOverlay : NSObject <VKOverlay>

{

    Vec2Imp_1782d7e3 *_points;

    unsigned long long _pointCount;

    CDStruct_aca18c62 _bounds;

    GEOMapRegion *_boundingMapRegion;

}



- (id).cxx_construct;

- (void)_setCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;

@property(readonly, nonatomic) CDStruct_d2b197d1 bounds; // @synthesize bounds=_bounds;

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

- (void)dealloc;

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;

@property(readonly, nonatomic) Vec2Imp_1782d7e3 *points; // @synthesize points=_points;



@end


