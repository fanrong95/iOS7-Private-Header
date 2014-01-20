/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CIBurstImageSetInternal;



@interface CIBurstImageSet : NSObject

{

    CIBurstImageSetInternal *_priv;

}



+ (id)burstImageSet;

- (void)addImage:(id)arg1 identifier:(id)arg2 completionBlock:(id)arg3;

- (void)addImageFromCGImage:(struct CGImage *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(id)arg4;

- (id)allImageIdentifiers;

- (id)bestImageIdentifiers;

- (id)burstId;

- (id)coverImageIdentifier;

- (void)dealloc;

- (unsigned long long)imageClusterCount;

- (id)imageClusterForIdentifier:(id)arg1;

- (id)imageClusterForIndex:(unsigned long long)arg1;

- (id)init;

- (double)secondsSinceStart;

- (void)setLoggingListener:(void *)arg1 withUserInfo:(void *)arg2;

- (id)statsForImageWithIdentifier:(id)arg1;



@end


