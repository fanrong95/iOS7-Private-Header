/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKSearchCompletion.h"


@class GEOSearchRequest, GEOSearchResponse, GEOSuggestionEntry;



__attribute__((visibility("hidden")))

@interface MKSuggestionEntrySearchCompletion : MKSearchCompletion

{

    GEOSuggestionEntry *_entry;

    GEOSearchRequest *_request;

    GEOSearchResponse *_response;

}



- (void)applyToLocalSearchRequest:(id)arg1;

- (void)applyToPlaceSearchRequest:(id)arg1;

- (id)calloutTitle;

- (void)dealloc;

- (id)description;

- (id)displayLines;

- (_Bool)getCoordinate:(CDStruct_c3b9c2ee *)arg1;

- (unsigned long long)hash;

- (id)highlightsForLine:(unsigned long long)arg1;

- (id)initWithSuggestionEntry:(id)arg1 response:(id)arg2 request:(id)arg3;

- (_Bool)isEqual:(id)arg1;

- (id)queryLine;

- (void)sendFeedback;



@end


