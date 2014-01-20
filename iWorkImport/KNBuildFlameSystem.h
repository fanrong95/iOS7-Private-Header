/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDGLParticleSystem.h"


__attribute__((visibility("hidden")))

@interface KNBuildFlameSystem : TSDGLParticleSystem

{

    struct CGSize _actualSize;

    struct CGPoint *_bottomRow;

    _Bool shouldDraw;

}



+ (_Bool)useVisibilities;

+ (_Bool)willOverrideStartingPoints;

- (void)dealloc;

- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;

- (void)p_setupParticleDataWithTexture:(id)arg1;

- (CDStruct_03942939)rotationAtIndexPoint:(struct CGPoint)arg1;

- (double)rotationMax;

- (void)setShouldDraw:(_Bool)arg1;

- (_Bool)shouldDraw;

- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;

- (double)speedMax;

- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;



@end


