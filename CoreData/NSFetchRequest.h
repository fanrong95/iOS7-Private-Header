/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPersistentStoreRequest.h"


#import "NSCoding.h"



@class NSArray, NSEntityDescription, NSPredicate;



@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding>

{

    NSArray *_groupByProperties;

    NSPredicate *_havingPredicate;

    unsigned long long _offset;

    NSArray *_valuesToFetch;

    NSEntityDescription *_entity;

    NSPredicate *_predicate;

    NSArray *_sortDescriptors;

    unsigned long long _batchSize;

    unsigned long long _fetchLimit;

    NSArray *_relationshipKeyPathsForPrefetching;

    struct _fetchRequestFlags {

        unsigned int distinctValuesOnly:1;

        unsigned int includesSubentities:1;

        unsigned int includesPropertyValues:1;

        unsigned int resultType:3;

        unsigned int returnsObjectsAsFaults:1;

        unsigned int excludePendingChanges:1;

        unsigned int isInUse:1;

        unsigned int entityIsName:1;

        unsigned int refreshesRefetched:1;

        unsigned int propertiesValidated:1;

        unsigned int disableCaching:1;

        unsigned int _RESERVED:19;

    } _flags;

}



+ (_Bool)accessInstanceVariablesDirectly;

+ (id)fetchRequestWithEntityName:(id)arg1;

+ (void)initialize;

- (_Bool)_disablePersistentStoreResultCaching;

- (void)_incrementInUseCounter;

- (_Bool)_isEditable;

- (id)_newValidatedProperties:(id)arg1 groupBy:(_Bool)arg2 error:(id *)arg3;

- (void)_resolveEntityWithContext:(id)arg1;

- (void)_setDisablePersistentStoreResultCaching:(_Bool)arg1;

- (void)_throwIfNotEditable;

- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;

- (id)affectedStores;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)entity;

- (id)entityName;

- (unsigned long long)fetchBatchSize;

- (unsigned long long)fetchLimit;

- (unsigned long long)fetchOffset;

- (id)groupByProperties;

- (_Bool)hasChanges;

- (unsigned long long)hash;

- (id)havingPredicate;

- (_Bool)includesPendingChanges;

- (_Bool)includesPropertyValues;

- (_Bool)includesSubentities;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithEntityName:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)predicate;

- (id)propertiesToFetch;

- (id)propertiesToGroupBy;

- (id)relationshipKeyPathsForPrefetching;

- (unsigned long long)requestType;

- (unsigned long long)resultType;

- (_Bool)returnsDistinctResults;

- (_Bool)returnsObjectsAsFaults;

- (void)setAffectedStores:(id)arg1;

- (void)setEntity:(id)arg1;

- (void)setFetchBatchSize:(unsigned long long)arg1;

- (void)setFetchLimit:(unsigned long long)arg1;

- (void)setFetchOffset:(unsigned long long)arg1;

- (void)setGroupByProperties:(id)arg1;

- (void)setHavingPredicate:(id)arg1;

- (void)setIncludesPendingChanges:(_Bool)arg1;

- (void)setIncludesPropertyValues:(_Bool)arg1;

- (void)setIncludesSubentities:(_Bool)arg1;

- (void)setPredicate:(id)arg1;

- (void)setPropertiesToFetch:(id)arg1;

- (void)setPropertiesToGroupBy:(id)arg1;

- (void)setRelationshipKeyPathsForPrefetching:(id)arg1;

- (void)setResultType:(unsigned long long)arg1;

- (void)setReturnsDistinctResults:(_Bool)arg1;

- (void)setReturnsObjectsAsFaults:(_Bool)arg1;

- (void)setShouldRefreshRefetchedObjects:(_Bool)arg1;

- (void)setSortDescriptors:(id)arg1;

- (_Bool)shouldRefreshRefetchedObjects;

- (id)sortDescriptors;

- (id)stores;



@end


