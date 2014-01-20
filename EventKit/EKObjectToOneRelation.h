/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObjectRelation.h"


@class EKObject;



__attribute__((visibility("hidden")))

@interface EKObjectToOneRelation : EKObjectRelation

{

    EKObject *_relatedObject;

    _Bool _weak;

}



- (void)_addRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;

- (void)_clear;

- (void)_removeRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;

- (void)_setRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;

- (void)_unload;

- (id)committedValue;

- (void)dealloc;

- (id)description;

- (void)didCommit;

- (id)initWithObject:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 weak:(_Bool)arg4;

- (_Bool)isWeak;

- (void)refresh;

- (id)relatedObject;

- (void)reset;

- (void)rollback;

- (void)setRelatedObject:(id)arg1;

- (void)updatePersistentObject;

- (_Bool)validate:(id *)arg1;



@end

