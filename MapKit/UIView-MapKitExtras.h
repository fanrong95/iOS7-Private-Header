/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class CALayer, MKMapView;



@interface UIView (MapKitExtras)

@property(readonly, nonatomic) MKMapView *_mapKit_mapView;

- (unsigned long long)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;

@property(readonly, nonatomic) CALayer *_mapkit_currentLayer;

@property(readonly, nonatomic) struct CGRect _mapkit_doubleFrame;

@end

