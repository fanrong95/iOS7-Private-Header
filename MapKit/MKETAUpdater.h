/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEOClientETATrafficUpdateRequest, GEOLocation, GEORoute, GEORouteAttributes, GEOWaypoint, NSData, NSTimer, VKAttributedRouteMatch;



@interface MKETAUpdater : NSObject

{

    id <MKETAUpdaterDelegate> _delegate;

    id _willSendRequestHandler;

    id _receivedResponseHandler;

    GEOClientETATrafficUpdateRequest *_currentETARequest;

    GEOLocation *_userLocation;

    VKAttributedRouteMatch *_routeMatch;

    GEORoute *_route;

    GEOWaypoint *_destination;

    GEORouteAttributes *_routeAttributes;

    long long _etaState;

    _Bool _allowRequests;

    _Bool _shouldUseConditionalRequest;

    double _requestInterval;

    NSTimer *_etaIdleTimer;

    double _lastETARequestTime;

    NSData *_directionsResponseID;

}



- (void)_addCurrentRouteToETARequest:(id)arg1 currentStepIndex:(unsigned long long)arg2 percentOfCurrentStepRemaining:(double)arg3;

- (void)_clearCurrentETARequest;

- (void)_clearTimer;

- (_Bool)_handleETARequestFinished:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3;

- (_Bool)_sendETARequest:(id)arg1 isUpdate:(_Bool)arg2;

- (_Bool)_shouldStartConditionalETARequest;

- (void)_startConditionalConnectionETARequest;

- (void)_startStateWaitingForBestTimeStart:(id)arg1;

@property(nonatomic) _Bool allowRequests; // @synthesize allowRequests=_allowRequests;

@property(readonly, nonatomic) GEOClientETATrafficUpdateRequest *currentRequest; // @synthesize currentRequest=_currentETARequest;

- (void)dealloc;

@property(nonatomic) id <MKETAUpdaterDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) GEOWaypoint *destination; // @synthesize destination=_destination;

@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;

- (id)init;

- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;

@property(copy, nonatomic) id receivedResponseHandler; // @synthesize receivedResponseHandler=_receivedResponseHandler;

@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;

- (void)reset;

@property(retain, nonatomic) GEORoute *route; // @synthesize route=_route;

@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;

@property(retain, nonatomic) VKAttributedRouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;

- (void)setEtaState:(long long)arg1;

@property(nonatomic) _Bool shouldUseConditionalRequest; // @synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest;

@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;

@property(copy, nonatomic) id willSendRequestHandler; // @synthesize willSendRequestHandler=_willSendRequestHandler;

- (void)startUpdateRequests;

- (void)startUpdateRequestsWithRequestHandler:(id)arg1 responseHandler:(void)arg2;

- (void)stopUpdateRequests;



@end


