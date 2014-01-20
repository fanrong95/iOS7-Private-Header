/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSDStroke;



__attribute__((visibility("hidden")))

@interface TSCH3DPrefilteredLineSetting : NSObject

{

    _Bool mDisableColorOutput;

    _Bool mCullBackfaces;

    _Bool mUseNormals;

    tvec4_ac57c72d mFilterRadius;

    float mLineWidth;

    tvec4_ac57c72d mStrokeColor;

    TSDStroke *mStroke;

}



+ (id)setting;

- (id).cxx_construct;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) _Bool cullBackfaces; // @synthesize cullBackfaces=mCullBackfaces;

- (void)dealloc;

@property(nonatomic) _Bool disableColorOutput; // @synthesize disableColorOutput=mDisableColorOutput;

@property(nonatomic) tvec4_ac57c72d filterRadius; // @synthesize filterRadius=mFilterRadius;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) float lineWidth; // @synthesize lineWidth=mLineWidth;

@property(copy, nonatomic) TSDStroke *stroke; // @synthesize stroke=mStroke;

@property(nonatomic) tvec4_ac57c72d strokeColor; // @synthesize strokeColor=mStrokeColor;

@property(nonatomic) _Bool useNormals; // @synthesize useNormals=mUseNormals;



@end


