/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSUFlushableObject.h"


__attribute__((visibility("hidden")))

@interface TSUFlushableCachedImage : TSUFlushableObject

{

    struct CGImage *_image;

    id _delegate;

    SEL _delegateCreateImageSelector;

}



- (void)dealloc;

- (_Bool)hasFlushableContent;

- (id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2;

- (struct CGImage *)newImage;

- (void)unload;



@end


