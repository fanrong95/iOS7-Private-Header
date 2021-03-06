/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSStoreMapping.h"


@class NSArray, NSEntityDescription, NSKnownKeysMappingStrategy, NSMutableArray, NSMutableDictionary, NSSQLEntityKey, NSSQLModel, NSSQLOptLockKey, NSSQLPrimaryKey, NSSQLStatement, NSSQLStoreMappingGenerator, NSString;



__attribute__((visibility("hidden")))

@interface NSSQLEntity : NSStoreMapping

{

    NSSQLModel *_model;

    NSEntityDescription *_entityDescription;

    NSString *_tableName;

    NSMutableDictionary *_properties;

    NSArray *_propertyAllCache;

    NSArray *_propertiesAllToManysCache;

    NSArray *_propertyManyToManyCache;

    NSMutableArray *_columnsToFetch;

    NSMutableArray *_ekColumns;

    NSMutableArray *_fkColumns;

    NSMutableArray *_fokColumns;

    NSMutableArray *_attrColumns;

    NSMutableArray *_virtualFKs;

    NSSQLPrimaryKey *_primaryKey;

    NSSQLEntityKey *_entityKey;

    NSSQLOptLockKey *_optLockKey;

    NSMutableArray *_subentities;

    NSSQLEntity *_superentity;

    NSSQLEntity *_rootEntity;

    NSSQLStoreMappingGenerator *_mappingGenerator;

    unsigned int _entityID;

    unsigned int _subentityMaxID;

    struct _NSRange _toOneRange;

    long long _maxPK;

    NSSQLStatement *_insertStatementCache;

    NSSQLStatement *_deletionStatementCache;

    NSSQLStatement *_faultingStatementCache;

    NSMutableDictionary *_toManyRelationshipStatementCache;

    void *_fetch_entity_plan;

    NSKnownKeysMappingStrategy *_propertyMapping;

    void *_odiousHashHackStorage;

    unsigned int _pkCount;

    struct __sqlentityFlags {

        unsigned int _hasAttributesWithExternalDataReferences:1;

        unsigned int _reserved:31;

    } _sqlentityFlags;

}



- (void)_addColumnToFetch:(id)arg1;

- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;

- (void)_addRootColumnToFetch:(id)arg1;

- (void)_addSubentity:(id)arg1;

- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;

- (_Bool)_collectFKSlots:(id)arg1 error:(id *)arg2;

- (void)_doPostModelGenerationCleanup;

- (_Bool)_entityIsBroken:(id *)arg1;

- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;

- (void)_generateInverseRelationshipsAndMore;

- (void)_generateProperties;

- (void *)_odiousHashHack;

- (unsigned int)_pkCount;

- (id)_propertySearchMapping;

- (void)_resetPKCount;

- (void)_setMaxPK:(long long)arg1;

- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;

- (struct _NSRange)_toOneRange;

- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;

- (_Bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;

- (id)attributeColumns;

- (id)attributeNamed:(id)arg1;

- (id)attributes;

- (void)cacheDeletionStatement:(id)arg1;

- (void)cacheFaultingStatement:(id)arg1;

- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;

- (void)cacheInsertStatement:(id)arg1;

- (void)clearCachedStatements;

- (id)columnsToCreate;

- (id)columnsToFetch;

- (void)copyValuesForReadOnlyFetch:(id)arg1;

- (void)dealloc;

- (id)deletionStatement;

- (id)description;

- (id)entityDescription;

- (unsigned int)entityID;

- (id)externalName;

- (id)faultingStatement;

- (unsigned int)fetchIndexForKey:(id)arg1;

- (void)finalize;

- (id)foreignEntityKeyColumns;

- (id)foreignKeyColumns;

- (id)foreignOrderKeyColumns;

- (_Bool)hasAttributesWithExternalDataReferences;

- (_Bool)hasInheritance;

- (_Bool)hasSubentities;

- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;

- (id)insertStatement;

- (_Bool)isKindOfSQLEntity:(id)arg1;

- (_Bool)isRootEntity;

- (id)manyToManyRelationships;

- (id)mappingGenerator;

- (id)model;

- (id)name;

- (long long)nextPrimaryKey64;

- (id)optLockKey;

- (id)preparedFaultingCachesForRelationship:(id)arg1;

- (id)primaryKey;

- (id)properties;

- (id)propertiesByName;

- (id)propertyMapping;

- (id)propertyNamed:(id)arg1;

- (id)relationshipNamed:(id)arg1;

- (id)rootEntity;

- (void)setSubentities:(id)arg1;

- (void)setSuperentity:(id)arg1;

- (id)subentities;

- (id)subentityKey;

- (unsigned int)subentityMaxID;

- (id)superentity;

- (id)tableName;

- (id)toManyRelationships;

- (id)virtualForeignKeyColumns;



@end


