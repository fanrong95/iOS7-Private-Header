/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSSecureCoding.h"



@class CIImage, NSArray, _UIDecompressionInfo;



@interface UIImage : NSObject <NSSecureCoding, NSCoding>

{

    void *_imageRef;

    double _scale;

    struct {

        unsigned int named:1;

        unsigned int imageOrientation:3;

        unsigned int cached:1;

        unsigned int hasPattern:1;

        unsigned int isCIImage:1;

        unsigned int imageSetIdentifer:16;

        unsigned int renderingMode:2;

    } _imageFlags;

    _UIDecompressionInfo *_decompressionInfo;

    struct UIEdgeInsets _alignmentRectInsets;

}



+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;

+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;

+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;

+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id)arg2;

+ (id)_defaultBackgroundGradient;

+ (id)_deviceSpecificImageNamed:(id)arg1;

+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;

+ (struct UIEdgeInsets)_edgeInsetsForStylePresetName:(id)arg1 scale:(double)arg2;

+ (void)_flushCache:(id)arg1;

+ (void)_flushSharedImageCache;

+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;

+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(double)arg3;

+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(double *)arg2;

+ (struct CGSize)_legibilityImageSizeForSize:(struct CGSize)arg1 style:(long long)arg2;

+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;

+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;

+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets)arg6;

+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;

+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;

+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 duration:(double)arg3;

+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 resizingMode:(long long)arg3 duration:(double)arg4;

+ (id)applicationImageNamed:(id)arg1;

+ (id)imageAtPath:(id)arg1;

+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(_Bool)arg5;

+ (id)imageNamed:(id)arg1;

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;

+ (id)imageWithCGImage:(struct CGImage *)arg1;

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;

+ (id)imageWithCIImage:(id)arg1;

+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;

+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;

+ (id)imageWithContentsOfFile:(id)arg1;

+ (id)imageWithData:(id)arg1;

+ (id)imageWithData:(id)arg1 scale:(double)arg2;

+ (void)initialize;

+ (id)kitImageNamed:(id)arg1;

+ (void)setPreferredSharedImageScale:(double)arg1;

+ (_Bool)supportsSecureCoding;

@property(readonly, nonatomic) struct CGImage *CGImage;

@property(readonly, nonatomic) CIImage *CIImage;

- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2;

- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2 scale:(double)arg3;

- (id)_applyBackdropViewSettings:(id)arg1;

- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(_Bool)arg2;

- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3;

- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 allowImageResizing:(_Bool)arg4;

- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3;

- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 graphicsQuality:(long long)arg4;

- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 graphicsQuality:(long long)arg4 allowImageResizing:(_Bool)arg5;

- (id)_automationID;

- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;

- (CDStruct_afa449f9)_calculateStatistics;

- (_Bool)_canEncodeWithName:(id)arg1;

- (struct CGRect)_contentRectInPixels;

- (struct CGRect)_contentStretchInPixels;

- (void)_decompressionComplete;

- (void)_decompressionFallbackImageCreation;

- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;

- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize)arg3;

- (void)_drawImageForLegibilityStyle:(long long)arg1 size:(struct CGSize)arg2;

- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;

- (void)_encodePropertiesWithCoder:(id)arg1;

- (id)_flatImageWithColor:(id)arg1;

- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;

- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2;

- (id)_imageForLegibilityStyle:(long long)arg1;

- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;

- (long long)_imageSetIdentifier;

- (id)_imageWithBrightnessModifiedForLegibilityStyle:(long long)arg1;

- (id)_imageWithLetterpressEffectWithForegroundColor:(id)arg1;

- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(int)arg4;

- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2;

- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2 cache:(_Bool)arg3;

- (id)_initWithData:(id)arg1 scale:(double)arg2;

- (id)_initWithOtherImage:(id)arg1;

- (_Bool)_isCached;

- (_Bool)_isDecompressing;

- (_Bool)_isInvisibleAndGetIsTranslucent:(_Bool *)arg1;

- (_Bool)_isNamed;

- (_Bool)_isResizable;

- (_Bool)_isSubimage;

- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;

- (struct CGColor *)_patternColor;

- (void)_preheatBitmapData;

- (id)_resizableImageWithCapMask:(int)arg1;

- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets)arg1 resizeInsets:(struct UIEdgeInsets)arg2;

- (void)_saveDecompressedImage:(struct CGImage *)arg1;

- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;

- (id)_serializedData;

- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;

- (void)_setAlwaysStretches:(_Bool)arg1;

- (void)_setCached:(_Bool)arg1;

- (void)_setImageSetIdentifier:(long long)arg1;

- (void)_setNamed:(_Bool)arg1;

- (struct CGSize)_sizeInPixels;

- (void)_startEagerDecompression;

- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets)arg1;

- (id)_subimageInRect:(struct CGRect)arg1;

- (id)_tabBarItemImageWithTintColor:(id)arg1 selected:(_Bool)arg2 metrics:(long long)arg3 style:(long long)arg4 forScreenScale:(double)arg5;

- (struct CGColor *)_tiledPatternColor;

- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;

@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;

@property(readonly, nonatomic) struct UIEdgeInsets capInsets;

- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;

- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2;

- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2 fraction:(double)arg3;

- (void)compositeToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)draw1PartImageInRect:(struct CGRect)arg1;

- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(double)arg2;

- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(double)arg2 operation:(int)arg3;

- (void)draw3PartImageWithSliceRects:(CDStruct_24b02699)arg1 inRect:(struct CGRect)arg2;

- (void)draw3PartImageWithSliceRects:(CDStruct_24b02699)arg1 inRect:(struct CGRect)arg2 fraction:(double)arg3;

- (void)draw3PartImageWithSliceRects:(CDStruct_24b02699)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;

- (void)draw9PartImageWithSliceRects:(CDStruct_fa4dcde7)arg1 inRect:(struct CGRect)arg2;

- (void)draw9PartImageWithSliceRects:(CDStruct_fa4dcde7)arg1 inRect:(struct CGRect)arg2 fraction:(double)arg3;

- (void)draw9PartImageWithSliceRects:(CDStruct_fa4dcde7)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;

- (void)drawAsPatternInRect:(struct CGRect)arg1;

- (void)drawAtPoint:(struct CGPoint)arg1;

- (void)drawAtPoint:(struct CGPoint)arg1 blendMode:(int)arg2 alpha:(double)arg3;

- (void)drawInRect:(struct CGRect)arg1;

- (void)drawInRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3;

@property(readonly, nonatomic) double duration;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) long long imageOrientation;

- (struct CGImage *)imageRef;

- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets)arg1;

- (id)imageWithRenderingMode:(long long)arg1;

@property(readonly, nonatomic) NSArray *images;

- (id)initWithCGImage:(struct CGImage *)arg1;

- (id)initWithCGImage:(struct CGImage *)arg1 imageOrientation:(long long)arg2;

- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;

- (id)initWithCIImage:(id)arg1;

- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;

- (id)initWithCoder:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1 cache:(_Bool)arg2;

- (id)initWithData:(id)arg1;

- (id)initWithData:(id)arg1 cache:(_Bool)arg2;

- (id)initWithData:(id)arg1 scale:(double)arg2;

@property(readonly, nonatomic) long long leftCapWidth;

- (id)patternColor;

@property(readonly, nonatomic) long long renderingMode;

- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;

- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;

@property(readonly, nonatomic) long long resizingMode;

@property(readonly, nonatomic) double scale;

@property(readonly, nonatomic) struct CGSize size;

- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;

@property(readonly, nonatomic) long long topCapHeight;

- (_Bool)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;



@end


