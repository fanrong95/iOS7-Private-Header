/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLRoadNoFattenProgram.h"


__attribute__((visibility("hidden")))

@interface VGLRailRoadProgram : VGLRoadNoFattenProgram

{

    int _uTextureMappingGlobalScaler;

    float _textureMappingGlobalScaler;

    int _uRailroadPatternScaler;

    float _railroadPatternScaler;

    int _uSecondaryColor;

    struct _VGLColor _secondaryColor;

}



+ (id)fragName;

+ (id)vertName;

- (id).cxx_construct;

@property(nonatomic) float railroadPatternScaler; // @synthesize railroadPatternScaler=_railroadPatternScaler;

@property(nonatomic) struct _VGLColor secondaryColor; // @synthesize secondaryColor=_secondaryColor;

- (void)setTextureMappingGlobalScaler:(float)arg1;

- (void)setup;

- (void)updateTextureMappingGlobalScaler:(float)arg1;



@end


