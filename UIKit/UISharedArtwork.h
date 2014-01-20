/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface UISharedArtwork : NSObject

{

    NSMutableDictionary *_images;

    struct _opaque_pthread_mutex_t {

        long long __sig;

        char __opaque[56];

    } _lock;

    id *_files;

    int _preferredScale;

    int _preferredDevice;

}



- (void)cacheImage:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

- (unsigned long long)count;

- (void)dealloc;

- (void)enumerateImageInfoWithBlock:(id)arg1;

- (id)imageAtIndex:(unsigned long long)arg1;

- (id)imageNamed:(id)arg1;

- (id)imageNamed:(id)arg1 device:(int)arg2;

- (id)imageNamed:(id)arg1 idiom:(long long)arg2;

- (id)imageNamed:(id)arg1 scale:(int)arg2 device:(int)arg3;

- (id)initWithBasePath:(id)arg1;

- (id)initWithName:(id)arg1 inBundle:(id)arg2;

- (id)nameAtIndex:(unsigned long long)arg1;

@property(nonatomic) long long preferredIdiom;

@property(nonatomic) double preferredScale;



@end


