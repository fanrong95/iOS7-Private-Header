/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface TSCH3DTransform : NSObject <NSCopying>

{

    tvec3_17f03ce0 mTranslation;

    tvec3_17f03ce0 mScaleFactor;

    tquat_f3d6c8fe mRotation;

    tvec3_17f03ce0 mCenter;

    tmat4x4_3074befe mMatrix;

    _Bool mDirty;

}



+ (id)transform;

- (id).cxx_construct;

- (struct Transform)asTSCH3DCPPTransform;

@property(nonatomic) tvec3_17f03ce0 center;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)init;

@property(nonatomic) tquat_f3d6c8fe rotation;

@property(nonatomic) tvec3_17f03ce0 scaleFactor;

@property(nonatomic) tvec3_17f03ce0 translation;

- (const tmat4x4_3074befe *)transform;



@end

