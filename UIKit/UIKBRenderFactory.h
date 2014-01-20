/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray, UIKBRenderConfig;



@interface UIKBRenderFactory : NSObject

{

    UIKBRenderConfig *_renderConfig;

    NSMutableArray *_segmentTraits;

    double _rivenSizeFactor;

    _Bool _lightweightFactory;

    double _scale;

}



+ (_Bool)_enabled;

+ (long long)_graphicsQuality;

+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderConfig:(id)arg3;

+ (Class)factoryClassForVisualStyle:(CDStruct_961fb75c)arg1;

+ (id)factoryForVisualStyle:(CDStruct_961fb75c)arg1 renderConfig:(id)arg2;

+ (id)lightweightFactoryForVisualStyle:(CDStruct_961fb75c)arg1 renderConfig:(id)arg2;

+ (id)segmentedControlColor:(_Bool)arg1;

- (double)RivenFactor:(double)arg1;

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;

- (void)addLayoutSegment:(id)arg1;

- (id)backgroundTraitsForKeyplane:(id)arg1;

- (id)controlKeyBackgroundColorName;

- (void)dealloc;

- (id)defaultKeyBackgroundColorName;

- (id)deleteKeyImageName;

- (id)dictationKeyImageName;

- (id)dismissKeyImageName;

- (id)displayContentsForKey:(id)arg1;

- (id)globalEmojiKeyImageName;

- (id)globalKeyImageName;

- (id)handwritingMoreKeyImageName;

- (id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(_Bool)arg2;

- (double)keyCornerRadius;

- (id)keyImageNameWithSkinnyVariation:(id)arg1;

- (id)lightKeycapsFontName;

- (id)lightPadKeycapsFontName;

- (id)lightTextFontName;

@property(nonatomic) _Bool lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;

- (void)lowQualityTraits:(id)arg1;

- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;

- (id)multitapCompleteKeyImageName;

- (id)muttitapReverseKeyImageName;

- (void)removeAllLayoutSegments;

@property(readonly, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;

@property(nonatomic) double rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;

@property(nonatomic) double scale; // @synthesize scale=_scale;

- (void)scaleTraits:(id)arg1;

@property(readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;

- (void)setupLayoutSegments;

- (id)shiftKeyImageName;

- (id)shiftOnKeyImageName;

- (_Bool)shouldClearBaseDisplayStringForVariants;

- (double)skinnyKeyThreshold;

- (id)thinKeycapsFontName;

- (id)thinTextFontName;

- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;

- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 controlOpacities:(_Bool)arg3;

- (double)translucentGapWidth;

- (_Bool)useBlueThemingForKey:(id)arg1;



@end

