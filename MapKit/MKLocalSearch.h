/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEOSearchRequest, MKLocalSearchRequest;



@interface MKLocalSearch : NSObject

{

    MKLocalSearchRequest *_request;

    GEOSearchRequest *_geoRequest;

}



- (void)_handleResponse:(id)arg1 withCompletionHandler:(id)arg2;

- (void)cancel;

- (void)dealloc;

- (id)initWithRequest:(id)arg1;

@property(readonly, nonatomic, getter=isSearching) _Bool searching;

- (void)startWithCompletionHandler:(id)arg1;



@end


