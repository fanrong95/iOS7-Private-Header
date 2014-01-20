/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface NSBezierPathStub : NSObject <NSCopying>

{

    long long _segmentCount;

    long long _segmentMax;

    struct PATHSEGMENT {

        unsigned char;

        struct CGPoint;

    } *_head;

    long long _lastSubpathIndex;

    long long _elementCount;

    double _lineWidth;

    struct CGRect _controlPointBounds;

    double _miterLimit;

    double _flatness;

    double *_dashedLinePattern;

    unsigned long long _dashedLineCount;

    double _dashedLinePhase;

    void *_path;

    id _private[4];

    struct {

        unsigned int _flags:8;

        unsigned int _pathState:2;

        unsigned int _unused:22;

    } _bpFlags;

}



+ (id)bezierPath;

+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;

+ (id)bezierPathWithRect:(struct CGRect)arg1;

+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3;

+ (void)clipRect:(struct CGRect)arg1;

+ (struct CGContext *)currentCGContext;

+ (double)defaultFlatness;

+ (unsigned long long)defaultLineCapStyle;

+ (unsigned long long)defaultLineJoinStyle;

+ (double)defaultLineWidth;

+ (double)defaultMiterLimit;

+ (unsigned long long)defaultWindingRule;

+ (void)drawPackedGlyphs:(const char *)arg1 atPoint:(struct CGPoint)arg2;

+ (void)drawString:(id)arg1 atPoint:(struct CGPoint)arg2 withFontName:(id)arg3 andHeight:(float)arg4 color:(id)arg5 alignToTop:(_Bool)arg6 currentTransformStruct:(CDStruct_8727d297)arg7;

+ (void)fillRect:(struct CGRect)arg1;

+ (double)flatness;

+ (void)initialize;

+ (unsigned long long)lineCapStyle;

+ (unsigned long long)lineJoinStyle;

+ (double)lineWidth;

+ (double)miterLimit;

+ (void)setCurrentCGContext:(struct CGContext *)arg1;

+ (void)setDefaultFlatness:(double)arg1;

+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;

+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;

+ (void)setDefaultLineWidth:(double)arg1;

+ (void)setDefaultMiterLimit:(double)arg1;

+ (void)setDefaultWindingRule:(unsigned long long)arg1;

+ (void)setFlatness:(double)arg1;

+ (void)setLineCapStyle:(unsigned long long)arg1;

+ (void)setLineJoinStyle:(unsigned long long)arg1;

+ (void)setLineWidth:(double)arg1;

+ (void)setMiterLimit:(double)arg1;

+ (void)setWindingRule:(unsigned long long)arg1;

+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;

+ (void)strokeRect:(struct CGRect)arg1;

+ (unsigned long long)windingRule;

- (id).cxx_construct;

- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;

- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;

- (id)_copyFlattenedPath;

- (void)_deviceClosePath;

- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

- (void)_deviceLineToPoint:(struct CGPoint)arg1;

- (void)_deviceMoveToPoint:(struct CGPoint)arg1;

- (void)_doPath;

- (void)_doUserPathWithOp:(unsigned char)arg1 inContext:(struct CGContext *)arg2;

- (int)_locationOfPoint:(struct CGPoint)arg1;

- (long long)_segmentIndexForElementIndex:(long long)arg1;

- (void)addClip;

- (void)appendBezierPath:(id)arg1;

- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;

- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;

- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;

- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;

- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;

- (void)appendBezierPathWithRect:(struct CGRect)arg1;

- (void)appendBezierPathWithRoundedRect:(struct CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3;

- (id)bezierPathByFlatteningPath;

- (id)bezierPathByReversingPath;

- (struct CGRect)bounds;

- (_Bool)cachesBezierPath;

- (void)closePath;

- (_Bool)containsPoint:(struct CGPoint)arg1;

- (struct CGRect)controlPointBounds;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (struct CGPoint)currentPoint;

- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

- (void)dealloc;

- (id)description;

- (unsigned long long)elementAtIndex:(long long)arg1;

- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;

- (long long)elementCount;

- (void)fill;

- (void)finalize;

- (double)flatness;

- (void)flattenIntoPath:(id)arg1;

- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;

- (id)init;

- (_Bool)isEmpty;

- (_Bool)isHitByPath:(id)arg1;

- (_Bool)isHitByPoint:(struct CGPoint)arg1;

- (_Bool)isHitByRect:(struct CGRect)arg1;

- (_Bool)isStrokeHitByPath:(id)arg1;

- (_Bool)isStrokeHitByPoint:(struct CGPoint)arg1;

- (_Bool)isStrokeHitByRect:(struct CGRect)arg1;

- (unsigned long long)lineCapStyle;

- (unsigned long long)lineJoinStyle;

- (void)lineToPoint:(struct CGPoint)arg1;

- (double)lineWidth;

- (double)miterLimit;

- (void)moveToPoint:(struct CGPoint)arg1;

- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

- (void)relativeLineToPoint:(struct CGPoint)arg1;

- (void)relativeMoveToPoint:(struct CGPoint)arg1;

- (void)removeAllPoints;

- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;

- (void)setCachesBezierPath:(_Bool)arg1;

- (void)setClip;

- (void)setFlatness:(double)arg1;

- (void)setLineCapStyle:(unsigned long long)arg1;

- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;

- (void)setLineJoinStyle:(unsigned long long)arg1;

- (void)setLineWidth:(double)arg1;

- (void)setMiterLimit:(double)arg1;

- (void)setWindingRule:(unsigned long long)arg1;

- (void)stroke;

- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;

- (void)transformUsingAffineTransform:(id)arg1;

- (unsigned long long)windingRule;



@end


