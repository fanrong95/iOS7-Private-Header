/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDContainerRep.h"


@class TNPageNumberLayer;



__attribute__((visibility("hidden")))

@interface TNPageRep : TSDContainerRep

{

    TNPageNumberLayer *mPageNumberLayer;

    struct __CTLine *mPageNumberLine;

    struct __CTLine *mPageNumberLineForDevice;

    struct CGRect _shadowPathRect;

    struct CGPath *_shadowPath;

}



- (void)addAdditionalChildLayersToArray:(id)arg1;

- (void)dealloc;

- (void)didUpdateLayer:(id)arg1;

- (_Bool)directlyManagesLayerContent;

- (void)drawInContext:(struct CGContext *)arg1;

- (void)drawPageNumberInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 isDeviceSpace:(_Bool)arg3;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (_Bool)isOpaque;

- (struct __CTLine *)p_pageNumberLineForDeviceSpace:(_Bool)arg1;

@property(readonly) TNPageNumberLayer *pageNumberLayer;



@end


