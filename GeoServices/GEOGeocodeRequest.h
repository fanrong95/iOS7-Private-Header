/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GEOPlaceSearchRequest.h"


@class NSString;



@interface GEOGeocodeRequest : GEOPlaceSearchRequest

{

    unsigned short _geocodeProvider;

    NSString *_logRequestToFile;

    NSString *_logResponseToFile;

}



- (void)dealloc;

@property(nonatomic) unsigned short geocodeProvider; // @synthesize geocodeProvider=_geocodeProvider;

- (id)initForwardGeocodeWithAddress:(id)arg1;

- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;

- (id)initForwardGeocodeWithAddressString:(id)arg1;

- (id)initReverseGeocodeWithCoordinate:(CDStruct_c3b9c2ee)arg1;

- (id)initReverseGeocodeWithCoordinate:(CDStruct_c3b9c2ee)arg1 includeBusinessOptions:(_Bool)arg2;

@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;

@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;



@end


