/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLTextureWithAlphaProgram.h"


__attribute__((visibility("hidden")))

@interface VGLTextureWithRGBColorMasksProgram : VGLTextureWithAlphaProgram

{

    int _uRColor;

    struct _VGLColor _rColor;

    int _uGColor;

    struct _VGLColor _gColor;

    int _uBColor;

    struct _VGLColor _bColor;

}



+ (id)fragName;

- (id).cxx_construct;

@property(nonatomic) struct _VGLColor bColor; // @synthesize bColor=_bColor;

@property(nonatomic) struct _VGLColor gColor; // @synthesize gColor=_gColor;

@property(nonatomic) struct _VGLColor rColor; // @synthesize rColor=_rColor;

- (void)setup;



@end


