/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebGeolocationCoreLocationUpdateListener.h"



@class WebGeolocationProviderIOS;



__attribute__((visibility("hidden")))

@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener>

{

    WebGeolocationProviderIOS *_provider;

}



- (void)errorOccurred:(id)arg1;

- (void)geolocationDelegateStarted;

- (void)geolocationDelegateUnableToStart;

- (id)initWithProvider:(id)arg1;

- (void)positionChanged:(struct GeolocationPosition *)arg1;

- (void)resetGeolocation;



@end

