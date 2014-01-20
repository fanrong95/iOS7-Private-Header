/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"

#import "NSFastEnumeration.h"



@class NSData, NSManagedObjectModel, NSMutableDictionary, NSString;



@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration>

{

    int _cd_rc;

    id _snapshotClass;

    NSString *_versionHashModifier;

    NSData *_versionHash;

    NSManagedObjectModel *_model;

    NSString *_classNameForEntity;

    Class _instanceClass;

    NSString *_name;

    NSEntityDescription *_rootentity;

    NSEntityDescription *_superentity;

    NSMutableDictionary *_subentities;

    NSMutableDictionary *_properties;

    id _propertyMapping;

    struct _NSRange *_propertyRanges;

    struct __entityDescriptionFlags {

        unsigned int _isAbstract:1;

        unsigned int _shouldValidateOnSave:1;

        unsigned int _isImmutable:1;

        unsigned int _isFlattened:1;

        unsigned int _skipValidation:1;

        unsigned int _hasPropertiesIndexedBySpotlight:1;

        unsigned int _hasPropertiesStoredInTruthFile:1;

        unsigned int _rangesAreInDataBlob:1;

        unsigned int _hasAttributesWithExternalDataReferences:1;

        unsigned int _hasNonstandardPrimitiveProperties:2;

        unsigned int _reservedEntityDescription:21;

    } _entityDescriptionFlags;

    void *_extraIvars;

    NSMutableDictionary *_userInfo;

    id _flattenedSubentities;

    id **_kvcPropertyAccessors;

    long long _modelsReferenceIDForEntity;

}



+ (id)_MOClassName;

+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;

+ (void)initialize;

+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;

- (void)_addProperty:(id)arg1;

- (void)_addSubentity:(id)arg1;

- (id)_allPropertyNames;

- (id)_attributeNamed:(id)arg1;

- (struct __CFSet *)_collectSubentities;

- (id)_compoundIndexes;

- (void)_createCachesAndOptimizeState;

- (Class)_entityClass;

- (void)_flattenProperties;

- (id)_flattenedSubentities;

- (_Bool)_hasAttributesWithExternalDataReferences;

- (_Bool)_hasCustomPrimitiveProperties;

- (_Bool)_hasPotentialHashSkew;

- (_Bool)_hasPropertiesIndexedBySpotlight;

- (_Bool)_hasPropertiesStoredInTruthFile;

- (id)_initWithName:(id)arg1;

- (_Bool)_isDeallocating;

- (_Bool)_isEditable;

- (_Bool)_isFlattened;

- (_Bool)_isInheritedPropertyNamed:(id)arg1;

- (id)_keypathsForDeletions;

- (void *)_leopardStyleAttributesByName;

- (void *)_leopardStyleRelationshipsByName;

- (id)_localRelationshipNamed:(id)arg1;

- (long long)_modelsReferenceID;

- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;

- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned long long)arg1;

- (id)_newVersionHashInStyle:(unsigned long long)arg1;

- (id)_new_implicitlyObservedKeys;

- (void)_nukeMOClassName__;

- (unsigned long long)_offsetRelationshipIndex:(unsigned long long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(_Bool)arg3;

- (id)_propertiesOfType:(unsigned long long)arg1;

- (id)_propertyNamed:(id)arg1;

- (struct _NSRange *)_propertyRangesByType;

- (id)_propertySearchMapping;

- (id)_propertyWithRenamingIdentifier:(id)arg1;

- (id)_relationshipNamed:(id)arg1;

- (id)_relationshipNamesByType:(_Bool)arg1;

- (void)_removeProperty:(id)arg1;

- (void)_removePropertyNamed:(id)arg1;

- (void)_removeSubentity:(id)arg1;

- (void)_restoreValidation;

- (id)_rootEntity;

- (void)_setIsEditable:(_Bool)arg1;

- (void)_setIsFlattened:(_Bool)arg1;

- (void)_setManagedObjectModel:(id)arg1;

- (void)_setModelsReferenceID:(long long)arg1;

- (void)_setSuperentity:(id)arg1;

- (_Bool)_skipValidation;

- (Class)_snapshotClass;

- (id)_sortedSubentities;

- (void)_stripForMigration;

- (_Bool)_subentitiesIncludes:(id)arg1;

- (id)_subentityNamed:(id)arg1;

- (void)_throwIfNotEditable;

- (_Bool)_tryRetain;

- (id)_versionHashInStyle:(unsigned long long)arg1;

- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;

- (id)attributeKeys;

- (id)attributesByName;

- (id)compoundIndexes;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (id)elementID;

- (void)encodeWithCoder:(id)arg1;

- (void)finalize;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)inverseForRelationshipKey:(id)arg1;

- (_Bool)isAbstract;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isKindOfEntity:(id)arg1;

- (id)knownKeysMappingStrategy;

- (id)managedObjectClassName;

- (id)managedObjectModel;

- (id)name;

- (id)properties;

- (id)propertiesByName;

- (id)relationshipsByName;

- (id)relationshipsWithDestinationEntity:(id)arg1;

- (oneway void)release;

- (id)renamingIdentifier;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setAbstract:(_Bool)arg1;

- (void)setCompoundIndexes:(id)arg1;

- (void)setElementID:(id)arg1;

- (void)setManagedObjectClassName:(id)arg1;

- (void)setName:(id)arg1;

- (void)setProperties:(id)arg1;

- (void)setRenamingIdentifier:(id)arg1;

- (void)setSubentities:(id)arg1;

- (void)setUserInfo:(id)arg1;

- (void)setVersionHashModifier:(id)arg1;

- (id)subentities;

- (id)subentitiesByName;

- (id)superentity;

- (id)toManyRelationshipKeys;

- (id)toOneRelationshipKeys;

- (id)userInfo;

- (id)versionHash;

- (id)versionHashModifier;



@end


