/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DResource, TSCH3DTextureResource;



__attribute__((visibility("hidden")))

@interface TSCH3DTexture : NSObject

{

    TSCH3DTextureResource *mTextureResource;

}



- (_Bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (id)optimizedMipmapBuffer;

- (void)resetResource;

@property(readonly, nonatomic) TSCH3DResource *resource; // @dynamic resource;



@end

