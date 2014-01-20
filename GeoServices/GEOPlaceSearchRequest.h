/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@class GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, GEOSuggestionsOptions, NSData, NSMutableArray, NSString;



@interface GEOPlaceSearchRequest : PBRequest <NSCopying>

{

    CDStruct_612aec5b _sessionGUID;

    CDStruct_95bda58d _additionalPlaceTypes;

    CDStruct_62a50c50 _businessIDs;

    CDStruct_5df41632 _placeIDs;

    CDStruct_0756942c _searchContextSubstring;

    CDStruct_0756942c *_searchSubstrings;

    unsigned long long _searchSubstringsCount;

    unsigned long long _searchSubstringsSpace;

    double _distanceTraveled;

    long long _geoId;

    unsigned long long _intersectingGeoId;

    double _timeSinceMapEnteredForeground;

    double _timeSinceMapViewportChanged;

    double _timestamp;

    GEOAddress *_address;

    GEOBusinessOptions *_businessOptions;

    int _businessSortOrder;

    GEOClientCapabilities *_clientCapabilities;

    NSString *_deviceCountryCode;

    GEOLatLng *_deviceLocation;

    NSString *_deviceTimeZone;

    NSMutableArray *_filterByBusinessCategorys;

    NSMutableArray *_filterByBusinessTelephones;

    GEOIndexQueryNode *_indexFilter;

    NSString *_inputLanguage;

    int _knownAccuracy;

    GEOLatLng *_knownLocation;

    int _localSearchProviderID;

    GEOLocation *_location;

    GEOMapRegion *_mapRegion;

    int _maxBusinessReviews;

    int _maxResults;

    NSString *_phoneticLocaleIdentifier;

    int _placeTypeLimit;

    GEOAddress *_preserveFields;

    int _resultOffset;

    NSString *_search;

    NSString *_searchContext;

    int _searchSource;

    int _sequenceNumber;

    NSMutableArray *_serviceTags;

    int _sessionID;

    GEOSuggestionsOptions *_suggestionsOptions;

    NSString *_suggestionsPrefix;

    int _transportTypeForTravelTimes;

    NSData *_zilchPoints;

    _Bool _allowABTestResponse;

    _Bool _excludeAddressInResults;

    _Bool _includeBusinessCategories;

    _Bool _includeBusinessRating;

    _Bool _includeEntryPoints;

    _Bool _includeFeatureSets;

    _Bool _includeGeoId;

    _Bool _includeMatchedToken;

    _Bool _includePhonetics;

    _Bool _includeQuads;

    _Bool _includeRevgeoRequestTemplate;

    _Bool _includeSpokenNames;

    _Bool _includeStatusCodeInfo;

    _Bool _includeSuggestionsOnly;

    _Bool _includeTravelTime;

    _Bool _includeUnmatchedStrings;

    _Bool _isFromAPI;

    _Bool _isStrictMapRegion;

    _Bool _structuredSearch;

    _Bool _suppressResultsRequiringAttribution;

    struct {

        unsigned int sessionGUID:1;

        unsigned int searchContextSubstring:1;

        unsigned int distanceTraveled:1;

        unsigned int geoId:1;

        unsigned int intersectingGeoId:1;

        unsigned int timeSinceMapEnteredForeground:1;

        unsigned int timeSinceMapViewportChanged:1;

        unsigned int timestamp:1;

        unsigned int businessSortOrder:1;

        unsigned int knownAccuracy:1;

        unsigned int localSearchProviderID:1;

        unsigned int maxBusinessReviews:1;

        unsigned int maxResults:1;

        unsigned int placeTypeLimit:1;

        unsigned int resultOffset:1;

        unsigned int searchSource:1;

        unsigned int sequenceNumber:1;

        unsigned int sessionID:1;

        unsigned int transportTypeForTravelTimes:1;

        unsigned int allowABTestResponse:1;

        unsigned int excludeAddressInResults:1;

        unsigned int includeBusinessCategories:1;

        unsigned int includeBusinessRating:1;

        unsigned int includeEntryPoints:1;

        unsigned int includeFeatureSets:1;

        unsigned int includeGeoId:1;

        unsigned int includeMatchedToken:1;

        unsigned int includePhonetics:1;

        unsigned int includeQuads:1;

        unsigned int includeRevgeoRequestTemplate:1;

        unsigned int includeSpokenNames:1;

        unsigned int includeStatusCodeInfo:1;

        unsigned int includeSuggestionsOnly:1;

        unsigned int includeTravelTime:1;

        unsigned int includeUnmatchedStrings:1;

        unsigned int isFromAPI:1;

        unsigned int isStrictMapRegion:1;

        unsigned int structuredSearch:1;

        unsigned int suppressResultsRequiringAttribution:1;

    } _has;

}



- (void)addAdditionalPlaceType:(int)arg1;

- (void)addBusinessID:(unsigned long long)arg1;

- (void)addFilterByBusinessCategory:(id)arg1;

- (void)addFilterByBusinessTelephone:(id)arg1;

- (void)addPlaceID:(long long)arg1;

- (void)addSearchSubstring:(CDStruct_0756942c)arg1;

- (void)addServiceTag:(id)arg1;

- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) int *additionalPlaceTypes;

@property(readonly, nonatomic) unsigned long long additionalPlaceTypesCount;

@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;

@property(nonatomic) _Bool allowABTestResponse; // @synthesize allowABTestResponse=_allowABTestResponse;

- (unsigned long long)businessIDAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long *businessIDs;

@property(readonly, nonatomic) unsigned long long businessIDsCount;

@property(retain, nonatomic) GEOBusinessOptions *businessOptions; // @synthesize businessOptions=_businessOptions;

@property(nonatomic) int businessSortOrder; // @synthesize businessSortOrder=_businessSortOrder;

- (void)clearAdditionalPlaceTypes;

- (void)clearBusinessIDs;

- (void)clearFilterByBusinessCategorys;

- (void)clearFilterByBusinessTelephones;

- (void)clearPlaceIDs;

- (void)clearSearchSubstrings;

- (void)clearServiceTags;

@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;

@property(retain, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;

@property(retain, nonatomic) NSString *deviceTimeZone; // @synthesize deviceTimeZone=_deviceTimeZone;

- (id)dictionaryRepresentation;

@property(nonatomic) double distanceTraveled; // @synthesize distanceTraveled=_distanceTraveled;

@property(nonatomic) _Bool excludeAddressInResults; // @synthesize excludeAddressInResults=_excludeAddressInResults;

- (id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys; // @synthesize filterByBusinessCategorys=_filterByBusinessCategorys;

- (unsigned long long)filterByBusinessCategorysCount;

- (id)filterByBusinessTelephoneAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *filterByBusinessTelephones; // @synthesize filterByBusinessTelephones=_filterByBusinessTelephones;

- (unsigned long long)filterByBusinessTelephonesCount;

@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;

@property(readonly, nonatomic) _Bool hasAddress;

@property(nonatomic) _Bool hasAllowABTestResponse;

@property(readonly, nonatomic) _Bool hasBusinessOptions;

@property(nonatomic) _Bool hasBusinessSortOrder;

@property(readonly, nonatomic) _Bool hasClientCapabilities;

@property(readonly, nonatomic) _Bool hasDeviceCountryCode;

@property(readonly, nonatomic) _Bool hasDeviceLocation;

@property(readonly, nonatomic) _Bool hasDeviceTimeZone;

@property(nonatomic) _Bool hasDistanceTraveled;

@property(nonatomic) _Bool hasExcludeAddressInResults;

@property(nonatomic) _Bool hasGeoId;

@property(nonatomic) _Bool hasIncludeBusinessCategories;

@property(nonatomic) _Bool hasIncludeBusinessRating;

@property(nonatomic) _Bool hasIncludeEntryPoints;

@property(nonatomic) _Bool hasIncludeFeatureSets;

@property(nonatomic) _Bool hasIncludeGeoId;

@property(nonatomic) _Bool hasIncludeMatchedToken;

@property(nonatomic) _Bool hasIncludePhonetics;

@property(nonatomic) _Bool hasIncludeQuads;

@property(nonatomic) _Bool hasIncludeRevgeoRequestTemplate;

@property(nonatomic) _Bool hasIncludeSpokenNames;

@property(nonatomic) _Bool hasIncludeStatusCodeInfo;

@property(nonatomic) _Bool hasIncludeSuggestionsOnly;

@property(nonatomic) _Bool hasIncludeTravelTime;

@property(nonatomic) _Bool hasIncludeUnmatchedStrings;

@property(readonly, nonatomic) _Bool hasIndexFilter;

@property(readonly, nonatomic) _Bool hasInputLanguage;

@property(nonatomic) _Bool hasIntersectingGeoId;

@property(nonatomic) _Bool hasIsFromAPI;

@property(nonatomic) _Bool hasIsStrictMapRegion;

@property(nonatomic) _Bool hasKnownAccuracy;

@property(readonly, nonatomic) _Bool hasKnownLocation;

@property(nonatomic) _Bool hasLocalSearchProviderID;

@property(readonly, nonatomic) _Bool hasLocation;

@property(readonly, nonatomic) _Bool hasMapRegion;

@property(nonatomic) _Bool hasMaxBusinessReviews;

@property(nonatomic) _Bool hasMaxResults;

@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;

@property(nonatomic) _Bool hasPlaceTypeLimit;

@property(readonly, nonatomic) _Bool hasPreserveFields;

@property(nonatomic) _Bool hasResultOffset;

@property(readonly, nonatomic) _Bool hasSearch;

@property(readonly, nonatomic) _Bool hasSearchContext;

@property(nonatomic) _Bool hasSearchContextSubstring;

@property(nonatomic) _Bool hasSearchSource;

@property(nonatomic) _Bool hasSequenceNumber;

@property(nonatomic) _Bool hasSessionGUID;

@property(nonatomic) _Bool hasSessionID;

@property(nonatomic) _Bool hasStructuredSearch;

@property(readonly, nonatomic) _Bool hasSuggestionsOptions;

@property(readonly, nonatomic) _Bool hasSuggestionsPrefix;

@property(nonatomic) _Bool hasSuppressResultsRequiringAttribution;

@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;

@property(nonatomic) _Bool hasTimeSinceMapViewportChanged;

@property(nonatomic) _Bool hasTimestamp;

@property(nonatomic) _Bool hasTransportTypeForTravelTimes;

@property(readonly, nonatomic) _Bool hasZilchPoints;

- (unsigned long long)hash;

@property(nonatomic) _Bool includeBusinessCategories; // @synthesize includeBusinessCategories=_includeBusinessCategories;

@property(nonatomic) _Bool includeBusinessRating; // @synthesize includeBusinessRating=_includeBusinessRating;

@property(nonatomic) _Bool includeEntryPoints; // @synthesize includeEntryPoints=_includeEntryPoints;

@property(nonatomic) _Bool includeFeatureSets; // @synthesize includeFeatureSets=_includeFeatureSets;

@property(nonatomic) _Bool includeGeoId; // @synthesize includeGeoId=_includeGeoId;

@property(nonatomic) _Bool includeMatchedToken; // @synthesize includeMatchedToken=_includeMatchedToken;

@property(nonatomic) _Bool includePhonetics; // @synthesize includePhonetics=_includePhonetics;

@property(nonatomic) _Bool includeQuads; // @synthesize includeQuads=_includeQuads;

@property(nonatomic) _Bool includeRevgeoRequestTemplate; // @synthesize includeRevgeoRequestTemplate=_includeRevgeoRequestTemplate;

@property(nonatomic) _Bool includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;

@property(nonatomic) _Bool includeStatusCodeInfo; // @synthesize includeStatusCodeInfo=_includeStatusCodeInfo;

@property(nonatomic) _Bool includeSuggestionsOnly; // @synthesize includeSuggestionsOnly=_includeSuggestionsOnly;

@property(nonatomic) _Bool includeTravelTime; // @synthesize includeTravelTime=_includeTravelTime;

@property(nonatomic) _Bool includeUnmatchedStrings; // @synthesize includeUnmatchedStrings=_includeUnmatchedStrings;

@property(retain, nonatomic) GEOIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;

- (id)initWithPlace:(id)arg1;

@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;

@property(nonatomic) unsigned long long intersectingGeoId; // @synthesize intersectingGeoId=_intersectingGeoId;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool isFromAPI; // @synthesize isFromAPI=_isFromAPI;

@property(nonatomic) _Bool isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;

@property(nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;

@property(retain, nonatomic) GEOLatLng *knownLocation; // @synthesize knownLocation=_knownLocation;

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;

@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;

@property(nonatomic) int maxBusinessReviews; // @synthesize maxBusinessReviews=_maxBusinessReviews;

@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;

@property(retain, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;

- (long long)placeIDAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) long long *placeIDs;

@property(readonly, nonatomic) unsigned long long placeIDsCount;

@property(nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;

@property(retain, nonatomic) GEOAddress *preserveFields; // @synthesize preserveFields=_preserveFields;

- (_Bool)readFrom:(id)arg1;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

@property(nonatomic) int resultOffset; // @synthesize resultOffset=_resultOffset;

@property(retain, nonatomic) NSString *search; // @synthesize search=_search;

@property(retain, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;

@property(nonatomic) CDStruct_0756942c searchContextSubstring; // @synthesize searchContextSubstring=_searchContextSubstring;

@property(nonatomic) int searchSource; // @synthesize searchSource=_searchSource;

- (CDStruct_0756942c)searchSubstringAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) CDStruct_0756942c *searchSubstrings;

@property(readonly, nonatomic) unsigned long long searchSubstringsCount;

@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

- (id)serviceTagAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;

- (unsigned long long)serviceTagsCount;

@property(nonatomic) CDStruct_612aec5b sessionGUID; // @synthesize sessionGUID=_sessionGUID;

@property(nonatomic) int sessionID; // @synthesize sessionID=_sessionID;

- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;

- (void)setBusinessIDs:(unsigned long long *)arg1 count:(unsigned long long)arg2;

- (void)setPlaceIDs:(long long *)arg1 count:(unsigned long long)arg2;

- (void)setSearchSubstrings:(CDStruct_0756942c *)arg1 count:(unsigned long long)arg2;

@property(nonatomic) _Bool structuredSearch; // @synthesize structuredSearch=_structuredSearch;

@property(retain, nonatomic) GEOSuggestionsOptions *suggestionsOptions; // @synthesize suggestionsOptions=_suggestionsOptions;

@property(retain, nonatomic) NSString *suggestionsPrefix; // @synthesize suggestionsPrefix=_suggestionsPrefix;

@property(nonatomic) _Bool suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;

@property(nonatomic) double timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;

@property(nonatomic) double timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@property(nonatomic) int transportTypeForTravelTimes; // @synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes;

@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

- (void)writeTo:(id)arg1;



@end


