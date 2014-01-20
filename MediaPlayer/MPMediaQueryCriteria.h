/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSArray, NSMutableSet, NSSet;



@interface MPMediaQueryCriteria : NSObject <NSCopying>

{

    NSMutableSet *_filterPredicates;

    unsigned long long _entityOrder;

    long long _groupingType;

    NSArray *_orderingProperties;

    NSSet *_itemPropertiesToFetch;

    NSSet *_collectionPropertiesToFetch;

    _Bool _useSections;

    _Bool _ignoreSystemFilterPredicates;

}



- (void).cxx_destruct;

- (id)ML3CollectionsQueryInLibrary:(id)arg1;

- (id)ML3ItemsQueryInLibrary:(id)arg1;

- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;

- (id)ML3OrderingPropertiesForGroupingType:(long long)arg1;

- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)arg1;

- (void)addFilterPredicate:(id)arg1;

- (void)addFilterPredicates:(id)arg1;

@property(copy, nonatomic) NSSet *collectionPropertiesToFetch; // @synthesize collectionPropertiesToFetch=_collectionPropertiesToFetch;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

@property(nonatomic) unsigned long long entityOrder; // @synthesize entityOrder=_entityOrder;

@property(readonly, nonatomic) _Bool excludesEntitiesWithBlankNames;

@property(copy, nonatomic) NSSet *filterPredicates; // @synthesize filterPredicates=_filterPredicates;

@property(nonatomic) long long groupingType; // @synthesize groupingType=_groupingType;

- (unsigned long long)hash;

@property(nonatomic) _Bool ignoreSystemFilterPredicates; // @synthesize ignoreSystemFilterPredicates=_ignoreSystemFilterPredicates;

- (id)init;

- (_Bool)isEqual:(id)arg1;

@property(copy, nonatomic) NSSet *itemPropertiesToFetch; // @synthesize itemPropertiesToFetch=_itemPropertiesToFetch;

@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;

- (id)predicateForProperty:(id)arg1;

- (void)removeFilterPredicate:(id)arg1;

- (void)removePredicatesForProperty:(id)arg1;

@property(readonly, nonatomic) _Bool specifiesPlaylistItems;



@end


