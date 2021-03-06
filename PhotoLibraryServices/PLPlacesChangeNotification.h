/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLAssetContainerListChangeNotification.h"


@class NSArray, NSOrderedSet, PLChangeNotification, PLPlaces;



@interface PLPlacesChangeNotification : PLAssetContainerListChangeNotification

{

    PLPlaces *_places;

    NSOrderedSet *_originalPlacesSet;

    NSOrderedSet *_newPlacesSet;

    NSArray *_changedPlacesList;

    PLChangeNotification *_changeNotification;

}



+ (id)notificationWithPlaces:(id)arg1 originalPlacesSet:(id)arg2 newPlacesSet:(id)arg3 changedPlacesList:(id)arg4 backingNotification:(id)arg5;

- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;

- (struct NSObject *)albumList;

- (void)dealloc;

- (id)init;

- (id)initWithPlaces:(id)arg1 originalPlacesSet:(id)arg2 newPlacesSet:(id)arg3 changedPlacesList:(id)arg4 backingNotification:(id)arg5;



@end


