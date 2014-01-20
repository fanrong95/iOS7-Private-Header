/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDFill.h"


@class NSNumber, TSCH3DFillSetIdentifier, TSCH3DLightingModel;



__attribute__((visibility("hidden")))

@interface TSCH3DFill : TSDFill

{

    TSCH3DLightingModel *mLightingModel;

    TSCH3DFillSetIdentifier *mIdentifier;

    NSNumber *mPercentage;

    TSDFill *mImageFill;

    struct CGSize mImageFillSize;

}



+ (id)fill;

+ (id)fillWithIdentifier:(id)arg1;

+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;

+ (id)fillWithSageFillData:(id)arg1;

+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

+ (id)lightingModelWithSageFillData:(id)arg1;

- (id).cxx_construct;

- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;

- (id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1;

- (id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

- (int)fillType;

- (unsigned long long)hash;

@property(retain, nonatomic) TSCH3DFillSetIdentifier *identifier; // @synthesize identifier=mIdentifier;

- (_Bool)identifierReferencesUnavailableLocalBundle;

- (id)init;

- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isOpaque;

- (id)lightenByPercent:(float)arg1;

@property(readonly) TSCH3DLightingModel *lightingModel;

- (void)nonatomicallySetLightingModel:(id)arg1;

- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2;

- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3;

- (id)p_iconFill;

- (id)p_imageFillForRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;

- (id)p_imageFillForSize:(struct CGSize)arg1;

- (id)p_lazyLightingModel;

- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;

- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

@property(retain, nonatomic) NSNumber *percentage; // @synthesize percentage=mPercentage;

@property(readonly, nonatomic) float percentageValue;

- (id)referenceColor;

- (id)renderingLightingModelWithLightings:(id)arg1;

- (id)sageFillData;

- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;



@end


