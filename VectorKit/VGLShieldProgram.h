/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLProgram.h"


__attribute__((visibility("hidden")))

@interface VGLShieldProgram : VGLProgram

{

    int _uTextureSampler;

    int _textureSampler;

    int _uFadeTime;

    float _fadeTime;

}



+ (id)fragName;

+ (id)vertName;

@property(nonatomic) float fadeTime;

@property(nonatomic) int textureSampler;

- (void)setup;



@end


