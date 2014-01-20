/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEODirectionsRouteRequest, GEOQuickETARequest, GEOQuickETARequester, MKDirectionsRequest;



@interface MKDirections : NSObject

{

    MKDirectionsRequest *_request;

    GEODirectionsRouteRequest *_geoRequest;

    GEOQuickETARequest *_etaRequest;

    GEOQuickETARequester *_etaRequester;

    id <MKLocationManagerOperation> _locationOperation;

}



- (void)_calculateETAWithCompletionHandler:(id)arg1;

- (void)_cleanupLocationOperation;

- (void)_establishCurrentLocationAndThen:(id)arg1;

- (void)calculateDirectionsWithCompletionHandler:(id)arg1;

- (void)calculateETAWithCompletionHandler:(id)arg1;

- (void)cancel;

- (void)dealloc;

- (id)initWithRequest:(id)arg1;

@property(readonly, nonatomic, getter=isCalculating) _Bool calculating;



@end


