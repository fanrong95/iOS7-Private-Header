/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RadioRequest.h"


@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, SSURLConnectionRequest;



@interface RadioSyncRequest : RadioRequest

{

    NSObject<OS_dispatch_queue> *_artworkQueue;

    unsigned long long _globalVersion;

    NSMutableSet *_persistentIDsRequiringTracksBeforeCompletion;

    SSURLConnectionRequest *_request;

    _Bool _requireTracksBeforeCompletion;

    NSDictionary *_responseDictionary;

    _Bool _disableArtworkLoading;

    _Bool _includeCleanTracksOnly;

    _Bool _isAutomaticUpdate;

    NSString *_referer;

}



- (void).cxx_destruct;

- (id)_sortedChangesByType:(id)arg1;

- (id)_stationSortOrderForChanges:(id)arg1;

- (id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long *)arg3 loadArtworkSynchronously:(_Bool)arg4;

- (void)cancel;

- (id)changeList;

@property(nonatomic) _Bool disableArtworkLoading; // @synthesize disableArtworkLoading=_disableArtworkLoading;

@property(nonatomic) _Bool includeCleanTracksOnly; // @synthesize includeCleanTracksOnly=_includeCleanTracksOnly;

- (id)init;

- (id)initWithGlobalVersion:(unsigned long long)arg1;

@property(nonatomic) _Bool isAutomaticUpdate; // @synthesize isAutomaticUpdate=_isAutomaticUpdate;

- (id)matchDictionary;

@property(copy, nonatomic) NSString *referer; // @synthesize referer=_referer;

@property(nonatomic) _Bool requireTracksBeforeCompletion; // @synthesize requireTracksBeforeCompletion=_requireTracksBeforeCompletion;

- (void)requireTracksBeforeCompletionForStationPeristentID:(long long)arg1;

- (id)responseDictionary;

- (void)startWithCompletionHandler:(id)arg1;



@end


