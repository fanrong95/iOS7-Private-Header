/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TSDFrameImageCache : NSObject

{

    NSMutableArray *mEntries;

}



+ (id)sharedFrameImageCache;

- (void)dealloc;

- (id)init;

- (struct CGImage *)newCachedImageForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 forCALayer:(_Bool)arg4 mask:(_Bool)arg5;

- (void)p_didReceiveMemoryWarning:(id)arg1;

- (id)p_newEntryForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(_Bool)arg4;

- (struct CGImage *)setCachedImage:(struct CGImage *)arg1 forFrame:(id)arg2 size:(struct CGSize)arg3 viewScale:(double)arg4 forCALayer:(_Bool)arg5 mask:(_Bool)arg6;



@end


