/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLPlacesMapKitSupport : NSObject

{

    Class _pinAnnotationViewClass;

    Class _annotationViewClass;

    Class _mapViewClass;

    Class _polylineClass;

    Class _polylineViewClass;

    CDStruct_02837cd9 _mapRectWorld;

    CDStruct_02837cd9 _mapRectNull;

    void *_mkMapRectMakeWithRadialDistance;

    void *_mkMapRectUnion;

    void *_mkMapRectIntersectsRect;

    void *_mkMapRectIntersectsMapRectWrappingMeridian;

    void *_mkCoordinateRegionForMapRect;

    void *_mkMapRectForCoordinateRegion;

    void *_mkMapPointForCoordinate;

    void *_mkCoordinateForMapPoint;

    void *_mkMapPointsPerMeterAtLatitude;

    void *_mkMetersPerMapPointAtLatitude;

}



+ (id)sharedInstance;

- (Class)annotationViewClass;

- (CDStruct_c3b9c2ee)coordinateForMapPoint:(CDStruct_c3b9c2ee)arg1;

- (CDStruct_90e2a262)coordinateRegionForMapRect:(CDStruct_90e2a262)arg1;

- (id)init;

- (CDStruct_c3b9c2ee)mapPointForCoordinate:(CDStruct_c3b9c2ee)arg1;

- (double)mapPointsPerMeterAtLatitude:(double)arg1;

- (CDStruct_90e2a262)mapRectAtCoordinate:(CDStruct_c3b9c2ee)arg1 radialDistance:(double)arg2;

- (CDStruct_90e2a262)mapRectForCoordinateRegion:(CDStruct_90e2a262)arg1;

- (_Bool)mapRectIntersectsRect:(CDStruct_90e2a262)arg1 rect:(CDStruct_90e2a262)arg2;

- (_Bool)mapRectIntersectsWrappingMeridian:(CDStruct_90e2a262)arg1 rect:(CDStruct_90e2a262)arg2;

- (CDStruct_90e2a262)mapRectNull;

- (CDStruct_90e2a262)mapRectUnion:(CDStruct_90e2a262)arg1 rect:(CDStruct_90e2a262)arg2;

- (CDStruct_90e2a262)mapRectWorld;

- (Class)mapViewClass;

- (double)metersPerMapPointAtLatitude:(double)arg1;

- (Class)pinAnnotationViewClass;

- (Class)polylineClass;

- (Class)polylineViewClass;



@end


