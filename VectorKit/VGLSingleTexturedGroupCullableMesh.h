/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLGroupCullableMesh.h"


@class VGLTexture;



__attribute__((visibility("hidden")))

@interface VGLSingleTexturedGroupCullableMesh : VGLGroupCullableMesh

{

    VGLTexture *_texture;

}



- (void)dealloc;

- (void)drawGroups:(const vector_a3ee659f *)arg1 context:(id)arg2;

- (void)drawInPreparedCulls:(id)arg1;

- (void)drawInPreparedCulls:(id)arg1 excludeGroups:(const vector_a3ee659f *)arg2;

- (void)drawInRects:(const CDStruct_818bb265 *)arg1 rectCount:(unsigned long long)arg2 context:(id)arg3;

- (void)drawInRects:(const CDStruct_818bb265 *)arg1 rectCount:(unsigned long long)arg2 excludeGroups:(const vector_a3ee659f *)arg3 context:(id)arg4;

@property(retain, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;



@end


