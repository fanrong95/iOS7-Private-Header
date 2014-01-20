/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, PLLoadRequestKey;



@interface PLImageCacheList : NSObject

{

    NSObject<OS_dispatch_queue> *_isolation;

    unsigned int _length;

    unsigned int _lastFailLocation;

    id *_keys;

    unsigned long long *_keyHashes;

    id *_images;

    PLLoadRequestKey *_dummy[1];

}



+ (id)newImageCacheList;

- (id)_init;

- (void)dealloc;

- (id)imageForKey:(id)arg1;

- (id)init;

- (void)removeImageForKey:(id)arg1;

- (void)setImage:(id)arg1 forKey:(id)arg2;



@end


