/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CMShapeRenderer : NSObject

{

}



+ (struct CGColor *)_copyCGColorFromOADColor:(id)arg1 andState:(id)arg2;

+ (struct CGColor *)_copyCGColorFromOADFill:(id)arg1 andState:(id)arg2;

+ (struct CGImage *)_copyImageFromOADImagefill:(id)arg1 withContext:(id)arg2;

+ (void)_renderCGPath:(struct CGPath *)arg1 stroke:(id)arg2 fill:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;

+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 dash:(id)arg2 state:(id)arg3;

+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4;

+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 stroke:(id)arg2 state:(id)arg3;

+ (void)renderCanonicalShape:(int)arg1 fill:(id)arg2 stroke:(id)arg3 adjustValues:(id)arg4 orientedBounds:(id)arg5 state:(id)arg6 drawingContext:(id)arg7;

+ (void)renderDiagramPath:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4 drawingContext:(id)arg5;

+ (void)renderFreeForm:(id)arg1 fill:(id)arg2 stroke:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;

+ (void)renderLine:(int)arg1 stroke:(id)arg2 adjustValues:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;



@end


