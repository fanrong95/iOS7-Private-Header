/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKOverlayPathView.h"


@class MKPolyline;



@interface MKPolylineView : MKOverlayPathView

{

}



- (void)createPath;

- (void)dealloc;

- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;

- (id)initWithPolyline:(id)arg1;

@property(readonly, nonatomic) MKPolyline *polyline;



@end


