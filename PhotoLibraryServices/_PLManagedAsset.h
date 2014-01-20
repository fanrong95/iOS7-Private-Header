/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLManagedObject.h"


@class NSData, NSDate, NSManagedObject, NSMutableSet, NSNumber, NSObject, NSSet, NSString, PLMoment;



@interface _PLManagedAsset : PLManagedObject

{

}



+ (id)entityInManagedObjectContext:(id)arg1;

+ (id)entityName;

+ (id)insertInManagedObjectContext:(id)arg1;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

@property(readonly, nonatomic) NSMutableSet *albumsBeingKeyAssetForSet;

@property(readonly, nonatomic) NSMutableSet *albumsBeingSecondaryKeyAssetForSet;

@property(readonly, nonatomic) NSMutableSet *albumsBeingTertiaryKeyAssetForSet;

@property(readonly, nonatomic) NSMutableSet *albumsSet;

- (void)awakeFromInsert;

@property _Bool completeValue;

@property(retain, nonatomic) NSString *creatorBundleID;

@property(retain, nonatomic) NSNumber *duration;

@property double durationValue;

@property(retain, nonatomic) NSString *editorBundleID;

@property(retain, nonatomic) NSNumber *externalUsageIntent;

@property unsigned long long externalUsageIntentValue;

@property short heightValue;

@property(retain, nonatomic) NSNumber *highDynamicRangeType;

@property(retain, nonatomic) NSString *importSessionID;

@property short kindSubtypeValue;

@property short kindValue;

- (id)localizedLocation;

@property(retain, nonatomic) NSNumber *orientation; // @dynamic orientation;

@property short orientationValue;

@property(retain, nonatomic) NSString *originalAssetsUUID;

@property(retain, nonatomic) NSString *originalFilename;

@property(retain, nonatomic) NSNumber *originalFilesize;

@property int originalFilesizeValue;

@property(retain, nonatomic) NSData *originalHash;

@property(retain, nonatomic) NSNumber *originalHeight;

@property(nonatomic) short originalHeightValue;

@property(retain, nonatomic) NSNumber *originalOrientation;

@property short originalOrientationValue;

@property(retain, nonatomic) NSString *originalPath;

@property(retain, nonatomic) NSNumber *originalWidth;

@property(nonatomic) short originalWidthValue;

- (_Bool)primitiveCompleteValue;

- (double)primitiveDurationValue;

- (short)primitiveEmbeddedThumbnailHeightValue;

- (int)primitiveEmbeddedThumbnailLengthValue;

- (int)primitiveEmbeddedThumbnailOffsetValue;

- (short)primitiveEmbeddedThumbnailWidthValue;

- (short)primitiveHeightValue;

- (short)primitiveKindSubtypeValue;

- (short)primitiveKindValue;

- (short)primitiveOrientationValue;

- (int)primitiveOriginalFilesizeValue;

- (short)primitiveOriginalOrientationValue;

- (int)primitiveThumbnailIndexValue;

- (short)primitiveWidthValue;

@property(retain, nonatomic) NSString *publicGlobalUUID;

@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;

@property(nonatomic) _Bool reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;

- (void)setLocalizedLocation:(id)arg1;

- (void)setPrimitiveCompleteValue:(_Bool)arg1;

- (void)setPrimitiveDurationValue:(double)arg1;

- (void)setPrimitiveEmbeddedThumbnailHeightValue:(short)arg1;

- (void)setPrimitiveEmbeddedThumbnailLengthValue:(int)arg1;

- (void)setPrimitiveEmbeddedThumbnailOffsetValue:(int)arg1;

- (void)setPrimitiveEmbeddedThumbnailWidthValue:(short)arg1;

- (void)setPrimitiveHeightValue:(short)arg1;

- (void)setPrimitiveKindSubtypeValue:(short)arg1;

- (void)setPrimitiveKindValue:(short)arg1;

- (void)setPrimitiveOrientationValue:(short)arg1;

- (void)setPrimitiveOriginalFilesizeValue:(int)arg1;

- (void)setPrimitiveOriginalOrientationValue:(short)arg1;

- (void)setPrimitiveThumbnailIndexValue:(int)arg1;

- (void)setPrimitiveWidthValue:(short)arg1;

@property short widthValue;

@property(readonly, nonatomic) NSMutableSet *sidecarFilesSet;



// Remaining properties

@property(retain, nonatomic) NSManagedObject *additionalAttributes; // @dynamic additionalAttributes;

@property(retain, nonatomic) NSSet *albums; // @dynamic albums;

@property(retain, nonatomic) NSSet *albumsBeingKeyAssetFor; // @dynamic albumsBeingKeyAssetFor;

@property(retain, nonatomic) NSSet *albumsBeingSecondaryKeyAssetFor; // @dynamic albumsBeingSecondaryKeyAssetFor;

@property(retain, nonatomic) NSSet *albumsBeingTertiaryKeyAssetFor; // @dynamic albumsBeingTertiaryKeyAssetFor;

@property(retain, nonatomic) NSNumber *avalanchePickType; // @dynamic avalanchePickType;

@property(retain, nonatomic) NSString *avalancheUUID; // @dynamic avalancheUUID;

@property(retain, nonatomic) NSNumber *complete; // @dynamic complete;

@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;

@property(retain, nonatomic) NSString *directory; // @dynamic directory;

@property(retain, nonatomic) NSObject *faceRectangles; // @dynamic faceRectangles;

@property(retain, nonatomic) NSString *filename; // @dynamic filename;

@property(retain, nonatomic) NSNumber *height; // @dynamic height;

@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;

@property(retain, nonatomic) NSNumber *kindSubtype; // @dynamic kindSubtype;

@property(retain, nonatomic) NSData *locationData; // @dynamic locationData;

@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;

@property(retain, nonatomic) PLMoment *moment; // @dynamic moment;

@property(retain, nonatomic) NSNumber *savedAssetType; // @dynamic savedAssetType;

@property(retain, nonatomic) NSSet *sidecarFiles; // @dynamic sidecarFiles;

@property(nonatomic) double sortToken; // @dynamic sortToken;

@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;

@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@property(retain, nonatomic) NSNumber *visibilityState; // @dynamic visibilityState;

@property(retain, nonatomic) NSNumber *width; // @dynamic width;



@end


