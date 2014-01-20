/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSData, NSString, VKBuildingDrawStyle, VKGenericShieldDrawStyle, VKGridDrawStyle, VKLabelDrawStyle, VKLineDrawStyle, VKPGlobalProperties, VKPStyleContents, VKPinDrawStyle, VKPolygonDrawStyle, VKPuckDrawStyle, VKRoadDrawStyle, VKRouteDrawStyle, VKSkyDrawStyle, VKStylesheet, VKTrafficDrawStyle, VKVegetationDrawStyle;



__attribute__((visibility("hidden")))

@interface VKStyle : NSObject

{

    CDStruct_00eb6f1a *_attributes;

    unsigned long long _attributesCount;

    VKPStyleContents *_contents;

    unsigned int _stylesPopulated;

    VKRoadDrawStyle *_roadDrawStyle;

    VKTrafficDrawStyle *_trafficDrawStyle;

    VKLabelDrawStyle *_labelStyle;

    VKPolygonDrawStyle *_polygonStyle;

    VKLineDrawStyle *_lineStyle;

    VKBuildingDrawStyle *_buildingStyle;

    VKGenericShieldDrawStyle *_genericShieldStyle;

    VKSkyDrawStyle *_skyStyle;

    VKGridDrawStyle *_gridStyle;

    VKRouteDrawStyle *_routeStyle;

    VKVegetationDrawStyle *_vegetationStyle;

    VKPinDrawStyle *_pinStyle;

    VKPuckDrawStyle *_puckStyle;

    VKStyle *_variant;

    VKStylesheet *_stylesheet;

    unsigned long long _mapDisplayStyles;

    struct _opaque_pthread_mutex_t _lock;

    NSData *_contentsData;

    VKPGlobalProperties *_globalProperties;

    NSArray *_inheritance;

    NSString *_name;

    unsigned int *_inheritanceIndices;

    unsigned long long _inheritanceIndexCount;

}



- (id).cxx_construct;

- (void)_populateStyles:(unsigned int)arg1;

- (void)_setupPropertiesForStyleMask:(unsigned int)arg1;

- (void)applyStyle:(id)arg1 to:(id)arg2 inheritance:(id)arg3 zoom:(float)arg4;

- (CDStruct_00eb6f1a *)attributes;

- (unsigned long long)attributesCount;

- (struct _VGLColor)basicRoadColor;

@property(readonly, nonatomic) float blendingFactor;

- (id)buildingStyle;

- (void)clearInheritance;

- (id)contents;

- (id)contentsData;

- (void)dealloc;

- (id)description;

- (id)genericShieldStyle;

- (id)globals;

- (id)gridDrawStyle;

- (unsigned long long)hash;

- (id)inheritance;

- (unsigned int *)inheritanceIndices;

- (unsigned long long)inheritsCount;

- (id)initWithStyle:(id)arg1 inheritance:(id)arg2 globals:(id)arg3 stylesheet:(id)arg4;

- (_Bool)isDrawStyleVisibleAtLOD:(unsigned long long)arg1;

- (_Bool)isForMapDisplayStyle:(long long)arg1 exclusively:(_Bool)arg2;

- (id)labelStyle;

- (id)lineStyle;

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

- (id)pinStyle;

- (id)polygonStyle;

- (id)puckStyle;

- (id)roadStyle;

- (id)routeStyle;

- (unsigned long long)scoreForAttributes:(id)arg1 vectorType:(long long)arg2 mapDisplayStyle:(long long)arg3 iconTappable:(_Bool)arg4 locale:(id)arg5;

- (unsigned long long)scoreForStyleAttributes:(CDStruct_00eb6f1a *)arg1 count:(long long)arg2;

@property(nonatomic) VKStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;

@property(retain, nonatomic) VKStyle *variant; // @synthesize variant=_variant;

- (id)skyDrawStyle;

- (id)trafficStyle;

- (id)vegetationStyle;



@end


