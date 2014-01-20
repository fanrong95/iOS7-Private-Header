/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDDecorator.h"

#import "TSDLayoutManipulatingTracker.h"

#import "TSDRepTracker.h"



@class CAShapeLayer, NSMutableSet, NSTimer, TSDAutoscroll, TSDHUDViewController, TSDRep, TSUPointerKeyDictionary;



__attribute__((visibility("hidden")))

@interface TSDRepDragTracker : NSObject <TSDLayoutManipulatingTracker, TSDDecorator, TSDRepTracker>

{

    TSDRep *mRep;

    _Bool mDidBeginDrag;

    _Bool mHaveShownHUD;

    _Bool mHaveShownSecondHUD;

    _Bool mHaveShownRuler;

    _Bool mIsInspectorDrivenTracking;

    struct CGPoint mInitialDragPoint;

    struct CGPoint mActualDragPoint;

    struct CGPoint mPreviousActualDragPoint;

    struct CGPoint mLogicalDragPoint;

    TSDHUDViewController *mSecondHUDController;

    struct CGPoint mUnscaledDragDelta;

    NSTimer *mRulerTimer;

    TSDAutoscroll *mAutoscroll;

    struct CGPoint mAutoscrollPoint;

    id <TSDRepDragTrackerDelegate> mDelegate;

    _Bool mInWillBeginDynamicOperation;

    _Bool mInDidEndDynamicOperation;

    TSUPointerKeyDictionary *mMapRepsToSnapOffsets;

    _Bool mShouldConstrain;

    double mSnapLevel;

    double mConstraintAngle;

    struct CGPoint mConstrainingPoint;

    _Bool mConstraintGuidesShowing;

    CAShapeLayer *mGuideLayer;

    _Bool mShouldShowGuides;

    _Bool mShouldSnapToGuides;

    _Bool mAlreadyInCommandGroup;

    NSMutableSet *mConnectedLineLayouts;

    _Bool mShowDragHUD;

    _Bool mShouldShowRuler;

    _Bool mTrackerDidBeginDragging;

}



- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

- (void)addUnscaledDragDelta:(struct CGPoint)arg1;

@property(nonatomic) _Bool alreadyInCommandGroup; // @synthesize alreadyInCommandGroup=mAlreadyInCommandGroup;

- (void)beginShowingDragUIForInitialDragPoint:(struct CGPoint)arg1;

- (void)changeDynamicLayoutsForReps:(id)arg1;

- (void)commitChangesForReps:(id)arg1;

- (void)dealloc;

- (id)decoratorOverlayLayers;

@property(readonly, nonatomic) _Bool didBeginDrag; // @synthesize didBeginDrag=mDidBeginDrag;

- (void)didChangeCurrentlyTransformingReps;

- (void)didEndDynamicOperationForReps:(id)arg1;

- (void)endPossibleRepDragGesture;

- (_Bool)handlesCopyingObjects;

- (id)initWithRep:(id)arg1;

@property(nonatomic) _Bool isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;

- (_Bool)operationShouldBeDynamic;

- (_Bool)p_delegateIsHandlingDrag;

- (void)p_didBeginDrag;

- (void)p_displayRulerAndRect;

- (void)p_hideGuideLayer;

- (void)p_hideHUD;

- (void)p_makeSiblingRepsOfRep:(id)arg1 performBlock:(id)arg2;

- (struct CGRect)p_selectedInfosRect;

- (void)p_showGuideLayer;

- (void)p_updateGuides;

- (void)p_updateHUDAtPoint:(struct CGPoint)arg1;

- (void)p_updateHUDFromTimer;

@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;

- (id)selectionBehaviorForReps:(id)arg1;

- (void)setActualDragPoint:(struct CGPoint)arg1;

- (void)setConstrainingPoint:(struct CGPoint)arg1;

- (void)setLogicalDragPoint:(struct CGPoint)arg1;

- (void)setShouldConstrain:(_Bool)arg1;

@property(nonatomic) _Bool shouldShowGuides; // @synthesize shouldShowGuides=mShouldShowGuides;

@property(nonatomic) _Bool shouldShowRuler; // @synthesize shouldShowRuler=mShouldShowRuler;

@property(nonatomic) _Bool shouldSnapToGuides; // @synthesize shouldSnapToGuides=mShouldSnapToGuides;

@property(nonatomic) _Bool showDragHUD; // @synthesize showDragHUD=mShowDragHUD;

- (void)setSnapLevel:(double)arg1;

- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;

- (_Bool)supportsAlignmentGuides;

- (void)willBeginDynamicOperationForReps:(id)arg1;

- (void)willEndPossibleRepDragGesture;



@end

