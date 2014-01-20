/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPShapeRep.h"


@class CALayer, TSDFloatingCommentControlKnob, TSDFloatingCommentDeleteKnob;



__attribute__((visibility("hidden")))

@interface TSWPCommentRep : TSWPShapeRep

{

    _Bool _shouldShowNavigationKnobs;

    TSDFloatingCommentControlKnob *_previousKnob;

    TSDFloatingCommentControlKnob *_nextKnob;

    TSDFloatingCommentDeleteKnob *_deleteKnob;

    _Bool _didNavigate;

    CALayer *_headerLayer;

    CALayer *_dateLayer;

    CALayer *_authorLayer;

    _Bool _needsAuthorOrDateUpdate;

}



- (void)addKnobsToArray:(id)arg1;

- (id)additionalLayersOverLayer;

- (_Bool)canBeUsedForImageMask;

- (_Bool)canMakePathEditable;

- (void)dealloc;

- (void)didEndZooming;

- (void)didUpdateLayer:(id)arg1;

- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;

- (void)drawInContext:(struct CGContext *)arg1;

- (void)dynamicOperationDidBegin;

- (unsigned long long)enabledKnobMask;

- (_Bool)exclusivelyProvidesGuidesWhileAligning;

- (_Bool)forcesPlacementOnTop;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (void)invalidateAnnotationColor;

- (void)invalidateComments;

- (id)newSelectionKnobForType:(int)arg1 tag:(unsigned long long)arg2;

- (id)newTrackerForKnob:(id)arg1;

- (void)p_deleteComment;

- (id)p_imageForString:(id)arg1 ofSize:(struct CGSize)arg2 baselineOffsetFromBottom:(double)arg3 backgroundColor:(struct CGColor *)arg4 foregroundColor:(struct CGColor *)arg5 useSystemFontWeight:(_Bool)arg6;

- (void)p_nextAnnotation;

- (void)p_previousAnnotation;

- (_Bool)p_shouldDraw;

- (_Bool)providesGuidesWhileAligning;

- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;

- (void)screenScaleDidChange;

- (double)selectionHighlightWidth;

- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;

- (_Bool)shouldShowKnobs;

- (_Bool)shouldShowSmartShapeKnobs;

- (void)updatePositionsOfKnobs:(id)arg1;

- (void)viewScaleDidChange;

- (void)willBeginEditingContainedRep;

- (void)willEndEditingContainedRep;



@end


