/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class OADRotation3D;



__attribute__((visibility("hidden")))

@interface OADLightRig : NSObject <NSCopying>

{

    OADRotation3D *mRotation;

    int mType;

    int mDirection;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (int)direction;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (id)rotation;

- (void)setDirection:(int)arg1;

- (void)setRotation:(id)arg1;

- (void)setType:(int)arg1;

- (int)type;



@end


