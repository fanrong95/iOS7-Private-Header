/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLSimpleRoadProgram.h"


__attribute__((visibility("hidden")))

@interface VGLStrokePolygonProgram : VGLSimpleRoadProgram

{

    int _uScale;

    float _scale;

    int _uStrokeColor;

    struct _VGLColor _strokeColor;

    int _uTexturePolygonSampler;

    int _texturePolygonSampler;

    int _uIsPolygonSolidColor;

    int _isPolygonSolidColor;

    int _uIsToBeStroked;

    int _isToBeStroked;

    int _uPolygonColor;

    struct _VGLColor _polygonColor;

}



+ (id)fragName;

+ (id)vertName;

- (id).cxx_construct;

@property(nonatomic) int isPolygonSolidColor; // @synthesize isPolygonSolidColor=_isPolygonSolidColor;

@property(nonatomic) int isToBeStroked; // @synthesize isToBeStroked=_isToBeStroked;

@property(nonatomic) struct _VGLColor polygonColor; // @synthesize polygonColor=_polygonColor;

@property(nonatomic) float scale; // @synthesize scale=_scale;

@property(nonatomic) struct _VGLColor strokeColor; // @synthesize strokeColor=_strokeColor;

@property(nonatomic) int texturePolygonSampler;

- (void)setup;



@end


