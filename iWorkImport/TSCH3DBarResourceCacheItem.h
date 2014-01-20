/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DBarExtrusionGeometry, TSCH3DBarNormalResource, TSCH3DBarTexCoordResource, TSCH3DBarVertexResource;



__attribute__((visibility("hidden")))

@interface TSCH3DBarResourceCacheItem : NSObject

{

    TSCH3DBarExtrusionGeometry *mBarGeometry;

    TSCH3DBarVertexResource *mVertexResource;

    TSCH3DBarNormalResource *mNormalResource;

    TSCH3DBarTexCoordResource *mTexCoordResource;

}



+ (id)itemWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

- (void)dealloc;

- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

@property(readonly, nonatomic) TSCH3DBarNormalResource *normalResource; // @synthesize normalResource=mNormalResource;

@property(readonly, nonatomic) TSCH3DBarTexCoordResource *texCoordResource; // @synthesize texCoordResource=mTexCoordResource;

@property(readonly, nonatomic) TSCH3DBarVertexResource *vertexResource; // @synthesize vertexResource=mVertexResource;



@end


