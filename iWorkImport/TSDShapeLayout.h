/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDStyledLayout.h"


#import "TSDShapeControlLayout.h"



@class TSDBezierPath, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDMutableStroke, TSDPathSource, TSDPathSource<TSDSmartPathSource>;



__attribute__((visibility("hidden")))

@interface TSDShapeLayout : TSDStyledLayout <TSDShapeControlLayout>

{

    struct {

        unsigned int path:1;

        unsigned int pathBounds:1;

        unsigned int pathBoundsWithoutStroke:1;

        unsigned int pathIsOpen:1;

        unsigned int pathIsLineSegment:1;

        unsigned int alignmentFrame:1;

        unsigned int headAndTail:1;

        unsigned int headLineEnd:1;

        unsigned int tailLineEnd:1;

        unsigned int clippedPath:1;

    } mShapeInvalidFlags;

    TSDBezierPath *mCachedPath;

    struct CGRect mCachedPathBounds;

    struct CGRect mCachedPathBoundsWithoutStroke;

    _Bool mCachedPathIsOpen;

    _Bool mCachedPathIsLineSegment;

    struct CGRect mCachedAlignmentFrame;

    struct CGPoint mHeadPoint;

    struct CGPoint mTailPoint;

    struct CGPoint mHeadLineEndPoint;

    struct CGPoint mTailLineEndPoint;

    double mHeadLineEndAngle;

    double mTailLineEndAngle;

    long long mHeadCutSegment;

    long long mTailCutSegment;

    double mHeadCutT;

    double mTailCutT;

    TSDBezierPath *mCachedClippedPath;

    TSDPathSource *mShrunkenPathSource;

    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;

    TSDPathSource *mCachedPathSource;

    TSDPathSource *mResizePathSource;

    TSDInfoGeometry *mResizeInfoGeometry;

    TSDInfoGeometry *mInitialInfoGeometry;

    TSDMutableStroke *mDynamicStroke;

    TSDFill *mDynamicFill;

}



- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;

- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id *)arg3 adjustedPath:(id *)arg4 startDelta:(struct CGPoint *)arg5 endDelta:(struct CGPoint *)arg6;

- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;

- (struct CGRect)alignmentFrame;

- (struct CGRect)alignmentFrameInRoot;

- (void)beginDynamicOperation;

- (struct CGRect)boundsForStandardKnobs;

- (_Bool)canBeIntersected;

- (_Bool)canResetTextAndObjectHandles;

- (struct CGPoint)centerForConnecting;

- (id)clippedPathForLineEnds;

- (id)computeLayoutGeometry;

- (struct CGAffineTransform)computeLayoutTransform;

- (void)dealloc;

@property(retain, nonatomic) TSDFill *dynamicFill; // @synthesize dynamicFill=mDynamicFill;

- (void)dynamicMovePathKnobDidBegin;

- (void)dynamicMovePathKnobDidEnd;

- (void)dynamicMoveSmartShapeKnobDidBegin;

- (void)dynamicStrokeWidthChangeDidBegin;

- (void)dynamicStrokeWidthChangeDidEnd;

- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;

- (void)dynamicallyMovedPathKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;

- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;

- (void)dynamicallyMovingLineSegmentWithTracker:(id)arg1;

- (id)editablePathSource;

- (void)endDynamicOperation;

- (void)endResize;

@property(readonly, nonatomic) TSDFill *fill;

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;

- (double)headLineEndAngle;

- (struct CGPoint)headLineEndPoint;

- (struct CGPoint)headPoint;

- (id)i_computeWrapPath;

- (id)i_computeWrapPathClosed:(_Bool)arg1;

- (id)initWithInfo:(id)arg1;

- (id)initialInfoGeometry;

- (void)invalidateFrame;

- (void)invalidatePath;

- (void)invalidatePathBounds;

- (_Bool)isBeingManipulated;

- (_Bool)isInvisible;

- (_Bool)isInvisibleAutosizingShape;

- (_Bool)isStrokeBeingManipulated;

- (_Bool)isTailEndOnLeft;

- (id)layoutGeometryFromInfo;

- (id)layoutInfoGeometry;

- (double)lineEndScale;

- (struct CGSize)minimumSize;

- (unsigned long long)numberOfControlKnobs;

- (void)offsetGeometryBy:(struct CGPoint)arg1;

- (struct CGRect)p_boundsOfLineEndForHead:(_Bool)arg1 transform:(struct CGAffineTransform)arg2;

- (id)p_cachedPath;

- (struct CGRect)p_cachedPathBounds;

- (struct CGRect)p_cachedPathBoundsWithoutStroke;

- (_Bool)p_cachedPathIsLineSegment;

- (_Bool)p_cachedPathIsOpen;

- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;

- (id)p_createClippedPath;

- (void)p_invalidateClippedPath;

- (void)p_invalidateHead;

- (void)p_invalidateTail;

- (id)p_unitePath:(id)arg1 withLineEndForHead:(_Bool)arg2 stroke:(id)arg3;

- (void)p_updateResizeInfoGeometryFromResizePathSource;

- (void)p_validateHeadAndTail;

- (void)p_validateHeadLineEnd;

- (void)p_validateTailLineEnd;

- (id)path;

- (struct CGRect)pathBounds;

- (struct CGRect)pathBoundsWithoutStroke;

- (_Bool)pathIsLineSegment;

- (_Bool)pathIsOpen;

- (id)pathSource;

- (void)processChangedProperty:(int)arg1;

- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;

- (void)setGeometry:(id)arg1;

- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1;

- (id)shapeInfo;

- (_Bool)shouldBeDisplayedInShowMode;

@property(readonly, nonatomic) TSDPathSource<TSDSmartPathSource> *smartPathSource;

- (id)stroke;

- (id)strokeHeadLineEnd;

- (id)strokeTailLineEnd;

- (_Bool)supportsResize;

- (_Bool)supportsRotation;

- (double)tailLineEndAngle;

- (struct CGPoint)tailLineEndPoint;

- (struct CGPoint)tailPoint;

- (void)takeRotationFromTracker:(id)arg1;

- (void)takeSizeFromTracker:(id)arg1;

- (id)textWrapperForExteriorWrap;

- (struct CGPoint)unclippedHeadPoint;

- (struct CGPoint)unclippedTailPoint;



@end

