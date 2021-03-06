/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CLGeocoder, NSArray, NSMutableDictionary, NSSet, PLMomentNodeCache;



@interface PLMomentClustering : NSObject

{

    _Bool _dirty;

    _Bool _accumulatesSmallClusters;

    _Bool _spatialJoinsAdjacentClusters;

    id _progressBlock;

    NSArray *_clusters;

    NSSet *_insertedClusters;

    NSSet *_updatedClusters;

    NSSet *_deletedClusters;

    double _sigma;

    double _theta;

    unsigned long long _accumulationSize;

    double _accumulationTimeInterval;

    double _accumulationJoinThreshold;

    double _accumulationRejectionThreshold;

    double _accumulationRejectionTimeInterval;

    double _spatialJoinTimeInterval;

    double _spatialJoinThreshold;

    unsigned long long __minimumNumberOfNodes;

    unsigned long long __numberOfVisitedNodes;

    unsigned long long __totalNumberOfNodes;

    PLMomentNodeCache *__nodeCache;

    CLGeocoder *__geocoder;

    NSMutableDictionary *__markedNodesByObjectID;

    NSMutableDictionary *__clustersByObjectID;

    NSMutableDictionary *__clustersByNodeObjectID;

}



+ (double)maximumClusterTime;

@property(readonly, nonatomic) NSMutableDictionary *_clustersByNodeObjectID; // @synthesize _clustersByNodeObjectID=__clustersByNodeObjectID;

@property(readonly, nonatomic) NSMutableDictionary *_clustersByObjectID; // @synthesize _clustersByObjectID=__clustersByObjectID;

- (void)_commonPLMomentClusteringManagerInitialization;

@property(readonly, nonatomic) CLGeocoder *_geocoder; // @synthesize _geocoder=__geocoder;

@property(readonly, nonatomic) NSMutableDictionary *_markedNodesByObjectID; // @synthesize _markedNodesByObjectID=__markedNodesByObjectID;

@property(nonatomic, setter=_setMinimumNumberOfNodes:) unsigned long long _minimumNumberOfNodes; // @synthesize _minimumNumberOfNodes=__minimumNumberOfNodes;

@property(readonly, nonatomic) PLMomentNodeCache *_nodeCache; // @synthesize _nodeCache=__nodeCache;

@property(nonatomic, setter=_setNumberOfVisitedNodes:) unsigned long long _numberOfVisitedNodes; // @synthesize _numberOfVisitedNodes=__numberOfVisitedNodes;

- (void)_setClusters:(id)arg1;

- (void)_setDeletedClusters:(id)arg1;

@property(nonatomic, getter=isDirty, setter=_setDirty:) _Bool dirty; // @synthesize dirty=_dirty;

- (void)_setInsertedClusters:(id)arg1;

@property(nonatomic, setter=_setTotalNumberOfNodes:) unsigned long long _totalNumberOfNodes; // @synthesize _totalNumberOfNodes=__totalNumberOfNodes;

- (void)_setUpdatedClusters:(id)arg1;

- (id)accumulateSmallClustersFromClusters:(id)arg1;

@property(nonatomic) _Bool accumulatesSmallClusters; // @synthesize accumulatesSmallClusters=_accumulatesSmallClusters;

@property(nonatomic) double accumulationJoinThreshold; // @synthesize accumulationJoinThreshold=_accumulationJoinThreshold;

@property(nonatomic) double accumulationRejectionThreshold; // @synthesize accumulationRejectionThreshold=_accumulationRejectionThreshold;

@property(nonatomic) double accumulationRejectionTimeInterval; // @synthesize accumulationRejectionTimeInterval=_accumulationRejectionTimeInterval;

@property(nonatomic) unsigned long long accumulationSize; // @synthesize accumulationSize=_accumulationSize;

@property(nonatomic) double accumulationTimeInterval; // @synthesize accumulationTimeInterval=_accumulationTimeInterval;

@property(copy, nonatomic) NSArray *clusters; // @synthesize clusters=_clusters;

- (id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3;

- (void)dealloc;

@property(copy, nonatomic) NSSet *deletedClusters; // @synthesize deletedClusters=_deletedClusters;

- (id)generateClustersForAssets:(id)arg1;

- (void)generateClustersForAssets:(id)arg1 withCompletionBlock:(id)arg2;

@property(readonly, nonatomic) _Bool hasMarkedNodes;

- (id)init;

- (id)initWithManagedMoments:(id)arg1;

@property(copy, nonatomic) NSSet *insertedClusters; // @synthesize insertedClusters=_insertedClusters;

- (void)markNodeForDiagnosis:(id)arg1;

- (id)neighborsOfNode:(id)arg1;

@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;

@property(nonatomic) double sigma; // @synthesize sigma=_sigma;

@property(nonatomic) double spatialJoinThreshold; // @synthesize spatialJoinThreshold=_spatialJoinThreshold;

@property(nonatomic) double spatialJoinTimeInterval; // @synthesize spatialJoinTimeInterval=_spatialJoinTimeInterval;

@property(nonatomic) _Bool spatialJoinsAdjacentClusters; // @synthesize spatialJoinsAdjacentClusters=_spatialJoinsAdjacentClusters;

@property(nonatomic) double theta; // @synthesize theta=_theta;

- (id)spatialJoinClustersFromClusters:(id)arg1;

- (id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2;

@property(copy, nonatomic) NSSet *updatedClusters; // @synthesize updatedClusters=_updatedClusters;



@end


