/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RadioRequest.h"


@class NSArray, RadioStation, SSURLConnectionRequest;



@interface RadioGetTracksRequest : RadioRequest

{

    unsigned long long _globalVersion;

    _Bool _includeCleanTracksOnly;

    unsigned long long _numberOfTracks;

    _Bool _replaceExistingTracks;

    SSURLConnectionRequest *_request;

    RadioStation *_station;

    id _storeIdentifiersBlock;

    NSArray *_tracksToRemove;

}



- (void).cxx_destruct;

- (void)cancel;

@property(nonatomic) _Bool includeCleanTracksOnly; // @synthesize includeCleanTracksOnly=_includeCleanTracksOnly;

- (id)init;

- (id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2;

@property(nonatomic) unsigned long long numberOfTracks; // @synthesize numberOfTracks=_numberOfTracks;

@property(nonatomic) _Bool replaceExistingTracks; // @synthesize replaceExistingTracks=_replaceExistingTracks;

@property(copy, nonatomic) id storeIdentifiersBlock; // @synthesize storeIdentifiersBlock=_storeIdentifiersBlock;

@property(copy, nonatomic) NSArray *tracksToRemove; // @synthesize tracksToRemove=_tracksToRemove;

- (void)startWithCompletionHandler:(id)arg1;

- (void)startWithGetTracksCompletionHandler:(id)arg1;



@end


