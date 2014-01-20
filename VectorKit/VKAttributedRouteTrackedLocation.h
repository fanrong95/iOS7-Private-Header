/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CLLocation, NSDate, VKAttributedRoute, VKAttributedRouteMatch;



@interface VKAttributedRouteTrackedLocation : NSObject

{

    VKAttributedRoute *_route;

    VKAttributedRouteMatch *_matchedLocation;

    CLLocation *_rawLocation;

    NSDate *_lastTimeInTunnel;

    struct PolylineCoordinate _lastGoodMatchCoordinate;

    struct PolylineCoordinate _newStepLastRouteCoord;

    CDStruct_2c43369c _newStepLastGeoCoord;

    unsigned long long _newStepProgressions;

    double _newStepDistanceTraveled;

    double _estimatedCourse;

}



- (id).cxx_construct;

- (void)dealloc;

- (id)description;

- (void)forceGoodRouteMatch;

- (id)initWithRoute:(id)arg1;

@property(readonly, nonatomic) struct PolylineCoordinate lastGoodMatchCoordinate; // @synthesize lastGoodMatchCoordinate=_lastGoodMatchCoordinate;

@property(retain, nonatomic) NSDate *lastTimeInTunnel; // @synthesize lastTimeInTunnel=_lastTimeInTunnel;

@property(readonly, nonatomic) VKAttributedRouteMatch *matchedLocation; // @synthesize matchedLocation=_matchedLocation;

@property(readonly, nonatomic) double newStepDistanceTraveled; // @synthesize newStepDistanceTraveled=_newStepDistanceTraveled;

@property(readonly, nonatomic) CDStruct_c3b9c2ee newStepLastGeoCoord; // @synthesize newStepLastGeoCoord=_newStepLastGeoCoord;

@property(readonly, nonatomic) struct PolylineCoordinate newStepLastRouteCoord; // @synthesize newStepLastRouteCoord=_newStepLastRouteCoord;

@property(readonly, nonatomic) unsigned long long newStepProgressions; // @synthesize newStepProgressions=_newStepProgressions;

@property(readonly, nonatomic) CLLocation *rawLocation; // @synthesize rawLocation=_rawLocation;

@property(readonly, nonatomic) VKAttributedRoute *route; // @synthesize route=_route;

- (void)setMatchedLocation:(id)arg1;

@property(readonly, nonatomic) double timeSinceTunnel;

- (void)updateWithRouteMatch:(id)arg1;

- (void)updateWithRouteMatch:(id)arg1 rawLocation:(id)arg2 newStepProgressions:(unsigned long long)arg3 newStepDistanceTraveled:(double)arg4 newStepLastRouteCoord:(struct PolylineCoordinate)arg5 newStepLastGeoCoord:(CDStruct_c3b9c2ee)arg6;

- (void)updatedWithProjectedRouteMatch:(id)arg1;



@end


