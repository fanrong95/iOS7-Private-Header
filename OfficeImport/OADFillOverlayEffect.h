/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADEffect.h"


@class OADFill;



__attribute__((visibility("hidden")))

@interface OADFillOverlayEffect : OADEffect

{

    int mBlendMode;

    OADFill *mFill;

}



- (int)blendMode;

- (void)dealloc;

- (id)fill;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (void)setBlendMode:(int)arg1;

- (void)setFill:(id)arg1;



@end


