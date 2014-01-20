/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSCH3DPixelBuffer : NSObject

{

    tvec2_3b141483 mSize;

    unsigned long long mComponents;

    struct CGContext *mBitmapContext;

}



+ (id)pixelBufferFromGLViewport:(const box_0260e9b3 *)arg1 components:(unsigned long long)arg2 flipped:(_Bool)arg3;

+ (id)pixelBufferWithSize:(const tvec2_3b141483 *)arg1 components:(unsigned long long)arg2;

- (id).cxx_construct;

- (id)TSUImage;

@property(readonly, nonatomic) char *buffer;

@property(readonly, nonatomic) unsigned long long components; // @synthesize components=mComponents;

@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=mBitmapContext;

- (void)copyPixelsFromData:(const void *)arg1;

- (void)copyPixelsFromGLViewport:(const box_0260e9b3 *)arg1 targetRegion:(const box_0260e9b3 *)arg2 flipped:(_Bool)arg3;

- (void *)data;

- (void)dealloc;

- (void)flip;

- (id)initWithSize:(const tvec2_3b141483 *)arg1 components:(unsigned long long)arg2;

@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;



@end


