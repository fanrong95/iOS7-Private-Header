/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@interface SKPhysicsWorld : NSObject <NSCoding>

{

    double speed;

    id <SKPhysicsContactDelegate> _contactDelegate;

    struct CGVector _gravity;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)copyWithZone:(struct _NSZone *)arg1;

- (id).cxx_construct;

- (void)addBody:(id)arg1;

- (void)addJoint:(id)arg1;

- (id)bodies;

- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;

- (id)bodyAtPoint:(struct CGPoint)arg1;

- (id)bodyInRect:(struct CGRect)arg1;

@property(nonatomic) id <SKPhysicsContactDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;

- (void)encodeWithCoder:(id)arg1;

- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(id)arg3;

- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(id)arg2;

- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(id)arg2;

@property(nonatomic) struct CGVector gravity; // @synthesize gravity=_gravity;

- (_Bool)hasBodies;

- (id)initWithCoder:(id)arg1;

- (void)removeAllBodies;

- (void)removeAllJoints;

- (void)removeBody:(id)arg1;

- (void)removeJoint:(id)arg1;

@property(nonatomic) double speed; // @synthesize speed;

- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;



@end


