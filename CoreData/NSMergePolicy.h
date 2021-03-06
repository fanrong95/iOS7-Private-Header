/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSMergePolicy : NSObject

{

    unsigned long long _type;

    void *_reserved2;

    void *_reserved3;

}



+ (_Bool)accessInstanceVariablesDirectly;

+ (void)load;

- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;

- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;

- (void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithMergeType:(unsigned long long)arg1;

- (id)initWithType:(unsigned long long)arg1;

- (void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(_Bool)arg5;

@property(readonly) unsigned long long mergeType; // @synthesize mergeType=_type;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (_Bool)resolveConflict:(id)arg1;

- (_Bool)resolveConflicts:(id)arg1 error:(id *)arg2;

- (unsigned long long)type;



@end


