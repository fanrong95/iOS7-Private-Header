/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLMesh.h"


@class VGLTexture;



__attribute__((visibility("hidden")))

@interface VGLSingleTexturedAndLitMesh : VGLMesh

{

    VGLTexture *_texture;

}



- (void)dealloc;

- (void)drawTrianglesWithContext:(id)arg1;

- (id)init;

- (id)initFromAsciiVertexFile:(id)arg1 indexFile:(id)arg2;

- (id)initWithVertices:(const CDStruct_2066d242 *)arg1 vertexCount:(int)arg2 indices:(const unsigned short *)arg3 indexCount:(int)arg4;

@property(retain, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;



@end


