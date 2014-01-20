/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSDGLShader;



__attribute__((visibility("hidden")))

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject

{

    _Bool _didTeardown;

    struct CGSize _outgoingTextureSize;

    struct CGSize _incomingTextureSize;

    struct CGRect _outgoingTextBounds;

    struct CGRect _incomingTextBounds;

    struct CGPoint _skewAngleOffsetX;

    _Bool _didSetupSkewAngleOffsetX;

    _Bool _isTextStyleIdenticalExceptSize;

    unsigned int _outgoingTextureName;

    unsigned int _incomingTextureName;

    TSDGLShader *_shader;

}



- (void)dealloc;

@property(readonly, nonatomic) unsigned int incomingTextureName; // @synthesize incomingTextureName=_incomingTextureName;

- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2;

- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize)arg2 outgoingTextBounds:(struct CGRect)arg3 outgoingColor:(CDStruct_f2e236b6)arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize)arg6 incomingTextBounds:(struct CGRect)arg7 incomingColor:(CDStruct_f2e236b6)arg8;

@property(nonatomic) _Bool isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize;

- (struct CGContext *)newContextFromTexture:(id)arg1;

@property(readonly, nonatomic) unsigned int outgoingTextureName; // @synthesize outgoingTextureName=_outgoingTextureName;

- (struct CGRect)p_actualPixelBoundsOfTexturedRectangle:(id)arg1;

- (struct CGAffineTransform)p_affineTransformConvertingRect:(struct CGRect)arg1 intoRect:(struct CGRect)arg2 atPercent:(double)arg3;

- (struct CGAffineTransform)p_affineTransformWithSkewAngleOffsetX:(struct CGPoint)arg1 textureSize:(struct CGSize)arg2;

- (double)p_errorFromApplyingSkewAngleOffsetX:(struct CGPoint)arg1 toOutgoingScanlines:(double *)arg2 incomingScanlines:(double *)arg3 samples:(unsigned long long)arg4;

- (void)p_fillScanlineLocations:(double *)arg1 samples:(unsigned long long)arg2 fromTexture:(unsigned int)arg3 textureSize:(struct CGSize)arg4;

- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 generateTextureMatrices:(_Bool)arg3;

- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 outgoingTextureMatrix:(struct CGAffineTransform)arg3 incomingTextureMatrix:(struct CGAffineTransform)arg4;

@property(readonly, nonatomic) TSDGLShader *shader; // @synthesize shader=_shader;

- (void)teardown;

- (struct CGPoint)textureMatchingSkewAngleOffsetX;



@end


