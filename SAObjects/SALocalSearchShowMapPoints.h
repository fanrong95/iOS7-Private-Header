/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainCommand.h"


@class NSNumber, NSString, SALocalSearchMapItem;



@interface SALocalSearchShowMapPoints : SADomainCommand

{

}



+ (id)showMapPoints;

+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *directionsType;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;

@property(retain, nonatomic) SALocalSearchMapItem *itemSource;

@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;

- (_Bool)requiresResponse;

@property(nonatomic) _Bool showDirections;

@property(nonatomic) _Bool showTraffic;



@end


