/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADDrawableProperties.h"


#import "OADEffectsParent.h"

#import "OADProperties3DParent.h"



@class NSArray, OADFill, OADScene3D, OADShape3D;



__attribute__((visibility("hidden")))

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>

{

    OADFill *mFill;

    NSArray *mEffects;

    OADScene3D *mScene3D;

    OADShape3D *mShape3D;

}



+ (id)defaultProperties;

- (void)dealloc;

- (id)effects;

- (id)fill;

- (_Bool)hasEffects;

- (_Bool)hasFill;

- (_Bool)hasScene3D;

- (_Bool)hasShape3D;

- (id)initWithDefaults;

- (id)scene3D;

- (void)setEffects:(id)arg1;

- (void)setFill:(id)arg1;

- (void)setScene3D:(id)arg1;

- (void)setShape3D:(id)arg1;

- (id)shape3D;



@end


