/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPImageCacheRequest.h"


@class MPAVItem;



@interface MPAVItemImageCacheRequest : MPImageCacheRequest

{

    MPAVItem *_item;

    CDStruct_1b6d18a9 _imageTime;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) MPAVItem *AVItem; // @synthesize AVItem=_item;

- (id)copyRawImageReturningError:(id *)arg1;

@property(readonly, nonatomic) CDStruct_1b6d18a9 imageTime; // @synthesize imageTime=_imageTime;

- (id)init;

- (id)initWithAVItem:(id)arg1 imageTime:(CDStruct_1b6d18a9)arg2;



@end


