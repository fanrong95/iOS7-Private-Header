/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDRep.h"


#import "TSDMutableContainerRep.h"



@class NSMutableArray, NSObject<TSDContainerInfo>, NSObject<TSDMutableContainerInfo>;



__attribute__((visibility("hidden")))

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>

{

    NSMutableArray *mChildReps;

}



- (void)addAdditionalChildLayersToArray:(id)arg1;

- (void)addChildRep:(id)arg1;

- (_Bool)canDrawInParallel;

- (_Bool)canSelectChildRep:(id)arg1;

- (id)childReps;

- (id)childRepsForHitTesting;

@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;

- (void)dealloc;

- (void)drawInContext:(struct CGContext *)arg1;

- (id)hitRep:(struct CGPoint)arg1;

- (id)hitRep:(struct CGPoint)arg1 passingTest:(id)arg2;

- (id)hitRepChrome:(struct CGPoint)arg1;

- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(id)arg2;

- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(id)arg2;

- (id)initWithLayout:(id)arg1 canvasView:(id)arg2;

- (void)insertChildRep:(id)arg1 above:(id)arg2;

- (void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)insertChildRep:(id)arg1 below:(id)arg2;

- (_Bool)mustDrawOnMainThreadForInteractiveCanvas;

@property(readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;

- (void)recursivelyPerformSelector:(SEL)arg1;

- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;

- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;

- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;

- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;

- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;

- (void)removeChildRep:(id)arg1;

- (void)replaceChildRep:(id)arg1 with:(id)arg2;

- (void)selectChildRep:(id)arg1;

- (void)setChildReps:(id)arg1;

- (void)updateChildrenFromLayout;

- (id)visibleChildLayouts;



@end


