/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVMetadataItem.h"


@class AVMutableMetadataItemInternal, NSDictionary, NSLocale, NSString;



@interface AVMutableMetadataItem : AVMetadataItem

{

    AVMutableMetadataItemInternal *_mutablePriv;

}



+ (id)metadataItem;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property CDStruct_1b6d18a9 duration;

@property(copy) NSDictionary *extraAttributes;

@property(copy) id <NSObject><NSCopying> key;

@property(copy) NSString *keySpace;

@property(copy) NSLocale *locale;

@property CDStruct_1b6d18a9 time;

@property(copy) id <NSObject><NSCopying> value;



@end


