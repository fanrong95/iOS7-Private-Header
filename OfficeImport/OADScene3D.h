/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class OADBackdrop, OADCamera, OADLightRig;



__attribute__((visibility("hidden")))

@interface OADScene3D : NSObject <NSCopying>

{

    OADCamera *mCamera;

    OADLightRig *mLightRig;

    OADBackdrop *mBackdrop;

}



+ (id)nullScene3D;

- (id)backdrop;

- (id)camera;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (id)lightRig;

- (void)setBackdrop:(id)arg1;

- (void)setCamera:(id)arg1;

- (void)setLightRig:(id)arg1;



@end


