/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GEORoute.h"



@interface GEORoute (MKGeoServicesExtras)

- (struct CGImage *)_mapKitImage;

- (double)distanceBetweenLocation:(CDStruct_c3b9c2ee)arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;

- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;

- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;

@end

