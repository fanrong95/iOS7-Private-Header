/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKPOIIconGenerator : NSObject

{

}



+ (id)sharedGenerator;

- (_Bool)canHandleStyle:(CDStruct_cf20f7af *)arg1;

- (struct CGSize)imageSizeForStyle:(CDStruct_cf20f7af *)arg1 scale:(double)arg2;

- (id)keyForName:(id)arg1 style:(CDStruct_cf20f7af *)arg2;

- (id)newIconWithGlyph:(struct CGImage *)arg1 style:(CDStruct_cf20f7af *)arg2 scale:(double)arg3;



@end


