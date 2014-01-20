/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLManagedAlbum.h"


#import "PLCloudSharedAlbumProtocol.h"



@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;



@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol>

{

    _Bool _deleteFromDBOnly;

}



+ (id)allCloudSharedAlbumsInLibrary:(id)arg1;

+ (id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2;

+ (id)entityInManagedObjectContext:(id)arg1;

+ (id)entityName;

- (id)_expectedKeyAssets;

- (id)_localizedRemoteOwnerAllowsEmail:(_Bool)arg1;

- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;

- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;

- (id)activityViewControllerPlaceholderItems:(id)arg1;

- (id)activityViewControllerSubject:(id)arg1;

- (id)albumDirectoryPath;

- (void)awakeFromInsert;

@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;

@property(readonly, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords; // @dynamic cloudAlbumSubscriberRecords;

@property(readonly, nonatomic) NSDate *cloudFirstRecentBatchDate;

- (id)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;

@property(retain, nonatomic) NSString *cloudOwnerEmail;

@property(readonly) int cloudRelationshipStateLocalValue;

@property(readonly) int cloudRelationshipStateValue;

- (void)delete;

- (void)deleteFromDatabaseOnly;

- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(_Bool *)arg3;

@property(nonatomic) _Bool hasUnseenContentBoolValue;

@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;

- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;

@property(readonly, nonatomic) NSString *localizedSharedWithLabel;

- (void)persistRecoveryMetadata;

- (void)prepareForDeletion;

- (void)publishBatchOfOriginalAssets:(id)arg1 withBatchCommentText:(id)arg2 andTrimmedVideoPathInfo:(id)arg3 isNewAlbum:(_Bool)arg4;

@property(readonly, nonatomic) id sectioningComparator;

@property unsigned long long unseenAssetsCountIntegerValue;

@property(readonly, nonatomic) id sortingComparator;

- (id)titleForSectionStartingAtIndex:(unsigned long long)arg1;

- (void)updateCloudLastContributionDateWithDate:(id)arg1;

- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;

- (void)userDeleteSubscriberRecord:(id)arg1;

- (void)willSave;



// Remaining properties

@property(readonly, nonatomic) unsigned long long approximateCount;

@property(retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;

@property(readonly, nonatomic) unsigned long long assetsCount;

@property(readonly, nonatomic) _Bool canShowAvalancheStacks;

@property(readonly, nonatomic) _Bool canShowComments;

@property(retain, nonatomic) NSDate *cloudCreationDate; // @dynamic cloudCreationDate;

@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;

@property(retain, nonatomic) NSDate *cloudLastContributionDate; // @dynamic cloudLastContributionDate;

@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate; // @dynamic cloudLastInterestingChangeDate;

@property(retain, nonatomic) NSDictionary *cloudMetadata; // @dynamic cloudMetadata;

@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled; // @dynamic cloudMultipleContributorsEnabled;

@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal; // @dynamic cloudMultipleContributorsEnabledLocal;

@property(nonatomic) _Bool cloudNotificationsEnabled; // @dynamic cloudNotificationsEnabled;

@property(retain, nonatomic) NSNumber *cloudOwnerEmailKey; // @dynamic cloudOwnerEmailKey;

@property(retain, nonatomic) NSString *cloudOwnerFirstName; // @dynamic cloudOwnerFirstName;

@property(retain, nonatomic) NSString *cloudOwnerFullName; // @dynamic cloudOwnerFullName;

@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID; // @dynamic cloudOwnerHashedPersonID;

@property(retain, nonatomic) NSString *cloudOwnerLastName; // @dynamic cloudOwnerLastName;

@property(retain, nonatomic) NSString *cloudPersonID; // @dynamic cloudPersonID;

@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled; // @dynamic cloudPublicURLEnabled;

@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal; // @dynamic cloudPublicURLEnabledLocal;

@property(retain, nonatomic) NSNumber *cloudRelationshipState; // @dynamic cloudRelationshipState;

@property(retain, nonatomic) NSNumber *cloudRelationshipStateLocal; // @dynamic cloudRelationshipStateLocal;

@property(retain, nonatomic) NSDate *cloudSubscriptionDate; // @dynamic cloudSubscriptionDate;

@property(readonly, nonatomic) NSDate *endDate;

@property(readonly, nonatomic) NSURL *groupURL;

@property(retain, nonatomic) NSNumber *hasUnseenContent; // @dynamic hasUnseenContent;

@property(retain, nonatomic) NSString *importSessionID;

@property(retain, nonatomic) NSOrderedSet *invitationRecords; // @dynamic invitationRecords;

@property(readonly, nonatomic) _Bool isCameraAlbum;

@property(readonly, nonatomic) _Bool isCloudSharedAlbum;

@property(readonly, nonatomic) _Bool isEmpty;

@property(readonly, nonatomic) _Bool isLibrary;

@property(retain, nonatomic) NSNumber *isOwned; // @dynamic isOwned;

@property(readonly, nonatomic) _Bool isPanoramasAlbum;

@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;

@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;

@property(readonly, nonatomic) _Bool isStandInAlbum;

@property(readonly, nonatomic) _Bool isWallpaperAlbum;

@property(retain, nonatomic) PLManagedAsset *keyAsset;

@property(readonly, nonatomic) NSNumber *kind;

@property(readonly, nonatomic) int kindValue;

@property(readonly, nonatomic) NSArray *localizedLocationNames;

@property(readonly, nonatomic) NSString *localizedTitle;

@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;

@property(readonly, nonatomic) NSString *name;

@property(nonatomic) int pendingItemsCount;

@property(nonatomic) int pendingItemsType;

@property(readonly, nonatomic) unsigned long long photosCount;

@property(readonly, nonatomic) UIImage *posterImage;

@property(retain, nonatomic) NSString *publicURL; // @dynamic publicURL;

@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;

@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;

@property(retain, nonatomic) NSDictionary *slideshowSettings;

@property(readonly, nonatomic) NSDate *startDate;

@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;

@property(readonly, nonatomic) NSString *title;

@property(retain, nonatomic) NSNumber *unseenAssetsCount; // @dynamic unseenAssetsCount;

@property(readonly, nonatomic) NSString *uuid;

@property(readonly, nonatomic) unsigned long long videosCount;



@end


