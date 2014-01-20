/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDStyledRep.h"


#import "TSDMagicMoveMatching.h"

#import "TSDPathEditableRep.h"

#import "TSDShapeControlRep.h"



__attribute__((visibility("hidden")))

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching, TSDShapeControlRep, TSDPathEditableRep>

{

    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;

    _Bool mFrameInUnscaledCanvasIsValid;

    _Bool mDirectlyManagesLayerContent;

    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;

    _Bool mShadowOnChildrenDisabled;

}



+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;

- (void)addSelectionKnobsToArray:(id)arg1;

- (id)additionalLayersOverLayer;

- (struct CGRect)aliasedAlignmentFrameInLayerFrame;

- (_Bool)canBeUsedForImageMask;

- (_Bool)canDrawInParallel;

- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;

- (_Bool)canMakePathEditable;

- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;

- (struct CGRect)clipRect;

- (_Bool)containsPoint:(struct CGPoint)arg1;

- (void)didUpdateLayer:(id)arg1;

- (_Bool)directlyManagesLayerContent;

- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;

- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;

- (void)drawInLayerContext:(struct CGContext *)arg1;

- (void)dynamicDragDidBegin;

- (void)dynamicDragDidEnd;

- (id)dynamicMoveLineSegmentDidBegin;

- (void)dynamicMoveLineSegmentDidEndWithTracker:(id)arg1;

- (void)dynamicMovePathKnobDidBegin;

- (void)dynamicMovePathKnobDidEndWithTracker:(id)arg1;

- (id)dynamicMoveSmartShapeKnobDidBegin;

- (void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1;

- (id)dynamicResizeDidBegin;

- (void)dynamicResizeDidEndWithTracker:(id)arg1;

- (void)dynamicallyMovedPathKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;

- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;

- (void)dynamicallyMovingLineSegmentWithTracker:(id)arg1;

- (void)dynamicallyResizingWithTracker:(id)arg1;

- (id)editablePathSource;

- (unsigned long long)enabledKnobMask;

- (void)enqueuePathSourceChanges;

- (struct CGRect)frameInUnscaledCanvas;

- (_Bool)i_editMenuOverlapsEndKnobs;

- (id)imageOfStroke:(struct CGRect *)arg1;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;

- (void)invalidateEffectLayersForChildren;

- (_Bool)isDraggable;

- (_Bool)isEditingChildRep;

- (_Bool)isEditingPath;

- (_Bool)isInvisible;

- (_Bool)isPathEditable;

- (struct CGRect)layerFrameInScaledCanvas;

- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;

- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;

- (struct CGAffineTransform)naturalToEditablePathSpaceTransform;

- (id)newTrackerForKnob:(id)arg1;

- (id)overlayLayers;

- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;

- (void)p_beginDynamicallyResizingOrMovingLineEnd;

- (_Bool)p_canApplyFillToLayer;

- (_Bool)p_canApplyStrokeToLayer;

- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1;

- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4;

- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;

- (_Bool)p_drawsSelfInOneStep;

- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;

- (void)p_endDynamicallyResizingOrMovingLineEnd;

- (id)p_pathEditor;

- (_Bool)p_pathIsAxisAlignedRect;

- (id)pathSourceForSelectionHighlightBehavior;

- (void)processChangedProperty:(int)arg1;

- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;

- (_Bool)selectionIsAppropriateToShowInvisiblePathHighlight;

@property(nonatomic) _Bool shadowOnChildrenDisabled; // @synthesize shadowOnChildrenDisabled=mShadowOnChildrenDisabled;

- (id)shapeInfo;

- (id)shapeLayout;

- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;

- (_Bool)shouldAlwaysSmoothText;

- (_Bool)shouldExpandHitRegionWhenSmall;

- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;

- (_Bool)shouldShowAdditionalKnobs;

- (_Bool)shouldShowAdvancedGradientKnobs;

- (_Bool)shouldShowInvisiblePathHighlight;

- (_Bool)shouldShowSelectionHighlight;

- (_Bool)shouldShowShadow;

- (_Bool)shouldShowSmartShapeKnobs;

- (struct CGRect)targetRectForEditMenu;

- (void)updatePositionsOfKnobs:(id)arg1;



@end


