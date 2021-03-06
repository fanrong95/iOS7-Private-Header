/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDGLParticleSystem.h"


__attribute__((visibility("hidden")))

@interface KNBuildVanishParticleSystem : TSDGLParticleSystem

{

    double _randomParticleSpeedMax;

    CDStruct_083b1a49 _lifeSpan;

    double _maxSpeed;

    double _maxScale;

    double _minScale;

}



@property(nonatomic) CDStruct_b2fbf00d lifeSpan; // @synthesize lifeSpan=_lifeSpan;

- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;

@property(nonatomic) double maxScale; // @synthesize maxScale=_maxScale;

@property(nonatomic) double maxSpeed; // @synthesize maxSpeed=_maxSpeed;

@property(nonatomic) double minScale; // @synthesize minScale=_minScale;

@property(nonatomic) double randomParticleSpeedMax; // @synthesize randomParticleSpeedMax=_randomParticleSpeedMax;

- (double)scaleAtIndexPoint:(struct CGPoint)arg1;

- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;

- (double)speedMax;



@end


