/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PUMapAnnotationQuadtreeDataSource.h"



@class MKMapView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, PUMapAnnotationQuadtree;



@interface PUMapAnnotationManager : NSObject <PUMapAnnotationQuadtreeDataSource>

{

    NSMutableSet *_managedAnnotations;

    _Bool _showDebugOverlays;

    NSMutableArray *_debugOverlays;

    PUMapAnnotationQuadtree *_quadtree;

    unsigned int _currentTreeLevel;

    NSMutableSet *_activeAnnotations;

    NSMutableDictionary *_activeAnnotationAddresses;

    NSMutableSet *_pendingRemoves;

    NSMutableSet *_animatedRemoves;

    NSObject<OS_dispatch_queue> *_processingQueue;

    int _updateId;

    struct CGSize _currentMapSize;

    CDStruct_feeb6407 _currentCoordRegion;

    _Bool _alwaysFadeRemoves;

    id <PUMapAnnotationManagerDataSource> _dataSource;

    MKMapView *_mapView;

    struct CGSize _annotationSize;

}



+ (_Bool)coordinateRegion:(CDStruct_feeb6407)arg1 overlapsWithCoordinateRegion2:(CDStruct_feeb6407)arg2;

+ (void)mergeOverlappingAnnotations:(id)arg1 withQuadtree:(id)arg2 treeLevel:(unsigned int)arg3 coordRegion:(CDStruct_feeb6407)arg4 mapSize:(struct CGSize)arg5 annotationSize:(struct CGSize)arg6;

+ (id)newAnnotationsFromQuadtree:(id)arg1 treeLevel:(unsigned int)arg2 coordRegion:(CDStruct_feeb6407)arg3 mapSize:(struct CGSize)arg4 updateId:(int)arg5 referenceId:(int *)arg6 annotationSize:(struct CGSize)arg7;

- (void).cxx_destruct;

- (_Bool)_addMappedAnimationInfoToInfoSet:(id)arg1 forRemoveAnnotation:(id)arg2 remainingRemoveAnnotationsToAnimate:(id)arg3 remainingAddedAnnotationsToAnimate:(id)arg4 addContainsRemoveMap:(id)arg5 removeContainsAddMap:(id)arg6 activeTreeLevel:(unsigned int)arg7 addAddressesToAnnotations:(id)arg8;

- (id)_animatableMapViewAnnotations;

- (void)_executeOnProcessingQueueWithBlock:(id)arg1;

- (long long)_fadeTypeWithIsEqual:(_Bool)arg1 removeAnnotation:(id)arg2 addAnnotation:(id)arg3 isRemove:(_Bool)arg4;

- (void)_internalUpdateAnnotationsTreeLevel:(unsigned int)arg1 coordRegion:(CDStruct_feeb6407)arg2 mapSize:(struct CGSize)arg3 updateId:(int)arg4;

- (id)_puAnnotationViewForAnnotation:(id)arg1;

- (void)_removeAnnotationFromMapView:(id)arg1 wasAnimated:(_Bool)arg2;

- (void)_updateAnnotationsForMapViewAdjustTreeLevel:(_Bool)arg1 forceUpdate:(_Bool)arg2;

- (void)_updateAnnotationsFromQuadtreeWithTreeLevel:(unsigned int)arg1 coordRegion:(CDStruct_feeb6407)arg2 mapSize:(struct CGSize)arg3 updateId:(int)arg4;

- (void)_updateAnnotationsWithIncomingAnnotationToAddress:(id)arg1;

- (_Bool)_updateMapParams;

- (_Bool)_updateTreeLevelFromMap;

- (void)_updateZPositionForAnnotations:(id)arg1 withAnimationInfoSet:(id)arg2;

- (void)addAnnotation:(id)arg1;

- (void)addAnnotations:(id)arg1;

@property(nonatomic) _Bool alwaysFadeRemoves; // @synthesize alwaysFadeRemoves=_alwaysFadeRemoves;

@property(nonatomic) struct CGSize annotationSize; // @synthesize annotationSize=_annotationSize;

@property(readonly, nonatomic) NSArray *annotations;

@property(nonatomic) __weak id <PUMapAnnotationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;

- (id)init;

- (id)mapAnnotationQuadtree:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(CDStruct_c3b9c2ee)arg3;

@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;

- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;

- (void)removeAllMapAnnotations;

- (void)removeAnnotation:(id)arg1;

- (void)removeAnnotations:(id)arg1;

- (void)removeAnnotations:(id)arg1 thenAddAnnotations:(id)arg2;

- (void)updateAnnotationsForMapViewAdjustTreeLevel:(_Bool)arg1;



@end

