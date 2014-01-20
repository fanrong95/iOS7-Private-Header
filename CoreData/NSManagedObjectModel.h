/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"

#import "NSFastEnumeration.h"



@class NSMutableDictionary, NSSet;



@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration>

{

    id _dataForOptimization;

    id *_optimizationHints;

    id _localizationPolicy;

    NSMutableDictionary *_entities;

    NSMutableDictionary *_configurations;

    NSMutableDictionary *_fetchRequestTemplates;

    NSSet *_versionIdentifiers;

    struct __managedObjectModelFlags {

        unsigned int _isInUse:1;

        unsigned int _isImmutable:1;

        unsigned int _isOptimizedForEncoding:1;

        unsigned int _reservedEntityDescription:29;

    } _managedObjectModelFlags;

}



+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;

+ (id)_modelPathsFromBundles:(id)arg1;

+ (id)_newModelFromOptimizedEncoding:(id)arg1 error:(id *)arg2;

+ (void)initialize;

+ (id)mergedModelFromBundles:(id)arg1;

+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;

+ (id)modelByMergingModels:(id)arg1;

+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;

- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;

- (void)_addEntity:(id)arg1;

- (void)_addVersionIdentifiers:(id)arg1;

- (id)_configurationsByName;

- (void)_createCachesAndOptimizeState;

- (id)_entitiesByVersionHash;

- (id)_entityForName:(id)arg1;

- (id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1;

- (void)_flattenProperties;

- (_Bool)_hasPrecomputedKeyOrder;

- (id)_initWithEntities:(id)arg1;

- (_Bool)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3;

- (_Bool)_isOptimizedForEncoding;

- (id)_localizationPolicy;

- (id)_modelForVersionHashes:(id)arg1;

- (id)_optimizedEncoding:(id *)arg1;

- (id)_precomputedKeysForEntity:(id)arg1;

- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;

- (void)_removeEntity:(id)arg1;

- (void)_removeEntityNamed:(id)arg1;

- (void)_restoreValidation;

- (void)_setIsEditable:(_Bool)arg1;

- (void)_setIsEditable:(_Bool)arg1 optimizationStyle:(unsigned long long)arg2;

- (void)_setLocalizationPolicy:(id)arg1;

- (id)_sortedEntitiesForConfiguration:(id)arg1;

- (void)_stripForMigration;

- (void)_throwIfNotEditable;

- (id)_versionIdentifiersAsArray;

- (id)configurations;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)entities;

- (id)entitiesByName;

- (id)entitiesForConfiguration:(id)arg1;

- (id)entityVersionHashesByName;

- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;

- (id)fetchRequestTemplateForName:(id)arg1;

- (id)fetchRequestTemplatesByName;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithContentsOfOptimizedURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;

- (_Bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;

- (_Bool)isEditable;

- (_Bool)isEqual:(id)arg1;

- (id)localizationDictionary;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (void)setEntities:(id)arg1;

- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;

- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;

- (void)setLocalizationDictionary:(id)arg1;

- (void)setVersionIdentifiers:(id)arg1;

- (id)versionHash;

- (id)versionIdentifiers;



@end


