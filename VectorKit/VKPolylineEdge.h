/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKPolylineEdge : NSObject

{

    CDStruct_aca18c62 _localBounds;

    shared_ptr_035a2da2 _mapEdge;

    struct vector<geo::Vec2Imp<float>, vk_allocator<geo::Vec2Imp<float>>> _points;

    struct vector<geo::PolylineCoordinate, vk_allocator<geo::PolylineCoordinate>> _routeOffsets;

    unsigned long long _mapEdgeOffset;

    _Bool _clippedFront;

    _Bool _clippedBack;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate)arg1 andB:(struct PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4;

@property(readonly, nonatomic) _Bool clippedBack; // @synthesize clippedBack=_clippedBack;

@property(readonly, nonatomic) _Bool clippedFront; // @synthesize clippedFront=_clippedFront;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) CDStruct_02d551b3 *feature;

- (id)initWithRoadPath:(const RoadPathElement_1a15aef6 *)arg1 sectionRect:(const CDStruct_d2b197d1 *)arg2;

@property(readonly, nonatomic) shared_ptr_035a2da2 mapEdge; // @synthesize mapEdge=_mapEdge;

@property(readonly, nonatomic) unsigned long long mapEdgeOffset; // @synthesize mapEdgeOffset=_mapEdgeOffset;

@property(readonly, nonatomic) unsigned long long pointCount;

@property(readonly, nonatomic) Vec2Imp_1782d7e3 *points;

@property(readonly, nonatomic) struct PolylineCoordinate routeOffsetA;

@property(readonly, nonatomic) struct PolylineCoordinate routeOffsetB;

@property(readonly, nonatomic) struct PolylineCoordinate *routeOffsets;



@end


