/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLProgram.h"


__attribute__((visibility("hidden")))

@interface VGLSkyProgram : VGLProgram

{

    int _uHorizon;

    struct _VGLColor _horizon;

    int _uColor;

    struct _VGLColor _color;

    int _uSkyStartOffset;

    float _skyStartOffset;

    float _screenHeight;

    int _uScreenHeight;

    struct _VGLColor _horizonColor;

    struct _VGLColor _baseColor;

}



+ (id)fragName;

+ (id)vertName;

- (id).cxx_construct;

@property(nonatomic) struct _VGLColor color; // @synthesize color=_baseColor;

@property(nonatomic) struct _VGLColor horizon; // @synthesize horizon=_horizonColor;

@property(nonatomic) float screenHeight; // @synthesize screenHeight=_screenHeight;

@property(nonatomic) float skyStartOffset; // @synthesize skyStartOffset=_skyStartOffset;

- (void)setup;



@end

