/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSDSwatchRenderingResult : NSObject

{

    struct CGImage *foreground;

    struct CGImage *background;

}



+ (id)renderingResultWithForeground:(struct CGImage *)arg1 background:(struct CGImage *)arg2;

@property(readonly, nonatomic) struct CGImage *background; // @synthesize background;

- (void)dealloc;

@property(readonly, nonatomic) struct CGImage *foreground; // @synthesize foreground;



@end


