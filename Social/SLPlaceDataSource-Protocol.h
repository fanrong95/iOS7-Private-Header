/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@class NSObject<SLPlaceDataSourceDelegate>;



@protocol SLPlaceDataSource

- (void)cancelPlaceFetch;

- (id)currentLocation;

@property __weak NSObject<SLPlaceDataSourceDelegate> *delegate;

- (void)fetchPlaces;

- (void)fetchPlacesWithSearchString:(id)arg1;

- (void)startUpdatingLocation;

- (void)stopUpdatingLocation;

@end


