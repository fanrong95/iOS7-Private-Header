/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VGLResourceImpl;



__attribute__((visibility("hidden")))

@interface VGLResource : NSObject

{

    VGLResourceImpl *_impl;

}



- (int)count;

- (void)dealloc;

- (id)description;

- (id)initWithResourceImpl:(id)arg1;

- (unsigned int)token;

- (unsigned int *)tokens;



@end


