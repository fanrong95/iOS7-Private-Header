/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VGLTexture;



__attribute__((visibility("hidden")))

@interface VGLRoadAtlas : NSObject

{

    unsigned int _textureSize;

    unsigned int _numberOfRows;

    unsigned int _numberOfColumns;

    _Bool _quarterQuad;

    VGLTexture *_texture;

    unsigned int _atlasLevels;

    unsigned int _atlasWidth;

    unsigned int _atlasHeight;

    unsigned int _textureLevels;

    unsigned int _textureWidth;

    unsigned int _textureHeight;

    unsigned int _textureFormat;

}



+ (float)defaultFade;

+ (float)defaultInflation;

+ (float)defaultRadius;

+ (unsigned int)defaultTextureSize;

- (void)dealloc;

- (void)generateTextureAtRow:(unsigned int)arg1 column:(unsigned int)arg2 inflation:(float)arg3 fade:(float)arg4 radius:(float)arg5 context:(id)arg6;

- (void)generateTextureAtRow:(unsigned int)arg1 column:(unsigned int)arg2 withTextureData:(char *)arg3 context:(id)arg4;

- (char *)generateTextureWithInflation:(float)arg1 fade:(float)arg2 radius:(float)arg3;

- (float)inflateHalfWidth:(float)arg1 inflation:(float)arg2;

- (id)initWithSize:(unsigned int)arg1 numberOfRows:(unsigned int)arg2 numberOfColumns:(unsigned int)arg3 quarterQuad:(_Bool)arg4 context:(id)arg5;

@property(readonly, nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;

@property(readonly, nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;

@property(readonly, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;

- (void)textureMatrix3AtRow:(unsigned int)arg1 column:(unsigned int)arg2 output:(float *)arg3;

@property(readonly, nonatomic) unsigned int textureSize; // @synthesize textureSize=_textureSize;



@end


