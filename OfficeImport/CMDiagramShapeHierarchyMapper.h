/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMDiagramShapeMapper.h"


@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper

{

    NSMutableDictionary *mNodeInfoMap;

    _Bool mIsLayered;

}



- (struct CGRect)boundsForNode:(id)arg1;

- (void)copyInfoForNode:(id)arg1 depth:(int)arg2;

- (void)dealloc;

- (id)infoForNode:(id)arg1;

- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;

- (void)mapAt:(id)arg1 withState:(id)arg2;

- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;

- (void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;

- (struct CGRect)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector *)arg1;

- (void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;

- (struct ODIHRangeVector *)mapRangesForNode:(id)arg1;

- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(int)arg4;

- (void)setUpLayers;

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;



@end


