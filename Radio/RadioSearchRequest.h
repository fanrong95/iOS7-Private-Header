/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RadioRequest.h"


@class NSString, SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;



@interface RadioSearchRequest : RadioRequest

{

    SSURLConnectionRequest *_request;

    _Bool _excludeFeaturedStations;

    NSString *_searchTerm;

    long long _searchCategory;

    unsigned long long _numberOfSearchResults;

    unsigned long long _searchResultsOffset;

    SSMetricsConfiguration *_metricsConfiguration;

    SSMetricsPageEvent *_metricsPageEvent;

}



- (void).cxx_destruct;

- (void)cancel;

@property(nonatomic) _Bool excludeFeaturedStations; // @synthesize excludeFeaturedStations=_excludeFeaturedStations;

- (id)init;

- (id)initWithSearchTerm:(id)arg1;

@property(readonly, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;

@property(readonly, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;

@property(nonatomic) unsigned long long numberOfSearchResults; // @synthesize numberOfSearchResults=_numberOfSearchResults;

@property(nonatomic) long long searchCategory; // @synthesize searchCategory=_searchCategory;

@property(nonatomic) unsigned long long searchResultsOffset; // @synthesize searchResultsOffset=_searchResultsOffset;

@property(readonly, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;

- (void)startWithSearchCompletionHandler:(id)arg1;



@end


