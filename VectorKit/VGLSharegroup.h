/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EAGLSharegroup, VGLResourceFactory;



__attribute__((visibility("hidden")))

@interface VGLSharegroup : NSObject

{

    EAGLSharegroup *_eaglSharegroup;

    VGLResourceFactory *_resourceFactory;

}



- (void)dealloc;

@property(retain, nonatomic) EAGLSharegroup *eaglSharegroup; // @synthesize eaglSharegroup=_eaglSharegroup;

- (id)init;

- (id)resourceFactory;



@end


