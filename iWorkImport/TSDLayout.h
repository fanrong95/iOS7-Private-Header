/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDAbstractLayout.h"


#import "TSKSearchTarget.h"



@class NSMutableSet, NSObject<TSDInfo>, NSSet, TPInteractiveCanvasController, TSDLayoutGeometry;



__attribute__((visibility("hidden")))

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget>

{

    NSObject<TSDInfo> *mInfo;

    int mLayoutState;

    struct CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;

    struct CGPoint mBaseCapturedAlignmentFrameOriginForInline;

    struct CGRect mDirtyRect;

    struct {

        unsigned int position:1;

        unsigned int size:1;

    } mInvalidFlags;

    TSDLayoutGeometry *mBaseGeometry;

    struct CGRect mInitialBoundsForStandardKnobs;

    struct CGPoint mCapturedInfoGeometryPositionForInline;

    struct CGPoint mCapturedAlignmentFrameOriginForInline;

    NSMutableSet *mConnectedLayouts;

}



- (void)addConnectedLayout:(id)arg1;

- (id)additionalDependenciesForChildLayout:(id)arg1;

- (id)additionalGuides;

- (id)additionalLayoutsForRepCreation;

- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;

- (_Bool)allowsConnections;

- (void)beginDrag;

- (void)beginDynamicOperation;

- (void)beginResize;

- (void)beginRotate;

- (struct CGRect)boundsForStandardKnobs;

- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;

@property(readonly, nonatomic) _Bool canAspectRatioLockBeChangedByUser;

- (_Bool)canFlip;

- (struct CGPoint)capturedInfoPositionForAttachment;

- (struct CGPoint)centerForConnecting;

- (struct CGPoint)centerForRotation;

- (id)childSearchTargets;

- (id)computeInfoGeometryDuringResize;

- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;

- (id)computeLayoutGeometry;

@property(readonly, nonatomic) NSSet *connectedLayouts; // @synthesize connectedLayouts=mConnectedLayouts;

- (void)dealloc;

- (id)dependentLayouts;

- (void)dragBy:(struct CGPoint)arg1;

- (void)dragByUnscaled:(struct CGPoint)arg1;

@property(copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;

- (void)dynamicStrokeWidthChangeDidBegin;

- (void)dynamicStrokeWidthChangeDidEnd;

- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;

- (void)endDrag;

- (void)endDynamicOperation;

- (void)endResize;

- (void)endRotate;

- (void)i_accumulateLayoutsIntoSet:(id)arg1;

- (id)i_externalWrapPath;

- (void)i_setBaseCapturedAlignmentFrameOriginForInline;

- (struct CGRect)i_takeDirtyRect;

- (_Bool)i_useBaseCapturedAlignmentFrameOriginForInline;

- (id)i_wrapPath;

@property(readonly, nonatomic) NSObject<TSDInfo> *info; // @synthesize info=mInfo;

- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;

- (id)initWithInfo:(id)arg1;

- (struct CGRect)initialBoundsForStandardKnobs;

- (id)initialInfoGeometry;

- (id)inspectorGeometry;

@property(readonly, nonatomic) TPInteractiveCanvasController *interactiveCanvasController;

@property(readonly, nonatomic) _Bool invalidGeometry;

- (void)invalidate;

- (void)invalidateChildren;

- (void)invalidateExteriorWrap;

- (void)invalidateFrame;

- (void)invalidatePosition;

- (void)invalidateSize;

- (_Bool)isBeingManipulated;

- (_Bool)isBeingTransformed;

- (_Bool)isInGroup;

- (_Bool)isInTopLevelContainerForEditing;

@property(readonly, nonatomic) _Bool isStrokeBeingManipulated;

- (id)layoutController;

- (id)layoutGeometryFromInfo;

- (void)layoutSearchForAnnotationWithHitBlock:(id)arg1;

@property(readonly, nonatomic) int layoutState; // @synthesize layoutState=mLayoutState;

- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;

- (struct CGSize)maximumFrameSizeForChild:(id)arg1;

- (struct CGSize)maximumSizeForChildLayout:(id)arg1;

- (struct CGSize)minimumSize;

- (id)newCommandToMoveByOffset:(struct CGPoint)arg1 whenDistributingLayoutsByOffsets:(id)arg2;

- (_Bool)orderedBefore:(id)arg1;

@property(readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // @synthesize originalGeometry=mBaseGeometry;

- (id)originalPureGeometry;

- (struct CGAffineTransform)originalPureTransformInRoot;

- (struct CGAffineTransform)originalTransformForProvidingGuides;

- (struct CGAffineTransform)originalTransformInRoot;

- (void)p_invalidateConnectedLayouts;

- (void)p_recursiveInvalidate;

- (void)p_registerWithLayoutController:(id)arg1;

- (void)p_unregisterWithLayoutController:(id)arg1;

- (void)parentDidChange;

- (void)parentWillChangeTo:(id)arg1;

- (void)pauseDynamicTransformation;

- (void)processChangedProperty:(int)arg1;

- (void)processChanges:(id)arg1;

- (id)pureGeometry;

- (id)pureGeometryInRoot;

- (struct CGAffineTransform)pureTransformInRoot;

- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;

- (struct CGRect)rectForSelection:(id)arg1;

- (id)reliedOnLayouts;

- (void)removeConnectedLayout:(id)arg1;

- (Class)repClassOverride;

@property(readonly, nonatomic) _Bool resizeMayChangeAspectRatio;

- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(_Bool)arg2;

- (id)rootLayout;

- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withGeometry:(id)arg2;

- (id)searchTarget;

- (void)setAdjustedInterimPositionX:(double)arg1;

- (void)setAdjustedInterimPositionY:(double)arg1;

- (void)setNeedsDisplay;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;

- (void)setParent:(id)arg1;

- (_Bool)shouldBeDisplayedInShowMode;

- (_Bool)shouldDisplayGuides;

- (_Bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;

- (_Bool)shouldProvideSizingGuides;

- (_Bool)shouldValidate;

- (id)stroke;

- (void)takeRotationFromTracker:(id)arg1;

- (void)takeSizeFromTracker:(id)arg1;

- (void)unregisterFromLayoutController;

- (void)updateChildrenFromInfo;

- (void)validate;

- (void)validateFromLastInterimPosition;

- (void)willBeAddedToLayoutController:(id)arg1;

- (void)willBeRemovedFromLayoutController:(id)arg1;



@end

