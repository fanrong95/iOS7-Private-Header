/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPRegion.h"


#import "CPGraphicUser.h"



@class CPCharSequence, CPZoneProfile, NSArray, NSMutableArray;



@interface CPZone : CPRegion <CPGraphicUser>

{

    NSMutableArray *zoneBorders;

    struct CGPoint *outerVertices;

    struct CGPoint *swollenOuterVertices;

    double area;

    _Bool isStraddleZone;

    CPZoneProfile *zoneProfile;

    NSArray *leftGuides;

    NSArray *rightGuides;

    NSArray *gutters;

    NSArray *spacers;

    CPCharSequence *charactersInZone;

    NSMutableArray *textLinesInZone;

    NSArray *graphicsInZone;

    NSMutableArray *backgroundGraphics;

    unsigned int usedGraphicCount;

}



- (void)accept:(id)arg1;

- (void)addContentFrom:(id)arg1;

- (void)addPDFChar:(void *)arg1;

- (double)area;

- (id)backgroundGraphics;

- (long long)borderZOrder;

- (_Bool)bordersWindClockwise;

- (_Bool)canContain:(struct CGRect)arg1;

- (id)charactersInZone;

- (long long)compareArea:(id)arg1;

- (_Bool)contains:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)graphicsInZone;

- (id)gutters;

- (_Bool)hasBorders;

- (_Bool)hasNeighborShape:(id)arg1;

- (void)incrementUsedGraphicCount;

- (id)init;

- (_Bool)isRectangular;

- (_Bool)isStraddleZone;

- (_Bool)isZone;

- (id)leftGuides;

- (_Bool)mapToWordPairs:(void *)arg1 passing:(void *)arg2;

- (_Bool)mapToWordPairsWithIndex:(void *)arg1 passing:(void *)arg2;

- (_Bool)mapToWords:(void *)arg1 passing:(void *)arg2;

- (_Bool)mapToWordsWithIndex:(void *)arg1 passing:(void *)arg2;

- (long long)neighborZOrder;

- (struct CGColor *)newBackgroundColor;

- (struct CGPoint *)outerVertices;

- (_Bool)rectangleBordersAtLeft:(id *)arg1 top:(id *)arg2 right:(id *)arg3 bottom:(id *)arg4;

- (void)removeUnfilledNeighborShapes;

- (id)rightGuides;

- (void)setCharactersInZone:(id)arg1;

- (void)setGutters:(id)arg1;

- (void)setIsStraddleZone:(_Bool)arg1;

- (void)setLeftGuides:(id)arg1;

- (void)setRightGuides:(id)arg1;

- (void)setSpacers:(id)arg1;

- (void)setZoneBorders:(id)arg1;

- (void)setZoneProfile:(id)arg1;

- (id)spacers;

- (struct CGPoint *)swollenOuterVertices;

- (struct CGRect)swollenZoneBounds;

- (id)textLinesInZone;

- (unsigned int)usedGraphicCount;

- (unsigned int)vertexCount;

- (unsigned int)wordCount;

- (id)zoneBorders;

- (struct CGRect)zoneBounds;

- (id)zoneProfile;



@end


