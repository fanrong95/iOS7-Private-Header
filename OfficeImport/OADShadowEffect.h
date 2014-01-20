/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADEffect.h"


@class OADColor;



__attribute__((visibility("hidden")))

@interface OADShadowEffect : OADEffect

{

    OADColor *mColor;

    float mBlurRadius;

    float mDistance;

    float mAngle;

}



- (float)angle;

- (float)blurRadius;

- (id)color;

- (void)dealloc;

- (float)distance;

- (unsigned long long)hash;

- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;

- (id)initWithType:(int)arg1;

- (_Bool)isEqual:(id)arg1;

- (void)setAngle:(float)arg1;

- (void)setBlurRadius:(float)arg1;

- (void)setColor:(id)arg1;

- (void)setDistance:(float)arg1;

- (void)setStyleColor:(id)arg1;



@end


