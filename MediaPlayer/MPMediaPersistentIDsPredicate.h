/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPMediaPredicate.h"


@interface MPMediaPersistentIDsPredicate : MPMediaPredicate

{

    long long *_persistentIDs;

    _Bool _shouldContain;

    unsigned long long _count;

}



+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;

- (id)ML3PredicateForContainer;

- (id)ML3PredicateForTrack;

- (id)_ML3PredicateForEntityClass:(Class)arg1;

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) const long long *persistentIDs; // @synthesize persistentIDs=_persistentIDs;

@property(readonly, nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;



@end


