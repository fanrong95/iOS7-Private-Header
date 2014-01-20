/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartElementProperties.h"


@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;



__attribute__((visibility("hidden")))

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties

{

    TSCH3DArray2D *mLightingModels;

    TSCH3DLabelResources *mLabels;

    TSCH3DTransform *mChartTransform;

    TSCH3DTransform *mElementsTransform;

}



@property(retain, nonatomic) TSCH3DTransform *chartTransform; // @synthesize chartTransform=mChartTransform;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(retain, nonatomic) TSCH3DTransform *elementsTransform; // @synthesize elementsTransform=mElementsTransform;

@property(retain, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=mLabels;

@property(retain, nonatomic) TSCH3DArray2D *lightingModels; // @synthesize lightingModels=mLightingModels;

- (id)renderingLightingModelForSeries:(id)arg1;



@end


