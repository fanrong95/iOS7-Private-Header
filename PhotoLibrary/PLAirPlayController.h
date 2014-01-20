/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MPAudioDeviceControllerDelegate.h"



@class MPAudioDeviceController, NSMutableArray;



@interface PLAirPlayController : NSObject <MPAudioDeviceControllerDelegate>

{

    id <PLAirPlayControllerDelegate> _delegate;

    MPAudioDeviceController *_audioDeviceController;

    NSMutableArray *_pickableRoutes;

    _Bool _routeDiscoverySuspended;

    _Bool _routeDiscoveryEnabled;

}



+ (id)routeIDForAirplayRoute:(id)arg1;

+ (id)routeNameForAirplayRoute:(id)arg1;

- (void)_applicationDidEnterBackground:(id)arg1;

- (void)_applicationWillEnterForeground:(id)arg1;

- (_Bool)airplayRouteIsAvailable;

- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

- (void)audioDeviceControllerMediaServerDied:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <PLAirPlayControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (unsigned long long)indexOfPickedRoute;

- (id)init;

- (_Bool)isDeviceCurrentlyMirroring;

- (id)pickableAirplayRoutes;

- (id)pickedAirplayRoute;

- (void)setRouteDiscoveryEnabled:(_Bool)arg1;

- (id)systemPickedRouteSupportingAirPlayOrMirroring;

- (void)userPickedRoute:(id)arg1;



@end


