/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSManagedObject.h"



@class NSArray, NSData, NSDictionary, NSString, NSURL;



@interface RadioManagedStation : NSManagedObject

{

}



+ (id)defaultPropertiesToFetch;

+ (id)unexpiredTrackDescriptorsForPlaybackByExpirationUsingBaseDictionary:(id)arg1;

+ (id)unexpiredTrackDescriptorsForPlaybackUsingOrderedTrackDescriptors:(id)arg1 trackDescriptorsByExpirationDate:(id)arg2;

@property(retain, nonatomic) NSData *adData;

@property(nonatomic) long long adamID;

@property(copy, nonatomic) NSData *additionalReferencedTrackDescriptors;

@property(copy, nonatomic) NSURL *artworkURL;

@property(copy, nonatomic) NSData *artworkURLData;

@property(copy, nonatomic) NSString *coreSeedName;

@property(nonatomic) CDStruct_a4dd8a04 currentPlayingTrackDescriptor;

@property(nonatomic) double currentPlayingTrackTime;

@property(copy, nonatomic) NSDictionary *debugDictionary;

@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

@property(nonatomic) _Bool editEnabled;

@property(retain, nonatomic) NSArray *editableFields;

- (id)feedbackDictionaryRepresentation;

@property(nonatomic) unsigned long long impressionThreshold;

@property(nonatomic, getter=isFeatured) _Bool featured;

@property(nonatomic, getter=isGatewayVideoAdEnabled) _Bool gatewayVideoAdEnabled;

@property(nonatomic, getter=isPremiumPlacement) _Bool premiumPlacement;

@property(readonly, nonatomic, getter=isPreview) _Bool preview;

@property(nonatomic, getter=isShared) _Bool shared;

@property(nonatomic, getter=isSharingEnabled) _Bool sharingEnabled;

@property(nonatomic, getter=isSponsored) _Bool sponsored;

@property(nonatomic, getter=isSubscribed) _Bool subscribed;

@property(nonatomic) _Bool likesEnabled;

@property(copy, nonatomic) NSData *orderedTrackDescriptorsForPlayback;

@property(nonatomic) long long persistentID;

@property(retain, nonatomic) NSArray *seedTracks;

@property(copy, nonatomic) NSString *shareToken;

@property(nonatomic) _Bool skipEnabled;

@property(nonatomic) int skipFrequency;

@property(copy, nonatomic) NSString *skipIdentifier;

@property(nonatomic) double skipInterval;

@property(copy, nonatomic) NSArray *skipTimestamps;

@property(nonatomic) long long songMixType;

@property(nonatomic) int sortOrder;

@property(copy, nonatomic) NSString *stationDescription;

@property(copy, nonatomic) NSString *stationHash;

@property(nonatomic) long long stationID;

- (void)setStreamCertificateURL:(id)arg1;

- (void)setStreamKeyURL:(id)arg1;

@property(retain, nonatomic) NSURL *streamURL;

@property(nonatomic) int subscriberCount;

@property(copy, nonatomic) NSDictionary *trackDescriptorsForPlaybackByExpirationDate;

@property(nonatomic) _Bool tracksForPlaybackNeedRefresh;

@property(nonatomic) _Bool virtualPlayEnabled;

- (id)streamCertificateURL;

- (id)streamKeyURL;

@property(readonly, nonatomic) NSData *trackDescriptorsForPlayback;

@property(readonly, nonatomic) NSArray *tracksForPlayback;



// Remaining properties

@property(copy, nonatomic) NSString *name; // @dynamic name;



@end

