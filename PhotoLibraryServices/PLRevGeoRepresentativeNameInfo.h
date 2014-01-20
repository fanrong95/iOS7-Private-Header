/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableOrderedSet, NSString;



@interface PLRevGeoRepresentativeNameInfo : NSObject

{

    _Bool _allEntriesAtHome;

    _Bool _allEntriesMatchHomeForOrderType;

    _Bool _addCountyIfNeeded;

    NSString *_name;

    unsigned long long _type;

    unsigned long long _matchingCount;

    NSMutableOrderedSet *_geoPlaces;

    NSMutableOrderedSet *_remainingGeoPlaces;

    NSString *_localizedName;

}



- (void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned long long)arg3 countryCode:(id)arg4;

- (_Bool)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned long long)arg2;

- (_Bool)_currentLanguageSupportsModifiersForOrderType:(unsigned long long)arg1;

- (id)_resourceKeysForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3;

- (id)_typeKeyForOrderType:(unsigned long long)arg1 countryCode:(id)arg2;

@property(nonatomic) _Bool addCountyIfNeeded; // @synthesize addCountyIfNeeded=_addCountyIfNeeded;

- (void)addGeoPlace:(id)arg1;

- (void)addGeoPlaces:(id)arg1;

@property(nonatomic) _Bool allEntriesAtHome; // @synthesize allEntriesAtHome=_allEntriesAtHome;

@property(nonatomic) _Bool allEntriesMatchHomeForOrderType; // @synthesize allEntriesMatchHomeForOrderType=_allEntriesMatchHomeForOrderType;

- (void)clearGeoPlaces;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSMutableOrderedSet *geoPlaces; // @synthesize geoPlaces=_geoPlaces;

- (id)init;

- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;

@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;

@property(nonatomic) unsigned long long matchingCount; // @synthesize matchingCount=_matchingCount;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

- (void)prepareRemainingGeoPlaces;

@property(readonly, nonatomic) NSMutableOrderedSet *remainingGeoPlaces; // @synthesize remainingGeoPlaces=_remainingGeoPlaces;

- (void)removeGeoPlacesFromRemaining:(id)arg1;

@property(nonatomic) unsigned long long type; // @synthesize type=_type;

- (void)updateWithAddedNameInfo:(id)arg1;



@end


