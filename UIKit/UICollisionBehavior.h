/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIDynamicBehavior.h"


@class NSArray, NSMutableDictionary, PKExtendedPhysicsBody;



@interface UICollisionBehavior : UIDynamicBehavior

{

    _Bool _usesImplicitBounds;

    struct UIEdgeInsets _implicitBoundsInsets;

    PKExtendedPhysicsBody *_implicitBoundsBody;

    NSMutableDictionary *_boundaryBodies;

    NSMutableDictionary *_boundaryPaths;

    unsigned long long _collisionMode;

    id <UICollisionBehaviorDelegate> _collisionDelegate;

    unsigned int _groupVID;

    unsigned int _groupBID;

    struct {

        unsigned int delegateBeganWithItem:1;

        unsigned int delegateEndedWithItem:1;

        unsigned int delegateBeganWithBoundary:1;

        unsigned int delegateEndedWithBoundary:1;

    } _collisionBehaviorFlags;

}



- (void)_addItem:(id)arg1;

- (void)_applySettings;

- (void)_associate;

- (void)_didBeginContact:(id)arg1;

- (void)_didEndContact:(id)arg1;

- (void)_dissociate;

- (void)_reevaluate:(unsigned long long)arg1;

- (void)_removeExplicitBoundaries;

- (void)_removeImplicitBoundaries;

- (void)_setCollisions:(_Bool)arg1 forBody:(id)arg2 isEdge:(_Bool)arg3;

- (void)_setTranslatesReferenceItemBounds:(_Bool)arg1 intoBoundaryWithInsets:(struct UIEdgeInsets)arg2;

- (void)_setupExplicitBoundaries;

- (void)_setupImplicitBoundaries;

- (void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2;

- (void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;

- (void)addItem:(id)arg1;

@property(readonly, nonatomic) NSArray *boundaryIdentifiers;

- (id)boundaryWithIdentifier:(id)arg1;

@property(nonatomic) id <UICollisionBehaviorDelegate> collisionDelegate;

@property(nonatomic) unsigned long long collisionMode;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithItems:(id)arg1;

@property(readonly, nonatomic) NSArray *items;

- (void)removeAllBoundaries;

- (void)removeBoundaryWithIdentifier:(id)arg1;

- (void)removeItem:(id)arg1;

@property(nonatomic) _Bool translatesReferenceBoundsIntoBoundary;

- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets)arg1;



@end


