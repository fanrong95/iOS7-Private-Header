/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEOAddress, GEOBusiness, GEOLatLng, GEOMapRegion, GEORating, NSMutableArray, NSString;



@interface GEOPlace : PBCodable <NSCopying>

{

    double _area;

    long long _geoId;

    long long _uID;

    GEOAddress *_address;

    int _addressGeocodeAccuracy;

    NSMutableArray *_business;

    GEOLatLng *_center;

    NSMutableArray *_entryPoints;

    int _localSearchProviderID;

    GEOMapRegion *_mapRegion;

    NSString *_name;

    GEOAddress *_phoneticAddress;

    NSString *_phoneticName;

    NSString *_spokenAddress;

    NSString *_spokenName;

    int _type;

    int _version;

    _Bool _isDisputed;

    struct {

        unsigned int area:1;

        unsigned int geoId:1;

        unsigned int uID:1;

        unsigned int addressGeocodeAccuracy:1;

        unsigned int localSearchProviderID:1;

        unsigned int type:1;

        unsigned int version:1;

        unsigned int isDisputed:1;

    } _has;

}



- (void)addBusiness:(id)arg1;

- (void)addEntryPoint:(id)arg1;

@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;

- (id)addressDictionary;

@property(nonatomic) int addressGeocodeAccuracy; // @synthesize addressGeocodeAccuracy=_addressGeocodeAccuracy;

@property(nonatomic) double area; // @synthesize area=_area;

- (id)arrivalMapRegion;

- (id)arrivalMapRegionForTransportType:(int)arg1;

@property(retain, nonatomic) NSMutableArray *business; // @synthesize business=_business;

- (id)businessAtIndex:(unsigned long long)arg1;

- (unsigned long long)businessCount;

@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;

- (void)clearBusiness;

- (void)clearEntryPoints;

- (CDStruct_c3b9c2ee)coordinate;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (id)entryPointAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *entryPoints; // @synthesize entryPoints=_entryPoints;

- (unsigned long long)entryPointsCount;

@property(readonly, nonatomic) GEOBusiness *firstBusiness;

@property(readonly, nonatomic) GEORating *firstRating;

@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;

@property(readonly, nonatomic) _Bool hasAddress;

@property(nonatomic) _Bool hasAddressGeocodeAccuracy;

@property(nonatomic) _Bool hasArea;

@property(readonly, nonatomic) _Bool hasCenter;

@property(nonatomic) _Bool hasGeoId;

@property(nonatomic) _Bool hasIsDisputed;

@property(nonatomic) _Bool hasLocalSearchProviderID;

@property(readonly, nonatomic) _Bool hasMapRegion;

@property(readonly, nonatomic) _Bool hasName;

@property(readonly, nonatomic) _Bool hasPhoneticAddress;

@property(readonly, nonatomic) _Bool hasPhoneticName;

@property(readonly, nonatomic) _Bool hasSpokenAddress;

@property(readonly, nonatomic) _Bool hasSpokenName;

@property(nonatomic) _Bool hasType;

@property(nonatomic) _Bool hasUID;

@property(nonatomic) _Bool hasVersion;

- (unsigned long long)hash;

@property(nonatomic) _Bool isDisputed; // @synthesize isDisputed=_isDisputed;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@property(retain, nonatomic) GEOAddress *phoneticAddress; // @synthesize phoneticAddress=_phoneticAddress;

@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;

- (double)radialDistance;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSString *spokenAddress; // @synthesize spokenAddress=_spokenAddress;

@property(retain, nonatomic) NSString *spokenName; // @synthesize spokenName=_spokenName;

@property(nonatomic) int type; // @synthesize type=_type;

@property(nonatomic) long long uID; // @synthesize uID=_uID;

@property(nonatomic) int version; // @synthesize version=_version;

- (void)writeTo:(id)arg1;



@end


